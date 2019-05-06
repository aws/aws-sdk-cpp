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
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/dynamodbstreams/DynamoDBStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodbstreams/model/ShardIteratorType.h>
#include <utility>

namespace Aws
{
namespace DynamoDBStreams
{
namespace Model
{

  /**
   * <p>Represents the input of a <i>GetShardIterator</i> operation.</p>
   */
  class AWS_DYNAMODBSTREAMS_API GetShardIteratorRequest : public DynamoDBStreamsRequest
  {
  public:
    GetShardIteratorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetShardIterator"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline void SetStreamArn(const Aws::String& value) { m_streamArnHasBeenSet = true; m_streamArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline void SetStreamArn(Aws::String&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline void SetStreamArn(const char* value) { m_streamArnHasBeenSet = true; m_streamArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline GetShardIteratorRequest& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline GetShardIteratorRequest& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the stream.</p>
     */
    inline GetShardIteratorRequest& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}


    /**
     * <p>The identifier of the shard. The iterator will be returned for this shard
     * ID.</p>
     */
    inline const Aws::String& GetShardId() const{ return m_shardId; }

    /**
     * <p>The identifier of the shard. The iterator will be returned for this shard
     * ID.</p>
     */
    inline bool ShardIdHasBeenSet() const { return m_shardIdHasBeenSet; }

    /**
     * <p>The identifier of the shard. The iterator will be returned for this shard
     * ID.</p>
     */
    inline void SetShardId(const Aws::String& value) { m_shardIdHasBeenSet = true; m_shardId = value; }

    /**
     * <p>The identifier of the shard. The iterator will be returned for this shard
     * ID.</p>
     */
    inline void SetShardId(Aws::String&& value) { m_shardIdHasBeenSet = true; m_shardId = std::move(value); }

    /**
     * <p>The identifier of the shard. The iterator will be returned for this shard
     * ID.</p>
     */
    inline void SetShardId(const char* value) { m_shardIdHasBeenSet = true; m_shardId.assign(value); }

    /**
     * <p>The identifier of the shard. The iterator will be returned for this shard
     * ID.</p>
     */
    inline GetShardIteratorRequest& WithShardId(const Aws::String& value) { SetShardId(value); return *this;}

    /**
     * <p>The identifier of the shard. The iterator will be returned for this shard
     * ID.</p>
     */
    inline GetShardIteratorRequest& WithShardId(Aws::String&& value) { SetShardId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the shard. The iterator will be returned for this shard
     * ID.</p>
     */
    inline GetShardIteratorRequest& WithShardId(const char* value) { SetShardId(value); return *this;}


    /**
     * <p>Determines how the shard iterator is used to start reading stream records
     * from the shard:</p> <ul> <li> <p><code>AT_SEQUENCE_NUMBER</code> - Start reading
     * exactly from the position denoted by a specific sequence number.</p> </li> <li>
     * <p><code>AFTER_SEQUENCE_NUMBER</code> - Start reading right after the position
     * denoted by a specific sequence number.</p> </li> <li>
     * <p><code>TRIM_HORIZON</code> - Start reading at the last (untrimmed) stream
     * record, which is the oldest record in the shard. In DynamoDB Streams, there is a
     * 24 hour limit on data retention. Stream records whose age exceeds this limit are
     * subject to removal (trimming) from the stream.</p> </li> <li>
     * <p><code>LATEST</code> - Start reading just after the most recent stream record
     * in the shard, so that you always read the most recent data in the shard.</p>
     * </li> </ul>
     */
    inline const ShardIteratorType& GetShardIteratorType() const{ return m_shardIteratorType; }

    /**
     * <p>Determines how the shard iterator is used to start reading stream records
     * from the shard:</p> <ul> <li> <p><code>AT_SEQUENCE_NUMBER</code> - Start reading
     * exactly from the position denoted by a specific sequence number.</p> </li> <li>
     * <p><code>AFTER_SEQUENCE_NUMBER</code> - Start reading right after the position
     * denoted by a specific sequence number.</p> </li> <li>
     * <p><code>TRIM_HORIZON</code> - Start reading at the last (untrimmed) stream
     * record, which is the oldest record in the shard. In DynamoDB Streams, there is a
     * 24 hour limit on data retention. Stream records whose age exceeds this limit are
     * subject to removal (trimming) from the stream.</p> </li> <li>
     * <p><code>LATEST</code> - Start reading just after the most recent stream record
     * in the shard, so that you always read the most recent data in the shard.</p>
     * </li> </ul>
     */
    inline bool ShardIteratorTypeHasBeenSet() const { return m_shardIteratorTypeHasBeenSet; }

    /**
     * <p>Determines how the shard iterator is used to start reading stream records
     * from the shard:</p> <ul> <li> <p><code>AT_SEQUENCE_NUMBER</code> - Start reading
     * exactly from the position denoted by a specific sequence number.</p> </li> <li>
     * <p><code>AFTER_SEQUENCE_NUMBER</code> - Start reading right after the position
     * denoted by a specific sequence number.</p> </li> <li>
     * <p><code>TRIM_HORIZON</code> - Start reading at the last (untrimmed) stream
     * record, which is the oldest record in the shard. In DynamoDB Streams, there is a
     * 24 hour limit on data retention. Stream records whose age exceeds this limit are
     * subject to removal (trimming) from the stream.</p> </li> <li>
     * <p><code>LATEST</code> - Start reading just after the most recent stream record
     * in the shard, so that you always read the most recent data in the shard.</p>
     * </li> </ul>
     */
    inline void SetShardIteratorType(const ShardIteratorType& value) { m_shardIteratorTypeHasBeenSet = true; m_shardIteratorType = value; }

    /**
     * <p>Determines how the shard iterator is used to start reading stream records
     * from the shard:</p> <ul> <li> <p><code>AT_SEQUENCE_NUMBER</code> - Start reading
     * exactly from the position denoted by a specific sequence number.</p> </li> <li>
     * <p><code>AFTER_SEQUENCE_NUMBER</code> - Start reading right after the position
     * denoted by a specific sequence number.</p> </li> <li>
     * <p><code>TRIM_HORIZON</code> - Start reading at the last (untrimmed) stream
     * record, which is the oldest record in the shard. In DynamoDB Streams, there is a
     * 24 hour limit on data retention. Stream records whose age exceeds this limit are
     * subject to removal (trimming) from the stream.</p> </li> <li>
     * <p><code>LATEST</code> - Start reading just after the most recent stream record
     * in the shard, so that you always read the most recent data in the shard.</p>
     * </li> </ul>
     */
    inline void SetShardIteratorType(ShardIteratorType&& value) { m_shardIteratorTypeHasBeenSet = true; m_shardIteratorType = std::move(value); }

    /**
     * <p>Determines how the shard iterator is used to start reading stream records
     * from the shard:</p> <ul> <li> <p><code>AT_SEQUENCE_NUMBER</code> - Start reading
     * exactly from the position denoted by a specific sequence number.</p> </li> <li>
     * <p><code>AFTER_SEQUENCE_NUMBER</code> - Start reading right after the position
     * denoted by a specific sequence number.</p> </li> <li>
     * <p><code>TRIM_HORIZON</code> - Start reading at the last (untrimmed) stream
     * record, which is the oldest record in the shard. In DynamoDB Streams, there is a
     * 24 hour limit on data retention. Stream records whose age exceeds this limit are
     * subject to removal (trimming) from the stream.</p> </li> <li>
     * <p><code>LATEST</code> - Start reading just after the most recent stream record
     * in the shard, so that you always read the most recent data in the shard.</p>
     * </li> </ul>
     */
    inline GetShardIteratorRequest& WithShardIteratorType(const ShardIteratorType& value) { SetShardIteratorType(value); return *this;}

    /**
     * <p>Determines how the shard iterator is used to start reading stream records
     * from the shard:</p> <ul> <li> <p><code>AT_SEQUENCE_NUMBER</code> - Start reading
     * exactly from the position denoted by a specific sequence number.</p> </li> <li>
     * <p><code>AFTER_SEQUENCE_NUMBER</code> - Start reading right after the position
     * denoted by a specific sequence number.</p> </li> <li>
     * <p><code>TRIM_HORIZON</code> - Start reading at the last (untrimmed) stream
     * record, which is the oldest record in the shard. In DynamoDB Streams, there is a
     * 24 hour limit on data retention. Stream records whose age exceeds this limit are
     * subject to removal (trimming) from the stream.</p> </li> <li>
     * <p><code>LATEST</code> - Start reading just after the most recent stream record
     * in the shard, so that you always read the most recent data in the shard.</p>
     * </li> </ul>
     */
    inline GetShardIteratorRequest& WithShardIteratorType(ShardIteratorType&& value) { SetShardIteratorType(std::move(value)); return *this;}


    /**
     * <p>The sequence number of a stream record in the shard from which to start
     * reading.</p>
     */
    inline const Aws::String& GetSequenceNumber() const{ return m_sequenceNumber; }

    /**
     * <p>The sequence number of a stream record in the shard from which to start
     * reading.</p>
     */
    inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }

    /**
     * <p>The sequence number of a stream record in the shard from which to start
     * reading.</p>
     */
    inline void SetSequenceNumber(const Aws::String& value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = value; }

    /**
     * <p>The sequence number of a stream record in the shard from which to start
     * reading.</p>
     */
    inline void SetSequenceNumber(Aws::String&& value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = std::move(value); }

    /**
     * <p>The sequence number of a stream record in the shard from which to start
     * reading.</p>
     */
    inline void SetSequenceNumber(const char* value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber.assign(value); }

    /**
     * <p>The sequence number of a stream record in the shard from which to start
     * reading.</p>
     */
    inline GetShardIteratorRequest& WithSequenceNumber(const Aws::String& value) { SetSequenceNumber(value); return *this;}

    /**
     * <p>The sequence number of a stream record in the shard from which to start
     * reading.</p>
     */
    inline GetShardIteratorRequest& WithSequenceNumber(Aws::String&& value) { SetSequenceNumber(std::move(value)); return *this;}

    /**
     * <p>The sequence number of a stream record in the shard from which to start
     * reading.</p>
     */
    inline GetShardIteratorRequest& WithSequenceNumber(const char* value) { SetSequenceNumber(value); return *this;}

  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet;

    Aws::String m_shardId;
    bool m_shardIdHasBeenSet;

    ShardIteratorType m_shardIteratorType;
    bool m_shardIteratorTypeHasBeenSet;

    Aws::String m_sequenceNumber;
    bool m_sequenceNumberHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
