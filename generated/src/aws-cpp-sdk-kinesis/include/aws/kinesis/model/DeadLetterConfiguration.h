/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/TargetType.h>

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
 * <p>The dead-letter handling configuration for a queue. Each queue has built-in
 * dead-letter handling. When a record has been received
 * <code>MaxReceiveCount</code> times without being acknowledged, it becomes a
 * dead-letter record, and <a>ReceiveQueueRecords</a> no longer returns it. The
 * dead-letter record stays in the same queue, and you work with it through
 * <a>ReceiveDeadLetterQueueRecords</a>, <a>AcknowledgeDeadLetterQueueRecords</a>,
 * <a>UpdateDeadLetterQueueRecordsVisibility</a>, and
 * <a>RestoreDeadLetterQueueRecords</a>, which use the same queue ARN.</p>
 * <p>Dead-letter handling is enabled by default, with a
 * <code>MaxReceiveCount</code> of 6. To use a different value, or to turn
 * dead-letter handling off, specify this configuration in
 * <code>QueueAttributes</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/DeadLetterConfiguration">AWS
 * API Reference</a></p>
 */
class DeadLetterConfiguration {
 public:
  AWS_KINESIS_API DeadLetterConfiguration() = default;
  AWS_KINESIS_API DeadLetterConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API DeadLetterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether dead-letter handling is enabled for the queue. <code>BUILT_IN</code>
   * enables it: when a record has been received <code>MaxReceiveCount</code> times
   * without being acknowledged, it becomes a dead-letter record and
   * <a>ReceiveQueueRecords</a> no longer returns it. <code>NONE</code> disables it,
   * and an unacknowledged record continues to be redelivered until it is
   * acknowledged or its retention period ends.</p>
   */
  inline TargetType GetTargetType() const { return m_targetType; }
  inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
  inline void SetTargetType(TargetType value) {
    m_targetTypeHasBeenSet = true;
    m_targetType = value;
  }
  inline DeadLetterConfiguration& WithTargetType(TargetType value) {
    SetTargetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of times a record can be received without being acknowledged
   * before it becomes a dead-letter record. Required when <code>TargetType</code> is
   * <code>BUILT_IN</code>. A queue that you create without
   * <code>DeadLetterConfiguration</code> gets a <code>MaxReceiveCount</code> of
   * 6.</p>
   */
  inline int GetMaxReceiveCount() const { return m_maxReceiveCount; }
  inline bool MaxReceiveCountHasBeenSet() const { return m_maxReceiveCountHasBeenSet; }
  inline void SetMaxReceiveCount(int value) {
    m_maxReceiveCountHasBeenSet = true;
    m_maxReceiveCount = value;
  }
  inline DeadLetterConfiguration& WithMaxReceiveCount(int value) {
    SetMaxReceiveCount(value);
    return *this;
  }
  ///@}
 private:
  TargetType m_targetType{TargetType::NOT_SET};

  int m_maxReceiveCount{0};
  bool m_targetTypeHasBeenSet = false;
  bool m_maxReceiveCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
