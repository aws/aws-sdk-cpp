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
#include <aws/kinesis/model/ShardIteratorType.h>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   * <p>Represents the input for <code>GetShardIterator</code>.</p>
   */
  class AWS_KINESIS_API GetShardIteratorRequest : public KinesisRequest
  {
  public:
    GetShardIteratorRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the stream.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream.</p>
     */
    inline GetShardIteratorRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream.</p>
     */
    inline GetShardIteratorRequest& WithStreamName(Aws::String&& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream.</p>
     */
    inline GetShardIteratorRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}

    /**
     * <p>The shard ID of the shard to get the iterator for.</p>
     */
    inline const Aws::String& GetShardId() const{ return m_shardId; }

    /**
     * <p>The shard ID of the shard to get the iterator for.</p>
     */
    inline void SetShardId(const Aws::String& value) { m_shardIdHasBeenSet = true; m_shardId = value; }

    /**
     * <p>The shard ID of the shard to get the iterator for.</p>
     */
    inline void SetShardId(Aws::String&& value) { m_shardIdHasBeenSet = true; m_shardId = value; }

    /**
     * <p>The shard ID of the shard to get the iterator for.</p>
     */
    inline void SetShardId(const char* value) { m_shardIdHasBeenSet = true; m_shardId.assign(value); }

    /**
     * <p>The shard ID of the shard to get the iterator for.</p>
     */
    inline GetShardIteratorRequest& WithShardId(const Aws::String& value) { SetShardId(value); return *this;}

    /**
     * <p>The shard ID of the shard to get the iterator for.</p>
     */
    inline GetShardIteratorRequest& WithShardId(Aws::String&& value) { SetShardId(value); return *this;}

    /**
     * <p>The shard ID of the shard to get the iterator for.</p>
     */
    inline GetShardIteratorRequest& WithShardId(const char* value) { SetShardId(value); return *this;}

    /**
     * <p>Determines how the shard iterator is used to start reading data records from
     * the shard.</p> <p>The following are the valid shard iterator types:</p> <ul>
     * <li>AT_SEQUENCE_NUMBER - Start reading exactly from the position denoted by a
     * specific sequence number.</li> <li>AFTER_SEQUENCE_NUMBER - Start reading right
     * after the position denoted by a specific sequence number.</li> <li>TRIM_HORIZON
     * - Start reading at the last untrimmed record in the shard in the system, which
     * is the oldest data record in the shard.</li> <li>LATEST - Start reading just
     * after the most recent record in the shard, so that you always read the most
     * recent data in the shard.</li> </ul>
     */
    inline const ShardIteratorType& GetShardIteratorType() const{ return m_shardIteratorType; }

    /**
     * <p>Determines how the shard iterator is used to start reading data records from
     * the shard.</p> <p>The following are the valid shard iterator types:</p> <ul>
     * <li>AT_SEQUENCE_NUMBER - Start reading exactly from the position denoted by a
     * specific sequence number.</li> <li>AFTER_SEQUENCE_NUMBER - Start reading right
     * after the position denoted by a specific sequence number.</li> <li>TRIM_HORIZON
     * - Start reading at the last untrimmed record in the shard in the system, which
     * is the oldest data record in the shard.</li> <li>LATEST - Start reading just
     * after the most recent record in the shard, so that you always read the most
     * recent data in the shard.</li> </ul>
     */
    inline void SetShardIteratorType(const ShardIteratorType& value) { m_shardIteratorTypeHasBeenSet = true; m_shardIteratorType = value; }

    /**
     * <p>Determines how the shard iterator is used to start reading data records from
     * the shard.</p> <p>The following are the valid shard iterator types:</p> <ul>
     * <li>AT_SEQUENCE_NUMBER - Start reading exactly from the position denoted by a
     * specific sequence number.</li> <li>AFTER_SEQUENCE_NUMBER - Start reading right
     * after the position denoted by a specific sequence number.</li> <li>TRIM_HORIZON
     * - Start reading at the last untrimmed record in the shard in the system, which
     * is the oldest data record in the shard.</li> <li>LATEST - Start reading just
     * after the most recent record in the shard, so that you always read the most
     * recent data in the shard.</li> </ul>
     */
    inline void SetShardIteratorType(ShardIteratorType&& value) { m_shardIteratorTypeHasBeenSet = true; m_shardIteratorType = value; }

    /**
     * <p>Determines how the shard iterator is used to start reading data records from
     * the shard.</p> <p>The following are the valid shard iterator types:</p> <ul>
     * <li>AT_SEQUENCE_NUMBER - Start reading exactly from the position denoted by a
     * specific sequence number.</li> <li>AFTER_SEQUENCE_NUMBER - Start reading right
     * after the position denoted by a specific sequence number.</li> <li>TRIM_HORIZON
     * - Start reading at the last untrimmed record in the shard in the system, which
     * is the oldest data record in the shard.</li> <li>LATEST - Start reading just
     * after the most recent record in the shard, so that you always read the most
     * recent data in the shard.</li> </ul>
     */
    inline GetShardIteratorRequest& WithShardIteratorType(const ShardIteratorType& value) { SetShardIteratorType(value); return *this;}

    /**
     * <p>Determines how the shard iterator is used to start reading data records from
     * the shard.</p> <p>The following are the valid shard iterator types:</p> <ul>
     * <li>AT_SEQUENCE_NUMBER - Start reading exactly from the position denoted by a
     * specific sequence number.</li> <li>AFTER_SEQUENCE_NUMBER - Start reading right
     * after the position denoted by a specific sequence number.</li> <li>TRIM_HORIZON
     * - Start reading at the last untrimmed record in the shard in the system, which
     * is the oldest data record in the shard.</li> <li>LATEST - Start reading just
     * after the most recent record in the shard, so that you always read the most
     * recent data in the shard.</li> </ul>
     */
    inline GetShardIteratorRequest& WithShardIteratorType(ShardIteratorType&& value) { SetShardIteratorType(value); return *this;}

    /**
     * <p>The sequence number of the data record in the shard from which to start
     * reading from.</p>
     */
    inline const Aws::String& GetStartingSequenceNumber() const{ return m_startingSequenceNumber; }

    /**
     * <p>The sequence number of the data record in the shard from which to start
     * reading from.</p>
     */
    inline void SetStartingSequenceNumber(const Aws::String& value) { m_startingSequenceNumberHasBeenSet = true; m_startingSequenceNumber = value; }

    /**
     * <p>The sequence number of the data record in the shard from which to start
     * reading from.</p>
     */
    inline void SetStartingSequenceNumber(Aws::String&& value) { m_startingSequenceNumberHasBeenSet = true; m_startingSequenceNumber = value; }

    /**
     * <p>The sequence number of the data record in the shard from which to start
     * reading from.</p>
     */
    inline void SetStartingSequenceNumber(const char* value) { m_startingSequenceNumberHasBeenSet = true; m_startingSequenceNumber.assign(value); }

    /**
     * <p>The sequence number of the data record in the shard from which to start
     * reading from.</p>
     */
    inline GetShardIteratorRequest& WithStartingSequenceNumber(const Aws::String& value) { SetStartingSequenceNumber(value); return *this;}

    /**
     * <p>The sequence number of the data record in the shard from which to start
     * reading from.</p>
     */
    inline GetShardIteratorRequest& WithStartingSequenceNumber(Aws::String&& value) { SetStartingSequenceNumber(value); return *this;}

    /**
     * <p>The sequence number of the data record in the shard from which to start
     * reading from.</p>
     */
    inline GetShardIteratorRequest& WithStartingSequenceNumber(const char* value) { SetStartingSequenceNumber(value); return *this;}

  private:
    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;
    Aws::String m_shardId;
    bool m_shardIdHasBeenSet;
    ShardIteratorType m_shardIteratorType;
    bool m_shardIteratorTypeHasBeenSet;
    Aws::String m_startingSequenceNumber;
    bool m_startingSequenceNumberHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
