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
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/platform/Platform.h>

#include <aws/transfer/TransferManager.h>
#include <iostream>
#include <fstream>
#include <time.h>

using namespace Aws::S3;
using namespace Aws::S3::Model;
using namespace Aws::Transfer;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Utils;

static const char* TEST_FILE_NAME = "TransferTestFile.txt"; // Also used as key

static const char* SMALL_TEST_FILE_NAME = "SmallTransferTestFile.txt";
static const char* SMALL_FILE_KEY = "SmallFileKey";

static const char* MEDIUM_TEST_FILE_NAME = "MedTransferTestFile.txt";
static const char* MEDIUM_FILE_KEY = "MediumFileKey";

static const char* MULTI_PART_CONTENT_FILE = "MultiContentTransferTestFile.txt";
static const char* MULTI_PART_CONTENT_KEY = "MultiContentKey";
static const char* MULTI_PART_CONTENT_TEXT = "This is a test..##";
static const char* MULTI_PART_CONTENT_DOWNLOAD = "MultiContentDownloadTransferTestFile.txt";

static const char* CONTENT_TEST_FILE_TEXT = "This is a test..";
static const char* CONTENT_TEST_FILE_NAME = "ContentTransferTestFile.txt";
static const char* CONTENT_TEST_DOWNLOAD_FILE_NAME = "ContentTransferTestFileDownload.txt";
static const char* CONTENT_FILE_KEY = "ContentFileKey";

static const char* BIG_TEST_FILE_NAME = "BigTransferTestFile.txt";
static const char* BIG_FILE_KEY = "BigFileKey";

static const char* CANCEL_TEST_FILE_NAME = "CancelTestFile.txt";
static const char* CANCEL_FILE_KEY = "CancelFileKey";

static const char* TEST_BUCKET_NAME_BASE = "transferintegrationtestbucket";
static const unsigned SMALL_TEST_SIZE = MB5 / 2;
static const unsigned MEDIUM_TEST_SIZE = MB5 * 3 / 2;

static const unsigned CANCEL_TEST_SIZE = MB5 * 30;

static const unsigned PARTS_IN_MEDIUM_TEST = 2;

static const unsigned PARTS_IN_BIG_TEST = 15;
static const unsigned BIG_TEST_SIZE = MB5 * PARTS_IN_BIG_TEST;
static const char* testString = "S3 MultiPart upload Test File ";
static const uint32_t testStrLen = static_cast<uint32_t>(strlen(testString));
static const uint32_t TEST_WAIT_TIMEOUT = 10;

namespace 
{
static const char* ALLOCATION_TAG = "TransferTests";

class TransferTests : public ::testing::Test
{
public:

    static std::shared_ptr<S3Client> m_s3Client;

    static Aws::String m_testFileName;
    static Aws::String m_smallTestFileName;
    static Aws::String m_bigTestFileName;
    static Aws::String m_mediumTestFileName;
    static Aws::String m_contentTestFileName;
    static Aws::String m_cancelTestFileName;
    static Aws::String m_multiPartContentFile;

    static Aws::String m_contentTestDownloadFileName;
    static Aws::String m_multiPartContentDownload;

protected:

    static void CreateTestFile(const Aws::String& fileName, unsigned fileSize, const Aws::String& putString)
    {
        Aws::OFStream testFile;
        testFile.open(fileName.c_str());
        auto putStringLength = putString.length();
        for (size_t i = putStringLength; i <= fileSize; i += putStringLength)
        {
            testFile << putString;
        }
        testFile.close();
    }

    static void CreateTestFile(const Aws::String& fileName, const Aws::String& putString)
    {
        Aws::OFStream testFile;
        testFile.open(fileName.c_str());
        testFile << putString;

        testFile.close();
    }

    static const char* GetTestBucketName()
    {
        static Aws::String randomizedBucketName;
        if (randomizedBucketName.length())
        {
            return randomizedBucketName.c_str();
        }
        srand(static_cast<unsigned int>(time(NULL)));

        static const uint32_t cNumExtraChars = 5;
        static const uint32_t cLettersToRandomize = 26;
        randomizedBucketName = TEST_BUCKET_NAME_BASE;
        for (uint32_t i = 0; i < cNumExtraChars; ++i)
        {
            randomizedBucketName += static_cast<char>('a' + rand() % cLettersToRandomize);
        }
        return randomizedBucketName.c_str();
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

    static void SetUpTestCase()
    {
        // Create a client
        ClientConfiguration config;
        config.scheme = Scheme::HTTP;
        config.connectTimeoutMs = 3000;
        config.requestTimeoutMs = 10000;

        m_s3Client = Aws::MakeShared<S3Client>(ALLOCATION_TAG, config, false);       

        DeleteBucket(GetTestBucketName());
        
        CreateBucketRequest createBucket;
        createBucket.WithBucket(GetTestBucketName())
            .WithACL(BucketCannedACL::private_);
        
        auto createBucketOutcome = m_s3Client->CreateBucket(createBucket);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());

	    m_testFileName = MakeFilePath( TEST_FILE_NAME );
        m_smallTestFileName = MakeFilePath( SMALL_TEST_FILE_NAME );
        m_bigTestFileName = MakeFilePath( BIG_TEST_FILE_NAME );
        m_mediumTestFileName = MakeFilePath( MEDIUM_TEST_FILE_NAME );
        m_contentTestFileName = MakeFilePath( CONTENT_TEST_FILE_NAME );
        m_cancelTestFileName = MakeFilePath( CANCEL_TEST_FILE_NAME );
        m_multiPartContentFile = MakeFilePath( MULTI_PART_CONTENT_FILE );

        CreateTestFile(m_testFileName, MB5, testString);
        CreateTestFile(m_smallTestFileName, SMALL_TEST_SIZE, testString);
        CreateTestFile(m_bigTestFileName, BIG_TEST_SIZE, testString);
        CreateTestFile(m_mediumTestFileName, MEDIUM_TEST_SIZE, testString);
        CreateTestFile(m_contentTestFileName, CONTENT_TEST_FILE_TEXT);
        CreateTestFile(m_cancelTestFileName, CANCEL_TEST_SIZE, testString);
        CreateTestFile(m_multiPartContentFile, MEDIUM_TEST_SIZE, MULTI_PART_CONTENT_TEXT);

        m_contentTestDownloadFileName = MakeFilePath( CONTENT_TEST_DOWNLOAD_FILE_NAME );
        m_multiPartContentDownload = MakeFilePath( MULTI_PART_CONTENT_DOWNLOAD );
    }

    static Aws::String MakeFilePath(const char* fileName)
    {
	#ifdef __ANDROID__
            return Aws::Platform::GetCacheDirectory() + Aws::String( fileName );
	#else
	    return Aws::String( fileName );
        #endif // __ANDROID__
    }

    static bool EmptyBucket(const Aws::String& bucketName)
    {
        ListObjectsRequest listObjectsRequest;
        listObjectsRequest.SetBucket(bucketName);

        ListObjectsOutcome listObjectsOutcome = m_s3Client->ListObjects(listObjectsRequest);

        if (!listObjectsOutcome.IsSuccess())
            return false;

        for (const auto& object : listObjectsOutcome.GetResult().GetContents())
        {
            DeleteObjectRequest deleteObjectRequest;
            deleteObjectRequest.SetBucket(bucketName);
            deleteObjectRequest.SetKey(object.GetKey());
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
        Aws::FileSystem::RemoveFileIfExists(m_testFileName.c_str());
        Aws::FileSystem::RemoveFileIfExists(m_smallTestFileName.c_str());
        Aws::FileSystem::RemoveFileIfExists(m_contentTestFileName.c_str());
        Aws::FileSystem::RemoveFileIfExists(m_bigTestFileName.c_str());
        Aws::FileSystem::RemoveFileIfExists(m_mediumTestFileName.c_str());
        Aws::FileSystem::RemoveFileIfExists(m_contentTestDownloadFileName.c_str());
        Aws::FileSystem::RemoveFileIfExists(m_cancelTestFileName.c_str());
        Aws::FileSystem::RemoveFileIfExists(m_multiPartContentFile.c_str());
        Aws::FileSystem::RemoveFileIfExists(m_multiPartContentDownload.c_str());

        const uint32_t cConcurrentTestDownloads = 5;
        for (uint32_t i = 1; i <= cConcurrentTestDownloads; ++i)
        {
            Aws::String testFile(m_contentTestDownloadFileName);
            testFile += StringUtils::to_string(i);
            Aws::FileSystem::RemoveFileIfExists(testFile.c_str());
        }
        const uint32_t cConcurrentBigTestDownloads = 3;
        for (uint32_t i = 1; i <= cConcurrentBigTestDownloads; ++i)
        {
            Aws::String testFile(m_bigTestFileName);
            testFile += StringUtils::to_string(i);
            Aws::FileSystem::RemoveFileIfExists(testFile.c_str());
        }
        m_s3Client = nullptr;
    } 

};

std::shared_ptr<S3Client> TransferTests::m_s3Client(nullptr);

Aws::String TransferTests::m_testFileName;
Aws::String TransferTests::m_smallTestFileName;
Aws::String TransferTests::m_bigTestFileName;
Aws::String TransferTests::m_mediumTestFileName;
Aws::String TransferTests::m_contentTestFileName;
Aws::String TransferTests::m_cancelTestFileName;
Aws::String TransferTests::m_multiPartContentFile;
Aws::String TransferTests::m_contentTestDownloadFileName;
Aws::String TransferTests::m_multiPartContentDownload;

TEST_F(TransferTests, TransferManager_SinglePartUploadTest)
{
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
    auto requestPtr = transferManager.UploadFile(m_testFileName, GetTestBucketName(), TEST_FILE_NAME, 
                                                                        "text/plain", Aws::Map<Aws::String, Aws::String>());
    
    ASSERT_EQ(true, requestPtr->ShouldContinue());
    ASSERT_EQ(TransferDirection::UPLOAD, requestPtr->GetTransferDirection());
    ASSERT_STREQ(m_testFileName.c_str(), requestPtr->GetTargetFilePath().c_str());
    requestPtr->WaitUntilFinished();
    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(1u, requestPtr->GetCompletedParts().size()); // Should be just under 5 megs
    ASSERT_EQ(0u, requestPtr->GetFailedParts().size());
    ASSERT_EQ(0u, requestPtr->GetPendingParts().size());
    ASSERT_EQ(0u, requestPtr->GetQueuedParts().size());

    ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

    uint64_t fileSize = requestPtr->GetBytesTotalSize();
    ASSERT_TRUE(fileSize == (MB5 / testStrLen * testStrLen));

    HeadObjectRequest headObjectRequest;
    headObjectRequest.WithBucket(GetTestBucketName())
        .WithKey(TEST_FILE_NAME);

    ASSERT_TRUE(m_s3Client->HeadObject(headObjectRequest).IsSuccess());
}

TEST_F(TransferTests, TransferManager_SmallTest)
{
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

    TransferManagerConfiguration transferManagerConfig;
    transferManagerConfig.s3Client = m_s3Client;
    TransferManager transferManager(transferManagerConfig);

    std::shared_ptr<TransferHandle> requestPtr = transferManager.UploadFile(SMALL_TEST_FILE_NAME, GetTestBucketName(), SMALL_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

    ASSERT_EQ(true, requestPtr->ShouldContinue());
    ASSERT_EQ(TransferDirection::UPLOAD, requestPtr->GetTransferDirection());
    ASSERT_STREQ(SMALL_TEST_FILE_NAME, requestPtr->GetTargetFilePath().c_str());
    requestPtr->WaitUntilFinished();
    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(1u, requestPtr->GetCompletedParts().size()); // Should be 2.5 megs
    ASSERT_EQ(0u, requestPtr->GetFailedParts().size());
    ASSERT_EQ(0u, requestPtr->GetPendingParts().size());
    ASSERT_EQ(0u, requestPtr->GetQueuedParts().size());

    ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

    uint64_t fileSize = requestPtr->GetBytesTotalSize();
    ASSERT_TRUE(fileSize == (SMALL_TEST_SIZE / testStrLen * testStrLen));

    HeadObjectRequest headObjectRequest;
    headObjectRequest.WithBucket(GetTestBucketName())
        .WithKey(SMALL_FILE_KEY);

    auto outcome = m_s3Client->HeadObject(headObjectRequest);

    ASSERT_TRUE(outcome.IsSuccess());
    ASSERT_STREQ(requestPtr->GetContentType().c_str(), outcome.GetResult().GetContentType().c_str());
}

TEST_F(TransferTests, TransferManager_ContentTest)
{
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
            transferManager.UploadFile(CONTENT_TEST_FILE_NAME, GetTestBucketName(), CONTENT_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

    ASSERT_EQ(true, requestPtr->ShouldContinue());
    ASSERT_EQ(TransferDirection::UPLOAD, requestPtr->GetTransferDirection());
    ASSERT_STREQ(CONTENT_TEST_FILE_NAME, requestPtr->GetTargetFilePath().c_str());
    requestPtr->WaitUntilFinished();
    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(1u, requestPtr->GetCompletedParts().size()); // Should be tiny
    ASSERT_EQ(0u, requestPtr->GetFailedParts().size());
    ASSERT_EQ(0u, requestPtr->GetPendingParts().size());
    ASSERT_EQ(0u, requestPtr->GetQueuedParts().size());

    ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

    uint64_t fileSize = requestPtr->GetBytesTotalSize();
    ASSERT_TRUE(fileSize == strlen(CONTENT_TEST_FILE_TEXT));

    HeadObjectRequest headObjectRequest;
    headObjectRequest.WithBucket(GetTestBucketName())
        .WithKey(CONTENT_FILE_KEY);

    ASSERT_TRUE(m_s3Client->HeadObject(headObjectRequest).IsSuccess());

    getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    unsigned retryCount = 0;
    const unsigned retryMax = 5;
    //just make sure we don't fail because a get object failed. (e.g. network problems or interuptions
    while (!getObjectOutcome.IsSuccess() && retryCount < retryMax)
    {
        ++retryCount;
        std::cout << "Get retry " << retryCount << std::endl;
        getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    }

    Aws::StringStream ss;
    ss << getObjectOutcome.GetResult().GetBody().rdbuf();
    ASSERT_EQ(CONTENT_TEST_FILE_TEXT, ss.str());
}

// Test of a basic multi part upload - 7.5 megs
TEST_F(TransferTests, TransferManager_MediumTest)
{
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
    std::shared_ptr<TransferHandle> requestPtr = transferManager.UploadFile(MEDIUM_TEST_FILE_NAME, GetTestBucketName(), MEDIUM_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

    ASSERT_EQ(true, requestPtr->ShouldContinue());
    ASSERT_EQ(TransferDirection::UPLOAD, requestPtr->GetTransferDirection());
    ASSERT_STREQ(MEDIUM_TEST_FILE_NAME, requestPtr->GetTargetFilePath().c_str());    
    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because a the put object failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager.RetryUpload(MEDIUM_TEST_FILE_NAME, requestPtr);
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

    HeadObjectRequest headObjectRequest;
    headObjectRequest.WithBucket(GetTestBucketName())
        .WithKey(MEDIUM_FILE_KEY);

    auto outcome = m_s3Client->HeadObject(headObjectRequest);
    ASSERT_TRUE(outcome.IsSuccess());
    ASSERT_STREQ(requestPtr->GetContentType().c_str(), outcome.GetResult().GetContentType().c_str());
       
    std::shared_ptr<TransferHandle> downloadPtr = transferManager.DownloadFile(GetTestBucketName(), MEDIUM_FILE_KEY, Aws::String(MEDIUM_TEST_FILE_NAME));
    
    ASSERT_EQ(true, downloadPtr->ShouldContinue());
    ASSERT_EQ(TransferDirection::DOWNLOAD, downloadPtr->GetTransferDirection());
    ASSERT_STREQ(MEDIUM_TEST_FILE_NAME, downloadPtr->GetTargetFilePath().c_str());
    downloadPtr->WaitUntilFinished();
    ASSERT_FALSE(downloadPtr->IsMultipart());
    ASSERT_TRUE(downloadPtr->GetMultiPartId().empty());
    ASSERT_EQ(TransferStatus::COMPLETED, downloadPtr->GetStatus());
    ASSERT_EQ(1u, downloadPtr->GetCompletedParts().size());
    ASSERT_EQ(0u, downloadPtr->GetFailedParts().size());
    ASSERT_EQ(0u, downloadPtr->GetPendingParts().size());
    ASSERT_EQ(0u, requestPtr->GetQueuedParts().size());
    ASSERT_EQ(downloadPtr->GetBytesTotalSize(), MEDIUM_TEST_SIZE / testStrLen * testStrLen);
    ASSERT_EQ(downloadPtr->GetBytesTransferred(), MEDIUM_TEST_SIZE / testStrLen * testStrLen);
    ASSERT_STREQ(requestPtr->GetContentType().c_str(), downloadPtr->GetContentType().c_str());
}

TEST_F(TransferTests, TransferManager_BigTest)
{
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
    std::shared_ptr<TransferHandle> requestPtr = transferManager.UploadFile(BIG_TEST_FILE_NAME, GetTestBucketName(), BIG_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

    ASSERT_EQ(true, requestPtr->ShouldContinue());
    ASSERT_EQ(TransferDirection::UPLOAD, requestPtr->GetTransferDirection());
    ASSERT_STREQ(BIG_TEST_FILE_NAME, requestPtr->GetTargetFilePath().c_str());
    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because an upload part failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager.RetryUpload(MEDIUM_TEST_FILE_NAME, requestPtr);
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

    HeadObjectRequest headObjectRequest;
    headObjectRequest.WithBucket(GetTestBucketName())
        .WithKey(BIG_FILE_KEY);

    ASSERT_TRUE(m_s3Client->HeadObject(headObjectRequest).IsSuccess());

    std::shared_ptr<TransferHandle> downloadPtr = transferManager.DownloadFile(GetTestBucketName(), BIG_FILE_KEY, Aws::String(BIG_TEST_FILE_NAME));

    ASSERT_EQ(true, downloadPtr->ShouldContinue());
    ASSERT_EQ(TransferDirection::DOWNLOAD, downloadPtr->GetTransferDirection());
    ASSERT_STREQ(BIG_TEST_FILE_NAME, downloadPtr->GetTargetFilePath().c_str());
    downloadPtr->WaitUntilFinished();
    ASSERT_FALSE(downloadPtr->IsMultipart());
    ASSERT_TRUE(downloadPtr->GetMultiPartId().empty());
    ASSERT_EQ(TransferStatus::COMPLETED, downloadPtr->GetStatus());
    ASSERT_EQ(1u, downloadPtr->GetCompletedParts().size());
    ASSERT_EQ(0u, downloadPtr->GetFailedParts().size());
    ASSERT_EQ(0u, downloadPtr->GetPendingParts().size());
    ASSERT_EQ(0u, requestPtr->GetQueuedParts().size());
    ASSERT_EQ(BIG_TEST_SIZE / testStrLen * testStrLen, downloadPtr->GetBytesTotalSize());
    ASSERT_EQ(BIG_TEST_SIZE / testStrLen * testStrLen, downloadPtr->GetBytesTransferred());
    ASSERT_STREQ(requestPtr->GetContentType().c_str(), downloadPtr->GetContentType().c_str());
}

TEST_F(TransferTests, TransferManager_CancelAndRetryTest)
{
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
    std::shared_ptr<TransferHandle> requestPtr = transferManager.UploadFile(CANCEL_TEST_FILE_NAME, GetTestBucketName(), CANCEL_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

    uint64_t fileSize = requestPtr->GetBytesTotalSize();
    ASSERT_EQ(fileSize, CANCEL_TEST_SIZE / testStrLen * testStrLen);
    requestPtr->WaitUntilFinished();

    //if this is the case, the request actually failed before we could cancel it and we need to try again.
    while (requestPtr->GetCompletedParts().size() < 15u)
    {        
        requestPtr = transferManager.RetryUpload(CANCEL_TEST_FILE_NAME, requestPtr); 
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
    requestPtr = transferManager.RetryUpload(CANCEL_TEST_FILE_NAME, requestPtr);
    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because an upload part failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager.RetryUpload(CANCEL_TEST_FILE_NAME, requestPtr);
        requestPtr->WaitUntilFinished();
    }

    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(30u, requestPtr->GetCompletedParts().size());
    ASSERT_TRUE(completionCheckDone);
    ASSERT_TRUE(completedPartsStayedCompletedDuringRetry);
    ASSERT_STREQ("text/plain", requestPtr->GetContentType().c_str());

    listMultipartOutcome = m_s3Client->ListMultipartUploads(listMultipartRequest);

    EXPECT_TRUE(listMultipartOutcome.IsSuccess());
    ASSERT_EQ(0u, listMultipartOutcome.GetResult().GetUploads().size());

    headObjectRequest.WithBucket(GetTestBucketName())
        .WithKey(CANCEL_FILE_KEY);

    ASSERT_TRUE(m_s3Client->HeadObject(headObjectRequest).IsSuccess());
}

TEST_F(TransferTests, TransferManager_AbortAndRetryTest)
{
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
    requestPtr = transferManager.UploadFile(CANCEL_TEST_FILE_NAME, GetTestBucketName(), CANCEL_FILE_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

    uint64_t fileSize = requestPtr->GetBytesTotalSize();
    ASSERT_EQ(fileSize, CANCEL_TEST_SIZE / testStrLen * testStrLen);

    requestPtr->WaitUntilFinished();

    //if this is the case, the request actually failed before we could cancel it and we need to try again.
    while (requestPtr->GetCompletedParts().size() < 15u)
    {
        requestPtr = transferManager.RetryUpload(CANCEL_TEST_FILE_NAME, requestPtr);
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
    requestPtr = transferManager.RetryUpload(CANCEL_TEST_FILE_NAME, tempPtr);
    ASSERT_NE(requestPtr, tempPtr);
    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because an upload part failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager.RetryUpload(MEDIUM_TEST_FILE_NAME, requestPtr);
        requestPtr->WaitUntilFinished();
    }

    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(30u, requestPtr->GetCompletedParts().size());
    ASSERT_TRUE(completionCheckDone);
    ASSERT_FALSE(completedPartsStayedCompletedDuringRetry);

    headObjectRequest.WithBucket(GetTestBucketName())
        .WithKey(CANCEL_FILE_KEY);

    ASSERT_TRUE(m_s3Client->HeadObject(headObjectRequest).IsSuccess());
}

TEST_F(TransferTests, TransferManager_MultiPartContentTest)
{
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
    
    std::shared_ptr<TransferHandle> requestPtr = transferManager.UploadFile(m_multiPartContentFile, GetTestBucketName(), MULTI_PART_CONTENT_KEY, "text/plain", Aws::Map<Aws::String, Aws::String>());

    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because an upload part failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager.RetryUpload(MEDIUM_TEST_FILE_NAME, requestPtr);
        requestPtr->WaitUntilFinished();
    }

    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());
    ASSERT_EQ(PARTS_IN_MEDIUM_TEST, requestPtr->GetCompletedParts().size()); // > 1 part

    std::shared_ptr<TransferHandle> downloadPtr = transferManager.DownloadFile(GetTestBucketName(), MULTI_PART_CONTENT_KEY, m_multiPartContentDownload);

    downloadPtr->WaitUntilFinished();
    ASSERT_EQ(TransferStatus::COMPLETED, downloadPtr->GetStatus());
    ASSERT_STREQ(requestPtr->GetContentType().c_str(), downloadPtr->GetContentType().c_str());

    ASSERT_TRUE(AreFilesSame(m_multiPartContentDownload, m_multiPartContentFile));
}

// Single part upload with metadata specified
TEST_F(TransferTests, TransferManager_SinglePartUploadWithMetadataTest)
{
    if (EmptyBucket(GetTestBucketName()))
    {
        WaitForBucketToEmpty(GetTestBucketName());
    }

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(GetTestBucketName());
    getObjectRequest.SetKey(TEST_FILE_NAME);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    Aws::Map<Aws::String, Aws::String> metadata;
    metadata["key1"] = "val1";
    metadata["key2"] = "val2";

    TransferManagerConfiguration transferManagerConfig;
    transferManagerConfig.s3Client = m_s3Client;
    TransferManager transferManager(transferManagerConfig);

    std::shared_ptr<TransferHandle> requestPtr = transferManager.UploadFile(TEST_FILE_NAME, GetTestBucketName(), TEST_FILE_NAME, "text/plain", metadata);

    requestPtr->WaitUntilFinished();
    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());

    // Check the metadata matches
    HeadObjectRequest headObjectRequest;
    headObjectRequest.SetBucket(GetTestBucketName());
    headObjectRequest.SetKey(TEST_FILE_NAME);

    HeadObjectOutcome headObjectOutcome = m_s3Client->HeadObject(headObjectRequest);
    ASSERT_TRUE(headObjectOutcome.IsSuccess());

    Aws::Map<Aws::String, Aws::String> headObjectMetadata = headObjectOutcome.GetResult().GetMetadata();
    ASSERT_EQ(metadata.size(), headObjectMetadata.size());
    ASSERT_EQ(metadata["key1"], headObjectMetadata["key1"]);
    ASSERT_EQ(metadata["key2"], headObjectMetadata["key2"]);

}

// Multipart upload with metadata specified
TEST_F(TransferTests, MultipartUploadWithMetadataTest)
{
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

    std::shared_ptr<TransferHandle> requestPtr = transferManager.UploadFile(MEDIUM_TEST_FILE_NAME, GetTestBucketName(), MEDIUM_FILE_KEY, "text/plain", metadata);

    requestPtr->WaitUntilFinished();

    size_t retries = 0;
    //just make sure we don't fail because an upload part failed. (e.g. network problems or interuptions)
    while (requestPtr->GetStatus() == TransferStatus::FAILED && retries++ < 5)
    {
        transferManager.RetryUpload(MEDIUM_TEST_FILE_NAME, requestPtr);
        requestPtr->WaitUntilFinished();
    }
    ASSERT_EQ(TransferStatus::COMPLETED, requestPtr->GetStatus());

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
}

}
