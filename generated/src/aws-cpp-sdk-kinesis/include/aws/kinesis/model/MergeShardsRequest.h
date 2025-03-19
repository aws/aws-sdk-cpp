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
   * <p>Represents the input for <code>MergeShards</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/MergeShardsInput">AWS
   * API Reference</a></p>
   */
  class MergeShardsRequest : public KinesisRequest
  {
  public:
    AWS_KINESIS_API MergeShardsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MergeShards"; }

    AWS_KINESIS_API Aws::String SerializePayload() const override;

    AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The name of the stream for the merge.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    MergeShardsRequest& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shard ID of the shard to combine with the adjacent shard for the
     * merge.</p>
     */
    inline const Aws::String& GetShardToMerge() const { return m_shardToMerge; }
    inline bool ShardToMergeHasBeenSet() const { return m_shardToMergeHasBeenSet; }
    template<typename ShardToMergeT = Aws::String>
    void SetShardToMerge(ShardToMergeT&& value) { m_shardToMergeHasBeenSet = true; m_shardToMerge = std::forward<ShardToMergeT>(value); }
    template<typename ShardToMergeT = Aws::String>
    MergeShardsRequest& WithShardToMerge(ShardToMergeT&& value) { SetShardToMerge(std::forward<ShardToMergeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shard ID of the adjacent shard for the merge.</p>
     */
    inline const Aws::String& GetAdjacentShardToMerge() const { return m_adjacentShardToMerge; }
    inline bool AdjacentShardToMergeHasBeenSet() const { return m_adjacentShardToMergeHasBeenSet; }
    template<typename AdjacentShardToMergeT = Aws::String>
    void SetAdjacentShardToMerge(AdjacentShardToMergeT&& value) { m_adjacentShardToMergeHasBeenSet = true; m_adjacentShardToMerge = std::forward<AdjacentShardToMergeT>(value); }
    template<typename AdjacentShardToMergeT = Aws::String>
    MergeShardsRequest& WithAdjacentShardToMerge(AdjacentShardToMergeT&& value) { SetAdjacentShardToMerge(std::forward<AdjacentShardToMergeT>(value)); return *this;}
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
    MergeShardsRequest& WithStreamARN(StreamARNT&& value) { SetStreamARN(std::forward<StreamARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_shardToMerge;
    bool m_shardToMergeHasBeenSet = false;

    Aws::String m_adjacentShardToMerge;
    bool m_adjacentShardToMergeHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
