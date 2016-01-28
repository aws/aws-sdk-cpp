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
#include <aws/core/utils/StringUtils.h>

#include <aws/transfer/S3FileRequest.h>
#include <aws/transfer/UploadFileRequest.h>
#include <aws/transfer/DownloadFileRequest.h>

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
static const char* CANCEL_FILE_KEY2 = "CancelFileKey2";

static const char* TEST_BUCKET_NAME_BASE = "transferintegrationtestbucket";
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

namespace 
{
static const char* ALLOCATION_TAG = "TransferTests";

class TransferTests : public ::testing::Test
{
public:

    static std::shared_ptr<S3Client> m_s3Client;
    static std::shared_ptr<TransferClient> m_transferClient;

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
        Aws::IFStream inFile1(fileName.c_str(), std::ios::binary | std::ios::ate);
        Aws::IFStream inFile2(fileName2.c_str(), std::ios::binary | std::ios::ate);
        Aws::StringStream testStr1;

        const auto READ_BLOCK_SIZE = 1024 * 5;

        const auto fileSize = inFile1.tellg();

        if (!inFile1.good() || !inFile2.good())
        {
            return false;
        }
        if (fileSize != inFile2.tellg())
        {
            return false;
        }

        inFile1.seekg(0);
        inFile2.seekg(0);

        char inBlock1[READ_BLOCK_SIZE];
        char inBlock2[READ_BLOCK_SIZE];

        auto curFilePos = inFile1.tellg();
        while (curFilePos < fileSize)
        {
            auto readAmount1 = inFile1.read(inBlock1, READ_BLOCK_SIZE).gcount();
            auto readAmount2 = inFile2.read(inBlock2, READ_BLOCK_SIZE).gcount();
            if (readAmount1 != readAmount2)
            {
                return false;
            }
            if (!readAmount1)
            {
                return true;
            }
            if (memcmp(inBlock1, inBlock2, READ_BLOCK_SIZE) != 0)
            {
                return false;
            }
            curFilePos = inFile1.tellg();
        }
        return true;
    }
    static bool CheckGetObjectValidation(std::shared_ptr<UploadFileRequest> requestPtr)
    {
        GetObjectRequest getRequest;
        getRequest.SetBucket(requestPtr->GetBucketName());
        getRequest.SetKey(requestPtr->GetKeyName());
        GetObjectOutcome getObjectOutcome = m_s3Client->GetObject(getRequest);
        unsigned retryCount = 0;
        const unsigned retryMax = 5;
        while (!getObjectOutcome.IsSuccess() && retryCount < retryMax)
        {
            ++retryCount;
            std::cout << "Get retry " << retryCount << std::endl;
            getObjectOutcome = m_s3Client->GetObject(getRequest);
        }
        return getObjectOutcome.IsSuccess();
    }
    static bool CheckListObjectsValidation(std::shared_ptr<UploadFileRequest> requestPtr)
    {
        ListObjectsRequest listRequest;
        listRequest.SetBucket(requestPtr->GetBucketName());

        ListObjectsOutcome listOutcome = m_s3Client->ListObjects(listRequest);

        unsigned retryCount = 0;
        const unsigned retryMax = 5;
        while (retryCount < retryMax)
        {
            for (auto& thisResult : listOutcome.GetResult().GetContents())
            {
                if (thisResult.GetKey() == requestPtr->GetKeyName() && static_cast<uint64_t>(thisResult.GetSize()) == requestPtr->GetFileSize())
                {
                    return true;
                }
            }
            listOutcome = m_s3Client->ListObjects(listRequest);
            ++retryCount;
            std::cout << "List retry " << retryCount << std::endl;
        }
        return false;
    }

    static void SetUpTestCase()
    {
        // Create a client
        ClientConfiguration config;
        config.scheme = Scheme::HTTP;
        config.connectTimeoutMs = 30000;
        config.requestTimeoutMs = 30000;

        m_s3Client = Aws::MakeShared<S3Client>(ALLOCATION_TAG, config);

        TransferClientConfiguration transferConfig;
        transferConfig.m_uploadBufferCount = 20;

        m_transferClient = Aws::MakeShared<TransferClient>(ALLOCATION_TAG, m_s3Client, transferConfig);

        DeleteBucket(GetTestBucketName());

        CreateTestFile(TEST_FILE_NAME, MB5_BUFFER_SIZE, testString);
        CreateTestFile(SMALL_TEST_FILE_NAME, SMALL_TEST_SIZE, testString);
        CreateTestFile(BIG_TEST_FILE_NAME, BIG_TEST_SIZE, testString);
        CreateTestFile(MEDIUM_TEST_FILE_NAME, MEDIUM_TEST_SIZE, testString);
        CreateTestFile(CONTENT_TEST_FILE_NAME, CONTENT_TEST_FILE_TEXT);
        CreateTestFile(CANCEL_TEST_FILE_NAME, CANCEL_TEST_SIZE, testString);
        CreateTestFile(MULTI_PART_CONTENT_FILE, MEDIUM_TEST_SIZE, MULTI_PART_CONTENT_TEXT);
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
        std::cout << thisRequest->GetBucketName() << " : " << thisRequest->GetKeyName() << " Upload progress - " << thisRequest->GetProgress() << std::endl;

        bool sentConsistency = false;
        bool passedHeadObject = false;
        bool passedGetObject = false;
        bool passedListObjects = false;
        uint32_t retryCount = 0;

        float totalProgress = thisRequest->GetProgress();
        while (timeoutCount++ < TEST_WAIT_TIMEOUT_LONG)
        {
            if (!sentConsistency && thisRequest->HasSentConsistencyChecks())
            {
                sentConsistency = true;
                std::cout << "Sent consistency checks" << std::endl;
            }
            if (!passedHeadObject && thisRequest->HasPassedHeadObject())
            {
                passedHeadObject = true;
                std::cout << "Passed head object check" << std::endl;
            }
            if (!passedGetObject && thisRequest->HasPassedGetObject())
            {
                passedGetObject = true;
                std::cout << "Passed get object check" << std::endl;
            }
            if (!passedListObjects && thisRequest->HasPassedListObjects())
            {
                passedListObjects = true;
                std::cout << "Passed list objects check" << std::endl;
            }
            if(thisRequest->GetTotalPartRetries() != retryCount)
            {
                retryCount = thisRequest->GetTotalPartRetries();
                std::cout << "Retry count now " << retryCount << " last failure: " << thisRequest->GetFailure() << std::endl;
            }
            if (thisRequest->IsDone() || (thisRequest->GetProgress() >= progressPercent && progressPercent < 100.0f))
            {
                std::cout << "Done - Progress at " << thisRequest->GetProgress() << " total retries " << thisRequest->GetTotalPartRetries() << std::endl;
                if(thisRequest->GetFailure().length())
                {
                    std::cout << "Failure reason was " << thisRequest->GetFailure() << std::endl;
                }
                break;
            }
            // Let's reset our timeout
            if (thisRequest->GetProgress() != totalProgress)
            {
                timeoutCount = 0;
                totalProgress = thisRequest->GetProgress();
                std::cout << "Progress update - " << totalProgress << std::endl;
            }
            else if(!sentConsistency)
            {
                std::cout << "Completed parts " << thisRequest->GetCompletedPartCount() << " total " << thisRequest->GetTotalParts() << std::endl;
                std::cout << "Returned parts " << thisRequest->GetPartsReturned() << " Pending parts " << thisRequest->GetPendingParts() << std::endl;
                std::cout << "Total retries " << thisRequest->GetTotalPartRetries() << " Raw Progress: " << thisRequest->GetProgressAmount() << std::endl;
            }
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }

    static void WaitForDownloadAndUpdate(std::shared_ptr<DownloadFileRequest> thisRequest, float progressPercent)
    {
        unsigned timeoutCount = 0;
        uint32_t retryCount = 0;
        std::cout << "Initial Download progress - " << thisRequest->GetProgress() << std::endl;
        float totalProgress = thisRequest->GetProgress();
        while (timeoutCount++ < TEST_WAIT_TIMEOUT_LONG)
        {
            if (thisRequest->GetRetries() != retryCount)
            {
                retryCount = thisRequest->GetRetries();
                std::cout << "Retry count now " << retryCount << " last failure: " << thisRequest->GetFailure() << std::endl;
            }
            if (thisRequest->IsDone() || (thisRequest->GetProgress() >= progressPercent && progressPercent < 100.0f))
            {
                std::cout << "Done - Progress at " << thisRequest->GetProgress() << std::endl;
                if (thisRequest->GetFailure().length())
                {
                    std::cout << "Failure reason was " << thisRequest->GetFailure() << std::endl;
                }
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
        AbortMultiPartUpload(GetTestBucketName(), BIG_FILE_KEY);
        DeleteBucket(GetTestBucketName());
        remove(TEST_FILE_NAME);
        remove(SMALL_TEST_FILE_NAME);
        remove(CONTENT_TEST_FILE_NAME);
        remove(BIG_TEST_FILE_NAME);
        remove(MEDIUM_TEST_FILE_NAME);
        remove(CONTENT_TEST_DOWNLOAD_FILE_NAME);
        remove(CANCEL_TEST_FILE_NAME);
        remove(MULTI_PART_CONTENT_FILE);
        remove(MULTI_PART_CONTENT_DOWNLOAD);

        const uint32_t cConcurrentTestDownloads = 5;
        for (uint32_t i = 1; i <= cConcurrentTestDownloads; ++i)
        {
            Aws::String testFile(CONTENT_TEST_DOWNLOAD_FILE_NAME);
            testFile += StringUtils::to_string(i);
            remove(testFile.c_str());
        }
        const uint32_t cConcurrentBigTestDownloads = 3;
        for (uint32_t i = 1; i <= cConcurrentBigTestDownloads; ++i)
        {
            Aws::String testFile(BIG_TEST_FILE_NAME);
            testFile += StringUtils::to_string(i);
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


// Basic test of a 5 meg file meaning it should be exactly at the limit of a single part upload
TEST_F(TransferTests, SinglePartUploadTest)
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

    const bool cCreateBucket = true; 
    const bool cConsistencyChecks = true;
    // Test with default behavior of using file name as key
    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(TEST_FILE_NAME, GetTestBucketName(), "", "", cCreateBucket, cConsistencyChecks);

    ASSERT_EQ(requestPtr->GetTotalParts(), 1u); // Should be just under 5 megs

    ASSERT_FALSE(requestPtr->IsDone());

    WaitForUploadAndUpdate(requestPtr, 100.0f);

    ASSERT_TRUE(requestPtr->IsDone());

    ASSERT_TRUE(requestPtr->CompletedSuccessfully());

    uint64_t fileSize = requestPtr->GetFileSize();
    ASSERT_TRUE(fileSize == (MB5_BUFFER_SIZE / testStrLen * testStrLen));

    WaitForObjectToPropagate(GetTestBucketName(), TEST_FILE_NAME);

    ASSERT_TRUE(CheckListObjectsValidation(requestPtr));
}

// Half size file - similar to our 5 meg test, let's make sure we're processing < 1 part files correctly
TEST_F(TransferTests, SmallTest)
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

    const bool cCreateBucket = false;
    const bool cConsistencyChecks = false;
    // Not creating the bucket.. it should be there
    // No consistency checks on this one, just verifying that it seems to complete
    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(SMALL_TEST_FILE_NAME, GetTestBucketName(), SMALL_FILE_KEY, "", cCreateBucket, cConsistencyChecks);

    ASSERT_EQ(requestPtr->GetTotalParts(), 1u); // Should be about 2.5 megs

    ASSERT_FALSE(requestPtr->IsDone());

    WaitForUploadAndUpdate(requestPtr, 100.0f);
    
    ASSERT_TRUE(requestPtr->IsDone());

    uint64_t fileSize = requestPtr->GetFileSize();
    ASSERT_TRUE(fileSize == (SMALL_TEST_SIZE / testStrLen * testStrLen));

    ASSERT_TRUE(requestPtr->CompletedSuccessfully());
}

// Let's make sure the content we uploaded matched what we believe we sent - this is of course
// to make sure we're loading in and sending our buffers properly more than making sure that S3 works.
TEST_F(TransferTests, ContentTest)
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

    const bool cCreateBucket = false;
    const bool cConsistencyChecks = true;
    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(CONTENT_TEST_FILE_NAME, GetTestBucketName(), CONTENT_FILE_KEY, "", cCreateBucket, cConsistencyChecks);

    ASSERT_EQ(requestPtr->GetTotalParts(), 1u); // Should be tiny

    ASSERT_FALSE(requestPtr->IsDone());

    WaitForUploadAndUpdate(requestPtr, 100.0f);

    ASSERT_TRUE(requestPtr->IsDone());

    uint64_t fileSize = requestPtr->GetFileSize();
    ASSERT_TRUE(fileSize == strlen(CONTENT_TEST_FILE_TEXT));

    ASSERT_TRUE(requestPtr->CompletedSuccessfully());

    WaitForObjectToPropagate(GetTestBucketName(), CONTENT_FILE_KEY);

    getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    unsigned retryCount = 0;
    const unsigned retryMax = 5;
    while (!getObjectOutcome.IsSuccess() && retryCount < retryMax)
    {
        ++retryCount;
        std::cout << "Get retry " << retryCount << std::endl;
        getObjectOutcome = m_s3Client->GetObject(getObjectRequest);
    }

    Aws::StringStream ss;
    ss << getObjectOutcome.GetResult().GetBody().rdbuf();
    ASSERT_EQ(CONTENT_TEST_FILE_TEXT, ss.str());

    ASSERT_TRUE(CheckListObjectsValidation(requestPtr));
}

// Test of a basic multi part upload - 7.5 megs
TEST_F(TransferTests, MediumTest)
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

    const bool cCreateBucket = true;
    const bool cConsistencyChecks = true;
    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(MEDIUM_TEST_FILE_NAME, GetTestBucketName(), MEDIUM_FILE_KEY, "", cCreateBucket, cConsistencyChecks);

    ASSERT_EQ(requestPtr->GetTotalParts(), PARTS_IN_MEDIUM_TEST); // Currently set to 2

    ASSERT_FALSE(requestPtr->IsDone());

    WaitForUploadAndUpdate(requestPtr, 100.0f);

    ASSERT_TRUE(requestPtr->IsDone());

    uint64_t fileSize = requestPtr->GetFileSize();

    ASSERT_EQ(fileSize, MEDIUM_TEST_SIZE / testStrLen * testStrLen);

    ASSERT_TRUE(requestPtr->CompletedSuccessfully());

    WaitForObjectToPropagate(GetTestBucketName(), MEDIUM_FILE_KEY);

    ASSERT_TRUE(CheckGetObjectValidation(requestPtr));

    std::shared_ptr<DownloadFileRequest> downloadPtr = m_transferClient->DownloadFile(MEDIUM_TEST_FILE_NAME, GetTestBucketName(), MEDIUM_FILE_KEY);

    WaitForDownloadAndUpdate(downloadPtr, 100);

    ASSERT_TRUE(downloadPtr->IsDone());

    ASSERT_TRUE(downloadPtr->CompletedSuccessfully());

    Aws::IFStream inFile(MEDIUM_TEST_FILE_NAME, std::ios::binary | std::ios::ate);

    fileSize = inFile.tellg();
    ASSERT_EQ(fileSize, MEDIUM_TEST_SIZE / testStrLen * testStrLen);
}

// Large file test - we're now using many buffers at once.  This demonstrates multi part uploads using many buffers together
// which also tests the now default WINHTTP functionality if available to process them all together.
// With wininet this was not a pleasant wait.
TEST_F(TransferTests, BigTest)
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

    const bool cCreateBucket = true;
    const bool cConsistencyChecks = true;
    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(BIG_TEST_FILE_NAME, GetTestBucketName(), BIG_FILE_KEY, "", cCreateBucket, cConsistencyChecks);

    ASSERT_EQ(requestPtr->GetTotalParts(), PARTS_IN_BIG_TEST); 

    ASSERT_FALSE(requestPtr->IsDone());

    WaitForUploadAndUpdate(requestPtr, 100.0f);

    ASSERT_TRUE(requestPtr->IsDone());

    uint64_t fileSize = requestPtr->GetFileSize();

    ASSERT_EQ(fileSize, BIG_TEST_SIZE / testStrLen * testStrLen);

    ASSERT_TRUE(requestPtr->CompletedSuccessfully());

    WaitForObjectToPropagate(GetTestBucketName(), BIG_FILE_KEY);

    ASSERT_TRUE(CheckGetObjectValidation(requestPtr));

    ASSERT_TRUE(CheckListObjectsValidation(requestPtr));

    std::shared_ptr<DownloadFileRequest> downloadPtr = m_transferClient->DownloadFile(BIG_TEST_FILE_NAME, GetTestBucketName(), BIG_FILE_KEY);

    WaitForDownloadAndUpdate(downloadPtr, 100);

    ASSERT_TRUE(downloadPtr->IsDone());

    ASSERT_TRUE(downloadPtr->CompletedSuccessfully());

    Aws::IFStream inFile(BIG_TEST_FILE_NAME, std::ios::binary | std::ios::ate);

    fileSize = inFile.tellg();
    ASSERT_EQ(fileSize, BIG_TEST_SIZE / testStrLen * testStrLen);
}

// Make sure we can properly cancel an active upload
TEST_F(TransferTests, CancelTest)
{
    ListMultipartUploadsRequest listMultipartRequest;
    listMultipartRequest.SetBucket(GetTestBucketName());

    if (EmptyBucket(GetTestBucketName()))
    {
        WaitForBucketToEmpty(GetTestBucketName());
    }

    const bool cCreateBucket = false;
    const bool cConsistencyChecks = false;
    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(CANCEL_TEST_FILE_NAME, GetTestBucketName(), CANCEL_FILE_KEY, "", cCreateBucket, cConsistencyChecks);

    uint64_t fileSize = requestPtr->GetFileSize();

    ASSERT_EQ(fileSize, CANCEL_TEST_SIZE / testStrLen * testStrLen);

    ASSERT_FALSE(requestPtr->IsDone());

    WaitForUploadAndUpdate(requestPtr, 40.0f);

    m_transferClient->CancelUpload(requestPtr);

    requestPtr->WaitUntilDone();

    ListMultipartUploadsOutcome listMultipartOutcome = m_s3Client->ListMultipartUploads(listMultipartRequest);

    EXPECT_TRUE(listMultipartOutcome.IsSuccess());

    ASSERT_EQ(listMultipartOutcome.GetResult().GetUploads().size(), 0u);

    ASSERT_FALSE(requestPtr->CompletedSuccessfully());

    ASSERT_EQ(listMultipartOutcome.GetResult().GetUploads().size(), 0u);
}

// This is a complete cycle - we upload a file, then download it, and compare content
TEST_F(TransferTests, DownloadContentTest)
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

    const bool cCreateBucket = true;
    const bool cConsistencyChecks = true;
    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(CONTENT_TEST_FILE_NAME, GetTestBucketName(), CONTENT_FILE_KEY, "", cCreateBucket, cConsistencyChecks);

    ASSERT_EQ(requestPtr->GetTotalParts(), 1u); // Should be tiny

    ASSERT_FALSE(requestPtr->IsDone());

    WaitForUploadAndUpdate(requestPtr, 100.0f);

    ASSERT_TRUE(requestPtr->IsDone());

    uint64_t fileSize = requestPtr->GetFileSize();
    ASSERT_TRUE(fileSize == strlen(CONTENT_TEST_FILE_TEXT));

    ASSERT_TRUE(requestPtr->CompletedSuccessfully());

    WaitForObjectToPropagate(GetTestBucketName(), CONTENT_FILE_KEY);

    ASSERT_TRUE(CheckListObjectsValidation(requestPtr));

    std::shared_ptr<DownloadFileRequest> downloadPtr = m_transferClient->DownloadFile(CONTENT_TEST_DOWNLOAD_FILE_NAME, GetTestBucketName(), CONTENT_FILE_KEY);

    WaitForDownloadAndUpdate(downloadPtr, 100.0f);

    ASSERT_TRUE(downloadPtr->IsDone());

    ASSERT_TRUE(downloadPtr->CompletedSuccessfully());

    Aws::IFStream inFile(CONTENT_TEST_DOWNLOAD_FILE_NAME);
    Aws::StringStream testStr;
    if (inFile.good() && inFile.is_open())
    {
        testStr << inFile.rdbuf();
    }
    ASSERT_EQ(testStr.str(), CONTENT_TEST_FILE_TEXT);

}

// This guarantees that content is not affected by performing a multi part upload 
// It performs an exact file comparison after the cycle is complete
TEST_F(TransferTests, MultiPartContentTest)
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

    ListMultipartUploadsRequest listMultipartRequest;
    listMultipartRequest.SetBucket(GetTestBucketName());

    const bool cCreateBucket = true;
    const bool cConsistencyChecks = true;
    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(MULTI_PART_CONTENT_FILE, GetTestBucketName(), MULTI_PART_CONTENT_KEY, "", cCreateBucket, cConsistencyChecks);

    ASSERT_EQ(requestPtr->GetTotalParts(), PARTS_IN_MEDIUM_TEST); // > 1 part

    ASSERT_FALSE(requestPtr->IsDone());

    WaitForUploadAndUpdate(requestPtr, 100.0f);

    ASSERT_TRUE(requestPtr->IsDone());

    ASSERT_TRUE(requestPtr->CompletedSuccessfully());

    WaitForObjectToPropagate(GetTestBucketName(), MULTI_PART_CONTENT_KEY);
    ListObjectsRequest listRequest;
    listRequest.SetBucket(GetTestBucketName());

    ASSERT_TRUE(CheckListObjectsValidation(requestPtr));

    std::shared_ptr<DownloadFileRequest> downloadPtr = m_transferClient->DownloadFile(MULTI_PART_CONTENT_DOWNLOAD, GetTestBucketName(), MULTI_PART_CONTENT_KEY);

    WaitForDownloadAndUpdate(downloadPtr, 100.0f);

    ASSERT_TRUE(downloadPtr->IsDone());

    ASSERT_TRUE(downloadPtr->CompletedSuccessfully());

    ASSERT_TRUE(AreFilesSame(MULTI_PART_CONTENT_DOWNLOAD, MULTI_PART_CONTENT_FILE));
}

// This test is to be sure that we can process multiple downloads at the same time correctly
TEST_F(TransferTests, MultiDownloadTest)
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

    const bool cCreateBucket = true;
    const bool cConsistencyChecks = true;
    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(CONTENT_TEST_FILE_NAME, GetTestBucketName(), CONTENT_FILE_KEY, "", cCreateBucket, cConsistencyChecks);

    ASSERT_EQ(requestPtr->GetTotalParts(), 1u); // Should be tiny

    ASSERT_FALSE(requestPtr->IsDone());

    WaitForUploadAndUpdate(requestPtr, 100.0f);

    ASSERT_TRUE(requestPtr->IsDone());

    uint64_t fileSize = requestPtr->GetFileSize();
    ASSERT_TRUE(fileSize == strlen(CONTENT_TEST_FILE_TEXT));

    ASSERT_TRUE(requestPtr->CompletedSuccessfully());

    WaitForObjectToPropagate(GetTestBucketName(), CONTENT_FILE_KEY);

    ASSERT_TRUE(CheckListObjectsValidation(requestPtr));

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

    std::shared_ptr<DownloadFileRequest> downloadPtr1 = m_transferClient->DownloadFile(dir1, GetTestBucketName(), CONTENT_FILE_KEY);
    std::shared_ptr<DownloadFileRequest> downloadPtr2 = m_transferClient->DownloadFile(dir2, GetTestBucketName(), CONTENT_FILE_KEY);
    std::shared_ptr<DownloadFileRequest> downloadPtr3 = m_transferClient->DownloadFile(dir3, GetTestBucketName(), CONTENT_FILE_KEY);
    std::shared_ptr<DownloadFileRequest> downloadPtr4 = m_transferClient->DownloadFile(dir4, GetTestBucketName(), CONTENT_FILE_KEY);
    std::shared_ptr<DownloadFileRequest> downloadPtr5 = m_transferClient->DownloadFile(dir5, GetTestBucketName(), CONTENT_FILE_KEY);

    downloadPtr1->WaitUntilDone();
    ASSERT_TRUE(downloadPtr1->IsDone());
    ASSERT_TRUE(downloadPtr1->CompletedSuccessfully());

    downloadPtr2->WaitUntilDone();
    ASSERT_TRUE(downloadPtr2->IsDone());
    ASSERT_TRUE(downloadPtr2->CompletedSuccessfully());

    downloadPtr3->WaitUntilDone();
    ASSERT_TRUE(downloadPtr3->IsDone());
    ASSERT_TRUE(downloadPtr3->CompletedSuccessfully());

    downloadPtr4->WaitUntilDone();
    ASSERT_TRUE(downloadPtr4->IsDone());
    ASSERT_TRUE(downloadPtr4->CompletedSuccessfully());

    downloadPtr5->WaitUntilDone();
    ASSERT_TRUE(downloadPtr5->IsDone());
    ASSERT_TRUE(downloadPtr5->CompletedSuccessfully());

    Aws::IFStream inFile(dir1.c_str());
    Aws::StringStream testStr;
    if (inFile.good() && inFile.is_open())
    {
        testStr << inFile.rdbuf();
    }
    ASSERT_EQ(testStr.str(), CONTENT_TEST_FILE_TEXT);
    inFile.close();
    testStr.str("");

    inFile.open(dir2.c_str());
    if (inFile.good() && inFile.is_open())
    {
        testStr << inFile.rdbuf();
    }
    ASSERT_EQ(testStr.str(), CONTENT_TEST_FILE_TEXT);
    inFile.close();
    testStr.str("");

    inFile.open(dir3.c_str());
    if (inFile.good() && inFile.is_open())
    {
        testStr << inFile.rdbuf();
    }
    ASSERT_EQ(testStr.str(), CONTENT_TEST_FILE_TEXT);
    inFile.close();
    testStr.str("");

    inFile.open(dir4.c_str());
    if (inFile.good() && inFile.is_open())
    {
        testStr << inFile.rdbuf();
    }
    ASSERT_EQ(testStr.str(), CONTENT_TEST_FILE_TEXT);
    inFile.close();
    testStr.str("");

    inFile.open(dir5.c_str());
    if (inFile.good() && inFile.is_open())
    {
        testStr << inFile.rdbuf();
    }
    ASSERT_EQ(testStr.str(), CONTENT_TEST_FILE_TEXT);
    inFile.close();
    testStr.str("");

}

// Test to be sure our completion callbacks fire correctly
TEST_F(TransferTests, CallbackTest)
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

    const bool cCreateBucket = true;
    const bool cConsistencyChecks = true;
    // Test with default behavior of using file name as key
    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(SMALL_TEST_FILE_NAME, GetTestBucketName(), "", "", cCreateBucket, cConsistencyChecks);

    bool testCallbackDone = false;

    requestPtr->AddCompletionCallback([&]() { testCallbackDone = true; });

    ASSERT_EQ(requestPtr->GetTotalParts(), 1u); // Should be just under 5 megs

    ASSERT_FALSE(testCallbackDone);
    ASSERT_FALSE(requestPtr->IsDone());

    WaitForUploadAndUpdate(requestPtr, 100.0f);

    ASSERT_TRUE(requestPtr->IsDone());

    ASSERT_TRUE(requestPtr->CompletedSuccessfully());
    ASSERT_TRUE(testCallbackDone);

}

// Test several multi part uploads happening in parallel where buffer handoffs are taking
// place behind the scenes as uploads are completed
TEST_F(TransferTests, MultiBigTest)
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

    ListMultipartUploadsRequest listMultipartRequest;

    listMultipartRequest.SetBucket(GetTestBucketName());

    Aws::String file1(BIG_FILE_KEY);
    file1 += "1";

    Aws::String file2(BIG_FILE_KEY);
    file2 += "2";

    Aws::String file3(BIG_FILE_KEY);
    file3 += "3";

    bool createBucket = true; // Not const, we only want to create the first time
    const bool cConsistencyChecks = true;
    std::shared_ptr<UploadFileRequest> requestPtr1 = m_transferClient->UploadFile(BIG_TEST_FILE_NAME, GetTestBucketName(), file1.c_str(), "", createBucket, cConsistencyChecks);

    WaitForUploadAndUpdate(requestPtr1, 10.0f);
    ASSERT_FALSE(requestPtr1->IsDone());

    createBucket = false;
    std::shared_ptr<UploadFileRequest> requestPtr2 = m_transferClient->UploadFile(BIG_TEST_FILE_NAME, GetTestBucketName(), file2.c_str(), "", createBucket, cConsistencyChecks);

    ASSERT_FALSE(requestPtr2->IsDone());

    WaitForUploadAndUpdate(requestPtr1, 100.0f);
    ASSERT_TRUE(requestPtr1->CompletedSuccessfully());

    WaitForUploadAndUpdate(requestPtr2, 100.0f);

    ASSERT_TRUE(requestPtr2->CompletedSuccessfully());

    std::shared_ptr<UploadFileRequest> requestPtr3 = m_transferClient->UploadFile(BIG_TEST_FILE_NAME, GetTestBucketName(), file3.c_str(), "", createBucket, cConsistencyChecks);;

    ASSERT_FALSE(requestPtr3->IsDone());

    WaitForUploadAndUpdate(requestPtr3, 100.0f);

    ASSERT_TRUE(requestPtr3->CompletedSuccessfully());

    WaitForObjectToPropagate(GetTestBucketName(), file1.c_str());
    WaitForObjectToPropagate(GetTestBucketName(), file2.c_str());
    WaitForObjectToPropagate(GetTestBucketName(), file3.c_str());

    ASSERT_TRUE(CheckListObjectsValidation(requestPtr1));
    ASSERT_TRUE(CheckListObjectsValidation(requestPtr2));
    ASSERT_TRUE(CheckListObjectsValidation(requestPtr3));


}

// Here we're testing to make sure the expected results occur when the handler we've been given for the upload goes out of scope
// Behind the scenes our request contexts contain additional shared pointers to our handlers which should keep them in scope
// meaning they should continue to process as they were last told.  Outstanding requests will finish, cancels will complete
// the parts in progress and then cancel correctly, and buffers should properly be freed up to hand to the next request to process
TEST_F(TransferTests, ScopeTests)
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

    ListMultipartUploadsRequest listMultipartRequest;
    listMultipartRequest.SetBucket(GetTestBucketName());

    bool createBucket = true; // Yes please, create the bucket
    const bool cConsistencyChecks = true;
    const float cCancelPercent = 10.0;

    // First we'll grab a single buffer
    {
        std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(SMALL_TEST_FILE_NAME, GetTestBucketName(), "", "", createBucket, cConsistencyChecks);
    }

    createBucket = false;

    // Now grab all available buffers (19 by default though we want 20)
    {
        if (EmptyBucket(GetTestBucketName()))
        {
            WaitForBucketToEmpty(GetTestBucketName());
        }
        std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(CANCEL_TEST_FILE_NAME, GetTestBucketName(), CANCEL_FILE_KEY, "", createBucket, cConsistencyChecks);

        uint64_t fileSize = requestPtr->GetFileSize();

        ASSERT_EQ(fileSize, CANCEL_TEST_SIZE / testStrLen * testStrLen);

        ASSERT_FALSE(requestPtr->IsDone());
        WaitForUploadAndUpdate(requestPtr, cCancelPercent);
        // Cancel though we have outstanding requests we've started which keep our buffers locked
        m_transferClient->CancelUpload(requestPtr);
    }
    {
        // Now this guy should start with one buffer (The initial one after it's done)
        std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(CANCEL_TEST_FILE_NAME, GetTestBucketName(), CANCEL_FILE_KEY2, "", createBucket, cConsistencyChecks);

        size_t startBuffers = requestPtr->GetResourcesInUse();

        uint64_t fileSize = requestPtr->GetFileSize();

        ASSERT_EQ(fileSize, CANCEL_TEST_SIZE / testStrLen * testStrLen);

        ASSERT_FALSE(requestPtr->IsDone());

        size_t finalBuffers = startBuffers;
        unsigned timeoutCount = 0;

        // And some time during the process should collect the buffers from our canceled upload
        while (timeoutCount++ < TEST_WAIT_TIMEOUT_LONG && !requestPtr->IsDone())
        {
            finalBuffers = requestPtr->GetResourcesInUse();
            if (finalBuffers != startBuffers)
            {
                m_transferClient->CancelUpload(requestPtr);
                break;
            }
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        // Either we got more buffers, or we started with everything we could use
        // either because our start value is artificially low or we finished our initial uploads incredibly fast
        EXPECT_TRUE(startBuffers == m_transferClient->GetConfigBufferCount() || finalBuffers != startBuffers || requestPtr->CompletedSuccessfully());
    }
}

// Single part upload with metadata specified
TEST_F(TransferTests, SinglePartUploadWithMetadataTest)
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
    const bool cCreateBucket = true;
    const bool cConsistencyChecks = false;
    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(TEST_FILE_NAME, GetTestBucketName(), "", "", metadata, cCreateBucket, cConsistencyChecks);

    ASSERT_FALSE(requestPtr->IsDone());

    WaitForUploadAndUpdate(requestPtr, 100.0f);

    ASSERT_TRUE(requestPtr->IsDone());

    ASSERT_TRUE(requestPtr->CompletedSuccessfully());

    WaitForObjectToPropagate(GetTestBucketName(), TEST_FILE_NAME);

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
    const bool cCreateBucket = true;
    const bool cConsistencyChecks = false;
    std::shared_ptr<UploadFileRequest> requestPtr = m_transferClient->UploadFile(MEDIUM_TEST_FILE_NAME, GetTestBucketName(), MEDIUM_FILE_KEY, "", metadata, cCreateBucket, cConsistencyChecks);

    ASSERT_FALSE(requestPtr->IsDone());

    WaitForUploadAndUpdate(requestPtr, 100.0f);

    ASSERT_TRUE(requestPtr->IsDone());
    ASSERT_TRUE(requestPtr->CompletedSuccessfully());

    WaitForObjectToPropagate(GetTestBucketName(), MEDIUM_FILE_KEY);

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
