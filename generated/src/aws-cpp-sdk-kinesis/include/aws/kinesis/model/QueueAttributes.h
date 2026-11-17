/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/DeadLetterConfiguration.h>

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
 * <p>The configuration attributes for a queue.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/QueueAttributes">AWS
 * API Reference</a></p>
 */
class QueueAttributes {
 public:
  AWS_KINESIS_API QueueAttributes() = default;
  AWS_KINESIS_API QueueAttributes(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API QueueAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The duration, in seconds, that a record is in flight and not visible to any
   * consumer instance after it is received. A record that is not acknowledged before
   * this duration elapses becomes visible in the queue again and can be received by
   * any consumer instance. If you omit this attribute when you create a queue, the
   * queue uses 30 seconds.</p>
   */
  inline int GetVisibilityTimeoutSeconds() const { return m_visibilityTimeoutSeconds; }
  inline bool VisibilityTimeoutSecondsHasBeenSet() const { return m_visibilityTimeoutSecondsHasBeenSet; }
  inline void SetVisibilityTimeoutSeconds(int value) {
    m_visibilityTimeoutSecondsHasBeenSet = true;
    m_visibilityTimeoutSeconds = value;
  }
  inline QueueAttributes& WithVisibilityTimeoutSeconds(int value) {
    SetVisibilityTimeoutSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dead-letter handling configuration for the queue. If you omit this
   * attribute, dead-letter handling is enabled with a <code>MaxReceiveCount</code>
   * of 6. If you specify it with a <code>TargetType</code> of <code>BUILT_IN</code>,
   * you must also specify <code>MaxReceiveCount</code>.</p>
   */
  inline const DeadLetterConfiguration& GetDeadLetterConfiguration() const { return m_deadLetterConfiguration; }
  inline bool DeadLetterConfigurationHasBeenSet() const { return m_deadLetterConfigurationHasBeenSet; }
  template <typename DeadLetterConfigurationT = DeadLetterConfiguration>
  void SetDeadLetterConfiguration(DeadLetterConfigurationT&& value) {
    m_deadLetterConfigurationHasBeenSet = true;
    m_deadLetterConfiguration = std::forward<DeadLetterConfigurationT>(value);
  }
  template <typename DeadLetterConfigurationT = DeadLetterConfiguration>
  QueueAttributes& WithDeadLetterConfiguration(DeadLetterConfigurationT&& value) {
    SetDeadLetterConfiguration(std::forward<DeadLetterConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  int m_visibilityTimeoutSeconds{0};

  DeadLetterConfiguration m_deadLetterConfiguration;
  bool m_visibilityTimeoutSecondsHasBeenSet = false;
  bool m_deadLetterConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
