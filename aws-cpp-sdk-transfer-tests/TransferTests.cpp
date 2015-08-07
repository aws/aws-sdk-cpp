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
#include <aws/transfer/TransferClient.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/ratelimiter/DefaultRateLimiter.h>
#include <aws/s3/model/HeadBucketRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/core/utils/HashingUtils.h>

#include <aws/transfer/UploadFileRequest.h>
#include <aws/transfer/DownloadFileRequest.h>

#include <iostream>
#include <fstream>

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

static const char* CONTENT_TEST_FILE_TEXT = "This is a test..";
static const char* CONTENT_TEST_FILE_NAME = "ContentTransferTestFile.txt";
static const char* CONTENT_TEST_DOWNLOAD_FILE_NAME = "ContentTransferTestFileDownload.txt";
static const char* CONTENT_FILE_KEY = "ContentFileKey";

static const char* BIG_TEST_FILE_NAME = "BigTransferTestFile.txt";
static const char* BIG_FILE_KEY = "BigFileKey";

static const char* CANCEL_TEST_FILE_NAME = "CancelTestFile.txt";
static const char* CANCEL_FILE_KEY = "CancelFileKey";

static const char* TEST_BUCKET_NAME = "transferintegrationtestbucket";
static const unsigned SMALL_TEST_SIZE = MB5_BUFFER_SIZE / 2;
static const unsigned MEDIUM_TEST_SIZE = MB5_BUFFER_SIZE * 3 / 2;

static const unsigned CANCEL_TEST_SIZE = MB5_BUFFER_SIZE * 30;

static const unsigned PARTS_IN_MEDIUM_TEST = 2;

static const unsigned PARTS_IN_BIG_TEST = 15;
static const unsigned BIG_TEST_SIZE = MB5_BUFFER_SIZE * PARTS_IN_BIG_TEST;
static const char* testString = "S3 MultiPart upload Test File ";
static const uint32_t testStrLen = static_cast<uint32_t>(strlen(testString));
static const uint32_t TEST_WAIT_TIMEOUT = 10;
static const uint32_t TEST_WAIT_TIMEOUT_LONG = 200;
static const uint32_t TEST_DOWNLOAD_WAIT_TIMEOUT_LONG = 300;

namespace 
{
static const char* ALLOCATION_TAG = "TransferTests";

class TransferTests : public ::testing::Test
{
public:

    static std::shared_ptr<S3Client> m_s3Client;
    static std::shared_ptr<TransferClient> m_transferClient;

protected:

    static void CreateTestFile(const Aws::String& fileName, unsigned fileSize)
    {
        Aws::OFStream testFile;
        testFile.open(fileName.c_str());
        for (uint32_t i = testStrLen; i <= fileSize; i += testStrLen)
        {
            testFile << testString;
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
    static void SetUpTestCase()
    {
        // Create a client
        ClientConfiguration config;
        config.scheme = Scheme::HTTP;
        config.connectTimeoutMs = 30000;
        config.requestTimeoutMs = 30000;
        config.httpLibOverride = TransferLibType::WIN_HTTP_CLIENT;

        m_s3Client = Aws::MakeShared<S3Client>(ALLOCATION_TAG, config);

        TransferClientConfiguration transferConfig;
        transferConfig.m_uploadBufferCount = 20;

        m_transferClient = Aws::MakeShared<TransferClient>(ALLOCATION_TAG, m_s3Client, transferConfig);

        DeleteBucket(TEST_BUCKET_NAME);

        CreateTestFile(TEST_FILE_NAME, MB5_BUFFER_SIZE);
        CreateTestFile(SMALL_TEST_FILE_NAME, SMALL_TEST_SIZE);
        CreateTestFile(BIG_TEST_FILE_NAME, BIG_TEST_SIZE);
        CreateTestFile(MEDIUM_TEST_FILE_NAME, MEDIUM_TEST_SIZE);
        CreateTestFile(CONTENT_TEST_FILE_NAME, CONTENT_TEST_FILE_TEXT);
        CreateTestFile(CANCEL_TEST_FILE_NAME, CANCEL_TEST_SIZE);
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
            EXPECT_TRUE(listObjectsOutcome.IsSuccess());

            if (listObjectsOutcome.GetResult().GetContents().size() > 0)
            {
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }
            else
            {
                break;
            }
        }
    }

    static bool WaitForObjectToPropagate(const Aws::String& bucketName, const char* objectKey)
    {
        unsigned timeoutCount = 0;
        while (timeoutCount++ < TEST_WAIT_TIMEOUT)
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

    static void WaitForUploadAndUpdate(std::shared_ptr<UploadFileRequest> thisRequest, float progressPercent)
    {
        unsigned timeoutCount = 0;
        std::cout << "Initial Upload progress - " << thisRequest->GetProgress() << std::endl;
        float totalProgress = thisRequest->GetProgress();
        while (timeoutCount++ < TEST_WAIT_TIMEOUT_LONG)
        {
            if (thisRequest->IsDone() || (thisRequest->GetProgress() >= progressPercent && progressPercent < 100.0f))
            {
                std::cout << "Done - Progress at " << thisRequest->GetProgress() << std::endl;
                break;
            }
            // Let's reset our timeout
            if (thisRequest->GetProgress() != totalProgress)
            {
                timeoutCount = 0;
                totalProgress = thisRequest->GetProgress();
                std::cout << "Progress update - " << totalProgress << std::endl;
            }
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }

    static void WaitForDownloadAndUpdate(std::shared_ptr<DownloadFileRequest> thisRequest, float progressPercent)
    {
        unsigned timeoutCount = 0;
        std::cout << "Initial Download progress - " << thisRequest->GetProgress() << std::endl;
        float totalProgress = thisRequest->GetProgress();
        while (timeoutCount++ < TEST_DOWNLOAD_WAIT_TIMEOUT_LONG)
        {
            if (thisRequest->IsDone() || (thisRequest->GetProgress() >= progressPercent && progressPercent < 100.0f))
            {
                std::cout << "Done - Progress at " << thisRequest->GetProgress() << std::endl;
                break;
            }
            // Let's reset our timeout
            if (thisRequest->GetProgress() != totalProgress)
            {
                timeoutCount = 0;
                totalProgress = thisRequest->GetProgress();
                std::cout << "Progress update - " << totalProgress << std::endl;
            }
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
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
        AbortMultiPartUpload(TEST_BUCKET_NAME, BIG_FILE_KEY);
        DeleteBucket(TEST_BUCKET_NAME);
        remove(TEST_FILE_NAME);
        remove(SMALL_TEST_FILE_NAME);
        remove(CONTENT_TEST_FILE_NAME);
        remove(BIG_TEST_FILE_NAME);
        remove(MEDIUM_TEST_FILE_NAME);
        remove(CONTENT_TEST_DOWNLOAD_FILE_NAME);
        remove(CANCEL_TEST_FILE_NAME);

        const uint32_t cConcurrentTestDownloads = 5;
        for (uint32_t i = 1; i <= cConcurrentTestDownloads; ++i)
        {
            Aws::String testFile(CONTENT_TEST_DOWNLOAD_FILE_NAME);
            testFile += std::to_string(i).c_str();
            remove(testFile.c_str());
        }
        const uint32_t cConcurrentBigTestDownloads = 3;
        for (uint32_t i = 1; i <= cConcurrentBigTestDownloads; ++i)
        {
            Aws::String testFile(BIG_TEST_FILE_NAME);
            testFile += std::to_string(i).c_str();
            remove(testFile.c_str());
        }
        m_s3Client = nullptr;
        m_transferClient = nullptr;

    }

    static void VerifyUploadPartOutcome(UploadPartOutcome& outcome, const ByteBuffer& md5OfStream)
    {
        EXPECT_TRUE(outcome.IsSuccess());
        Aws::StringStream ss;
        ss << "\"" << HashingUtils::HexEncode(md5OfStream) << "\"";
        EXPECT_EQ(ss.str(), outcome.GetResult().GetETag());
    }

};

std::shared_ptr<S3Client> TransferTests::m_s3Client(nullptr);
std::shared_ptr<TransferClient> TransferTests::m_transferClient(nullptr);

TEST_F(TransferTests, Test1)
{

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(TEST_BUCKET_NAME);
    getObjectRequest.SetKey(TEST_FILE_NAME);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    ListMultipartUploadsRequest listMultipartRequest;
    listMultipartRequest.SetBucket(TEST_BUCKET_NAME);

    const bool cCreateBucket = true; // Yes please, create the bucket
    // Test with default behavior of using file name as key
    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(TEST_FILE_NAME, TEST_BUCKET_NAME, "", "", cCreateBucket);

    EXPECT_EQ(requestPtr->GetTotalParts(), 1); // Should be just under 5 megs

    EXPECT_FALSE(requestPtr->IsDone());

    requestPtr->WaitUntilDone();

    EXPECT_TRUE(requestPtr->IsDone());

    EXPECT_TRUE(requestPtr->CompletedSuccessfully());

    uint64_t fileSize = requestPtr->GetFileSize();
    EXPECT_TRUE(fileSize == (MB5_BUFFER_SIZE / testStrLen * testStrLen));

    WaitForObjectToPropagate(TEST_BUCKET_NAME, TEST_FILE_NAME);
    ListObjectsRequest listRequest;
    listRequest.SetBucket(TEST_BUCKET_NAME);

    getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_TRUE(getObjectOutcome.IsSuccess());

    ListObjectsOutcome listOutcome = m_s3Client->ListObjects(listRequest);

    EXPECT_EQ(listOutcome.GetResult().GetContents().size(), 1);
}

TEST_F(TransferTests, SmallTest)
{
    if (EmptyBucket(TEST_BUCKET_NAME))
    {
        WaitForBucketToEmpty(TEST_BUCKET_NAME);
    }

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(TEST_BUCKET_NAME);
    getObjectRequest.SetKey(SMALL_FILE_KEY);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    ListMultipartUploadsRequest listMultipartRequest;
    listMultipartRequest.SetBucket(TEST_BUCKET_NAME);

    // Not creating the bucket.. it should be there
    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(SMALL_TEST_FILE_NAME, TEST_BUCKET_NAME, SMALL_FILE_KEY, "", true);

    EXPECT_EQ(requestPtr->GetTotalParts(), 1); // Should be about 2.5 megs

    EXPECT_FALSE(requestPtr->IsDone());

    requestPtr->WaitUntilDone();
    
    EXPECT_TRUE(requestPtr->IsDone());

    uint64_t fileSize = requestPtr->GetFileSize();
    EXPECT_TRUE(fileSize == (SMALL_TEST_SIZE / testStrLen * testStrLen));

    EXPECT_TRUE(requestPtr->CompletedSuccessfully());

    WaitForObjectToPropagate(TEST_BUCKET_NAME, SMALL_FILE_KEY);
    ListObjectsRequest listRequest;
    listRequest.SetBucket(TEST_BUCKET_NAME);

    ListObjectsOutcome listOutcome = m_s3Client->ListObjects(listRequest);

    getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_TRUE(getObjectOutcome.IsSuccess());

    EXPECT_EQ(listOutcome.GetResult().GetContents().size(), 1);
}

TEST_F(TransferTests, ContentTest)
{
    if (EmptyBucket(TEST_BUCKET_NAME))
    {
        WaitForBucketToEmpty(TEST_BUCKET_NAME);
    }

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(TEST_BUCKET_NAME);
    getObjectRequest.SetKey(CONTENT_FILE_KEY);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    ListMultipartUploadsRequest listMultipartRequest;
    listMultipartRequest.SetBucket(TEST_BUCKET_NAME);

    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(CONTENT_TEST_FILE_NAME, TEST_BUCKET_NAME, CONTENT_FILE_KEY, "");

    EXPECT_EQ(requestPtr->GetTotalParts(), 1); // Should be tiny

    EXPECT_FALSE(requestPtr->IsDone());

    requestPtr->WaitUntilDone();

    EXPECT_TRUE(requestPtr->IsDone());

    uint64_t fileSize = requestPtr->GetFileSize();
    EXPECT_TRUE(fileSize == strlen(CONTENT_TEST_FILE_TEXT));

    EXPECT_TRUE(requestPtr->CompletedSuccessfully());

    WaitForObjectToPropagate(TEST_BUCKET_NAME, CONTENT_FILE_KEY);
    ListObjectsRequest listRequest;
    listRequest.SetBucket(TEST_BUCKET_NAME);

    ListObjectsOutcome listOutcome = m_s3Client->ListObjects(listRequest);

    getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_TRUE(getObjectOutcome.IsSuccess());

    Aws::StringStream ss;
    ss << getObjectOutcome.GetResult().GetBody().rdbuf();
    EXPECT_EQ(CONTENT_TEST_FILE_TEXT, ss.str());

    EXPECT_EQ(listOutcome.GetResult().GetContents().size(), 1);
}

TEST_F(TransferTests, MediumTest)
{
    if (EmptyBucket(TEST_BUCKET_NAME))
    {
        WaitForBucketToEmpty(TEST_BUCKET_NAME);
    }

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(TEST_BUCKET_NAME);
    getObjectRequest.SetKey(MEDIUM_FILE_KEY);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    ListMultipartUploadsRequest listMultipartRequest;

    listMultipartRequest.SetBucket(TEST_BUCKET_NAME);

    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(MEDIUM_TEST_FILE_NAME, TEST_BUCKET_NAME, MEDIUM_FILE_KEY, "", true);

    EXPECT_EQ(requestPtr->GetTotalParts(), PARTS_IN_MEDIUM_TEST); // Currently set to 2

    EXPECT_FALSE(requestPtr->IsDone());

    WaitForUploadAndUpdate(requestPtr, 100.0f);

    EXPECT_TRUE(requestPtr->IsDone());

    uint64_t fileSize = requestPtr->GetFileSize();

    EXPECT_EQ(fileSize, MEDIUM_TEST_SIZE / testStrLen * testStrLen);

    ListMultipartUploadsOutcome listMultipartOutcome = m_s3Client->ListMultipartUploads(listMultipartRequest);

    EXPECT_TRUE(listMultipartOutcome.IsSuccess());

    EXPECT_TRUE(requestPtr->CompletedSuccessfully());

    WaitForObjectToPropagate(TEST_BUCKET_NAME, MEDIUM_FILE_KEY);

    getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_TRUE(getObjectOutcome.IsSuccess());

    ListObjectsRequest listRequest;
    listRequest.SetBucket(TEST_BUCKET_NAME);

    ListObjectsOutcome listOutcome = m_s3Client->ListObjects(listRequest);

    ASSERT_EQ(listOutcome.GetResult().GetContents().size(), 1);

    EXPECT_EQ(listOutcome.GetResult().GetContents()[0].GetSize(), fileSize);

    std::shared_ptr<DownloadFileRequest> downloadPtr = m_transferClient->DownloadFile(MEDIUM_TEST_FILE_NAME, TEST_BUCKET_NAME, MEDIUM_FILE_KEY);

    WaitForDownloadAndUpdate(downloadPtr, 100);

    EXPECT_TRUE(downloadPtr->IsDone());

    EXPECT_TRUE(downloadPtr->CompletedSuccessfully());

    Aws::IFStream inFile(MEDIUM_TEST_FILE_NAME, std::ios::binary | std::ios::ate);

    fileSize = inFile.tellg();
    EXPECT_EQ(fileSize, MEDIUM_TEST_SIZE / testStrLen * testStrLen);
}

TEST_F(TransferTests, BigTest)
{
    if (EmptyBucket(TEST_BUCKET_NAME))
    {
        WaitForBucketToEmpty(TEST_BUCKET_NAME);
    }

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(TEST_BUCKET_NAME);
    getObjectRequest.SetKey(BIG_FILE_KEY);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    ListMultipartUploadsRequest listMultipartRequest;

    listMultipartRequest.SetBucket(TEST_BUCKET_NAME);

    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(BIG_TEST_FILE_NAME, TEST_BUCKET_NAME, BIG_FILE_KEY, "", true);

    EXPECT_EQ(requestPtr->GetTotalParts(), PARTS_IN_BIG_TEST); 

    EXPECT_FALSE(requestPtr->IsDone());

    WaitForUploadAndUpdate(requestPtr, 100.0f);

    EXPECT_TRUE(requestPtr->IsDone());

    uint64_t fileSize = requestPtr->GetFileSize();

    EXPECT_EQ(fileSize, BIG_TEST_SIZE / testStrLen * testStrLen);

    ListMultipartUploadsOutcome listMultipartOutcome = m_s3Client->ListMultipartUploads(listMultipartRequest);

    EXPECT_TRUE(listMultipartOutcome.IsSuccess());

    EXPECT_TRUE(requestPtr->CompletedSuccessfully());

    WaitForObjectToPropagate(TEST_BUCKET_NAME, BIG_FILE_KEY);

    getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_TRUE(getObjectOutcome.IsSuccess());

    ListObjectsRequest listRequest;
    listRequest.SetBucket(TEST_BUCKET_NAME);

    ListObjectsOutcome listOutcome = m_s3Client->ListObjects(listRequest);

    ASSERT_EQ(listOutcome.GetResult().GetContents().size(), 1);

    EXPECT_EQ(listOutcome.GetResult().GetContents()[0].GetSize(), fileSize);

    std::shared_ptr<DownloadFileRequest> downloadPtr = m_transferClient->DownloadFile(BIG_TEST_FILE_NAME, TEST_BUCKET_NAME, BIG_FILE_KEY);

    WaitForDownloadAndUpdate(downloadPtr, 100);

    EXPECT_TRUE(downloadPtr->IsDone());

    EXPECT_TRUE(downloadPtr->CompletedSuccessfully());

    Aws::IFStream inFile(BIG_TEST_FILE_NAME, std::ios::binary | std::ios::ate);

    fileSize = inFile.tellg();
    EXPECT_EQ(fileSize, BIG_TEST_SIZE / testStrLen * testStrLen);
}


TEST_F(TransferTests, CancelTest)
{
    ListMultipartUploadsRequest listMultipartRequest;
    listMultipartRequest.SetBucket(TEST_BUCKET_NAME);

    if (EmptyBucket(TEST_BUCKET_NAME))
    {
        WaitForBucketToEmpty(TEST_BUCKET_NAME);
    }

    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(CANCEL_TEST_FILE_NAME, TEST_BUCKET_NAME, CANCEL_FILE_KEY, "");

    uint64_t fileSize = requestPtr->GetFileSize();

    EXPECT_EQ(fileSize, CANCEL_TEST_SIZE / testStrLen * testStrLen);

    EXPECT_FALSE(requestPtr->IsDone());

    WaitForUploadAndUpdate(requestPtr, 40.0f);

    m_transferClient->CancelUpload(requestPtr);

    requestPtr->WaitUntilDone();

    ListMultipartUploadsOutcome listMultipartOutcome = m_s3Client->ListMultipartUploads(listMultipartRequest);

    EXPECT_TRUE(listMultipartOutcome.IsSuccess());

    EXPECT_EQ(listMultipartOutcome.GetResult().GetUploads().size(), 0);

    EXPECT_FALSE(requestPtr->CompletedSuccessfully());

    EXPECT_EQ(listMultipartOutcome.GetResult().GetUploads().size(), 0);
}


TEST_F(TransferTests, DownloadContentTest)
{
    if (EmptyBucket(TEST_BUCKET_NAME))
    {
        WaitForBucketToEmpty(TEST_BUCKET_NAME);
    }

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(TEST_BUCKET_NAME);
    getObjectRequest.SetKey(CONTENT_FILE_KEY);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    ListMultipartUploadsRequest listMultipartRequest;
    listMultipartRequest.SetBucket(TEST_BUCKET_NAME);

    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(CONTENT_TEST_FILE_NAME, TEST_BUCKET_NAME, CONTENT_FILE_KEY, "", true);

    EXPECT_EQ(requestPtr->GetTotalParts(), 1); // Should be tiny

    EXPECT_FALSE(requestPtr->IsDone());

    requestPtr->WaitUntilDone();

    EXPECT_TRUE(requestPtr->IsDone());

    uint64_t fileSize = requestPtr->GetFileSize();
    EXPECT_TRUE(fileSize == strlen(CONTENT_TEST_FILE_TEXT));

    EXPECT_TRUE(requestPtr->CompletedSuccessfully());

    WaitForObjectToPropagate(TEST_BUCKET_NAME, CONTENT_FILE_KEY);
    ListObjectsRequest listRequest;
    listRequest.SetBucket(TEST_BUCKET_NAME);

    ListObjectsOutcome listOutcome = m_s3Client->ListObjects(listRequest);

    EXPECT_TRUE(listOutcome.IsSuccess());

    EXPECT_EQ(listOutcome.GetResult().GetContents().size(), 1);

    std::shared_ptr<DownloadFileRequest> downloadPtr = m_transferClient->DownloadFile(CONTENT_TEST_DOWNLOAD_FILE_NAME, TEST_BUCKET_NAME, CONTENT_FILE_KEY);

    downloadPtr->WaitUntilDone();

    EXPECT_TRUE(downloadPtr->IsDone());

    EXPECT_TRUE(downloadPtr->CompletedSuccessfully());

    Aws::IFStream inFile(CONTENT_TEST_DOWNLOAD_FILE_NAME);
    Aws::StringStream testStr;
    if (inFile.good() && inFile.is_open())
    {
        testStr << inFile.rdbuf();
    }
    EXPECT_EQ(testStr.str(), CONTENT_TEST_FILE_TEXT);

}

TEST_F(TransferTests, MultiDownloadTest)
{
    if (EmptyBucket(TEST_BUCKET_NAME))
    {
        WaitForBucketToEmpty(TEST_BUCKET_NAME);
    }

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(TEST_BUCKET_NAME);
    getObjectRequest.SetKey(CONTENT_FILE_KEY);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    ListMultipartUploadsRequest listMultipartRequest;
    listMultipartRequest.SetBucket(TEST_BUCKET_NAME);

    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(CONTENT_TEST_FILE_NAME, TEST_BUCKET_NAME, CONTENT_FILE_KEY, "", true);

    EXPECT_EQ(requestPtr->GetTotalParts(), 1); // Should be tiny

    EXPECT_FALSE(requestPtr->IsDone());

    requestPtr->WaitUntilDone();

    EXPECT_TRUE(requestPtr->IsDone());

    uint64_t fileSize = requestPtr->GetFileSize();
    EXPECT_TRUE(fileSize == strlen(CONTENT_TEST_FILE_TEXT));

    EXPECT_TRUE(requestPtr->CompletedSuccessfully());

    WaitForObjectToPropagate(TEST_BUCKET_NAME, CONTENT_FILE_KEY);
    ListObjectsRequest listRequest;
    listRequest.SetBucket(TEST_BUCKET_NAME);

    ListObjectsOutcome listOutcome = m_s3Client->ListObjects(listRequest);

    EXPECT_TRUE(listOutcome.IsSuccess());

    EXPECT_EQ(listOutcome.GetResult().GetContents().size(), 1);

    Aws::String dir1(CONTENT_TEST_DOWNLOAD_FILE_NAME);
    dir1 += "1";
    Aws::String dir2(CONTENT_TEST_DOWNLOAD_FILE_NAME);
    dir2 += "2";
    Aws::String dir3(CONTENT_TEST_DOWNLOAD_FILE_NAME);
    dir3 += "3";
    Aws::String dir4(CONTENT_TEST_DOWNLOAD_FILE_NAME);
    dir4 += "4";
    Aws::String dir5(CONTENT_TEST_DOWNLOAD_FILE_NAME);
    dir5 += "5";

    std::shared_ptr<DownloadFileRequest> downloadPtr1 = m_transferClient->DownloadFile(dir1, TEST_BUCKET_NAME, CONTENT_FILE_KEY);
    std::shared_ptr<DownloadFileRequest> downloadPtr2 = m_transferClient->DownloadFile(dir2, TEST_BUCKET_NAME, CONTENT_FILE_KEY);
    std::shared_ptr<DownloadFileRequest> downloadPtr3 = m_transferClient->DownloadFile(dir3, TEST_BUCKET_NAME, CONTENT_FILE_KEY);
    std::shared_ptr<DownloadFileRequest> downloadPtr4 = m_transferClient->DownloadFile(dir4, TEST_BUCKET_NAME, CONTENT_FILE_KEY);
    std::shared_ptr<DownloadFileRequest> downloadPtr5 = m_transferClient->DownloadFile(dir5, TEST_BUCKET_NAME, CONTENT_FILE_KEY);

    downloadPtr1->WaitUntilDone();
    EXPECT_TRUE(downloadPtr1->IsDone());
    EXPECT_TRUE(downloadPtr1->CompletedSuccessfully());

    downloadPtr2->WaitUntilDone();
    EXPECT_TRUE(downloadPtr2->IsDone());
    EXPECT_TRUE(downloadPtr2->CompletedSuccessfully());

    downloadPtr3->WaitUntilDone();
    EXPECT_TRUE(downloadPtr3->IsDone());
    EXPECT_TRUE(downloadPtr3->CompletedSuccessfully());

    downloadPtr4->WaitUntilDone();
    EXPECT_TRUE(downloadPtr4->IsDone());
    EXPECT_TRUE(downloadPtr4->CompletedSuccessfully());

    downloadPtr5->WaitUntilDone();
    EXPECT_TRUE(downloadPtr5->IsDone());
    EXPECT_TRUE(downloadPtr5->CompletedSuccessfully());

    Aws::IFStream inFile(dir1.c_str());
    Aws::StringStream testStr;
    if (inFile.good() && inFile.is_open())
    {
        testStr << inFile.rdbuf();
    }
    EXPECT_EQ(testStr.str(), CONTENT_TEST_FILE_TEXT);
    inFile.close();
    testStr.str("");

    inFile.open(dir2.c_str());
    if (inFile.good() && inFile.is_open())
    {
        testStr << inFile.rdbuf();
    }
    EXPECT_EQ(testStr.str(), CONTENT_TEST_FILE_TEXT);
    inFile.close();
    testStr.str("");

    inFile.open(dir3.c_str());
    if (inFile.good() && inFile.is_open())
    {
        testStr << inFile.rdbuf();
    }
    EXPECT_EQ(testStr.str(), CONTENT_TEST_FILE_TEXT);
    inFile.close();
    testStr.str("");

    inFile.open(dir4.c_str());
    if (inFile.good() && inFile.is_open())
    {
        testStr << inFile.rdbuf();
    }
    EXPECT_EQ(testStr.str(), CONTENT_TEST_FILE_TEXT);
    inFile.close();
    testStr.str("");

    inFile.open(dir5.c_str());
    if (inFile.good() && inFile.is_open())
    {
        testStr << inFile.rdbuf();
    }
    EXPECT_EQ(testStr.str(), CONTENT_TEST_FILE_TEXT);
    inFile.close();
    testStr.str("");

}


TEST_F(TransferTests, MultiBigTest)
{
    if (EmptyBucket(TEST_BUCKET_NAME))
    {
        WaitForBucketToEmpty(TEST_BUCKET_NAME);
    }

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(TEST_BUCKET_NAME);
    getObjectRequest.SetKey(BIG_FILE_KEY);

    GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectOutcome.IsSuccess());

    ListMultipartUploadsRequest listMultipartRequest;

    listMultipartRequest.SetBucket(TEST_BUCKET_NAME);

    Aws::String file1(BIG_FILE_KEY);
    file1 += "1";

    Aws::String file2(BIG_FILE_KEY);
    file2 += "2";

    Aws::String file3(BIG_FILE_KEY);
    file3 += "3";

    std::shared_ptr<UploadFileRequest> requestPtr1 = m_transferClient->UploadFile(BIG_TEST_FILE_NAME, TEST_BUCKET_NAME, file1.c_str(), "", true);

    WaitForUploadAndUpdate(requestPtr1, 10.0f);
    EXPECT_FALSE(requestPtr1->IsDone());

    std::shared_ptr<UploadFileRequest> requestPtr2 = m_transferClient->UploadFile(BIG_TEST_FILE_NAME, TEST_BUCKET_NAME, file2.c_str(), "");

    EXPECT_FALSE(requestPtr2->IsDone());

    WaitForUploadAndUpdate(requestPtr1, 100.0f);
    EXPECT_TRUE(requestPtr1->CompletedSuccessfully());

    WaitForUploadAndUpdate(requestPtr2, 100.0f);

    EXPECT_TRUE(requestPtr2->CompletedSuccessfully());

    std::shared_ptr<UploadFileRequest> requestPtr3 = m_transferClient->UploadFile(BIG_TEST_FILE_NAME, TEST_BUCKET_NAME, file3.c_str(), "");;

    EXPECT_FALSE(requestPtr3->IsDone());

    uint64_t fileSize = requestPtr1->GetFileSize();

    WaitForUploadAndUpdate(requestPtr3, 100.0f);

    EXPECT_TRUE(requestPtr3->CompletedSuccessfully());

    WaitForObjectToPropagate(TEST_BUCKET_NAME, file1.c_str());
    WaitForObjectToPropagate(TEST_BUCKET_NAME, file2.c_str());
    WaitForObjectToPropagate(TEST_BUCKET_NAME, file3.c_str());

    ListObjectsRequest listRequest;
    listRequest.SetBucket(TEST_BUCKET_NAME);

    ListObjectsOutcome listOutcome = m_s3Client->ListObjects(listRequest);

    ASSERT_EQ(listOutcome.GetResult().GetContents().size(), 3);

    EXPECT_EQ(listOutcome.GetResult().GetContents()[0].GetSize(), fileSize);
    EXPECT_EQ(listOutcome.GetResult().GetContents()[1].GetSize(), fileSize);

    EXPECT_EQ(listOutcome.GetResult().GetContents()[2].GetSize(), fileSize);


}


}
