/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/CronSchedule.h>
#include <aws/devops-agent/model/TimeRangeSchedule.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Structured schedule specification. Select exactly one schedule
 * form.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ScheduleSpec">AWS
 * API Reference</a></p>
 */
class ScheduleSpec {
 public:
  AWS_DEVOPSAGENT_API ScheduleSpec() = default;
  AWS_DEVOPSAGENT_API ScheduleSpec(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API ScheduleSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Runs on an EventBridge cron or rate cadence</p>
   */
  inline const CronSchedule& GetCron() const { return m_cron; }
  inline bool CronHasBeenSet() const { return m_cronHasBeenSet; }
  template <typename CronT = CronSchedule>
  void SetCron(CronT&& value) {
    m_cronHasBeenSet = true;
    m_cron = std::forward<CronT>(value);
  }
  template <typename CronT = CronSchedule>
  ScheduleSpec& WithCron(CronT&& value) {
    SetCron(std::forward<CronT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Runs within a recurring time-of-day window</p>
   */
  inline const TimeRangeSchedule& GetTimeRange() const { return m_timeRange; }
  inline bool TimeRangeHasBeenSet() const { return m_timeRangeHasBeenSet; }
  template <typename TimeRangeT = TimeRangeSchedule>
  void SetTimeRange(TimeRangeT&& value) {
    m_timeRangeHasBeenSet = true;
    m_timeRange = std::forward<TimeRangeT>(value);
  }
  template <typename TimeRangeT = TimeRangeSchedule>
  ScheduleSpec& WithTimeRange(TimeRangeT&& value) {
    SetTimeRange(std::forward<TimeRangeT>(value));
    return *this;
  }
  ///@}
 private:
  CronSchedule m_cron;

  TimeRangeSchedule m_timeRange;
  bool m_cronHasBeenSet = false;
  bool m_timeRangeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
