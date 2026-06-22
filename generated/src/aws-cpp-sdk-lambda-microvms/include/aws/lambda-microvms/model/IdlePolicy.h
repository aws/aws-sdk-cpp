/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {

/**
 * <p>Configuration that controls MicroVM auto-suspend and auto-resume behavior.
 * Idle time is measured by inbound traffic through the MicroVM proxy endpoint — if
 * no requests arrive within the configured duration, the MicroVM is
 * suspended.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/IdlePolicy">AWS
 * API Reference</a></p>
 */
class IdlePolicy {
 public:
  AWS_LAMBDAMICROVMS_API IdlePolicy() = default;
  AWS_LAMBDAMICROVMS_API IdlePolicy(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API IdlePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum time in seconds that a MicroVM can remain idle before it is
   * automatically suspended.</p>
   */
  inline int GetMaxIdleDurationSeconds() const { return m_maxIdleDurationSeconds; }
  inline bool MaxIdleDurationSecondsHasBeenSet() const { return m_maxIdleDurationSecondsHasBeenSet; }
  inline void SetMaxIdleDurationSeconds(int value) {
    m_maxIdleDurationSecondsHasBeenSet = true;
    m_maxIdleDurationSeconds = value;
  }
  inline IdlePolicy& WithMaxIdleDurationSeconds(int value) {
    SetMaxIdleDurationSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time in seconds that a MicroVM can remain suspended before it is
   * automatically terminated.</p>
   */
  inline int GetSuspendedDurationSeconds() const { return m_suspendedDurationSeconds; }
  inline bool SuspendedDurationSecondsHasBeenSet() const { return m_suspendedDurationSecondsHasBeenSet; }
  inline void SetSuspendedDurationSeconds(int value) {
    m_suspendedDurationSecondsHasBeenSet = true;
    m_suspendedDurationSeconds = value;
  }
  inline IdlePolicy& WithSuspendedDurationSeconds(int value) {
    SetSuspendedDurationSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the MicroVM automatically resumes when it receives a
   * request while suspended.</p>
   */
  inline bool GetAutoResumeEnabled() const { return m_autoResumeEnabled; }
  inline bool AutoResumeEnabledHasBeenSet() const { return m_autoResumeEnabledHasBeenSet; }
  inline void SetAutoResumeEnabled(bool value) {
    m_autoResumeEnabledHasBeenSet = true;
    m_autoResumeEnabled = value;
  }
  inline IdlePolicy& WithAutoResumeEnabled(bool value) {
    SetAutoResumeEnabled(value);
    return *this;
  }
  ///@}
 private:
  int m_maxIdleDurationSeconds{0};

  int m_suspendedDurationSeconds{0};

  bool m_autoResumeEnabled{false};
  bool m_maxIdleDurationSecondsHasBeenSet = false;
  bool m_suspendedDurationSecondsHasBeenSet = false;
  bool m_autoResumeEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
