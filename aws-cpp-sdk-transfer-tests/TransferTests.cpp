/*
  * Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#include <aws/external/gtest.h>
#include <aws/testing/ProxyConfig.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/DeleteObjectsRequest.h>
#include <aws/s3/model/AbortMultipartUploadRequest.h>
#include <aws/s3/model/ListObjectsRequest.h>
#include <aws/s3/model/ListMultipartUploadsRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/ListObjectsV2Request.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/ratelimiter/DefaultRateLimiter.h>
#include <aws/s3/model/HeadBucketRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/PutBucketVersioningRequest.h>
#include <aws/s3/model/ListObjectVersionsRequest.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/platform/Platform.h>
#include <aws/testing/TestingEnvironment.h>

#include <aws/transfer/TransferManager.h>
#include <iostream>
#include <fstream>
#include <time.h>

#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::S3;
using namespace Aws::S3::Model;
using namespace Aws::Transfer;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Utils;

static const char* MULTI_PART_CONTENT_KEY = "MultiContentKey";
static const char* MULTI_PART_CONTENT_TEXT = "This is a test..##";

static const char* CONTENT_TEST_FILE_TEXT = "This is a test..";
static const char* CONTENT_TEST_FILE_NAME = "ContentTransferTestFile.txt";
static const char* CONTENT_FILE_KEY = "ContentFileKey";

static const char* BIG_FILE_KEY = "BigFileKey";

#ifdef _MSC_VER
static const wchar_t* UNICODE_TEST_FILE_NAME = L"测试文件.txt";
static const char* UNICODE_FILE_KEY = "UnicodeFileKey";
#endif

static const char* CANCEL_FILE_KEY = "CancelFileKey";

static const char* TEST_BUCKET_NAME_BASE = "transfertests";
static const unsigned SMALL_TEST_SIZE = MB5 / 2;
static const unsigned MEDIUM_TEST_SIZE = MB5 * 3 / 2;

static const unsigned CANCEL_TEST_SIZE = MB5 * 30;

static const unsigned PARTS_IN_MEDIUM_TEST = 2;

static const unsigned PARTS_IN_BIG_TEST = 15;
static const unsigned BIG_TEST_SIZE = MB5 * PARTS_IN_BIG_TEST;
static const char* testString = "S3 MultiPart upload Test File ";
static const uint32_t testStrLen = static_cast<uint32_t>(strlen(testString));
static const std::chrono::seconds TEST_WAIT_TIMEOUT = std::chrono::seconds(10);
static const unsigned WAIT_MAX_RETRIES = 10;

namespace {
static const char *ALLOCATION_TAG = "TransferTests";

// On constrained platforms like mobile devices, creating all the test files up front in SetUpTestCase is
// problematic because it will dump 100s of megabytes of files into the app cache, which can easily lead
// to the OS deciding to clear the app cache while tests are running.
// So we change our strategy a little and only create/delete the needed file on a per-test basis so that the
// maximum storage pressure is only the maximum size of our test files rather than the sum.
// We continue to also delete all possible files in the TearDown so as not to leak files when a test fails and early
// outs.
class ScopedTestFile
{
    public:

        ScopedTestFile(const Aws::String& fileName, const Aws::String& putString) :
            m_fileName(fileName)
        {
            Aws::OFStream testFile;
#ifdef _MSC_VER
            testFile.open(Aws::Utils::StringUtils::ToWString(fileName.c_str()).c_str());
#else
            testFile.open(fileName.c_str());
#endif
            testFile << putString;

            testFile.close();
        }

        ScopedTestFile(const Aws::String& fileName, unsigned fileSize, const Aws::String& putString) :
            m_fileName(fileName)
        {
            Aws::OFStream testFile;
#ifdef _MSC_VER
            testFile.open(Aws::Utils::StringUtils::ToWString(fileName.c_str()).c_str());
#else
            testFile.open(fileName.c_str());
#endif
            assert(testFile.good());

            auto putStringLength = putString.length();
            for (size_t i = putStringLength; i <= fileSize; i += putStringLength)
            {
                testFile << putString;
            }
            testFile.close();
        }

        ~ScopedTestFile()
        {
            Aws::FileSystem::RemoveFileIfExists(m_fileName.c_str());
        }

    private:
        Aws::String m_fileName;
};

class MockS3Client : public S3Client
{
public:
    MockS3Client(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration()):
        S3Client(clientConfiguration), executor(clientConfiguration.executor), listObjectsV2RequestCount(0) 
    {}

    ~MockS3Client() 
    {
        executor = nullptr;
    }

    // Override this function to do verification.
    void ListObjectsV2Async(const Model::ListObjectsV2Request& request, const ListObjectsV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const override
    {
        EXPECT_STREQ("", request.GetDelimiter().c_str());
        EXPECT_STREQ("nestedTest", request.GetPrefix().c_str());
        executor->Submit( [this, request, handler, context](){ this->ListObjectsV2AsyncHelper( request, handler, context ); } );
    }

    // This function is private in base class (S3Client), but will be called by ListObjectsV2Async.
    void ListObjectsV2AsyncHelper(const ListObjectsV2Request& request, const ListObjectsV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
    {
        listObjectsV2RequestCount++;
        handler(this, request, ListObjectsV2(request), context);
    }

    // m_executor in Base class is private, we need our own one.
    std::shared_ptr<Aws::Utils::Threading::Executor> executor;

    // Declared as mutable in order to get updated in constness function.
    mutable std::atomic<unsigned int> listObjectsV2RequestCount;
};

class TransferTests : public ::testing::Test
{
public:

    static std::shared_ptr<MockS3Client> m_s3Client;
    void SetUp()
    {
        m_executor = Aws::MakeShared<Aws::Utils::Threading::PooledThreadExecutor>(ALLOCATION_TAG, 4);
    }

    void TearDown()
    {
        m_executor = nullptr;
    }

protected:
    // Executor used by transferManager
    std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;

    static Aws::String GetTestBucketName()
    {
        static const std::string suffix = Aws::String(Aws::Utils::UUID::RandomUUID()).c_str();
        Aws::StringStream s;
        s << Aws::Testing::GetAwsResourcePrefix() << TEST_BUCKET_NAME_BASE << suffix;
        return Aws::Utils::StringUtils::ToLower(s.str().c_str());
    }

    static bool AreFilesSame(const Aws::String& fileName, const Aws::String& fileName2)
    {
#ifdef _MSC_VER
        Aws::FStream inFile1(Aws::Utils::StringUtils::ToWString(fileName.c_str()).c_str(), std::ios::binary | std::ios::in);
        Aws::FStream inFile2(Aws::Utils::StringUtils::ToWString(fileName2.c_str()).c_str(), std::ios::binary | std::ios::in);
#else
        Aws::FStream inFile1(fileName.c_str(), std::ios::binary | std::ios::in);
        Aws::FStream inFile2(fileName2.c_str(), std::ios::binary | std::ios::in);        
#endif

        if (!inFile1.good() || !inFile2.good())
        {
            return false;
        }
        
        return HashingUtils::CalculateSHA256(inFile1) == HashingUtils::CalculateSHA256(inFile2);
    }

    static Aws::String GetTestFilesDirectory()
    {
        Aws::String directory;
#ifdef __ANDROID__
        directory = Aws::FileSystem::Join(Aws::Platform::GetCacheDirectory(), "TransferTests");
#else
        directory = "TransferTests";
#endif // __ANDROID__

        Aws::FileSystem::CreateDirectoryIfNotExists(directory.c_str());
        return directory;
    }

    static Aws::String MakeFilePath(const char* fileName)
    {
        Aws::String directory = GetTestFilesDirectory();
        Aws::String filePath = Aws::FileSystem::Join(directory, fileName);
        return filePath;    
    }

    static Aws::String MakeDownloadFileName(const Aws::String& fileName)
    {
        return fileName + "Download";
    }

    static void VerifyUploadedFile(TransferManager& transferManager,
                                   const Aws::String& sourceFileName,
                                   const Aws::String& bucket,
                                   const Aws::String& key,
                                   const Aws::String& contentType,
                                   const Aws::Map<Aws::String, Aws::String>& metadata)
    {
        Aws::String downloadFileName = MakeDownloadFileName(sourceFileName);

        {
            std::shared_ptr<TransferHandle> downloadPtr = transferManager.DownloadFile(bucket, key, [=](){ 
#ifdef _MSC_VER
                return Aws::New<Aws::FStream>(ALLOCATION_TAG, Aws::Utils::StringUtils::ToWString(downloadFileName.c_str()).c_str(), std::ios_base::out | std::ios_base::in | std::ios_base::binary | std::ios_base::trunc);
#else
                return Aws::New<Aws::FStream>(ALLOCATION_TAG, downloadFileName.c_str(), std::ios_base::out | std::ios_base::in | std::ios_base::binary | std::ios_base::trunc);
#endif
            });

            ASSERT_EQ(true, downloadPtr->ShouldContinue());
            ASSERT_EQ(TransferDirection::DOWNLOAD, downloadPtr->GetTransferDirection());
            downloadPtr->WaitUntilFinished();

            size_t retries = 0;
            //just make sure we don't fail because of failing to download a part for occasional reasons like network problem or s3 eventual consistency.
            while (downloadPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
            {
                transferManager.RetryDownload(downloadPtr);
                downloadPtr->WaitUntilFinished();
            }

            ASSERT_EQ(TransferStatus::COMPLETED, downloadPtr->GetStatus());
            ASSERT_EQ(0u, downloadPtr->GetFailedParts().size());
            ASSERT_EQ(0u, downloadPtr->GetPendingParts().size());

#ifdef _MSC_VER
            auto fileStream = Aws::MakeShared<Aws::FStream>(ALLOCATION_TAG, Aws::Utils::StringUtils::ToWString(sourceFileName.c_str()).c_str(), std::ios_base::in | std::ios_base::binary);
#else
            auto fileStream = Aws::MakeShared<Aws::FStream>(ALLOCATION_TAG, sourceFileName.c_str(), std::ios_base::in | std::ios_base::binary);
#endif
            ASSERT_TRUE(fileStream->good());

            fileStream->seekg(0, std::ios_base::end);
            size_t sourceLength = static_cast<size_t>(fileStream->tellg());
            fileStream->close();
            fileStream = nullptr;

            ASSERT_EQ(downloadPtr->GetBytesTotalSize(), sourceLength);
            ASSERT_EQ(downloadPtr->GetBytesTransferred(), sourceLength);

            ASSERT_STREQ(contentType.c_str(), downloadPtr->GetContentType().c_str());

            ASSERT_TRUE(AreFilesSame(downloadFileName, sourceFileName));

            auto copyMetadata = metadata;
            // ETag will be added to Metadata when finished uploading/downloading
            copyMetadata["ETag"] = downloadPtr->GetMetadata().find("ETag")->second;
            ASSERT_EQ(copyMetadata, downloadPtr->GetMetadata());
        }

        Aws::FileSystem::RemoveFileIfExists(downloadFileName.c_str());
    }

    static void SetUpTestCase()
    {
        // Create a client
        ClientConfiguration config("default");
        config.scheme = Scheme::HTTP;
        config.connectTimeoutMs = 3000;
        config.requestTimeoutMs = 60000;
        // executor used for s3Client
        config.executor = Aws::MakeShared<Aws::Utils::Threading::PooledThreadExecutor>(ALLOCATION_TAG, 5);
        m_s3Client = Aws::MakeShared<MockS3Client>(ALLOCATION_TAG, config);

        CreateBucketRequest createBucket;
        createBucket.WithBucket(GetTestBucketName())
            .WithACL(BucketCannedACL::private_);

        if (config.region != Aws::Region::US_EAST_1)
        {
            CreateBucketConfiguration createBucketConfiguration;
            createBucketConfiguration.WithLocationConstraint(BucketLocationConstraintMapper::GetBucketLocationConstraintForName(config.region));
            createBucket.WithCreateBucketConfiguration(createBucketConfiguration);
        }

        auto createBucketOutcome = m_s3Client->CreateBucket(createBucket);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());

        WaitForBucketToPropagate(GetTestBucketName());

        auto testDirectory = GetTestFilesDirectory();

        Aws::FileSystem::DeepDeleteDirectory(GetTestFilesDirectory().c_str());
    }

    static bool WaitForBucketToPropagate(const Aws::String& bucketName)
    {
        unsigned timeoutCount = 0;
        while (timeoutCount++ < WAIT_MAX_RETRIES)
        {
            HeadBucketRequest headBucketRequest;
            headBucketRequest.SetBucket(bucketName);
            HeadBucketOutcome headBucketOutcome = m_s3Client->HeadBucket(headBucketRequest);
            if (headBucketOutcome.IsSuccess())
            {
                return true;
            }

            std::this_thread::sleep_for(std::chrono::seconds(10));
        }

        return false;
    }

    static bool WaitForObjectToPropagate(const Aws::String& bucketName, const char* objectKey)
    {
        unsigned timeoutCount = 0;
        while (timeoutCount++ < WAIT_MAX_RETRIES)
        {
            HeadObjectRequest headObjectRequest;
            headObjectRequest.SetBucket(bucketName);
            headObjectRequest.SetKey(objectKey);
            HeadObjectOutcome headObjectOutcome = m_s3Client->HeadObject(headObjectRequest);
            if (headObjectOutcome.IsSuccess())
            {
                return true;
            }

            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        return false;
    }

    static bool EmptyBucket(const Aws::String& bucketName)
    {
        bool done = false;
        ListObjectVersionsRequest listObjectVersionsRequest;
        listObjectVersionsRequest.SetBucket(bucketName);

        Aws::Vector<Aws::S3::Model::ObjectVersion> versions;
        while(!done)
        {
            ListObjectVersionsOutcome listObjectVersionsOutcome = m_s3Client->ListObjectVersions(listObjectVersionsRequest);

            if (!listObjectVersionsOutcome.IsSuccess())
                return false;

            const auto& versionSet = listObjectVersionsOutcome.GetResult().GetVersions();
            std::copy(versionSet.cbegin(), versionSet.cend(), std::back_inserter(versions));

            const auto& nextMarker = listObjectVersionsOutcome.GetResult().GetNextKeyMarker();
            if(nextMarker.size() > 0)
            {
                listObjectVersionsRequest.SetKeyMarker(nextMarker);
            }
            else
            {
                done = true;
            }
        }

        for (const auto& objectVersion : versions)
        {
            DeleteObjectRequest deleteObjectRequest;
            deleteObjectRequest.SetBucket(bucketName);
            deleteObjectRequest.SetKey(objectVersion.GetKey());
            if(objectVersion.GetVersionId().size() > 0)
            {
                deleteObjectRequest.SetVersionId(objectVersion.GetVersionId());
            }
            m_s3Client->DeleteObject(deleteObjectRequest);
        }

        return true;
    }

    static void WaitForBucketToEmpty(const Aws::String& bucketName)
    {
        ListObjectsRequest listObjectsRequest;
        listObjectsRequest.SetBucket(bucketName);

        unsigned checkForObjectsCount = 0;
        while (checkForObjectsCount++ < WAIT_MAX_RETRIES)
        {
            ListObjectsOutcome listObjectsOutcome = m_s3Client->ListObjects(listObjectsRequest);

            if (!listObjectsOutcome.IsSuccess() || listObjectsOutcome.GetResult().GetContents().size() > 0)
            {
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }
            else
            {
                break;
            }
        }
    }   

    static void DeleteBucket(const Aws::String& bucketName)
    {
        HeadBucketRequest headBucketRequest;
        headBucketRequest.SetBucket(bucketName);
        HeadBucketOutcome bucketOutcome = m_s3Client->HeadBucket(headBucketRequest);

        if (bucketOutcome.IsSuccess())
        {
            AbortMultipartUploadRequest abortRequest;
            abortRequest.SetBucket(bucketName);
            abortRequest.SetKey(BIG_FILE_KEY);

            m_s3Client->AbortMultipartUpload(abortRequest);

            if (EmptyBucket(bucketName))
            {
                WaitForBucketToEmpty(bucketName);
            }

        }
        DeleteBucketRequest deleteBucketRequest;
        deleteBucketRequest.SetBucket(bucketName);

        DeleteBucketOutcome deleteBucketOutcome = m_s3Client->DeleteBucket(deleteBucketRequest);
    }   

    static void AbortMultiPartUpload(const Aws::String& bucketName, const Aws::String& fileName)
    {
        AbortMultipartUploadRequest abortRequest;

        abortRequest.SetBucket(bucketName);
        abortRequest.SetKey(fileName);

        m_s3Client->AbortMultipartUpload(abortRequest);
    }

    static void TearDownTestCase()
    {
        // Most of our tests try to clean stuff out, let's just make sure everything propagated so we don't throw out pointless errors
        std::this_thread::sleep_for(TEST_WAIT_TIMEOUT);
        AbortMultiPartUpload(GetTestBucketName(), BIG_FILE_KEY);
        DeleteBucket(GetTestBucketName());

        Aws::FileSystem::DeepDeleteDirectory(GetTestFilesDirectory().c_str());

        m_s3Client = nullptr;
    } 
};

std::shared_ptr<MockS3Client> TransferTests::m_s3Client(nullptr);

TEST_F(TransferTests, TransferManager_ThreadExecutorJoinsAsyncOperations)
{
    const Aws::String RandomFileName = Aws::Utils::UUID::RandomUUID();
    Aws::String testFileName = MakeFilePath(RandomFileName.c_str());

    ScopedTestFile testFile(testFileName, MB5, testString);
    TransferManagerConfiguration transferManagerConfig(m_executor.get());
    transferManagerConfig.s3Client = m_s3Client;
    Aws::Utils::Threading::Semaphore ev(0, 1);
    transferManagerConfig.downloadProgressCallback = [&ev](const TransferManager*, const std::shared_ptr<const TransferHandle>&){ ev.Release(); };
    // When httpRequest returns with error, downloadProgressCallback will not be called.
    transferManagerConfig.errorCallback = [&ev](const TransferManager*, const std::shared_ptr<const TransferHandle>&, const Aws::Client::AWSError<Aws::S3::S3Errors>&){ ev.Release(); };
    std::shared_ptr<TransferHandle> uploadHandle, downloadHandle;
    {
        auto transferManager = TransferManager::Create(transferManagerConfig);
        uploadHandle = transferManager->UploadFile(testFileName, GetTestBucketName(), RandomFileName, "text/plain", Aws::Map<Aws::String, Aws::String>());
        uploadHandle->WaitUntilFinished();
        ASSERT_TRUE(WaitForObjectToPropagate(GetTestBucketName(), RandomFileName.c_str()));
        downloadHandle = transferManager->DownloadFile(GetTestBucketName(), RandomFileName, MakeDownloadFileName(RandomFileName));
    }
    ev.WaitOne(); // ensures that the download has started; otherwise, downloadHandle's status will be NOT_STARTED
    m_executor = nullptr; // this should join all worker threads.
    ASSERT_EQ(TransferStatus::COMPLETED, uploadHandle->GetStatus());
    ASSERT_EQ(TransferStatus::COMPLETED, downloadHandle->GetStatus());
}

TEST_F(TransferTests, TransferManager_EmptyFileTest)
{
    const Aws::String RandomFileName = Aws::Utils::UUID::RandomUUID();
    Aws::String emptyTestFileName = MakeFilePath(RandomFileName.c_str());
    ScopedTestFile testFile(emptyTestFileName, 0, testString);

    ListMultipartUploadsRequest listMultipartRequest;
    listMultipartRequest.SetBucket(GetTestBucketName());

    AWS_LOGSTREAM_DEBUG("TransferTests", "*******************************")


    TransferManagerConfiguration transferManagerConfig(m_executor.get());
    transferManagerConfig.s3Client = m_s3Client;
    auto transferManager = TransferManager::Create(transferManagerConfig);

    std::shared_ptr<TransferHandle> requestPtr = transferManager->UploadFile(emptyTestFileName, GetTestBucketName(), RandomFileName, "text/plain", Aws::Map<Aws::String, Aws::String>());

    ASSERT_EQ(true, requestPtr->ShouldContinue());
    ASSERT_EQ(TransferDirection::UPLOAD, requestPtr->GetTransferDirection());
    ASSERT_STREQ(emptyTestFileName.c_str(), requestPtr->GetTargetFilePath().c_str());
    requestPtr->WaitUntilFinished();

    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(1u, requestPtr->GetCompletedParts().size());
    ASSERT_EQ(0u, requestPtr->GetFailedParts().size());
    ASSERT_EQ(0u, requestPtr->GetPendingParts().size());
    ASSERT_EQ(0u, requestPtr->GetQueuedParts().size());

    ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

    uint64_t fileSize = requestPtr->GetBytesTotalSize();
    ASSERT_EQ(0u, fileSize);
    ASSERT_EQ(fileSize, requestPtr->GetBytesTransferred());

    ASSERT_TRUE(WaitForObjectToPropagate(GetTestBucketName(), RandomFileName.c_str()));

    VerifyUploadedFile(*transferManager,
        emptyTestFileName,
        GetTestBucketName(),
        RandomFileName,
        "text/plain",
        Aws::Map<Aws::String, Aws::String>());
}

TEST_F(TransferTests, TransferManager_SmallTest)
{
    const Aws::String RandomFileName = Aws::Utils::UUID::RandomUUID();
    Aws::String smallTestFileName = MakeFilePath(RandomFileName.c_str());
    ScopedTestFile testFile(smallTestFileName, SMALL_TEST_SIZE, testString);

    ListMultipartUploadsRequest listMultipartRequest;
    listMultipartRequest.SetBucket(GetTestBucketName());

    AWS_LOGSTREAM_DEBUG( "TransferTests", "*******************************")


    TransferManagerConfiguration transferManagerConfig(m_executor.get());
    transferManagerConfig.s3Client = m_s3Client;
    auto transferManager = TransferManager::Create(transferManagerConfig);

    std::shared_ptr<TransferHandle> requestPtr = transferManager->UploadFile(smallTestFileName, GetTestBucketName(), RandomFileName, "text/plain", Aws::Map<Aws::String, Aws::String>());

    ASSERT_EQ(true, requestPtr->ShouldContinue());
    ASSERT_EQ(TransferDirection::UPLOAD, requestPtr->GetTransferDirection());
    ASSERT_STREQ(smallTestFileName.c_str(), requestPtr->GetTargetFilePath().c_str());
    requestPtr->WaitUntilFinished();

    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(1u, requestPtr->GetCompletedParts().size()); // Should be 2.5 megs
    ASSERT_EQ(0u, requestPtr->GetFailedParts().size());
    ASSERT_EQ(0u, requestPtr->GetPendingParts().size());
    ASSERT_EQ(0u, requestPtr->GetQueuedParts().size());

    ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

    uint64_t fileSize = requestPtr->GetBytesTotalSize();
    ASSERT_EQ(fileSize, (SMALL_TEST_SIZE / testStrLen * testStrLen));
    ASSERT_EQ(fileSize, requestPtr->GetBytesTransferred());

    ASSERT_TRUE(WaitForObjectToPropagate(GetTestBucketName(), RandomFileName.c_str()));

    VerifyUploadedFile(*transferManager,
                       smallTestFileName,
                       GetTestBucketName(),
                       RandomFileName,
                       "text/plain",
                       Aws::Map<Aws::String, Aws::String>());
}

TEST_F(TransferTests, TransferManager_ContentTest)
{
    const Aws::String RandomFileName = Aws::Utils::UUID::RandomUUID();
    Aws::String contentTestFileName = MakeFilePath(RandomFileName.c_str());
    ScopedTestFile testFile(contentTestFileName, CONTENT_TEST_FILE_TEXT);

    TransferManagerConfiguration transferManagerConfig(m_executor.get());
    transferManagerConfig.s3Client = m_s3Client;
    auto transferManager = TransferManager::Create(transferManagerConfig);

    std::shared_ptr<TransferHandle> requestPtr = 
            transferManager->UploadFile(contentTestFileName, GetTestBucketName(), CONTENT_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

    ASSERT_EQ(true, requestPtr->ShouldContinue());
    ASSERT_EQ(TransferDirection::UPLOAD, requestPtr->GetTransferDirection());
    ASSERT_STREQ(contentTestFileName.c_str(), requestPtr->GetTargetFilePath().c_str());
    requestPtr->WaitUntilFinished();
    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(1u, requestPtr->GetCompletedParts().size()); // Should be tiny
    ASSERT_EQ(0u, requestPtr->GetFailedParts().size());
    ASSERT_EQ(0u, requestPtr->GetPendingParts().size());
    ASSERT_EQ(0u, requestPtr->GetQueuedParts().size());

    ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

    uint64_t fileSize = requestPtr->GetBytesTotalSize();
    ASSERT_EQ(fileSize, strlen(CONTENT_TEST_FILE_TEXT));
    ASSERT_EQ(fileSize, requestPtr->GetBytesTransferred());

    ASSERT_TRUE(WaitForObjectToPropagate(GetTestBucketName(), CONTENT_FILE_KEY));

    VerifyUploadedFile(*transferManager,
                       contentTestFileName,
                       GetTestBucketName(),
                       CONTENT_FILE_KEY,
                       "text/plain",
                       Aws::Map<Aws::String, Aws::String>());
}

TEST_F(TransferTests, TransferManager_DirectoryUploadAndDownloadTest)
{
    const Aws::String RandomFileName = Aws::Utils::UUID::RandomUUID();
    auto uploadDir = Aws::FileSystem::Join(GetTestFilesDirectory(), RandomFileName + "dirUpload");
    ASSERT_TRUE(Aws::FileSystem::CreateDirectoryIfNotExists(uploadDir.c_str()));
    auto smallTestFileName = Aws::FileSystem::Join(uploadDir, RandomFileName + "SmallTransferTestFile.txt");
    auto contentTestFileName = Aws::FileSystem::Join(uploadDir, RandomFileName + CONTENT_TEST_FILE_NAME);
    auto emptyTestFileName = Aws::FileSystem::Join(uploadDir, RandomFileName + "EmptyTransferTestFile.txt");
    auto nestedDirectory = Aws::FileSystem::Join(uploadDir, RandomFileName + "nested");
    ASSERT_TRUE(Aws::FileSystem::CreateDirectoryIfNotExists(nestedDirectory.c_str()));
    auto nestedFileName = Aws::FileSystem::Join(nestedDirectory, RandomFileName + "nestedFile");

    ScopedTestFile smallFile(smallTestFileName, SMALL_TEST_SIZE, testString);
    ScopedTestFile contentFile(contentTestFileName, CONTENT_TEST_FILE_TEXT);
    ScopedTestFile emptyFile(emptyTestFileName, 0, testString);
    ScopedTestFile nestedFile(nestedFileName, CONTENT_TEST_FILE_TEXT);

    Aws::Vector<std::shared_ptr<TransferHandle>> directoryUploads;
    Aws::Vector<std::shared_ptr<TransferHandle>> directoryDownloads;
    std::condition_variable directoryUploadSignal;
    std::condition_variable directoryDownloadSignal;
    std::mutex semaphoreLock;

    auto transferInitCallback = [&](const TransferManager*, const std::shared_ptr<const TransferHandle>& handle) 
        { 
            std::lock_guard<std::mutex> m(semaphoreLock);

            if(handle->GetTransferDirection() == TransferDirection::UPLOAD)
            {
                directoryUploads.push_back(std::const_pointer_cast<TransferHandle>(handle)); 

                if (directoryUploads.size() == 4)
                {
                    directoryUploadSignal.notify_one();
                }
            }
            else
            {
                directoryDownloads.push_back(std::const_pointer_cast<TransferHandle>(handle));

                if (directoryDownloads.size() == 4)
                {
                    directoryDownloadSignal.notify_one();
                }
            }
        };

    TransferManagerConfiguration transferManagerConfig(m_executor.get());
    transferManagerConfig.s3Client = m_s3Client;
    transferManagerConfig.transferInitiatedCallback = transferInitCallback;
    auto transferManager = TransferManager::Create(transferManagerConfig);

    transferManager->UploadDirectory(uploadDir, GetTestBucketName(), "nestedTest", Aws::Map<Aws::String, Aws::String>());

    {
        std::unique_lock<std::mutex> locker(semaphoreLock);
        // if upload is fast enough, we might not need to wait here
        if (directoryUploads.size() < 4)
        {
            directoryUploadSignal.wait(locker);
        }
    }

    ASSERT_EQ(4u, directoryUploads.size());
    Aws::Set<Aws::String> pathsUploading = { smallTestFileName, contentTestFileName, emptyTestFileName, nestedFileName };

    for (auto handle : directoryUploads)
    {
        ASSERT_TRUE(handle->ShouldContinue());
        ASSERT_NE(pathsUploading.end(), pathsUploading.find(handle->GetTargetFilePath()));
        ASSERT_EQ(TransferDirection::UPLOAD, handle->GetTransferDirection());
        handle->WaitUntilFinished();
        ASSERT_EQ(TransferStatus::COMPLETED, handle->GetStatus());

        ASSERT_TRUE(WaitForObjectToPropagate(GetTestBucketName(), handle->GetKey().c_str()));

        VerifyUploadedFile(*transferManager,
            handle->GetTargetFilePath(),
            GetTestBucketName(),
            handle->GetKey(),
            "binary/octet-stream",
            Aws::Map<Aws::String, Aws::String>());
    }

    auto downloadDir = Aws::FileSystem::Join(GetTestFilesDirectory(), "dirDownload");
    transferManager->DownloadToDirectory(downloadDir, GetTestBucketName(), "nestedTest");

    {
        std::unique_lock<std::mutex> locker(semaphoreLock);
        if (directoryDownloads.size() < 4)
        {
            directoryDownloadSignal.wait(locker);
        }
    }

    ASSERT_EQ(4u, directoryDownloads.size());
    
    for (auto handle : directoryDownloads)
    {
        EXPECT_TRUE(handle->ShouldContinue());       
        EXPECT_EQ(TransferDirection::DOWNLOAD, handle->GetTransferDirection());
        handle->WaitUntilFinished();
        EXPECT_EQ(TransferStatus::COMPLETED, handle->GetStatus());
    }

    Aws::FileSystem::DirectoryTree uploadTree(uploadDir);
    Aws::FileSystem::DirectoryTree downloadTree(downloadDir);
    ASSERT_EQ(uploadTree, downloadTree);

    // Verify that the updated DownloadToDirectory function only trigger ListObjectsV2Requst once
    ASSERT_EQ(1u, m_s3Client->listObjectsV2RequestCount);
}

// Test of a basic multi part upload - 7.5 megs
TEST_F(TransferTests, TransferManager_MediumTest)
{
    const Aws::String RandomFileName = Aws::Utils::UUID::RandomUUID();
    Aws::String mediumTestFilePath = MakeFilePath(RandomFileName.c_str());
    ScopedTestFile testFile(mediumTestFilePath, MEDIUM_TEST_SIZE, testString);

    TransferManagerConfiguration transferManagerConfig(m_executor.get());
    transferManagerConfig.s3Client = m_s3Client;

    auto transferManager = TransferManager::Create(transferManagerConfig);

    std::shared_ptr<TransferHandle> requestPtr = transferManager->UploadFile(mediumTestFilePath, GetTestBucketName(), RandomFileName, "text/plain", Aws::Map<Aws::String, Aws::String>());

    ASSERT_EQ(true, requestPtr->ShouldContinue());
    ASSERT_EQ(TransferDirection::UPLOAD, requestPtr->GetTransferDirection());
    ASSERT_STREQ(mediumTestFilePath.c_str(), requestPtr->GetTargetFilePath().c_str());
    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because a the put object failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager->RetryUpload(mediumTestFilePath, requestPtr);
        requestPtr->WaitUntilFinished();
    }

    ASSERT_TRUE(requestPtr->IsMultipart());
    ASSERT_FALSE(requestPtr->GetMultiPartId().empty());
    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(PARTS_IN_MEDIUM_TEST, requestPtr->GetCompletedParts().size()); // Should be 2
    ASSERT_EQ(0u, requestPtr->GetFailedParts().size());
    ASSERT_EQ(0u, requestPtr->GetPendingParts().size());
    ASSERT_EQ(0u, requestPtr->GetQueuedParts().size());
    ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

    uint64_t fileSize = requestPtr->GetBytesTotalSize();
    ASSERT_EQ(fileSize, MEDIUM_TEST_SIZE / testStrLen * testStrLen);
    ASSERT_EQ(fileSize, requestPtr->GetBytesTransferred());

    ASSERT_TRUE(WaitForObjectToPropagate(GetTestBucketName(), RandomFileName.c_str()));

    VerifyUploadedFile(*transferManager,
                       mediumTestFilePath,
                       GetTestBucketName(),
                       RandomFileName,
                       "text/plain",
                       Aws::Map<Aws::String, Aws::String>());
}

TEST_F(TransferTests, TransferManager_BigTest)
{
    const Aws::String RandomFileName = Aws::Utils::UUID::RandomUUID();
    Aws::String bigTestFileName = MakeFilePath(RandomFileName.c_str());
    ScopedTestFile testFile(bigTestFileName, BIG_TEST_SIZE, testString);

    TransferManagerConfiguration transferManagerConfig(m_executor.get());
    transferManagerConfig.s3Client = m_s3Client;

    auto transferManager = TransferManager::Create(transferManagerConfig);
    std::shared_ptr<TransferHandle> requestPtr = transferManager->UploadFile(bigTestFileName, GetTestBucketName(), BIG_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

    ASSERT_EQ(true, requestPtr->ShouldContinue());
    ASSERT_EQ(TransferDirection::UPLOAD, requestPtr->GetTransferDirection());
    ASSERT_STREQ(bigTestFileName.c_str(), requestPtr->GetTargetFilePath().c_str());
    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because an upload part failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager->RetryUpload(bigTestFileName.c_str(), requestPtr);
        requestPtr->WaitUntilFinished();
    }

    ASSERT_TRUE(requestPtr->IsMultipart());
    ASSERT_FALSE(requestPtr->GetMultiPartId().empty());
    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(PARTS_IN_BIG_TEST, requestPtr->GetCompletedParts().size()); // Should be 15
    ASSERT_EQ(0u, requestPtr->GetFailedParts().size());
    ASSERT_EQ(0u, requestPtr->GetPendingParts().size());
    ASSERT_EQ(0u, requestPtr->GetQueuedParts().size());
    ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

    uint64_t fileSize = requestPtr->GetBytesTotalSize();
    ASSERT_EQ(fileSize, BIG_TEST_SIZE / testStrLen * testStrLen);
    ASSERT_EQ(fileSize, requestPtr->GetBytesTransferred());

    ASSERT_TRUE(WaitForObjectToPropagate(GetTestBucketName(), BIG_FILE_KEY));

    VerifyUploadedFile(*transferManager,
                       bigTestFileName,
                       GetTestBucketName(),
                       BIG_FILE_KEY,
                       "text/plain",
                       Aws::Map<Aws::String, Aws::String>());
}

#ifdef _MSC_VER
TEST_F(TransferTests, TransferManager_UnicodeFileNameTest)
{
    const Aws::String RandomFileName = Aws::Utils::UUID::RandomUUID();
    Aws::String fileName = MakeFilePath((RandomFileName + Aws::Utils::StringUtils::FromWString(UNICODE_TEST_FILE_NAME)).c_str());
    ScopedTestFile testFile(fileName, MEDIUM_TEST_SIZE, testString);

    TransferManagerConfiguration transferManagerConfig(m_executor.get());
    transferManagerConfig.s3Client = m_s3Client;

    auto transferManager = TransferManager::Create(transferManagerConfig);
    std::shared_ptr<TransferHandle> requestPtr = transferManager->UploadFile(fileName, GetTestBucketName(), UNICODE_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

    ASSERT_EQ(true, requestPtr->ShouldContinue());
    ASSERT_EQ(TransferDirection::UPLOAD, requestPtr->GetTransferDirection());
    ASSERT_STREQ(fileName.c_str(), requestPtr->GetTargetFilePath().c_str());
    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because an upload part failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager->RetryUpload(fileName, requestPtr);
        requestPtr->WaitUntilFinished();
    }

    ASSERT_TRUE(requestPtr->IsMultipart());
    ASSERT_FALSE(requestPtr->GetMultiPartId().empty());
    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(PARTS_IN_MEDIUM_TEST, requestPtr->GetCompletedParts().size()); // Should be 2
    ASSERT_EQ(0u, requestPtr->GetFailedParts().size());
    ASSERT_EQ(0u, requestPtr->GetPendingParts().size());
    ASSERT_EQ(0u, requestPtr->GetQueuedParts().size());
    ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

    uint64_t fileSize = requestPtr->GetBytesTotalSize();
    ASSERT_EQ(fileSize, MEDIUM_TEST_SIZE / testStrLen * testStrLen);
    ASSERT_EQ(fileSize, requestPtr->GetBytesTransferred());

    ASSERT_TRUE(WaitForObjectToPropagate(GetTestBucketName(), UNICODE_FILE_KEY));

    VerifyUploadedFile(*transferManager,
                       fileName,
                       GetTestBucketName(),
                       UNICODE_FILE_KEY,
                       "text/plain",
                       Aws::Map<Aws::String, Aws::String>());
}
#endif

TEST_F(TransferTests, TransferManager_CancelAndRetryUploadTest)
{
    const Aws::String RandomFileName = Aws::Utils::UUID::RandomUUID();
    Aws::String cancelTestFileName = MakeFilePath(RandomFileName.c_str());
    ScopedTestFile testFile(cancelTestFileName, CANCEL_TEST_SIZE, testString);

    bool retryInProgress = false;
    bool completedPartsStayedCompletedDuringRetry = true;
    bool completionCheckDone = false;
    const char uuid[] = "Bjarne Stroustrup!";
    std::atomic<bool> cancelHasBeenCalled(false);

    TransferManagerConfiguration transferManagerConfig(m_executor.get());
    transferManagerConfig.transferStatusUpdatedCallback = 
        [&](const TransferManager*, const std::shared_ptr<const TransferHandle>& handle)
        {
            if (handle->GetTransferDirection() == TransferDirection::UPLOAD)
            {
                ASSERT_NE(nullptr, handle->GetContext());
                ASSERT_STREQ(uuid, handle->GetContext()->GetUUID().c_str());
            }
            bool expected = false;
            if (handle->GetCompletedParts().size() >= 15 && cancelHasBeenCalled.compare_exchange_strong(expected, true))
            {
                std::const_pointer_cast<TransferHandle>(handle)->Cancel();
            }
            else if (retryInProgress)
            {
                if (handle->GetStatus() == TransferStatus::IN_PROGRESS && completedPartsStayedCompletedDuringRetry)
                {
                    completionCheckDone = true;
                    //this should NEVER rise above 15 or we had some completed parts get retried too.
                    completedPartsStayedCompletedDuringRetry = handle->GetPendingParts().size() <= 15;
                }
            }
        };

    transferManagerConfig.s3Client = m_s3Client;
    auto transferManager = TransferManager::Create(transferManagerConfig);

    std::shared_ptr<TransferHandle> requestPtr = transferManager->UploadFile(cancelTestFileName, GetTestBucketName(), CANCEL_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>(),
        Aws::MakeShared<Aws::Client::AsyncCallerContext>(ALLOCATION_TAG, uuid));

    uint64_t fileSize = requestPtr->GetBytesTotalSize();
    ASSERT_EQ(fileSize, CANCEL_TEST_SIZE / testStrLen * testStrLen);
    requestPtr->WaitUntilFinished();

    //if this is the case, the request actually failed before we could cancel it and we need to try again.
    while (requestPtr->GetCompletedParts().size() < 15u)
    {        
        requestPtr = transferManager->RetryUpload(cancelTestFileName, requestPtr); 
        requestPtr->WaitUntilFinished();
    }

    ASSERT_EQ(TransferStatus::CANCELED, requestPtr->GetStatus());    
    ASSERT_TRUE(15u <= requestPtr->GetCompletedParts().size() && requestPtr->GetCompletedParts().size() <= 17u); //some may have been in flight.
    ASSERT_EQ(0u, requestPtr->GetPendingParts().size());
    ASSERT_TRUE(15u >= requestPtr->GetFailedParts().size() && requestPtr->GetFailedParts().size() >= 13u); //some may have been in flight at cancelation time.
    ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

    ListMultipartUploadsRequest listMultipartRequest;
    listMultipartRequest.WithBucket(GetTestBucketName());
    ListMultipartUploadsOutcome listMultipartOutcome = m_s3Client->ListMultipartUploads(listMultipartRequest);
    EXPECT_TRUE(listMultipartOutcome.IsSuccess());
    ASSERT_EQ(1u, listMultipartOutcome.GetResult().GetUploads().size());

    HeadObjectRequest headObjectRequest;
    headObjectRequest.WithBucket(GetTestBucketName())
        .WithKey(CANCEL_FILE_KEY);

    ASSERT_FALSE(m_s3Client->HeadObject(headObjectRequest).IsSuccess());

    retryInProgress = true;
    requestPtr = transferManager->RetryUpload(cancelTestFileName, requestPtr);
    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because an upload part failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager->RetryUpload(cancelTestFileName, requestPtr);
        requestPtr->WaitUntilFinished();
    }

    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(30u, requestPtr->GetCompletedParts().size());
    ASSERT_TRUE(completionCheckDone);
    ASSERT_TRUE(completedPartsStayedCompletedDuringRetry);
    ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

    ASSERT_EQ(fileSize, requestPtr->GetBytesTransferred());

    listMultipartOutcome = m_s3Client->ListMultipartUploads(listMultipartRequest);

    EXPECT_TRUE(listMultipartOutcome.IsSuccess());
    ASSERT_EQ(0u, listMultipartOutcome.GetResult().GetUploads().size());

    ASSERT_TRUE(WaitForObjectToPropagate(GetTestBucketName(), CANCEL_FILE_KEY));

    VerifyUploadedFile(*transferManager,
                       cancelTestFileName,
                       GetTestBucketName(),
                       CANCEL_FILE_KEY,
                       "text/plain",
                       Aws::Map<Aws::String, Aws::String>());
}

TEST_F(TransferTests, TransferManager_AbortAndRetryUploadTest)
{
    const Aws::String RandomFileName = Aws::Utils::UUID::RandomUUID();
    Aws::String cancelTestFileName = MakeFilePath(RandomFileName.c_str());
    ScopedTestFile testFile(cancelTestFileName, CANCEL_TEST_SIZE, testString);

    bool retryInProgress = false;
    bool completedPartsStayedCompletedDuringRetry = true;
    bool completionCheckDone = false;
    std::atomic<bool> cancelHasBeenCalled(false);

    std::shared_ptr<TransferHandle> requestPtr(nullptr);

    TransferManagerConfiguration transferManagerConfig(m_executor.get());
    transferManagerConfig.transferStatusUpdatedCallback =
        [&](const TransferManager* manager, const std::shared_ptr<const TransferHandle>& handle)
        {
            bool expected = false;
            if (handle->GetCompletedParts().size() >= 15 && cancelHasBeenCalled.compare_exchange_strong(expected, true))
            {
                const_cast<TransferManager*>(manager)->AbortMultipartUpload(std::const_pointer_cast<TransferHandle>(handle));
            }
            else if (retryInProgress)
            {
                if (handle->GetStatus() == TransferStatus::IN_PROGRESS && completedPartsStayedCompletedDuringRetry)
                {
                    completionCheckDone = true;
                    //this should NEVER rise above 15 or we had some completed parts get retried too.
                    completedPartsStayedCompletedDuringRetry = handle->GetPendingParts().size() <= 15 && handle->GetQueuedParts().size() <= 15;
                }
            }
        };

    transferManagerConfig.s3Client = m_s3Client;
    auto transferManager = TransferManager::Create(transferManagerConfig);
    requestPtr = transferManager->UploadFile(cancelTestFileName, GetTestBucketName(), CANCEL_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

    uint64_t fileSize = requestPtr->GetBytesTotalSize();
    ASSERT_EQ(fileSize, CANCEL_TEST_SIZE / testStrLen * testStrLen);

    requestPtr->WaitUntilFinished();

    //if this is the case, the request actually failed before we could cancel it and we need to try again.
    while (requestPtr->GetCompletedParts().size() < 15u)
    {
        requestPtr = transferManager->RetryUpload(cancelTestFileName, requestPtr);
        requestPtr->WaitUntilFinished();
    }

    ASSERT_EQ(TransferStatus::CANCELED, requestPtr->GetStatus());
    while(requestPtr->GetStatus() != TransferStatus::ABORTED) std::this_thread::sleep_for(std::chrono::seconds(1));
    ASSERT_TRUE(15u <= requestPtr->GetCompletedParts().size() && requestPtr->GetCompletedParts().size() <= 17); //some may have been in flight.
    ASSERT_EQ(0u, requestPtr->GetPendingParts().size());
    ASSERT_TRUE(15u >= requestPtr->GetFailedParts().size() && requestPtr->GetFailedParts().size() >= 13); //some may have been in flight at cancelation time.
    ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

    ListMultipartUploadsRequest listMultipartRequest;
    listMultipartRequest.WithBucket(GetTestBucketName());
    ListMultipartUploadsOutcome listMultipartOutcome = m_s3Client->ListMultipartUploads(listMultipartRequest);

    EXPECT_TRUE(listMultipartOutcome.IsSuccess());
    // S3 has eventual consistency, even thought we called AbortMultiPartUpload and get successful return,
    // following call of listMultiPartUpload will not gurantee to return 0.
    size_t retries = 0;
    while (listMultipartOutcome.GetResult().GetUploads().size() != 0u && retries++ < 5)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        listMultipartOutcome = m_s3Client->ListMultipartUploads(listMultipartRequest);
        EXPECT_TRUE(listMultipartOutcome.IsSuccess());
    }
    ASSERT_EQ(0u, listMultipartOutcome.GetResult().GetUploads().size());

    retryInProgress = true;
    std::shared_ptr<TransferHandle> tempPtr = requestPtr;
    requestPtr = transferManager->RetryUpload(cancelTestFileName, tempPtr);
    ASSERT_NE(requestPtr, tempPtr);
    requestPtr->WaitUntilFinished();

    retries = 0;
    //just make sure we don't fail because an upload part failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager->RetryUpload(cancelTestFileName, requestPtr);
        requestPtr->WaitUntilFinished();
    }

    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(30u, requestPtr->GetCompletedParts().size());
    ASSERT_TRUE(completionCheckDone);
    ASSERT_FALSE(completedPartsStayedCompletedDuringRetry);
    ASSERT_EQ(fileSize, requestPtr->GetBytesTransferred());

    ASSERT_TRUE(WaitForObjectToPropagate(GetTestBucketName(), CANCEL_FILE_KEY));

    VerifyUploadedFile(*transferManager,
                       cancelTestFileName,
                       GetTestBucketName(),
                       CANCEL_FILE_KEY,
                       "text/plain",
                       Aws::Map<Aws::String, Aws::String>());
}

TEST_F(TransferTests, TransferManager_MultiPartContentTest)
{
    const Aws::String RandomFileName = Aws::Utils::UUID::RandomUUID();
    Aws::String multiPartContentFileName = MakeFilePath(RandomFileName.c_str());
    ScopedTestFile testFile(multiPartContentFileName, MEDIUM_TEST_SIZE, MULTI_PART_CONTENT_TEXT);

    TransferManagerConfiguration transferManagerConfig(m_executor.get());
    transferManagerConfig.s3Client = m_s3Client;
    auto transferManager = TransferManager::Create(transferManagerConfig);
    
    std::shared_ptr<TransferHandle> requestPtr = transferManager->UploadFile(multiPartContentFileName, GetTestBucketName(), MULTI_PART_CONTENT_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because an upload part failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager->RetryUpload(multiPartContentFileName, requestPtr);
        requestPtr->WaitUntilFinished();
    }

    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(PARTS_IN_MEDIUM_TEST, requestPtr->GetCompletedParts().size()); // > 1 part
    ASSERT_EQ(requestPtr->GetBytesTotalSize(), requestPtr->GetBytesTransferred());

    VerifyUploadedFile(*transferManager,
                       multiPartContentFileName,
                       GetTestBucketName(),
                       MULTI_PART_CONTENT_KEY,
                       "text/plain",
                       Aws::Map<Aws::String, Aws::String>());
}

// Single part upload with metadata specified
TEST_F(TransferTests, TransferManager_SinglePartUploadWithMetadataTest)
{
    const Aws::String RandomFileName = Aws::Utils::UUID::RandomUUID();
    Aws::String testFilePath = MakeFilePath(RandomFileName.c_str());
    ScopedTestFile testFile(testFilePath, MB5, testString);

    Aws::Map<Aws::String, Aws::String> metadata;
    metadata["key1"] = "val1";
    metadata["key2"] = "val2";

    TransferManagerConfiguration transferManagerConfig(m_executor.get());
    transferManagerConfig.s3Client = m_s3Client;
    auto transferManager = TransferManager::Create(transferManagerConfig);

    std::shared_ptr<TransferHandle> requestPtr = transferManager->UploadFile(testFilePath, GetTestBucketName(), RandomFileName, "text/plain", metadata);

    requestPtr->WaitUntilFinished();
    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(requestPtr->GetBytesTotalSize(), requestPtr->GetBytesTransferred());

    ASSERT_TRUE(WaitForObjectToPropagate(GetTestBucketName(), RandomFileName.c_str()));

    // Check the metadata matches
    HeadObjectRequest headObjectRequest;
    headObjectRequest.SetBucket(GetTestBucketName());
    headObjectRequest.SetKey(RandomFileName);

    HeadObjectOutcome headObjectOutcome = m_s3Client->HeadObject(headObjectRequest);
    ASSERT_TRUE(headObjectOutcome.IsSuccess());

    Aws::Map<Aws::String, Aws::String> headObjectMetadata = headObjectOutcome.GetResult().GetMetadata();
    ASSERT_EQ(metadata.size(), headObjectMetadata.size());
    ASSERT_EQ(metadata["key1"], headObjectMetadata["key1"]);
    ASSERT_EQ(metadata["key2"], headObjectMetadata["key2"]);

    VerifyUploadedFile(*transferManager,
                       testFilePath,
                       GetTestBucketName(),
                       RandomFileName,
                       "text/plain",
                       metadata);
}

// Multipart upload with metadata specified
TEST_F(TransferTests, MultipartUploadWithMetadataTest)
{
    const Aws::String RandomFileName = Aws::Utils::UUID::RandomUUID();
    Aws::String mediumTestFileName = MakeFilePath(RandomFileName.c_str());
    ScopedTestFile testFile(mediumTestFileName, MEDIUM_TEST_SIZE, testString);

    Aws::Map<Aws::String, Aws::String> metadata;
    metadata["key1"] = "val1";
    metadata["key2"] = "val2";

    TransferManagerConfiguration transferManagerConfig(m_executor.get());
    transferManagerConfig.s3Client = m_s3Client;
    auto transferManager = TransferManager::Create(transferManagerConfig);

    std::shared_ptr<TransferHandle> requestPtr = transferManager->UploadFile(mediumTestFileName, GetTestBucketName(), RandomFileName, "text/plain", metadata);

    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because an upload part failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager->RetryUpload(mediumTestFileName, requestPtr);
        requestPtr->WaitUntilFinished();
    }
    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(requestPtr->GetBytesTotalSize(), requestPtr->GetBytesTransferred());

    ASSERT_TRUE(WaitForObjectToPropagate(GetTestBucketName(), RandomFileName.c_str()));

    // Check the metadata matches
    HeadObjectRequest headObjectRequest;
    headObjectRequest.SetBucket(GetTestBucketName());
    headObjectRequest.SetKey(RandomFileName);

    HeadObjectOutcome headObjectOutcome = m_s3Client->HeadObject(headObjectRequest);
    ASSERT_TRUE(headObjectOutcome.IsSuccess());

    Aws::Map<Aws::String, Aws::String> headObjectMetadata = headObjectOutcome.GetResult().GetMetadata();
    ASSERT_EQ(metadata.size(), headObjectMetadata.size());
    ASSERT_EQ(metadata["key1"], headObjectMetadata["key1"]);
    ASSERT_EQ(metadata["key2"], headObjectMetadata["key2"]);

    VerifyUploadedFile(*transferManager,
                       mediumTestFileName,
                       GetTestBucketName(),
                       RandomFileName,
                       "text/plain",
                       metadata);
}

TEST_F(TransferTests, BadFileTest)
{
    const Aws::String RandomFileName = Aws::Utils::UUID::RandomUUID();
    Aws::String nonsenseFileName = MakeFilePath(RandomFileName.c_str());
    TransferManagerConfiguration transferManagerConfig(m_executor.get());
    transferManagerConfig.s3Client = m_s3Client;
    transferManagerConfig.transferStatusUpdatedCallback =
        [&](const TransferManager*, const std::shared_ptr<const TransferHandle>& handle)
        {
            ASSERT_EQ(TransferDirection::UPLOAD, handle->GetTransferDirection());
            ASSERT_STREQ(nonsenseFileName.c_str(), handle->GetTargetFilePath().c_str());
            ASSERT_STREQ("text/plain", handle->GetContentType().c_str());

            ASSERT_EQ(TransferStatus::FAILED, handle->GetStatus());
            ASSERT_EQ(0u, handle->GetCompletedParts().size());
            ASSERT_EQ(0u, handle->GetFailedParts().size());
            ASSERT_EQ(0u, handle->GetPendingParts().size());
            ASSERT_EQ(0u, handle->GetQueuedParts().size());
        };

    auto transferManager = TransferManager::Create(transferManagerConfig);

    std::shared_ptr<TransferHandle> requestPtr = transferManager->UploadFile(nonsenseFileName, GetTestBucketName(), "UnicornKey", "text/plain", Aws::Map<Aws::String, Aws::String>());
    requestPtr->WaitUntilFinished();

    ASSERT_EQ(TransferStatus::FAILED, requestPtr->GetStatus());
}

TEST_F(TransferTests, TransferManager_CancelAndRetryDownloadTest)
{
    const Aws::String RandomFileName = Aws::Utils::UUID::RandomUUID();
    Aws::String cancelTestFileName = MakeFilePath(RandomFileName.c_str());
    Aws::String downloadFileName = MakeDownloadFileName(cancelTestFileName);
    ScopedTestFile testFile(cancelTestFileName, CANCEL_TEST_SIZE, testString);

    {
        TransferManagerConfiguration uploadConfig(m_executor.get());
        uploadConfig.s3Client = m_s3Client;
        auto transferManager = TransferManager::Create(uploadConfig);

        std::shared_ptr<TransferHandle> requestPtr = transferManager->UploadFile(cancelTestFileName, GetTestBucketName(), CANCEL_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

        uint64_t fileSize = requestPtr->GetBytesTotalSize();
        ASSERT_EQ(fileSize, CANCEL_TEST_SIZE / testStrLen * testStrLen);
        requestPtr->WaitUntilFinished();

        ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus()); 
    }

    {
        bool retryInProgress = false;
        bool completedPartsStayedCompletedDuringRetry = true;
        bool completionCheckDone = false;
        const char uuid[] = "Bjarne Stroustrup!";
        std::atomic<bool> cancelHasBeenCalled(false);

        TransferManagerConfiguration downloadConfig(m_executor.get());
        downloadConfig.s3Client = m_s3Client;
        downloadConfig.transferStatusUpdatedCallback = 
            [&](const TransferManager*, const std::shared_ptr<const TransferHandle>& handle)
            {
                ASSERT_NE(nullptr, handle->GetContext());
                ASSERT_STREQ(uuid, handle->GetContext()->GetUUID().c_str());

                ASSERT_EQ(downloadFileName, handle->GetTargetFilePath());
                bool expected = false;
                if (handle->GetCompletedParts().size() >= 15u && cancelHasBeenCalled.compare_exchange_strong(expected, true))
                {
                    std::const_pointer_cast<TransferHandle>(handle)->Cancel();
                }
                else if (retryInProgress)
                {
                    if (handle->GetStatus() == TransferStatus::IN_PROGRESS && completedPartsStayedCompletedDuringRetry)
                    {
                        completionCheckDone = true;
                        //this should NEVER rise above 15 or we had some completed parts get retried too.
                        completedPartsStayedCompletedDuringRetry = handle->GetPendingParts().size() <= 15;
                    }
                }
            };

        auto transferManager = TransferManager::Create(downloadConfig);
        std::shared_ptr<TransferHandle> requestPtr = transferManager->DownloadFile(GetTestBucketName(), CANCEL_FILE_KEY, downloadFileName, DownloadConfiguration(),
            Aws::MakeShared<Aws::Client::AsyncCallerContext>(ALLOCATION_TAG, uuid));

        requestPtr->WaitUntilFinished();

        //if this is the case, the request actually failed before we could cancel it and we need to try again.
        while (requestPtr->GetCompletedParts().size() < 15u)
        {        
            requestPtr = transferManager->RetryDownload(requestPtr); 
            requestPtr->WaitUntilFinished();
        }

        // call Cancel() in TransferStatusUpdateCallback function will not set status to CANCELED immediately.
        // It only set up m_cancel to true, status will be updated by following UpdateStatus() call.
        while (requestPtr->GetStatus() != TransferStatus::CANCELED) 
        {
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        ASSERT_TRUE(15u <= requestPtr->GetCompletedParts().size()); 
        ASSERT_EQ(0u, requestPtr->GetPendingParts().size());
        ASSERT_TRUE(15u >= requestPtr->GetFailedParts().size()); //some may have been in flight at cancelation time.
        ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

        retryInProgress = true;
        requestPtr = transferManager->RetryDownload(requestPtr);
        requestPtr->WaitUntilFinished();

        size_t retries = 0;
        //just make sure we don't fail because a download part failed. (e.g. network problems or interuptions)
        while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
        {
            transferManager->RetryDownload(requestPtr);
            requestPtr->WaitUntilFinished();
        }

        ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
        ASSERT_EQ(30u, requestPtr->GetCompletedParts().size());
        ASSERT_TRUE(completionCheckDone);
        ASSERT_TRUE(completedPartsStayedCompletedDuringRetry);
        ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

        ASSERT_EQ(requestPtr->GetBytesTotalSize(), requestPtr->GetBytesTransferred());

        ASSERT_TRUE(AreFilesSame(downloadFileName, cancelTestFileName));
    }
}
}
