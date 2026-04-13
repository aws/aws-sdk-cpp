/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/SchedulePeriod.h>
#include <aws/bcm-dashboards/model/ScheduleState.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BCMDashboards {
namespace Model {

/**
 * <p>Defines the schedule for a scheduled report, including the cron expression,
 * time zone, active period, and the schedule state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/ScheduleConfig">AWS
 * API Reference</a></p>
 */
class ScheduleConfig {
 public:
  AWS_BCMDASHBOARDS_API ScheduleConfig() = default;
  AWS_BCMDASHBOARDS_API ScheduleConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BCMDASHBOARDS_API ScheduleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BCMDASHBOARDS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The schedule expression that specifies when to trigger the scheduled report
   * run. This value must be a cron expression consisting of six fields separated by
   * white spaces: <code>cron(minutes hours day_of_month month day_of_week
   * year)</code>.</p>
   */
  inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
  inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
  template <typename ScheduleExpressionT = Aws::String>
  void SetScheduleExpression(ScheduleExpressionT&& value) {
    m_scheduleExpressionHasBeenSet = true;
    m_scheduleExpression = std::forward<ScheduleExpressionT>(value);
  }
  template <typename ScheduleExpressionT = Aws::String>
  ScheduleConfig& WithScheduleExpression(ScheduleExpressionT&& value) {
    SetScheduleExpression(std::forward<ScheduleExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time zone for the schedule expression, for example, <code>UTC</code>.</p>
   */
  inline const Aws::String& GetScheduleExpressionTimeZone() const { return m_scheduleExpressionTimeZone; }
  inline bool ScheduleExpressionTimeZoneHasBeenSet() const { return m_scheduleExpressionTimeZoneHasBeenSet; }
  template <typename ScheduleExpressionTimeZoneT = Aws::String>
  void SetScheduleExpressionTimeZone(ScheduleExpressionTimeZoneT&& value) {
    m_scheduleExpressionTimeZoneHasBeenSet = true;
    m_scheduleExpressionTimeZone = std::forward<ScheduleExpressionTimeZoneT>(value);
  }
  template <typename ScheduleExpressionTimeZoneT = Aws::String>
  ScheduleConfig& WithScheduleExpressionTimeZone(ScheduleExpressionTimeZoneT&& value) {
    SetScheduleExpressionTimeZone(std::forward<ScheduleExpressionTimeZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time period during which the schedule is active.</p>
   */
  inline const SchedulePeriod& GetSchedulePeriod() const { return m_schedulePeriod; }
  inline bool SchedulePeriodHasBeenSet() const { return m_schedulePeriodHasBeenSet; }
  template <typename SchedulePeriodT = SchedulePeriod>
  void SetSchedulePeriod(SchedulePeriodT&& value) {
    m_schedulePeriodHasBeenSet = true;
    m_schedulePeriod = std::forward<SchedulePeriodT>(value);
  }
  template <typename SchedulePeriodT = SchedulePeriod>
  ScheduleConfig& WithSchedulePeriod(SchedulePeriodT&& value) {
    SetSchedulePeriod(std::forward<SchedulePeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the schedule. <code>ENABLED</code> means the scheduled report
   * runs according to its schedule expression. <code>DISABLED</code> means the
   * scheduled report is paused and will not run until re-enabled.</p>
   */
  inline ScheduleState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ScheduleState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ScheduleConfig& WithState(ScheduleState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_scheduleExpression;

  Aws::String m_scheduleExpressionTimeZone;

  SchedulePeriod m_schedulePeriod;

  ScheduleState m_state{ScheduleState::NOT_SET};
  bool m_scheduleExpressionHasBeenSet = false;
  bool m_scheduleExpressionTimeZoneHasBeenSet = false;
  bool m_schedulePeriodHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
