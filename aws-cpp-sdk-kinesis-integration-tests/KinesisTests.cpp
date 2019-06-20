/*
 * Copyright 2019 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/kinesis/KinesisClient.h>
#include <aws/kinesis/model/CreateStreamRequest.h>
#include <aws/kinesis/model/DescribeStreamRequest.h>
#include <aws/kinesis/model/RegisterStreamConsumerRequest.h>
#include <aws/kinesis/model/DeregisterStreamConsumerRequest.h>
#include <aws/kinesis/model/SubscribeToShardRequest.h>
#include <aws/kinesis/model/SubscribeToShardHandler.h>
#include <aws/kinesis/model/DescribeStreamConsumerRequest.h>
#include <aws/kinesis/model/ListShardsRequest.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/core/utils/Outcome.h>

#include <thread>
#include <chrono>

using namespace Aws;
using namespace Aws::Kinesis;
using namespace Aws::Kinesis::Model;

namespace {
const char ALLOC_TAG[]   = "KinesisIntegrationTest";
// Creating the stream at the beginning of the test takes a long time (~ 1 minute)
// Since we're relying on pre-created Kinesis streams for Lambda's integration tests, we can use the same stream in this
// test.
// TODO: Create the streams as part of the setup and delete them during teardown. Needs to be done here and in Lambda's
// integration tests.
const char STREAM_NAME[] =  "AWSNativeSDKIntegrationTest";

class KinesisTest : public ::testing::Test
{

protected:

    void SetUp()
    {
        m_UUID = Aws::Utils::UUID::RandomUUID();
        Client::ClientConfiguration config;
        config.region = Aws::Region::US_EAST_1;
        m_client.reset(Aws::New<KinesisClient>(ALLOC_TAG, config));
    }

    Aws::String BuildResourceName(const char* name)
    {
        return Aws::Testing::GetAwsResourcePrefix() + m_UUID + name;
    }

    void WaitUntilConsumerIsActive(const Aws::String& consumerARN)
    {
        DescribeStreamConsumerRequest request;
        request.SetConsumerARN(consumerARN);
        int maxRetries = 30;
        while(maxRetries-- > 0)
        {
            const auto& outcome = m_client->DescribeStreamConsumer(request);
            if (outcome.IsSuccess())
            {
                if (outcome.GetResult().GetConsumerDescription().GetConsumerStatus() == ConsumerStatus::ACTIVE)
                {
                    AWS_LOGSTREAM_INFO(ALLOC_TAG, "Consumer " << consumerARN << " is now in ACTIVE state.");
                    return;
                }
            }
            else if (outcome.GetError().GetErrorType() != KinesisErrors::RESOURCE_NOT_FOUND)
            {
                FAIL();
            }
            std::this_thread::sleep_for(std::chrono::seconds(2));
        }
        ASSERT_GT(maxRetries, 0);
    }

    Aws::UniquePtr<KinesisClient> m_client;
    Aws::String m_UUID;
};

TEST_F(KinesisTest, EnhancedFanOut)
{
    // Get the Stream ARN (different between accounts)
    DescribeStreamRequest describeStreamRequest;
    describeStreamRequest.SetStreamName(STREAM_NAME);
    auto describeStreamOutcome = m_client->DescribeStream(describeStreamRequest);
    ASSERT_TRUE(describeStreamOutcome.IsSuccess());
    const auto streamARN = describeStreamOutcome.GetResult().GetStreamDescription().GetStreamARN();

    // Register a consumer for enhanced fan-out
    RegisterStreamConsumerRequest registerRequest;
    const auto consumerName = BuildResourceName("sdktest");
    registerRequest.WithConsumerName(consumerName).WithStreamARN(streamARN);
    auto registerConsumerOutcome = m_client->RegisterStreamConsumer(registerRequest);
    ASSERT_TRUE(registerConsumerOutcome.IsSuccess());
    const auto consumerARN = registerConsumerOutcome.GetResult().GetConsumer().GetConsumerARN();
    WaitUntilConsumerIsActive(consumerARN);

    // Get the shard id
    ListShardsRequest listShardRequest;
    listShardRequest.SetStreamName(STREAM_NAME);
    auto listShardsOutcome = m_client->ListShards(listShardRequest);
    ASSERT_TRUE(listShardsOutcome.IsSuccess());
    const auto& shards = listShardsOutcome.GetResult().GetShards();
    ASSERT_FALSE(shards.empty());
    const auto shardId = shards[0].GetShardId();

    // Subscribe To the shard
    SubscribeToShardHandler handler;
    handler.SetSubscribeToShardEventCallback([](SubscribeToShardEvent const& ev)
    {
        const auto& records = ev.GetRecords();
        AWS_LOGSTREAM_INFO(ALLOC_TAG, "Received " << records.size() << " records.");
    });

    handler.SetOnErrorCallback([](const Aws::Client::AWSError<KinesisErrors>& error)
    {
        AWS_LOGSTREAM_ERROR(ALLOC_TAG, "OnErrorCallback: " << error.GetMessage());
        FAIL();
    });

    StartingPosition position;
    position.SetType(ShardIteratorType::TRIM_HORIZON); // start from the beginning of the stream

    SubscribeToShardRequest subscribeRequest;
    subscribeRequest.WithConsumerARN(consumerARN)
        .WithShardId(shardId)
        .WithStartingPosition(position);
    subscribeRequest.SetEventStreamHandler(handler);
    const auto subscribeOutcome = m_client->SubscribeToShard(subscribeRequest);
    ASSERT_TRUE(subscribeOutcome.IsSuccess());

    // Deregister the consumer from fan-out (we're only allowed 5, so we must cleanup)
    DeregisterStreamConsumerRequest deregisterRequest;
    deregisterRequest.WithConsumerName(consumerName)
                     .WithStreamARN(streamARN)
                     .WithConsumerARN(consumerARN);
    ASSERT_TRUE(m_client->DeregisterStreamConsumer(deregisterRequest).IsSuccess());
}

}
