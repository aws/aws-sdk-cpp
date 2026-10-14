/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodbstreams/DynamoDBStreamsRequest.h>
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/dynamodbstreams/model/ShardIteratorType.h>

#include <utility>

namespace Aws {
namespace DynamoDBStreams {
namespace Model {

/**
 * <p>Represents the input of a <code>GetShardIterator</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/GetShardIteratorInput">AWS
 * API Reference</a></p>
 */
class GetShardIteratorRequest : public DynamoDBStreamsRequest {
 public:
  AWS_DYNAMODBSTREAMS_API GetShardIteratorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetShardIterator"; }

  AWS_DYNAMODBSTREAMS_API Aws::String SerializePayload() const override;

  AWS_DYNAMODBSTREAMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the stream.</p>
   */
  inline const Aws::String& GetStreamArn() const { return m_streamArn; }
  inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }
  template <typename StreamArnT = Aws::String>
  void SetStreamArn(StreamArnT&& value) {
    m_streamArnHasBeenSet = true;
    m_streamArn = std::forward<StreamArnT>(value);
  }
  template <typename StreamArnT = Aws::String>
  GetShardIteratorRequest& WithStreamArn(StreamArnT&& value) {
    SetStreamArn(std::forward<StreamArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the shard. The iterator will be returned for this shard
   * ID.</p>
   */
  inline const Aws::String& GetShardId() const { return m_shardId; }
  inline bool ShardIdHasBeenSet() const { return m_shardIdHasBeenSet; }
  template <typename ShardIdT = Aws::String>
  void SetShardId(ShardIdT&& value) {
    m_shardIdHasBeenSet = true;
    m_shardId = std::forward<ShardIdT>(value);
  }
  template <typename ShardIdT = Aws::String>
  GetShardIteratorRequest& WithShardId(ShardIdT&& value) {
    SetShardId(std::forward<ShardIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines how the shard iterator is used to start reading stream records
   * from the shard:</p> <ul> <li> <p> <code>AT_SEQUENCE_NUMBER</code> - Start
   * reading exactly from the position denoted by a specific sequence number.</p>
   * </li> <li> <p> <code>AFTER_SEQUENCE_NUMBER</code> - Start reading right after
   * the position denoted by a specific sequence number.</p> </li> <li> <p>
   * <code>TRIM_HORIZON</code> - Start reading at the last (untrimmed) stream record,
   * which is the oldest record in the shard. In DynamoDB Streams, there is a 24 hour
   * limit on data retention. Stream records whose age exceeds this limit are subject
   * to removal (trimming) from the stream.</p> </li> <li> <p> <code>LATEST</code> -
   * Start reading just after the most recent stream record in the shard, so that you
   * always read the most recent data in the shard.</p> </li> <li> <p>
   * <code>AT_TIMESTAMP</code> - Start reading from the position denoted by a
   * specific timestamp, provided in the parameter <code>Timestamp</code>.</p> </li>
   * </ul>
   */
  inline ShardIteratorType GetShardIteratorType() const { return m_shardIteratorType; }
  inline bool ShardIteratorTypeHasBeenSet() const { return m_shardIteratorTypeHasBeenSet; }
  inline void SetShardIteratorType(ShardIteratorType value) {
    m_shardIteratorTypeHasBeenSet = true;
    m_shardIteratorType = value;
  }
  inline GetShardIteratorRequest& WithShardIteratorType(ShardIteratorType value) {
    SetShardIteratorType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sequence number of a stream record in the shard from which to start
   * reading.</p>
   */
  inline const Aws::String& GetSequenceNumber() const { return m_sequenceNumber; }
  inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }
  template <typename SequenceNumberT = Aws::String>
  void SetSequenceNumber(SequenceNumberT&& value) {
    m_sequenceNumberHasBeenSet = true;
    m_sequenceNumber = std::forward<SequenceNumberT>(value);
  }
  template <typename SequenceNumberT = Aws::String>
  GetShardIteratorRequest& WithSequenceNumber(SequenceNumberT&& value) {
    SetSequenceNumber(std::forward<SequenceNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of the stream record from which to start reading. Used with
   * shard iterator type <code>AT_TIMESTAMP</code>. A timestamp is the Unix epoch
   * date with precision in milliseconds. For example, <code>1791316726.480</code>.
   * The iterator points to the first stream record whose
   * <code>ApproximateCreationDateTime</code> is at or after the specified timestamp.
   * If no record with that exact timestamp exists, the iterator points to the next
   * (later) record. If the timestamp is older than the current trim horizon, the
   * iterator points to the oldest untrimmed stream record
   * (<code>TRIM_HORIZON</code>). If the timestamp is in the future, the request
   * returns a <code>ValidationException</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  GetShardIteratorRequest& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_streamArn;

  Aws::String m_shardId;

  ShardIteratorType m_shardIteratorType{ShardIteratorType::NOT_SET};

  Aws::String m_sequenceNumber;

  Aws::Utils::DateTime m_timestamp{};
  bool m_streamArnHasBeenSet = false;
  bool m_shardIdHasBeenSet = false;
  bool m_shardIteratorTypeHasBeenSet = false;
  bool m_sequenceNumberHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDBStreams
}  // namespace Aws
