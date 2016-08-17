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
   * <p>Represents the input for <code>DescribeStream</code>.</p>
   */
  class AWS_KINESIS_API DescribeStreamRequest : public KinesisRequest
  {
  public:
    DescribeStreamRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the stream to describe.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream to describe.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream to describe.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream to describe.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream to describe.</p>
     */
    inline DescribeStreamRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream to describe.</p>
     */
    inline DescribeStreamRequest& WithStreamName(Aws::String&& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream to describe.</p>
     */
    inline DescribeStreamRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}

    /**
     * <p>The maximum number of shards to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of shards to return.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of shards to return.</p>
     */
    inline DescribeStreamRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>The shard ID of the shard to start with.</p>
     */
    inline const Aws::String& GetExclusiveStartShardId() const{ return m_exclusiveStartShardId; }

    /**
     * <p>The shard ID of the shard to start with.</p>
     */
    inline void SetExclusiveStartShardId(const Aws::String& value) { m_exclusiveStartShardIdHasBeenSet = true; m_exclusiveStartShardId = value; }

    /**
     * <p>The shard ID of the shard to start with.</p>
     */
    inline void SetExclusiveStartShardId(Aws::String&& value) { m_exclusiveStartShardIdHasBeenSet = true; m_exclusiveStartShardId = value; }

    /**
     * <p>The shard ID of the shard to start with.</p>
     */
    inline void SetExclusiveStartShardId(const char* value) { m_exclusiveStartShardIdHasBeenSet = true; m_exclusiveStartShardId.assign(value); }

    /**
     * <p>The shard ID of the shard to start with.</p>
     */
    inline DescribeStreamRequest& WithExclusiveStartShardId(const Aws::String& value) { SetExclusiveStartShardId(value); return *this;}

    /**
     * <p>The shard ID of the shard to start with.</p>
     */
    inline DescribeStreamRequest& WithExclusiveStartShardId(Aws::String&& value) { SetExclusiveStartShardId(value); return *this;}

    /**
     * <p>The shard ID of the shard to start with.</p>
     */
    inline DescribeStreamRequest& WithExclusiveStartShardId(const char* value) { SetExclusiveStartShardId(value); return *this;}

  private:
    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_exclusiveStartShardId;
    bool m_exclusiveStartShardIdHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
