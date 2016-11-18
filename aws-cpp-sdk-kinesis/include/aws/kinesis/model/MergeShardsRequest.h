/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   * <p>Represents the input for <code>MergeShards</code>.</p>
   */
  class AWS_KINESIS_API MergeShardsRequest : public KinesisRequest
  {
  public:
    MergeShardsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the stream for the merge.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream for the merge.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream for the merge.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

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
    inline MergeShardsRequest& WithStreamName(Aws::String&& value) { SetStreamName(value); return *this;}

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
    inline void SetShardToMerge(const Aws::String& value) { m_shardToMergeHasBeenSet = true; m_shardToMerge = value; }

    /**
     * <p>The shard ID of the shard to combine with the adjacent shard for the
     * merge.</p>
     */
    inline void SetShardToMerge(Aws::String&& value) { m_shardToMergeHasBeenSet = true; m_shardToMerge = value; }

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
    inline MergeShardsRequest& WithShardToMerge(Aws::String&& value) { SetShardToMerge(value); return *this;}

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
    inline void SetAdjacentShardToMerge(const Aws::String& value) { m_adjacentShardToMergeHasBeenSet = true; m_adjacentShardToMerge = value; }

    /**
     * <p>The shard ID of the adjacent shard for the merge.</p>
     */
    inline void SetAdjacentShardToMerge(Aws::String&& value) { m_adjacentShardToMergeHasBeenSet = true; m_adjacentShardToMerge = value; }

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
    inline MergeShardsRequest& WithAdjacentShardToMerge(Aws::String&& value) { SetAdjacentShardToMerge(value); return *this;}

    /**
     * <p>The shard ID of the adjacent shard for the merge.</p>
     */
    inline MergeShardsRequest& WithAdjacentShardToMerge(const char* value) { SetAdjacentShardToMerge(value); return *this;}

  private:
    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;
    Aws::String m_shardToMerge;
    bool m_shardToMergeHasBeenSet;
    Aws::String m_adjacentShardToMerge;
    bool m_adjacentShardToMergeHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
