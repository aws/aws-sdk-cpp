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
#include <fstream>

#include <aws/external/gtest.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/ratelimiter/DefaultRateLimiter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/StringUtils.h>

#include <aws/logging/S3EventLogger.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/HeadBucketRequest.h>
#include <aws/s3/model/ListObjectsRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>

using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::S3;
using namespace Aws::S3::Model;
using namespace Aws::Logging;
using namespace Aws::Utils;


static const char* ALLOCATION_TAG = "FunctionTest";

static const int TIMEOUT_MAX = 10;

namespace {

class LoggingTest : public ::testing::Test {

public:
    static std::shared_ptr<S3Client> client;
    static std::shared_ptr<S3EventLogger> s3EventLogger;
    static std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> limiter;
    static Aws::String BucketName;

protected:

    static ClientConfiguration getClientConfiguration()
    {

        ClientConfiguration config;
        config.scheme = Scheme::HTTP;
        config.connectTimeoutMs = 30000;
        config.requestTimeoutMs = 30000;
        config.readRateLimiter = limiter;
        config.writeRateLimiter = limiter;
        return config;
    }

    static void SetUpTestCase()
    {
        CreateTestBucket();
    }

    static void TearDownTestCase()
    {
        EmptyBucket(BucketName);
        DeleteTestBucket();
    }

    static void CreateTestBucket()
    {

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(BucketName);

        CreateBucketOutcome createBucketOutcome = client->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
        WaitForBucketToPropagate(BucketName);

    }

    static void DeleteTestBucket()
    {
        DeleteBucketRequest deleteBucketRequest;
        deleteBucketRequest.SetBucket(BucketName);

        client->DeleteBucket(deleteBucketRequest);
    }

    static bool WaitForBucketToPropagate(const Aws::String& bucketName)
    {
        unsigned timeoutCount = 0;
        while (timeoutCount++ < TIMEOUT_MAX)
        {
            HeadBucketRequest headBucketRequest;
            headBucketRequest.SetBucket(bucketName);
            HeadBucketOutcome headBucketOutcome = client->HeadBucket(headBucketRequest);
            if (headBucketOutcome.IsSuccess())
            {
                return true;
            }

            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        return false;
    }

    static void EmptyBucket(const Aws::String& bucketName)
    {
        ListObjectsRequest listObjectsRequest;
        listObjectsRequest.SetBucket(bucketName);

        ListObjectsOutcome listObjectsOutcome = client->ListObjects(listObjectsRequest);

        if (!listObjectsOutcome.IsSuccess())
            return;

        for (const auto& object : listObjectsOutcome.GetResult().GetContents())
        {
            DeleteObjectRequest deleteObjectRequest;
            deleteObjectRequest.SetBucket(bucketName);
            deleteObjectRequest.SetKey(object.GetKey());
            client->DeleteObject(deleteObjectRequest);
        }
    }
};
std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> LoggingTest::limiter(Aws::MakeShared<Aws::Utils::RateLimits::DefaultRateLimiter<>>(ALLOCATION_TAG, 200000));
std::shared_ptr<S3Client> LoggingTest::client(Aws::MakeShared<S3Client>(ALLOCATION_TAG, LoggingTest::getClientConfiguration()));
Aws::String LoggingTest::BucketName("awsnativesdk-logging-" + DateTime::CalculateGmtTimestampAsString("%Y%m%dT%H%M%SZ"));
std::shared_ptr<S3EventLogger> LoggingTest::s3EventLogger(Aws::MakeShared<S3EventLogger>(ALLOCATION_TAG, client,S3EventLoggerConfiguration(BucketName, "MyPrefix")));


TEST_F(LoggingTest, TestLogging)
{
    auto event = Aws::MakeUnique<LogEvent>(ALLOCATION_TAG, "This is an event");
   
    s3EventLogger->QueueEvent(std::move(event));
    auto outcome = s3EventLogger->Flush();
    ASSERT_TRUE(outcome.IsSuccess());

    GetObjectRequest getRequest;
    getRequest.SetBucket(BucketName);
    getRequest.SetKey(outcome.GetResult().key);

    auto getOutcome = client->GetObject(getRequest);
    ASSERT_TRUE(getOutcome.IsSuccess());
    Aws::StringStream publishedEvents;

    publishedEvents << getOutcome.GetResult().GetBody().rdbuf();
    auto events = Aws::Utils::StringUtils::SplitOnLine(publishedEvents.str());
    
    ASSERT_EQ(1ul,events.size());

    auto eventParts = Aws::Utils::StringUtils::Split(events[0], '\t');
    ASSERT_EQ(2ul, eventParts.size());

    
    ASSERT_EQ("This is an event", eventParts[1]);


} 
}
