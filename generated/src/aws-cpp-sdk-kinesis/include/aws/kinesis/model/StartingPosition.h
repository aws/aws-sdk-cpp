﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/ShardIteratorType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Kinesis
{
namespace Model
{

  /**
   * <p>The starting position in the data stream from which to start
   * streaming.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/StartingPosition">AWS
   * API Reference</a></p>
   */
  class StartingPosition
  {
  public:
    AWS_KINESIS_API StartingPosition() = default;
    AWS_KINESIS_API StartingPosition(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESIS_API StartingPosition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>You can set the starting position to one of the following values:</p> <p>
     * <code>AT_SEQUENCE_NUMBER</code>: Start streaming from the position denoted by
     * the sequence number specified in the <code>SequenceNumber</code> field.</p> <p>
     * <code>AFTER_SEQUENCE_NUMBER</code>: Start streaming right after the position
     * denoted by the sequence number specified in the <code>SequenceNumber</code>
     * field.</p> <p> <code>AT_TIMESTAMP</code>: Start streaming from the position
     * denoted by the time stamp specified in the <code>Timestamp</code> field.</p> <p>
     * <code>TRIM_HORIZON</code>: Start streaming at the last untrimmed record in the
     * shard, which is the oldest data record in the shard.</p> <p>
     * <code>LATEST</code>: Start streaming just after the most recent record in the
     * shard, so that you always read the most recent data in the shard.</p>
     */
    inline ShardIteratorType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ShardIteratorType value) { m_typeHasBeenSet = true; m_type = value; }
    inline StartingPosition& WithType(ShardIteratorType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sequence number of the data record in the shard from which to start
     * streaming. To specify a sequence number, set <code>StartingPosition</code> to
     * <code>AT_SEQUENCE_NUMBER</code> or <code>AFTER_SEQUENCE_NUMBER</code>.</p>
     */
    inline const Aws::String& GetSequenceNumber() const { return m_sequenceNumber; }
    inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }
    template<typename SequenceNumberT = Aws::String>
    void SetSequenceNumber(SequenceNumberT&& value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = std::forward<SequenceNumberT>(value); }
    template<typename SequenceNumberT = Aws::String>
    StartingPosition& WithSequenceNumber(SequenceNumberT&& value) { SetSequenceNumber(std::forward<SequenceNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of the data record from which to start reading. To specify a
     * time stamp, set <code>StartingPosition</code> to <code>Type AT_TIMESTAMP</code>.
     * A time stamp is the Unix epoch date with precision in milliseconds. For example,
     * <code>2016-04-04T19:58:46.480-00:00</code> or <code>1459799926.480</code>. If a
     * record with this exact time stamp does not exist, records will be streamed from
     * the next (later) record. If the time stamp is older than the current trim
     * horizon, records will be streamed from the oldest untrimmed data record
     * (<code>TRIM_HORIZON</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    StartingPosition& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}
  private:

    ShardIteratorType m_type{ShardIteratorType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_sequenceNumber;
    bool m_sequenceNumberHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
