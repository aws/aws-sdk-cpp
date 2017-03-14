/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

static const char* TEST_FILE_NAME = "TransferTestFile.txt"; // Also used as key
static const char* TEST_FILE_KEY = "TransferTestFile";

static const char* SMALL_TEST_FILE_NAME = "SmallTransferTestFile.txt";
static const char* SMALL_FILE_KEY = "SmallFileKey";

static const char* MEDIUM_TEST_FILE_NAME = "MedTransferTestFile.txt";
static const char* MEDIUM_FILE_KEY = "MediumFileKey";

static const char* MULTI_PART_CONTENT_FILE = "MultiContentTransferTestFile.txt";
static const char* MULTI_PART_CONTENT_KEY = "MultiContentKey";
static const char* MULTI_PART_CONTENT_TEXT = "This is a test..##";

static const char* CONTENT_TEST_FILE_TEXT = "This is a test..";
static const char* CONTENT_TEST_FILE_NAME = "ContentTransferTestFile.txt";
static const char* CONTENT_FILE_KEY = "ContentFileKey";

static const char* BIG_TEST_FILE_NAME = "BigTransferTestFile.txt";
static const char* BIG_FILE_KEY = "BigFileKey";

static const char* CANCEL_TEST_FILE_NAME = "CancelTestFile.txt";
static const char* CANCEL_FILE_KEY = "CancelFileKey";

static const char* TEST_BUCKET_NAME_BASE = "awstransferintegrationtestbucket";
static const unsigned SMALL_TEST_SIZE = MB5 / 2;
static const unsigned MEDIUM_TEST_SIZE = MB5 * 3 / 2;

static const unsigned CANCEL_TEST_SIZE = MB5 * 30;

static const unsigned PARTS_IN_MEDIUM_TEST = 2;

static const unsigned PARTS_IN_BIG_TEST = 15;
static const unsigned BIG_TEST_SIZE = MB5 * PARTS_IN_BIG_TEST;
static const char* testString = "S3 MultiPart upload Test File ";
static const uint32_t testStrLen = static_cast<uint32_t>(strlen(testString));
static const uint32_t TEST_WAIT_TIMEOUT = 10;

static const char* NONSENSE_FILE_NAME = "blahblahblahblaherfsadf";

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
            testFile.open(fileName.c_str());
            testFile << putString;

            testFile.close();
        }

        ScopedTestFile(const Aws::String& fileName, unsigned fileSize, const Aws::String& putString) :
            m_fileName(fileName)
        {
            Aws::OFStream testFile;
            testFile.open(fileName.c_str());
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

class TransferTests : public ::testing::Test
{
public:

    static std::shared_ptr<S3Client> m_s3Client;

protected:

    static Aws::String GetTestBucketName()
    {
        return Aws::Testing::GetAwsResourcePrefix() + TEST_BUCKET_NAME_BASE;
    }

    static bool AreFilesSame(const Aws::String& fileName, const Aws::String& fileName2)
    {
        Aws::FStream inFile1(fileName.c_str(), std::ios::binary | std::ios::in);
        Aws::FStream inFile2(fileName2.c_str(), std::ios::binary | std::ios::in);        

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
                return Aws::New<Aws::FStream>(ALLOCATION_TAG, downloadFileName.c_str(), std::ios_base::out | std::ios_base::in | std::ios_base::binary | std::ios_base::trunc);
            });

            ASSERT_EQ(true, downloadPtr->ShouldContinue());
            ASSERT_EQ(TransferDirection::DOWNLOAD, downloadPtr->GetTransferDirection());
            downloadPtr->WaitUntilFinished();

            ASSERT_EQ(TransferStatus::COMPLETED, downloadPtr->GetStatus());
            ASSERT_EQ(0u, downloadPtr->GetFailedParts().size());
            ASSERT_EQ(0u, downloadPtr->GetPendingParts().size());

            auto fileStream = Aws::MakeShared<Aws::FStream>(ALLOCATION_TAG, sourceFileName.c_str(), std::ios_base::in | std::ios_base::binary);
            ASSERT_TRUE(fileStream->good());

            fileStream->seekg(0, std::ios_base::end);
            size_t sourceLength = static_cast<size_t>(fileStream->tellg());
            fileStream->close();
            fileStream = nullptr;

            ASSERT_EQ(downloadPtr->GetBytesTotalSize(), sourceLength);
            ASSERT_EQ(downloadPtr->GetBytesTransferred(), sourceLength);

            ASSERT_STREQ(contentType.c_str(), downloadPtr->GetContentType().c_str());

            ASSERT_TRUE(AreFilesSame(downloadFileName, sourceFileName));

            ASSERT_TRUE(metadata == downloadPtr->GetMetadata());
        }

        Aws::FileSystem::RemoveFileIfExists(downloadFileName.c_str());
    }

    static void SetUpTestCase()
    {
        // Create a client
        ClientConfiguration config;
        config.scheme = Scheme::HTTP;
        config.connectTimeoutMs = 3000;
        config.requestTimeoutMs = 60000;

        m_s3Client = Aws::MakeShared<S3Client>(ALLOCATION_TAG, config, false);       

        DeleteBucket(GetTestBucketName());
        
        CreateBucketRequest createBucket;
        createBucket.WithBucket(GetTestBucketName())
            .WithACL(BucketCannedACL::private_);
        
        auto createBucketOutcome = m_s3Client->CreateBucket(createBucket);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());

        auto testDirectory = GetTestFilesDirectory();

        Aws::FileSystem::DeepDeleteDirectory(GetTestFilesDirectory().c_str());
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
        while (checkForObjectsCount++ < TEST_WAIT_TIMEOUT)
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
        std::this_thread::sleep_for(std::chrono::seconds(TEST_WAIT_TIMEOUT));
        AbortMultiPartUpload(GetTestBucketName(), BIG_FILE_KEY);
        DeleteBucket(GetTestBucketName());

        Aws::FileSystem::DeepDeleteDirectory(GetTestFilesDirectory().c_str());

        m_s3Client = nullptr;
    } 


};

std::shared_ptr<S3Client> TransferTests::m_s3Client(nullptr);

TEST_F(TransferTests, TransferManager_SinglePartUploadTest)
{
    Aws::String testFileName = MakeFilePath( TEST_FILE_NAME );
    ScopedTestFile testFile(testFileName, MB5, testString);

    if (EmptyBucket(GetTestBucketName()))
    {
        WaitForBucketToEmpty(GetTestBucketName());
    }
    
    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(GetTestBucketName());
    getObjectRequest.SetKey(TEST_FILE_NAME);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    TransferManagerConfiguration transferManagerConfig;
    transferManagerConfig.s3Client = m_s3Client;
    TransferManager transferManager(transferManagerConfig);

    // Test with default behavior of using file name as key
    auto requestPtr = transferManager.UploadFile(testFileName, GetTestBucketName(), TEST_FILE_KEY, 
                                                                        "text/plain", Aws::Map<Aws::String, Aws::String>());
    
    ASSERT_EQ(true, requestPtr->ShouldContinue());
    ASSERT_EQ(TransferDirection::UPLOAD, requestPtr->GetTransferDirection());
    ASSERT_STREQ(testFileName.c_str(), requestPtr->GetTargetFilePath().c_str());
    requestPtr->WaitUntilFinished();
    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(1u, requestPtr->GetCompletedParts().size()); // Should be just under 5 megs
    ASSERT_EQ(0u, requestPtr->GetFailedParts().size());
    ASSERT_EQ(0u, requestPtr->GetPendingParts().size());
    ASSERT_EQ(0u, requestPtr->GetQueuedParts().size());

    ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

    uint64_t fileSize = requestPtr->GetBytesTotalSize();
    ASSERT_TRUE(fileSize == (MB5 / testStrLen * testStrLen));
    ASSERT_TRUE(fileSize == requestPtr->GetBytesTransferred());

    HeadObjectRequest headObjectRequest;
    headObjectRequest.WithBucket(GetTestBucketName())
        .WithKey(TEST_FILE_KEY);

    ASSERT_TRUE(m_s3Client->HeadObject(headObjectRequest).IsSuccess());

    VerifyUploadedFile(transferManager,
                       testFileName,
                       GetTestBucketName(),
                       TEST_FILE_KEY,
                       "text/plain",
                       Aws::Map<Aws::String, Aws::String>());
}


TEST_F(TransferTests, TransferManager_SmallTest)
{
    Aws::String smallTestFileName = MakeFilePath( SMALL_TEST_FILE_NAME );
    ScopedTestFile testFile(smallTestFileName, SMALL_TEST_SIZE, testString);

    if (EmptyBucket(GetTestBucketName()))
    {
        WaitForBucketToEmpty(GetTestBucketName());
    }

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(GetTestBucketName());
    getObjectRequest.SetKey(SMALL_FILE_KEY);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    ListMultipartUploadsRequest listMultipartRequest;
    listMultipartRequest.SetBucket(GetTestBucketName());

    AWS_LOGSTREAM_DEBUG( "TransferTests", "*******************************")


    TransferManagerConfiguration transferManagerConfig;
    transferManagerConfig.s3Client = m_s3Client;
    transferManagerConfig.maxParallelTransfers = 1;
    TransferManager transferManager(transferManagerConfig);

    std::shared_ptr<TransferHandle> requestPtr = transferManager.UploadFile(smallTestFileName, GetTestBucketName(), SMALL_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

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
    ASSERT_TRUE(fileSize == (SMALL_TEST_SIZE / testStrLen * testStrLen));
    ASSERT_TRUE(fileSize == requestPtr->GetBytesTransferred());

    HeadObjectRequest headObjectRequest;
    headObjectRequest.WithBucket(GetTestBucketName())
        .WithKey(SMALL_FILE_KEY);

    auto outcome = m_s3Client->HeadObject(headObjectRequest);

    ASSERT_TRUE(outcome.IsSuccess());
    ASSERT_STREQ(requestPtr->GetContentType().c_str(), outcome.GetResult().GetContentType().c_str());

    VerifyUploadedFile(transferManager,
                       smallTestFileName,
                       GetTestBucketName(),
                       SMALL_FILE_KEY,
                       "text/plain",
                       Aws::Map<Aws::String, Aws::String>());
}


TEST_F(TransferTests, TransferManager_ContentTest)
{
    Aws::String contentTestFileName = MakeFilePath( CONTENT_TEST_FILE_NAME );
    ScopedTestFile testFile(contentTestFileName, CONTENT_TEST_FILE_TEXT);

    if (EmptyBucket(GetTestBucketName()))
    {
        WaitForBucketToEmpty(GetTestBucketName());
    }

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(GetTestBucketName());
    getObjectRequest.SetKey(CONTENT_FILE_KEY);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    ListMultipartUploadsRequest listMultipartRequest;
    listMultipartRequest.SetBucket(GetTestBucketName());

    TransferManagerConfiguration transferManagerConfig;
    transferManagerConfig.s3Client = m_s3Client;
    TransferManager transferManager(transferManagerConfig);

    std::shared_ptr<TransferHandle> requestPtr = 
            transferManager.UploadFile(contentTestFileName, GetTestBucketName(), CONTENT_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

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
    ASSERT_TRUE(fileSize == strlen(CONTENT_TEST_FILE_TEXT));
    ASSERT_TRUE(fileSize == requestPtr->GetBytesTransferred());

    HeadObjectRequest headObjectRequest;
    headObjectRequest.WithBucket(GetTestBucketName())
        .WithKey(CONTENT_FILE_KEY);

    ASSERT_TRUE(m_s3Client->HeadObject(headObjectRequest).IsSuccess());

    VerifyUploadedFile(transferManager,
                       contentTestFileName,
                       GetTestBucketName(),
                       CONTENT_FILE_KEY,
                       "text/plain",
                       Aws::Map<Aws::String, Aws::String>());
}

TEST_F(TransferTests, TransferManager_DirectoryUploadAndDownloadTest)
{
    auto uploadDir = Aws::FileSystem::Join(GetTestFilesDirectory(), "dirUpload");
    ASSERT_TRUE(Aws::FileSystem::CreateDirectoryIfNotExists(uploadDir.c_str()));
    auto smallTestFileName = Aws::FileSystem::Join(uploadDir, SMALL_TEST_FILE_NAME);
    auto contentTestFileName = Aws::FileSystem::Join(uploadDir, CONTENT_TEST_FILE_NAME);
    auto nestedDirectory = Aws::FileSystem::Join(uploadDir, "nested");
    ASSERT_TRUE(Aws::FileSystem::CreateDirectoryIfNotExists(nestedDirectory.c_str()));
    auto nestedFileName = Aws::FileSystem::Join(nestedDirectory, "nestedFile");

    ScopedTestFile smallFile(smallTestFileName, SMALL_TEST_SIZE, testString);
    ScopedTestFile contentFile(contentTestFileName, CONTENT_TEST_FILE_TEXT);
    ScopedTestFile nestedFile(nestedFileName, CONTENT_TEST_FILE_TEXT);

    if (EmptyBucket(GetTestBucketName()))
    {
        WaitForBucketToEmpty(GetTestBucketName());
    }    

    Aws::Vector<std::shared_ptr<TransferHandle>> directoryUploads;
    Aws::Vector<std::shared_ptr<TransferHandle>> directoryDownloads;
    std::condition_variable directoryUploadSignal;
    std::condition_variable directoryDownloadSignal;
    std::mutex semaphoreLock;

    auto transferInitCallback = [&](const TransferManager*, const std::shared_ptr<TransferHandle>& handle) 
        { 
            std::lock_guard<std::mutex> m(semaphoreLock);

            if(handle->GetTransferDirection() == TransferDirection::UPLOAD)
            {
                directoryUploads.push_back(handle); 

                if (directoryUploads.size() == 3)
                {
                    directoryUploadSignal.notify_one();
                }
            }
            else
            {
                directoryDownloads.push_back(handle);

                if (directoryDownloads.size() == 3)
                {
                    directoryDownloadSignal.notify_one();
                }
            }
        };

    TransferManagerConfiguration transferManagerConfig;
    transferManagerConfig.s3Client = m_s3Client;
    transferManagerConfig.transferInitiatedCallback = transferInitCallback;
    TransferManager transferManager(transferManagerConfig);

    transferManager.UploadDirectory(uploadDir, GetTestBucketName(), "nestedTest", Aws::Map<Aws::String, Aws::String>());

    {
        std::unique_lock<std::mutex> locker(semaphoreLock);
        directoryUploadSignal.wait(locker);
    }

    ASSERT_EQ(3u, directoryUploads.size());
    Aws::Set<Aws::String> pathsUploading = { smallTestFileName, contentTestFileName, nestedFileName };

    for (auto handle : directoryUploads)
    {
        ASSERT_TRUE(handle->ShouldContinue());
        ASSERT_NE(pathsUploading.end(), pathsUploading.find(handle->GetTargetFilePath()));
        ASSERT_EQ(TransferDirection::UPLOAD, handle->GetTransferDirection());
        handle->WaitUntilFinished();
        ASSERT_EQ(TransferStatus::COMPLETED, handle->GetStatus());

        HeadObjectRequest headObjectRequest;
        headObjectRequest.WithBucket(GetTestBucketName())
            .WithKey(handle->GetKey());

        ASSERT_TRUE(m_s3Client->HeadObject(headObjectRequest).IsSuccess());

        VerifyUploadedFile(transferManager,
            handle->GetTargetFilePath(),
            GetTestBucketName(),
            handle->GetKey(),
            "binary/octet-stream",
            Aws::Map<Aws::String, Aws::String>());
    }  
    
    auto downloadDir = Aws::FileSystem::Join(GetTestFilesDirectory(), "dirDownload");
    transferManager.DownloadToDirectory(downloadDir, GetTestBucketName(), "nestedTest");

    {
        std::unique_lock<std::mutex> locker(semaphoreLock);
        directoryDownloadSignal.wait(locker);
    }

    ASSERT_EQ(3u, directoryDownloads.size());
    
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
}

// Test of a basic multi part upload - 7.5 megs
TEST_F(TransferTests, TransferManager_MediumTest)
{
    Aws::String mediumTestFileName = MakeFilePath( MEDIUM_TEST_FILE_NAME );
    ScopedTestFile testFile(mediumTestFileName, MEDIUM_TEST_SIZE, testString);

    if (EmptyBucket(GetTestBucketName()))
    {
        WaitForBucketToEmpty(GetTestBucketName());
    }

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(GetTestBucketName());
    getObjectRequest.SetKey(MEDIUM_FILE_KEY);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    TransferManagerConfiguration transferManagerConfig;
    transferManagerConfig.s3Client = m_s3Client;

    TransferManager transferManager(transferManagerConfig);

    std::shared_ptr<TransferHandle> requestPtr = transferManager.UploadFile(mediumTestFileName, GetTestBucketName(), MEDIUM_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

    ASSERT_EQ(true, requestPtr->ShouldContinue());
    ASSERT_EQ(TransferDirection::UPLOAD, requestPtr->GetTransferDirection());
    ASSERT_STREQ(mediumTestFileName.c_str(), requestPtr->GetTargetFilePath().c_str());    
    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because a the put object failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager.RetryUpload(mediumTestFileName, requestPtr);
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
    ASSERT_TRUE(fileSize == MEDIUM_TEST_SIZE / testStrLen * testStrLen);
    ASSERT_TRUE(fileSize == requestPtr->GetBytesTransferred());

    HeadObjectRequest headObjectRequest;
    headObjectRequest.WithBucket(GetTestBucketName())
        .WithKey(MEDIUM_FILE_KEY);

    auto outcome = m_s3Client->HeadObject(headObjectRequest);
    ASSERT_TRUE(outcome.IsSuccess());
    ASSERT_STREQ(requestPtr->GetContentType().c_str(), outcome.GetResult().GetContentType().c_str());

    VerifyUploadedFile(transferManager,
                       mediumTestFileName,
                       GetTestBucketName(),
                       MEDIUM_FILE_KEY,
                       "text/plain",
                       Aws::Map<Aws::String, Aws::String>());
}

TEST_F(TransferTests, TransferManager_BigTest)
{
    Aws::String bigTestFileName = MakeFilePath( BIG_TEST_FILE_NAME );
    ScopedTestFile testFile(bigTestFileName, BIG_TEST_SIZE, testString);

    if (EmptyBucket(GetTestBucketName()))
    {
        WaitForBucketToEmpty(GetTestBucketName());
    }

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(GetTestBucketName());
    getObjectRequest.SetKey(BIG_FILE_KEY);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    TransferManagerConfiguration transferManagerConfig;
    transferManagerConfig.s3Client = m_s3Client;

    TransferManager transferManager(transferManagerConfig);
    std::shared_ptr<TransferHandle> requestPtr = transferManager.UploadFile(bigTestFileName, GetTestBucketName(), BIG_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

    ASSERT_EQ(true, requestPtr->ShouldContinue());
    ASSERT_EQ(TransferDirection::UPLOAD, requestPtr->GetTransferDirection());
    ASSERT_STREQ(bigTestFileName.c_str(), requestPtr->GetTargetFilePath().c_str());
    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because an upload part failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager.RetryUpload(bigTestFileName.c_str(), requestPtr);
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
    ASSERT_TRUE(fileSize == BIG_TEST_SIZE / testStrLen * testStrLen);
    ASSERT_TRUE(fileSize == requestPtr->GetBytesTransferred());

    HeadObjectRequest headObjectRequest;
    headObjectRequest.WithBucket(GetTestBucketName())
        .WithKey(BIG_FILE_KEY);

    ASSERT_TRUE(m_s3Client->HeadObject(headObjectRequest).IsSuccess());

    VerifyUploadedFile(transferManager,
                       bigTestFileName,
                       GetTestBucketName(),
                       BIG_FILE_KEY,
                       "text/plain",
                       Aws::Map<Aws::String, Aws::String>());
}


TEST_F(TransferTests, TransferManager_CancelAndRetryUploadTest)
{
    Aws::String cancelTestFileName = MakeFilePath( CANCEL_TEST_FILE_NAME );
    ScopedTestFile testFile(cancelTestFileName, CANCEL_TEST_SIZE, testString);

    ListMultipartUploadsRequest listMultipartRequest;
    listMultipartRequest.WithBucket(GetTestBucketName());

    if (EmptyBucket(GetTestBucketName()))
    {
        WaitForBucketToEmpty(GetTestBucketName());
    }

    bool retryInProgress = false;
    bool completedPartsStayedCompletedDuringRetry = true;
    bool completionCheckDone = false;

    TransferManagerConfiguration transferManagerConfig;
    transferManagerConfig.transferStatusUpdatedCallback = 
        [&](const TransferManager*, const TransferHandle& handle)
        {
            if (!retryInProgress && handle.GetCompletedParts().size() >= 15 &&  handle.GetStatus() != TransferStatus::CANCELED)
            {
                const_cast<TransferHandle&>(handle).Cancel();
            }
            else if (retryInProgress)
            {
                if (handle.GetStatus() == TransferStatus::IN_PROGRESS && completedPartsStayedCompletedDuringRetry)
                {
                    completionCheckDone = true;
                    //this should NEVER rise above 15 or we had some completed parts get retried too.
                    completedPartsStayedCompletedDuringRetry = handle.GetPendingParts().size() <= 15; 
                }
            }
        };

    transferManagerConfig.s3Client = m_s3Client;
    TransferManager transferManager(transferManagerConfig);

    std::shared_ptr<TransferHandle> requestPtr = transferManager.UploadFile(cancelTestFileName, GetTestBucketName(), CANCEL_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

    uint64_t fileSize = requestPtr->GetBytesTotalSize();
    ASSERT_EQ(fileSize, CANCEL_TEST_SIZE / testStrLen * testStrLen);
    requestPtr->WaitUntilFinished();

    //if this is the case, the request actually failed before we could cancel it and we need to try again.
    while (requestPtr->GetCompletedParts().size() < 15u)
    {        
        requestPtr = transferManager.RetryUpload(cancelTestFileName, requestPtr); 
        requestPtr->WaitUntilFinished();
    }

    ASSERT_EQ(TransferStatus::CANCELED, requestPtr->GetStatus());    
    ASSERT_TRUE(15u <= requestPtr->GetCompletedParts().size() && requestPtr->GetCompletedParts().size() <= 17u); //some may have been in flight.
    ASSERT_EQ(0u, requestPtr->GetPendingParts().size());
    ASSERT_TRUE(15u >= requestPtr->GetFailedParts().size() && requestPtr->GetFailedParts().size() >= 13u); //some may have been in flight at cancelation time.
    ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

    ListMultipartUploadsOutcome listMultipartOutcome = m_s3Client->ListMultipartUploads(listMultipartRequest);

    EXPECT_TRUE(listMultipartOutcome.IsSuccess());
    ASSERT_EQ(1u, listMultipartOutcome.GetResult().GetUploads().size());

    HeadObjectRequest headObjectRequest;
    headObjectRequest.WithBucket(GetTestBucketName())
        .WithKey(CANCEL_FILE_KEY);

    ASSERT_FALSE(m_s3Client->HeadObject(headObjectRequest).IsSuccess());

    retryInProgress = true;
    requestPtr = transferManager.RetryUpload(cancelTestFileName, requestPtr);
    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because an upload part failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager.RetryUpload(cancelTestFileName, requestPtr);
        requestPtr->WaitUntilFinished();
    }

    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(30u, requestPtr->GetCompletedParts().size());
    ASSERT_TRUE(completionCheckDone);
    ASSERT_TRUE(completedPartsStayedCompletedDuringRetry);
    ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

    ASSERT_TRUE(fileSize == requestPtr->GetBytesTransferred());

    listMultipartOutcome = m_s3Client->ListMultipartUploads(listMultipartRequest);

    EXPECT_TRUE(listMultipartOutcome.IsSuccess());
    ASSERT_EQ(0u, listMultipartOutcome.GetResult().GetUploads().size());

    headObjectRequest.WithBucket(GetTestBucketName())
        .WithKey(CANCEL_FILE_KEY);

    ASSERT_TRUE(m_s3Client->HeadObject(headObjectRequest).IsSuccess());

    VerifyUploadedFile(transferManager,
                       cancelTestFileName,
                       GetTestBucketName(),
                       CANCEL_FILE_KEY,
                       "text/plain",
                       Aws::Map<Aws::String, Aws::String>());
}

TEST_F(TransferTests, TransferManager_AbortAndRetryUploadTest)
{
    Aws::String cancelTestFileName = MakeFilePath( CANCEL_TEST_FILE_NAME );
    ScopedTestFile testFile(cancelTestFileName, CANCEL_TEST_SIZE, testString);

    ListMultipartUploadsRequest listMultipartRequest;
    listMultipartRequest.WithBucket(GetTestBucketName());

    if (EmptyBucket(GetTestBucketName()))
    {
        WaitForBucketToEmpty(GetTestBucketName());
    }

    bool retryInProgress = false;
    bool completedPartsStayedCompletedDuringRetry = true;
    bool completionCheckDone = false;

    std::shared_ptr<TransferHandle> requestPtr(nullptr);

    TransferManagerConfiguration transferManagerConfig;
    transferManagerConfig.transferStatusUpdatedCallback =
        [&](const TransferManager* manager, const TransferHandle& handle)
    {
        if (!retryInProgress && handle.GetCompletedParts().size() >= 15 && handle.GetStatus() != TransferStatus::CANCELED)
        {
            const_cast<TransferManager*>(manager)->AbortMultipartUpload(requestPtr);
        }
        else if (retryInProgress)
        {
            if (handle.GetStatus() == TransferStatus::IN_PROGRESS && completedPartsStayedCompletedDuringRetry)
            {
                completionCheckDone = true;
                //this should NEVER rise above 15 or we had some completed parts get retried too.
                completedPartsStayedCompletedDuringRetry = handle.GetPendingParts().size() <= 15 && handle.GetQueuedParts().size() <= 15;
            }
        }
    };

    transferManagerConfig.s3Client = m_s3Client;
    TransferManager transferManager(transferManagerConfig);
    requestPtr = transferManager.UploadFile(cancelTestFileName, GetTestBucketName(), CANCEL_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

    uint64_t fileSize = requestPtr->GetBytesTotalSize();
    ASSERT_EQ(fileSize, CANCEL_TEST_SIZE / testStrLen * testStrLen);

    requestPtr->WaitUntilFinished();

    //if this is the case, the request actually failed before we could cancel it and we need to try again.
    while (requestPtr->GetCompletedParts().size() < 15u)
    {
        requestPtr = transferManager.RetryUpload(cancelTestFileName, requestPtr);
        requestPtr->WaitUntilFinished();
    }

    ASSERT_EQ(TransferStatus::CANCELED, requestPtr->GetStatus());
    while(requestPtr->GetStatus() != TransferStatus::ABORTED) std::this_thread::sleep_for(std::chrono::seconds(1));
    ASSERT_TRUE(15u <= requestPtr->GetCompletedParts().size() && requestPtr->GetCompletedParts().size() <= 17); //some may have been in flight.
    ASSERT_EQ(0u, requestPtr->GetPendingParts().size());
    ASSERT_TRUE(15u >= requestPtr->GetFailedParts().size() && requestPtr->GetFailedParts().size() >= 13); //some may have been in flight at cancelation time.
    ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

    ListMultipartUploadsOutcome listMultipartOutcome = m_s3Client->ListMultipartUploads(listMultipartRequest);

    EXPECT_TRUE(listMultipartOutcome.IsSuccess());
    ASSERT_EQ(0u, listMultipartOutcome.GetResult().GetUploads().size());

    HeadObjectRequest headObjectRequest;
    headObjectRequest.WithBucket(GetTestBucketName())
        .WithKey(CANCEL_FILE_KEY);

    ASSERT_FALSE(m_s3Client->HeadObject(headObjectRequest).IsSuccess());

    retryInProgress = true;
    std::shared_ptr<TransferHandle> tempPtr = requestPtr;
    requestPtr = transferManager.RetryUpload(cancelTestFileName, tempPtr);
    ASSERT_NE(requestPtr, tempPtr);
    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because an upload part failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager.RetryUpload(cancelTestFileName, requestPtr);
        requestPtr->WaitUntilFinished();
    }

    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(30u, requestPtr->GetCompletedParts().size());
    ASSERT_TRUE(completionCheckDone);
    ASSERT_FALSE(completedPartsStayedCompletedDuringRetry);
    ASSERT_TRUE(fileSize == requestPtr->GetBytesTransferred());

    headObjectRequest.WithBucket(GetTestBucketName())
        .WithKey(CANCEL_FILE_KEY);

    ASSERT_TRUE(m_s3Client->HeadObject(headObjectRequest).IsSuccess());


    VerifyUploadedFile(transferManager,
                       cancelTestFileName,
                       GetTestBucketName(),
                       CANCEL_FILE_KEY,
                       "text/plain",
                       Aws::Map<Aws::String, Aws::String>());
}

TEST_F(TransferTests, TransferManager_MultiPartContentTest)
{
    Aws::String multiPartContentFileName = MakeFilePath( MULTI_PART_CONTENT_FILE );
    ScopedTestFile testFile(multiPartContentFileName, MEDIUM_TEST_SIZE, MULTI_PART_CONTENT_TEXT);

    if (EmptyBucket(GetTestBucketName()))
    {
        WaitForBucketToEmpty(GetTestBucketName());
    }

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(GetTestBucketName());
    getObjectRequest.SetKey(MULTI_PART_CONTENT_KEY);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    TransferManagerConfiguration transferManagerConfig;
    transferManagerConfig.s3Client = m_s3Client;
    TransferManager transferManager(transferManagerConfig);
    
    std::shared_ptr<TransferHandle> requestPtr = transferManager.UploadFile(multiPartContentFileName, GetTestBucketName(), MULTI_PART_CONTENT_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because an upload part failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager.RetryUpload(multiPartContentFileName, requestPtr);
        requestPtr->WaitUntilFinished();
    }

    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(PARTS_IN_MEDIUM_TEST, requestPtr->GetCompletedParts().size()); // > 1 part
    ASSERT_TRUE(requestPtr->GetBytesTotalSize() == requestPtr->GetBytesTransferred());

    VerifyUploadedFile(transferManager,
                       multiPartContentFileName,
                       GetTestBucketName(),
                       MULTI_PART_CONTENT_KEY,
                       "text/plain",
                       Aws::Map<Aws::String, Aws::String>());
}

// Single part upload with metadata specified
TEST_F(TransferTests, TransferManager_SinglePartUploadWithMetadataTest)
{
    Aws::String testFileName = MakeFilePath( TEST_FILE_NAME );
    ScopedTestFile testFile(testFileName, MB5, testString);

    if (EmptyBucket(GetTestBucketName()))
    {
        WaitForBucketToEmpty(GetTestBucketName());
    }

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(GetTestBucketName());
    getObjectRequest.SetKey(TEST_FILE_KEY);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    Aws::Map<Aws::String, Aws::String> metadata;
    metadata["key1"] = "val1";
    metadata["key2"] = "val2";

    TransferManagerConfiguration transferManagerConfig;
    transferManagerConfig.s3Client = m_s3Client;
    TransferManager transferManager(transferManagerConfig);

    std::shared_ptr<TransferHandle> requestPtr = transferManager.UploadFile(testFileName, GetTestBucketName(), TEST_FILE_KEY, "text/plain", metadata);

    requestPtr->WaitUntilFinished();
    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_TRUE(requestPtr->GetBytesTotalSize() == requestPtr->GetBytesTransferred());

    // Check the metadata matches
    HeadObjectRequest headObjectRequest;
    headObjectRequest.SetBucket(GetTestBucketName());
    headObjectRequest.SetKey(TEST_FILE_KEY);

    HeadObjectOutcome headObjectOutcome = m_s3Client->HeadObject(headObjectRequest);
    ASSERT_TRUE(headObjectOutcome.IsSuccess());

    Aws::Map<Aws::String, Aws::String> headObjectMetadata = headObjectOutcome.GetResult().GetMetadata();
    ASSERT_EQ(metadata.size(), headObjectMetadata.size());
    ASSERT_EQ(metadata["key1"], headObjectMetadata["key1"]);
    ASSERT_EQ(metadata["key2"], headObjectMetadata["key2"]);

    VerifyUploadedFile(transferManager,
                       testFileName,
                       GetTestBucketName(),
                       TEST_FILE_KEY,
                       "text/plain",
                       metadata);
}

// Multipart upload with metadata specified
TEST_F(TransferTests, MultipartUploadWithMetadataTest)
{
    Aws::String mediumTestFileName = MakeFilePath( MEDIUM_TEST_FILE_NAME );
    ScopedTestFile testFile(mediumTestFileName, MEDIUM_TEST_SIZE, testString);

    if (EmptyBucket(GetTestBucketName()))
    {
        WaitForBucketToEmpty(GetTestBucketName());
    }

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(GetTestBucketName());
    getObjectRequest.SetKey(MEDIUM_FILE_KEY);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    ListMultipartUploadsRequest listMultipartRequest;

    listMultipartRequest.SetBucket(GetTestBucketName());

    Aws::Map<Aws::String, Aws::String> metadata;
    metadata["key1"] = "val1";
    metadata["key2"] = "val2";
    
    TransferManagerConfiguration transferManagerConfig;
    transferManagerConfig.s3Client = m_s3Client;
    TransferManager transferManager(transferManagerConfig);

    std::shared_ptr<TransferHandle> requestPtr = transferManager.UploadFile(mediumTestFileName, GetTestBucketName(), MEDIUM_FILE_KEY, "text/plain", metadata);

    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because an upload part failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager.RetryUpload(mediumTestFileName, requestPtr);
        requestPtr->WaitUntilFinished();
    }
    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_TRUE(requestPtr->GetBytesTotalSize() == requestPtr->GetBytesTransferred());

    // Check the metadata matches
    HeadObjectRequest headObjectRequest;
    headObjectRequest.SetBucket(GetTestBucketName());
    headObjectRequest.SetKey(MEDIUM_FILE_KEY);

    HeadObjectOutcome headObjectOutcome = m_s3Client->HeadObject(headObjectRequest);
    ASSERT_TRUE(headObjectOutcome.IsSuccess());

    Aws::Map<Aws::String, Aws::String> headObjectMetadata = headObjectOutcome.GetResult().GetMetadata();
    ASSERT_EQ(metadata.size(), headObjectMetadata.size());
    ASSERT_EQ(metadata["key1"], headObjectMetadata["key1"]);
    ASSERT_EQ(metadata["key2"], headObjectMetadata["key2"]);

    VerifyUploadedFile(transferManager,
                       mediumTestFileName,
                       GetTestBucketName(),
                       MEDIUM_FILE_KEY,
                       "text/plain",
                       metadata);
}

TEST_F(TransferTests, BadFileTest)
{
    TransferManagerConfiguration transferManagerConfig;
    transferManagerConfig.s3Client = m_s3Client;
    TransferManager transferManager(transferManagerConfig);

    std::shared_ptr<TransferHandle> requestPtr = transferManager.UploadFile(MakeFilePath( NONSENSE_FILE_NAME ), GetTestBucketName(), MEDIUM_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());
    requestPtr->WaitUntilFinished();

    ASSERT_EQ(TransferStatus::FAILED, requestPtr->GetStatus());
}

TEST_F(TransferTests, TransferManager_CancelAndRetryDownloadTest)
{
    Aws::String cancelTestFileName = MakeFilePath( CANCEL_TEST_FILE_NAME );;
    ScopedTestFile testFile(cancelTestFileName, CANCEL_TEST_SIZE, testString);

    if (EmptyBucket(GetTestBucketName()))
    {
        WaitForBucketToEmpty(GetTestBucketName());
    }

    {
        TransferManagerConfiguration uploadConfig;
        uploadConfig.s3Client = m_s3Client;
        TransferManager transferManager(uploadConfig);

        std::shared_ptr<TransferHandle> requestPtr = transferManager.UploadFile(cancelTestFileName, GetTestBucketName(), CANCEL_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

        uint64_t fileSize = requestPtr->GetBytesTotalSize();
        ASSERT_EQ(fileSize, CANCEL_TEST_SIZE / testStrLen * testStrLen);
        requestPtr->WaitUntilFinished();

        ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus()); 
    }

    {
        bool retryInProgress = false;
        bool completedPartsStayedCompletedDuringRetry = true;
        bool completionCheckDone = false;

        TransferManagerConfiguration downloadConfig;
        downloadConfig.s3Client = m_s3Client;
        downloadConfig.transferStatusUpdatedCallback = 
            [&](const TransferManager*, const TransferHandle& handle)
            {
                if (!retryInProgress && handle.GetCompletedParts().size() >= 15 &&  handle.GetStatus() != TransferStatus::CANCELED)
                {
                    const_cast<TransferHandle&>(handle).Cancel();
                }
                else if (retryInProgress)
                {
                    if (handle.GetStatus() == TransferStatus::IN_PROGRESS && completedPartsStayedCompletedDuringRetry)
                    {
                        completionCheckDone = true;
                        //this should NEVER rise above 15 or we had some completed parts get retried too.
                        completedPartsStayedCompletedDuringRetry = handle.GetPendingParts().size() <= 15; 
                    }
                }
            };

        TransferManager transferManager(downloadConfig);
        std::shared_ptr<TransferHandle> requestPtr = transferManager.DownloadFile(GetTestBucketName(), CANCEL_FILE_KEY, MakeDownloadFileName(cancelTestFileName));

        requestPtr->WaitUntilFinished();

        //if this is the case, the request actually failed before we could cancel it and we need to try again.
        while (requestPtr->GetCompletedParts().size() < 15u)
        {        
            requestPtr = transferManager.RetryDownload(requestPtr); 
            requestPtr->WaitUntilFinished();
        }

        ASSERT_EQ(TransferStatus::CANCELED, requestPtr->GetStatus());    
        ASSERT_TRUE(15u <= requestPtr->GetCompletedParts().size()); 
        ASSERT_EQ(0u, requestPtr->GetPendingParts().size());
        ASSERT_TRUE(15u >= requestPtr->GetFailedParts().size()); //some may have been in flight at cancelation time.
        ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

        retryInProgress = true;
        requestPtr = transferManager.RetryDownload(requestPtr);
        requestPtr->WaitUntilFinished();

        size_t retries = 0;
        //just make sure we don't fail because a download part failed. (e.g. network problems or interuptions)
        while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
        {
            transferManager.RetryDownload(requestPtr);
            requestPtr->WaitUntilFinished();
        }

        ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
        ASSERT_EQ(30u, requestPtr->GetCompletedParts().size());
        ASSERT_TRUE(completionCheckDone);
        ASSERT_TRUE(completedPartsStayedCompletedDuringRetry);
        ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

        ASSERT_TRUE(requestPtr->GetBytesTotalSize() == requestPtr->GetBytesTransferred());

        ASSERT_TRUE(AreFilesSame(MakeDownloadFileName(cancelTestFileName), cancelTestFileName));
    }
}
/*
TEST_F(TransferTests, TransferManager_MediumVersionedTest)
{
    {
        VersioningConfiguration versionConfig;
        versionConfig.SetStatus(Aws::S3::Model::BucketVersioningStatus::Enabled);

        PutBucketVersioningRequest versionBucketRequest;
        versionBucketRequest.SetBucket(GetTestBucketName());
        versionBucketRequest.SetVersioningConfiguration(versionConfig);

        auto setVersioningOutcome = m_s3Client->PutBucketVersioning(versionBucketRequest);
        EXPECT_TRUE(setVersioningOutcome.IsSuccess());
    }

    Aws::String mediumTestFileName = MakeFilePath( MEDIUM_TEST_FILE_NAME );
    ScopedTestFile testFile(mediumTestFileName, MEDIUM_TEST_SIZE, testString);

    if (EmptyBucket(GetTestBucketName()))
    {
        WaitForBucketToEmpty(GetTestBucketName());
    }

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(GetTestBucketName());
    getObjectRequest.SetKey(MEDIUM_FILE_KEY);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    TransferManagerConfiguration transferManagerConfig;
    transferManagerConfig.s3Client = m_s3Client;

    TransferManager transferManager(transferManagerConfig);

    uint32_t uploadCount = 0;
    while(uploadCount < 3)
    {
        std::shared_ptr<TransferHandle> requestPtr = transferManager.UploadFile(mediumTestFileName, GetTestBucketName(), MEDIUM_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

        ASSERT_EQ(true, requestPtr->ShouldContinue());
        ASSERT_EQ(TransferDirection::UPLOAD, requestPtr->GetTransferDirection());
        ASSERT_STREQ(mediumTestFileName.c_str(), requestPtr->GetTargetFilePath().c_str());    
        requestPtr->WaitUntilFinished();

        size_t retries = 0;
        //just make sure we don't fail because a the put object failed. (e.g. network problems or interuptions)
        while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
        {
            transferManager.RetryUpload(mediumTestFileName, requestPtr);
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
        ASSERT_TRUE(fileSize == MEDIUM_TEST_SIZE / testStrLen * testStrLen);
        ASSERT_TRUE(fileSize == requestPtr->GetBytesTransferred());

        HeadObjectRequest headObjectRequest;
        headObjectRequest.WithBucket(GetTestBucketName())
            .WithKey(MEDIUM_FILE_KEY);

        auto outcome = m_s3Client->HeadObject(headObjectRequest);
        ASSERT_TRUE(outcome.IsSuccess());
        ASSERT_STREQ(requestPtr->GetContentType().c_str(), outcome.GetResult().GetContentType().c_str());

        uploadCount++;
    }

    VerifyUploadedFile(transferManager,
                       mediumTestFileName,
                       GetTestBucketName(),
                       MEDIUM_FILE_KEY,
                       "text/plain",
                       Aws::Map<Aws::String, Aws::String>());

    {
        VersioningConfiguration versionConfig;
        versionConfig.SetStatus(Aws::S3::Model::BucketVersioningStatus::Suspended);

        PutBucketVersioningRequest versionBucketRequest;
        versionBucketRequest.SetBucket(GetTestBucketName());
        versionBucketRequest.SetVersioningConfiguration(versionConfig);

        auto setVersioningOutcome = m_s3Client->PutBucketVersioning(versionBucketRequest);
        EXPECT_TRUE(setVersioningOutcome.IsSuccess());
    }
}
*/
}
