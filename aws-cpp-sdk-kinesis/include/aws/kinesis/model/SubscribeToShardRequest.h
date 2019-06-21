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

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/kinesis/model/SubscribeToShardHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/StartingPosition.h>
#include <utility>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   */
  class AWS_KINESIS_API SubscribeToShardRequest : public KinesisRequest
  {
  public:
    SubscribeToShardRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubscribeToShard"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline const SubscribeToShardHandler& GetEventStreamHandler() const { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const SubscribeToShardHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline SubscribeToShardRequest& WithEventStreamHandler(const SubscribeToShardHandler& value) { SetEventStreamHandler(value); return *this; }


    /**
     * <p>For this parameter, use the value you obtained when you called
     * <a>RegisterStreamConsumer</a>.</p>
     */
    inline const Aws::String& GetConsumerARN() const{ return m_consumerARN; }

    /**
     * <p>For this parameter, use the value you obtained when you called
     * <a>RegisterStreamConsumer</a>.</p>
     */
    inline bool ConsumerARNHasBeenSet() const { return m_consumerARNHasBeenSet; }

    /**
     * <p>For this parameter, use the value you obtained when you called
     * <a>RegisterStreamConsumer</a>.</p>
     */
    inline void SetConsumerARN(const Aws::String& value) { m_consumerARNHasBeenSet = true; m_consumerARN = value; }

    /**
     * <p>For this parameter, use the value you obtained when you called
     * <a>RegisterStreamConsumer</a>.</p>
     */
    inline void SetConsumerARN(Aws::String&& value) { m_consumerARNHasBeenSet = true; m_consumerARN = std::move(value); }

    /**
     * <p>For this parameter, use the value you obtained when you called
     * <a>RegisterStreamConsumer</a>.</p>
     */
    inline void SetConsumerARN(const char* value) { m_consumerARNHasBeenSet = true; m_consumerARN.assign(value); }

    /**
     * <p>For this parameter, use the value you obtained when you called
     * <a>RegisterStreamConsumer</a>.</p>
     */
    inline SubscribeToShardRequest& WithConsumerARN(const Aws::String& value) { SetConsumerARN(value); return *this;}

    /**
     * <p>For this parameter, use the value you obtained when you called
     * <a>RegisterStreamConsumer</a>.</p>
     */
    inline SubscribeToShardRequest& WithConsumerARN(Aws::String&& value) { SetConsumerARN(std::move(value)); return *this;}

    /**
     * <p>For this parameter, use the value you obtained when you called
     * <a>RegisterStreamConsumer</a>.</p>
     */
    inline SubscribeToShardRequest& WithConsumerARN(const char* value) { SetConsumerARN(value); return *this;}


    /**
     * <p>The ID of the shard you want to subscribe to. To see a list of all the shards
     * for a given stream, use <a>ListShards</a>.</p>
     */
    inline const Aws::String& GetShardId() const{ return m_shardId; }

    /**
     * <p>The ID of the shard you want to subscribe to. To see a list of all the shards
     * for a given stream, use <a>ListShards</a>.</p>
     */
    inline bool ShardIdHasBeenSet() const { return m_shardIdHasBeenSet; }

    /**
     * <p>The ID of the shard you want to subscribe to. To see a list of all the shards
     * for a given stream, use <a>ListShards</a>.</p>
     */
    inline void SetShardId(const Aws::String& value) { m_shardIdHasBeenSet = true; m_shardId = value; }

    /**
     * <p>The ID of the shard you want to subscribe to. To see a list of all the shards
     * for a given stream, use <a>ListShards</a>.</p>
     */
    inline void SetShardId(Aws::String&& value) { m_shardIdHasBeenSet = true; m_shardId = std::move(value); }

    /**
     * <p>The ID of the shard you want to subscribe to. To see a list of all the shards
     * for a given stream, use <a>ListShards</a>.</p>
     */
    inline void SetShardId(const char* value) { m_shardIdHasBeenSet = true; m_shardId.assign(value); }

    /**
     * <p>The ID of the shard you want to subscribe to. To see a list of all the shards
     * for a given stream, use <a>ListShards</a>.</p>
     */
    inline SubscribeToShardRequest& WithShardId(const Aws::String& value) { SetShardId(value); return *this;}

    /**
     * <p>The ID of the shard you want to subscribe to. To see a list of all the shards
     * for a given stream, use <a>ListShards</a>.</p>
     */
    inline SubscribeToShardRequest& WithShardId(Aws::String&& value) { SetShardId(std::move(value)); return *this;}

    /**
     * <p>The ID of the shard you want to subscribe to. To see a list of all the shards
     * for a given stream, use <a>ListShards</a>.</p>
     */
    inline SubscribeToShardRequest& WithShardId(const char* value) { SetShardId(value); return *this;}


    
    inline const StartingPosition& GetStartingPosition() const{ return m_startingPosition; }

    
    inline bool StartingPositionHasBeenSet() const { return m_startingPositionHasBeenSet; }

    
    inline void SetStartingPosition(const StartingPosition& value) { m_startingPositionHasBeenSet = true; m_startingPosition = value; }

    
    inline void SetStartingPosition(StartingPosition&& value) { m_startingPositionHasBeenSet = true; m_startingPosition = std::move(value); }

    
    inline SubscribeToShardRequest& WithStartingPosition(const StartingPosition& value) { SetStartingPosition(value); return *this;}

    
    inline SubscribeToShardRequest& WithStartingPosition(StartingPosition&& value) { SetStartingPosition(std::move(value)); return *this;}

  private:

    Aws::String m_consumerARN;
    bool m_consumerARNHasBeenSet;

    Aws::String m_shardId;
    bool m_shardIdHasBeenSet;

    StartingPosition m_startingPosition;
    bool m_startingPositionHasBeenSet;
    Aws::Utils::Event::EventStreamDecoder m_decoder;
    SubscribeToShardHandler m_handler;

  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
