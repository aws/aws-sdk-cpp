/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 * <p>Configuration for scheduling when automation rules should execute, including
 * timing and execution windows.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/Schedule">AWS
 * API Reference</a></p>
 */
class Schedule {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Schedule() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Schedule(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Schedule& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The expression that defines when the schedule runs. <code>cron</code>
   * expression is supported. A <code>cron</code> expression consists of six fields
   * separated by white spaces: (<code>minutes</code> <code>hours</code>
   * <code>day_of_month</code> <code>month</code> <code>day_of_week</code>
   * <code>year</code>)</p>  <p>You can schedule rules to run at most once per
   * day. Your cron expression must use specific values (not wildcards) for the
   * minutes and hours fields. For example: (<code>30 12 * * *</code>) runs daily at
   * 12:30 PM UTC.</p>
   */
  inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
  inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
  template <typename ScheduleExpressionT = Aws::String>
  void SetScheduleExpression(ScheduleExpressionT&& value) {
    m_scheduleExpressionHasBeenSet = true;
    m_scheduleExpression = std::forward<ScheduleExpressionT>(value);
  }
  template <typename ScheduleExpressionT = Aws::String>
  Schedule& WithScheduleExpression(ScheduleExpressionT&& value) {
    SetScheduleExpression(std::forward<ScheduleExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timezone to use when interpreting the schedule expression.</p>
   */
  inline const Aws::String& GetScheduleExpressionTimezone() const { return m_scheduleExpressionTimezone; }
  inline bool ScheduleExpressionTimezoneHasBeenSet() const { return m_scheduleExpressionTimezoneHasBeenSet; }
  template <typename ScheduleExpressionTimezoneT = Aws::String>
  void SetScheduleExpressionTimezone(ScheduleExpressionTimezoneT&& value) {
    m_scheduleExpressionTimezoneHasBeenSet = true;
    m_scheduleExpressionTimezone = std::forward<ScheduleExpressionTimezoneT>(value);
  }
  template <typename ScheduleExpressionTimezoneT = Aws::String>
  Schedule& WithScheduleExpressionTimezone(ScheduleExpressionTimezoneT&& value) {
    SetScheduleExpressionTimezone(std::forward<ScheduleExpressionTimezoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time window in minutes during which the automation rule can start
   * implementing recommended actions.</p>
   */
  inline int64_t GetExecutionWindowInMinutes() const { return m_executionWindowInMinutes; }
  inline bool ExecutionWindowInMinutesHasBeenSet() const { return m_executionWindowInMinutesHasBeenSet; }
  inline void SetExecutionWindowInMinutes(int64_t value) {
    m_executionWindowInMinutesHasBeenSet = true;
    m_executionWindowInMinutes = value;
  }
  inline Schedule& WithExecutionWindowInMinutes(int64_t value) {
    SetExecutionWindowInMinutes(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_scheduleExpression;

  Aws::String m_scheduleExpressionTimezone;

  int64_t m_executionWindowInMinutes{0};
  bool m_scheduleExpressionHasBeenSet = false;
  bool m_scheduleExpressionTimezoneHasBeenSet = false;
  bool m_executionWindowInMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
