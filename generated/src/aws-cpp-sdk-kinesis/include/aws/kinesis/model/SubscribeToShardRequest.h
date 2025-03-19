/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class SubscribeToShardRequest : public KinesisRequest
  {
  public:
    AWS_KINESIS_API SubscribeToShardRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubscribeToShard"; }

    inline virtual bool HasEventStreamResponse() const override { return true; }
    AWS_KINESIS_API Aws::String SerializePayload() const override;

    AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline SubscribeToShardHandler& GetEventStreamHandler() { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const SubscribeToShardHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline SubscribeToShardRequest& WithEventStreamHandler(const SubscribeToShardHandler& value) { SetEventStreamHandler(value); return *this; }

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>For this parameter, use the value you obtained when you called
     * <a>RegisterStreamConsumer</a>.</p>
     */
    inline const Aws::String& GetConsumerARN() const { return m_consumerARN; }
    inline bool ConsumerARNHasBeenSet() const { return m_consumerARNHasBeenSet; }
    template<typename ConsumerARNT = Aws::String>
    void SetConsumerARN(ConsumerARNT&& value) { m_consumerARNHasBeenSet = true; m_consumerARN = std::forward<ConsumerARNT>(value); }
    template<typename ConsumerARNT = Aws::String>
    SubscribeToShardRequest& WithConsumerARN(ConsumerARNT&& value) { SetConsumerARN(std::forward<ConsumerARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the shard you want to subscribe to. To see a list of all the shards
     * for a given stream, use <a>ListShards</a>.</p>
     */
    inline const Aws::String& GetShardId() const { return m_shardId; }
    inline bool ShardIdHasBeenSet() const { return m_shardIdHasBeenSet; }
    template<typename ShardIdT = Aws::String>
    void SetShardId(ShardIdT&& value) { m_shardIdHasBeenSet = true; m_shardId = std::forward<ShardIdT>(value); }
    template<typename ShardIdT = Aws::String>
    SubscribeToShardRequest& WithShardId(ShardIdT&& value) { SetShardId(std::forward<ShardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The starting position in the data stream from which to start streaming.</p>
     */
    inline const StartingPosition& GetStartingPosition() const { return m_startingPosition; }
    inline bool StartingPositionHasBeenSet() const { return m_startingPositionHasBeenSet; }
    template<typename StartingPositionT = StartingPosition>
    void SetStartingPosition(StartingPositionT&& value) { m_startingPositionHasBeenSet = true; m_startingPosition = std::forward<StartingPositionT>(value); }
    template<typename StartingPositionT = StartingPosition>
    SubscribeToShardRequest& WithStartingPosition(StartingPositionT&& value) { SetStartingPosition(std::forward<StartingPositionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_consumerARN;
    bool m_consumerARNHasBeenSet = false;

    Aws::String m_shardId;
    bool m_shardIdHasBeenSet = false;

    StartingPosition m_startingPosition;
    bool m_startingPositionHasBeenSet = false;
    SubscribeToShardHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
