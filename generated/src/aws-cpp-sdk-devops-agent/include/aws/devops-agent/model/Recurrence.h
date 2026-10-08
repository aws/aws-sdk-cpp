/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/DailyRecurrence.h>
#include <aws/devops-agent/model/MonthlyRecurrence.h>
#include <aws/devops-agent/model/WeeklyRecurrence.h>

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
 * <p>Recurrence cadence for a time-range schedule</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/Recurrence">AWS
 * API Reference</a></p>
 */
class Recurrence {
 public:
  AWS_DEVOPSAGENT_API Recurrence() = default;
  AWS_DEVOPSAGENT_API Recurrence(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Recurrence& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The window recurs every day</p>
   */
  inline const DailyRecurrence& GetDaily() const { return m_daily; }
  inline bool DailyHasBeenSet() const { return m_dailyHasBeenSet; }
  template <typename DailyT = DailyRecurrence>
  void SetDaily(DailyT&& value) {
    m_dailyHasBeenSet = true;
    m_daily = std::forward<DailyT>(value);
  }
  template <typename DailyT = DailyRecurrence>
  Recurrence& WithDaily(DailyT&& value) {
    SetDaily(std::forward<DailyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The window recurs once per week</p>
   */
  inline const WeeklyRecurrence& GetWeekly() const { return m_weekly; }
  inline bool WeeklyHasBeenSet() const { return m_weeklyHasBeenSet; }
  template <typename WeeklyT = WeeklyRecurrence>
  void SetWeekly(WeeklyT&& value) {
    m_weeklyHasBeenSet = true;
    m_weekly = std::forward<WeeklyT>(value);
  }
  template <typename WeeklyT = WeeklyRecurrence>
  Recurrence& WithWeekly(WeeklyT&& value) {
    SetWeekly(std::forward<WeeklyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The window recurs once per month</p>
   */
  inline const MonthlyRecurrence& GetMonthly() const { return m_monthly; }
  inline bool MonthlyHasBeenSet() const { return m_monthlyHasBeenSet; }
  template <typename MonthlyT = MonthlyRecurrence>
  void SetMonthly(MonthlyT&& value) {
    m_monthlyHasBeenSet = true;
    m_monthly = std::forward<MonthlyT>(value);
  }
  template <typename MonthlyT = MonthlyRecurrence>
  Recurrence& WithMonthly(MonthlyT&& value) {
    SetMonthly(std::forward<MonthlyT>(value));
    return *this;
  }
  ///@}
 private:
  DailyRecurrence m_daily;

  WeeklyRecurrence m_weekly;

  MonthlyRecurrence m_monthly;
  bool m_dailyHasBeenSet = false;
  bool m_weeklyHasBeenSet = false;
  bool m_monthlyHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
