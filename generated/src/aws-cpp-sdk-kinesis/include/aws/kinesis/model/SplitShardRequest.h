/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   * <p>Represents the input for <code>SplitShard</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/SplitShardInput">AWS
   * API Reference</a></p>
   */
  class SplitShardRequest : public KinesisRequest
  {
  public:
    AWS_KINESIS_API SplitShardRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SplitShard"; }

    AWS_KINESIS_API Aws::String SerializePayload() const override;

    AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The name of the stream for the shard split.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    SplitShardRequest& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shard ID of the shard to split.</p>
     */
    inline const Aws::String& GetShardToSplit() const { return m_shardToSplit; }
    inline bool ShardToSplitHasBeenSet() const { return m_shardToSplitHasBeenSet; }
    template<typename ShardToSplitT = Aws::String>
    void SetShardToSplit(ShardToSplitT&& value) { m_shardToSplitHasBeenSet = true; m_shardToSplit = std::forward<ShardToSplitT>(value); }
    template<typename ShardToSplitT = Aws::String>
    SplitShardRequest& WithShardToSplit(ShardToSplitT&& value) { SetShardToSplit(std::forward<ShardToSplitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A hash key value for the starting hash key of one of the child shards created
     * by the split. The hash key range for a given shard constitutes a set of ordered
     * contiguous positive integers. The value for <code>NewStartingHashKey</code> must
     * be in the range of hash keys being mapped into the shard. The
     * <code>NewStartingHashKey</code> hash key value and all higher hash key values in
     * hash key range are distributed to one of the child shards. All the lower hash
     * key values in the range are distributed to the other child shard.</p>
     */
    inline const Aws::String& GetNewStartingHashKey() const { return m_newStartingHashKey; }
    inline bool NewStartingHashKeyHasBeenSet() const { return m_newStartingHashKeyHasBeenSet; }
    template<typename NewStartingHashKeyT = Aws::String>
    void SetNewStartingHashKey(NewStartingHashKeyT&& value) { m_newStartingHashKeyHasBeenSet = true; m_newStartingHashKey = std::forward<NewStartingHashKeyT>(value); }
    template<typename NewStartingHashKeyT = Aws::String>
    SplitShardRequest& WithNewStartingHashKey(NewStartingHashKeyT&& value) { SetNewStartingHashKey(std::forward<NewStartingHashKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the stream.</p>
     */
    inline const Aws::String& GetStreamARN() const { return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    template<typename StreamARNT = Aws::String>
    void SetStreamARN(StreamARNT&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::forward<StreamARNT>(value); }
    template<typename StreamARNT = Aws::String>
    SplitShardRequest& WithStreamARN(StreamARNT&& value) { SetStreamARN(std::forward<StreamARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_shardToSplit;
    bool m_shardToSplitHasBeenSet = false;

    Aws::String m_newStartingHashKey;
    bool m_newStartingHashKeyHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
