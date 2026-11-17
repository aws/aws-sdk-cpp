/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/QueueStartingPositionType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kinesis {
namespace Model {

/**
 * <p>The position in a data stream from which a queue begins delivering
 * records.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/QueueStartingPosition">AWS
 * API Reference</a></p>
 */
class QueueStartingPosition {
 public:
  AWS_KINESIS_API QueueStartingPosition() = default;
  AWS_KINESIS_API QueueStartingPosition(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API QueueStartingPosition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>You can set the starting position to one of the following values:</p> <p>
   * <code>LATEST</code>: Delivers records that arrive after you create the queue.
   * This is the default.</p> <p> <code>TRIM_HORIZON</code>: Start delivering at the
   * last untrimmed record in the stream, which is the oldest record the stream still
   * retains.</p> <p> <code>AT_TIMESTAMP</code>: Delivers records that arrive at or
   * after a time stamp that you provide.</p>
   */
  inline QueueStartingPositionType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(QueueStartingPositionType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline QueueStartingPosition& WithType(QueueStartingPositionType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The approximate time from which the queue begins delivering records. Records
   * that arrive at approximately this time or later are delivered.</p> <p>In a
   * request, specify this value only when <code>Type</code> is
   * <code>AT_TIMESTAMP</code>. It is required in that case, and specifying it for
   * any other type returns a <code>ValidationException</code>.</p> <p>In a response,
   * this value is approximate and reflects the queue's effective starting position.
   * While the queue is <code>CREATING</code>, the response echoes what you
   * configured: for <code>AT_TIMESTAMP</code>, the timestamp you provided, and for
   * <code>TRIM_HORIZON</code> and <code>LATEST</code>, this member is absent because
   * the effective position is not yet determined. Once the queue is
   * <code>ACTIVE</code>, the response always includes this member. For
   * <code>AT_TIMESTAMP</code>, it is the timestamp you provided or the earliest time
   * the stream can be read from, whichever is later.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  QueueStartingPosition& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}
 private:
  QueueStartingPositionType m_type{QueueStartingPositionType::NOT_SET};

  Aws::Utils::DateTime m_timestamp{};
  bool m_typeHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
