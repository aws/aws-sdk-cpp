/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/kinesis/KinesisClient.h>
#include <aws/kinesis/model/AddTagsToStreamRequest.h>
#include <aws/kinesis/model/CreateStreamRequest.h>
#include <aws/kinesis/model/DeleteStreamRequest.h>
#include <aws/kinesis/model/DescribeStreamRequest.h>
#include <aws/kinesis/model/RegisterStreamConsumerRequest.h>
#include <aws/kinesis/model/DeregisterStreamConsumerRequest.h>
#include <aws/kinesis/model/SubscribeToShardRequest.h>
#include <aws/kinesis/model/SubscribeToShardHandler.h>
#include <aws/kinesis/model/StreamStatus.h>
#include <aws/kinesis/model/DescribeStreamConsumerRequest.h>
#include <aws/kinesis/model/ListShardsRequest.h>
#include <aws/testing/TestingEnvironment.h>

#include <thread>
#include <chrono>

using namespace Aws;
using namespace Aws::Kinesis;
using namespace Aws::Kinesis::Model;

namespace {
const char ALLOC_TAG[]   = "KinesisIntegrationTest";
const char TEST_TAG[] = "INTEGRATION_TEST";

class KinesisTest : public ::testing::Test
{

protected:

    void SetUp() override {
        // Create client
        m_UUID = Aws::Utils::UUID::RandomUUID();
        streamName = BuildResourceName("stream");
        Client::ClientConfiguration config;
        config.region = Aws::Region::US_EAST_1;
        m_client.reset(Aws::New<KinesisClient>(ALLOC_TAG, config));

        // Create stream
        auto createStream = m_client->CreateStream(CreateStreamRequest().WithStreamName(streamName));
        AWS_ASSERT_SUCCESS(createStream);

        // Wait 2 minutes for stream to be ready
        auto describeStream = m_client->DescribeStream(DescribeStreamRequest().WithStreamName(streamName));
        auto start = Aws::Utils::DateTime::CurrentTimeMillis();
        while (describeStream.GetResult().GetStreamDescription().GetStreamStatus() != StreamStatus::ACTIVE &&
                Aws::Utils::DateTime::CurrentTimeMillis() - start < 120000) {
            AWS_LOGSTREAM_INFO(ALLOC_TAG, "Waiting for kinesis to create stream");
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            describeStream = m_client->DescribeStream(DescribeStreamRequest().WithStreamName(streamName));
        }
        ASSERT_TRUE(describeStream.GetResult().GetStreamDescription().GetStreamStatus() == StreamStatus::ACTIVE);

        // Tag stream as test
        auto tagStreamOutcome =m_client->AddTagsToStream(AddTagsToStreamRequest()
                .WithStreamName(streamName)
                .WithTags({{TEST_TAG, TEST_TAG}}));
        AWS_ASSERT_SUCCESS(describeStream);
    }

    void TearDown() override {
        // Delete stream
        auto deleteStream = m_client->DeleteStream(DeleteStreamRequest().WithStreamName(streamName).WithEnforceConsumerDeletion(true));
        AWS_ASSERT_SUCCESS(deleteStream);
    }

    Aws::String BuildResourceName(const char* name)
    {
        return Aws::Testing::GetAwsResourcePrefix() + m_UUID + name;
    }

    void WaitUntilConsumerIsActive(const Aws::String& consumerARN)
    {
        DescribeStreamConsumerRequest request;
        request.SetConsumerARN(consumerARN);
        int maxRetries = 18;
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
            std::this_thread::sleep_for(std::chrono::seconds(10));
        }
        ASSERT_GT(maxRetries, 0);
    }

    Aws::UniquePtr<KinesisClient> m_client;
    Aws::String m_UUID;
    Aws::String streamName;
};

TEST_F(KinesisTest, EnhancedFanOut)
{
    // Get the Stream ARN (different between accounts)
    DescribeStreamRequest describeStreamRequest;
    describeStreamRequest.SetStreamName(streamName);
    auto describeStreamOutcome = m_client->DescribeStream(describeStreamRequest);
    AWS_ASSERT_SUCCESS(describeStreamOutcome);
    const auto streamARN = describeStreamOutcome.GetResult().GetStreamDescription().GetStreamARN();

    // Register a consumer for enhanced fan-out
    RegisterStreamConsumerRequest registerRequest;
    const auto consumerName = BuildResourceName("sdktest");
    registerRequest.WithConsumerName(consumerName).WithStreamARN(streamARN);
    auto registerConsumerOutcome = m_client->RegisterStreamConsumer(registerRequest);
    AWS_ASSERT_SUCCESS(registerConsumerOutcome);
    const auto consumerARN = registerConsumerOutcome.GetResult().GetConsumer().GetConsumerARN();
    WaitUntilConsumerIsActive(consumerARN);

    // Get the shard id
    ListShardsRequest listShardRequest;
    listShardRequest.SetStreamName(streamName);
    auto listShardsOutcome = m_client->ListShards(listShardRequest);
    AWS_ASSERT_SUCCESS(listShardsOutcome);
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
    const auto subscribeOutcome = m_client->SubmitCallable(&KinesisClient::SubscribeToShard, subscribeRequest).get();
    AWS_ASSERT_SUCCESS(subscribeOutcome);

    // Deregister the consumer from fan-out (we're only allowed 5, so we must cleanup)
    DeregisterStreamConsumerRequest deregisterRequest;
    deregisterRequest.WithConsumerName(consumerName)
                     .WithStreamARN(streamARN)
                     .WithConsumerARN(consumerARN);
    AWS_ASSERT_SUCCESS(m_client->DeregisterStreamConsumer(deregisterRequest));
}

}
