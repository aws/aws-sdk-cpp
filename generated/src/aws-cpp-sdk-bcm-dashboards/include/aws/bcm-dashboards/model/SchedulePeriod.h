/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/core/utils/DateTime.h>

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
 * <p>Defines the active time period for execution of the scheduled
 * report.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/SchedulePeriod">AWS
 * API Reference</a></p>
 */
class SchedulePeriod {
 public:
  AWS_BCMDASHBOARDS_API SchedulePeriod() = default;
  AWS_BCMDASHBOARDS_API SchedulePeriod(Aws::Utils::Json::JsonView jsonValue);
  AWS_BCMDASHBOARDS_API SchedulePeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BCMDASHBOARDS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The start time of the schedule period. If not specified, defaults to the time
   * of the create or update request. The start time cannot be more than 5 minutes
   * before the time of the request.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  SchedulePeriod& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time of the schedule period. If not specified, defaults to 3 years
   * from the time of the create or update request. The maximum allowed value is 3
   * years from the current time. Setting an end time beyond this limit returns a
   * <code>ValidationException</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  SchedulePeriod& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
