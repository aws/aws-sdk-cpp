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
    AWS_KINESIS_API MergeShardsRequest();

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

    /**
     * <p>The name of the stream for the merge.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream for the merge.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the stream for the merge.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream for the merge.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream for the merge.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream for the merge.</p>
     */
    inline MergeShardsRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream for the merge.</p>
     */
    inline MergeShardsRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream for the merge.</p>
     */
    inline MergeShardsRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The shard ID of the shard to combine with the adjacent shard for the
     * merge.</p>
     */
    inline const Aws::String& GetShardToMerge() const{ return m_shardToMerge; }

    /**
     * <p>The shard ID of the shard to combine with the adjacent shard for the
     * merge.</p>
     */
    inline bool ShardToMergeHasBeenSet() const { return m_shardToMergeHasBeenSet; }

    /**
     * <p>The shard ID of the shard to combine with the adjacent shard for the
     * merge.</p>
     */
    inline void SetShardToMerge(const Aws::String& value) { m_shardToMergeHasBeenSet = true; m_shardToMerge = value; }

    /**
     * <p>The shard ID of the shard to combine with the adjacent shard for the
     * merge.</p>
     */
    inline void SetShardToMerge(Aws::String&& value) { m_shardToMergeHasBeenSet = true; m_shardToMerge = std::move(value); }

    /**
     * <p>The shard ID of the shard to combine with the adjacent shard for the
     * merge.</p>
     */
    inline void SetShardToMerge(const char* value) { m_shardToMergeHasBeenSet = true; m_shardToMerge.assign(value); }

    /**
     * <p>The shard ID of the shard to combine with the adjacent shard for the
     * merge.</p>
     */
    inline MergeShardsRequest& WithShardToMerge(const Aws::String& value) { SetShardToMerge(value); return *this;}

    /**
     * <p>The shard ID of the shard to combine with the adjacent shard for the
     * merge.</p>
     */
    inline MergeShardsRequest& WithShardToMerge(Aws::String&& value) { SetShardToMerge(std::move(value)); return *this;}

    /**
     * <p>The shard ID of the shard to combine with the adjacent shard for the
     * merge.</p>
     */
    inline MergeShardsRequest& WithShardToMerge(const char* value) { SetShardToMerge(value); return *this;}


    /**
     * <p>The shard ID of the adjacent shard for the merge.</p>
     */
    inline const Aws::String& GetAdjacentShardToMerge() const{ return m_adjacentShardToMerge; }

    /**
     * <p>The shard ID of the adjacent shard for the merge.</p>
     */
    inline bool AdjacentShardToMergeHasBeenSet() const { return m_adjacentShardToMergeHasBeenSet; }

    /**
     * <p>The shard ID of the adjacent shard for the merge.</p>
     */
    inline void SetAdjacentShardToMerge(const Aws::String& value) { m_adjacentShardToMergeHasBeenSet = true; m_adjacentShardToMerge = value; }

    /**
     * <p>The shard ID of the adjacent shard for the merge.</p>
     */
    inline void SetAdjacentShardToMerge(Aws::String&& value) { m_adjacentShardToMergeHasBeenSet = true; m_adjacentShardToMerge = std::move(value); }

    /**
     * <p>The shard ID of the adjacent shard for the merge.</p>
     */
    inline void SetAdjacentShardToMerge(const char* value) { m_adjacentShardToMergeHasBeenSet = true; m_adjacentShardToMerge.assign(value); }

    /**
     * <p>The shard ID of the adjacent shard for the merge.</p>
     */
    inline MergeShardsRequest& WithAdjacentShardToMerge(const Aws::String& value) { SetAdjacentShardToMerge(value); return *this;}

    /**
     * <p>The shard ID of the adjacent shard for the merge.</p>
     */
    inline MergeShardsRequest& WithAdjacentShardToMerge(Aws::String&& value) { SetAdjacentShardToMerge(std::move(value)); return *this;}

    /**
     * <p>The shard ID of the adjacent shard for the merge.</p>
     */
    inline MergeShardsRequest& WithAdjacentShardToMerge(const char* value) { SetAdjacentShardToMerge(value); return *this;}


    /**
     * <p>The ARN of the stream.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline MergeShardsRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The ARN of the stream.</p>
     */
    inline MergeShardsRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the stream.</p>
     */
    inline MergeShardsRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}

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
