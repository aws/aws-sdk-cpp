/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/DailySchedule.h>
#include <aws/bedrock-agent/model/MonthlySchedule.h>
#include <aws/bedrock-agent/model/WeeklySchedule.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgent {
namespace Model {

/**
 * <p>The recurring schedule on which a managed knowledge base connector
 * automatically syncs its data source. Specify exactly one of <code>daily</code>,
 * <code>weekly</code>, or <code>monthly</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/SyncSchedule">AWS
 * API Reference</a></p>
 */
class SyncSchedule {
 public:
  AWS_BEDROCKAGENT_API SyncSchedule() = default;
  AWS_BEDROCKAGENT_API SyncSchedule(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API SyncSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A daily sync that runs once a day at a system-chosen off-peak time. The run
   * time is not configurable.</p>
   */
  inline const DailySchedule& GetDaily() const { return m_daily; }
  inline bool DailyHasBeenSet() const { return m_dailyHasBeenSet; }
  template <typename DailyT = DailySchedule>
  void SetDaily(DailyT&& value) {
    m_dailyHasBeenSet = true;
    m_daily = std::forward<DailyT>(value);
  }
  template <typename DailyT = DailySchedule>
  SyncSchedule& WithDaily(DailyT&& value) {
    SetDaily(std::forward<DailyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A weekly sync that runs once a week on the specified day of the week.</p>
   */
  inline const WeeklySchedule& GetWeekly() const { return m_weekly; }
  inline bool WeeklyHasBeenSet() const { return m_weeklyHasBeenSet; }
  template <typename WeeklyT = WeeklySchedule>
  void SetWeekly(WeeklyT&& value) {
    m_weeklyHasBeenSet = true;
    m_weekly = std::forward<WeeklyT>(value);
  }
  template <typename WeeklyT = WeeklySchedule>
  SyncSchedule& WithWeekly(WeeklyT&& value) {
    SetWeekly(std::forward<WeeklyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A monthly sync that runs once a month on the specified day of the month.</p>
   */
  inline const MonthlySchedule& GetMonthly() const { return m_monthly; }
  inline bool MonthlyHasBeenSet() const { return m_monthlyHasBeenSet; }
  template <typename MonthlyT = MonthlySchedule>
  void SetMonthly(MonthlyT&& value) {
    m_monthlyHasBeenSet = true;
    m_monthly = std::forward<MonthlyT>(value);
  }
  template <typename MonthlyT = MonthlySchedule>
  SyncSchedule& WithMonthly(MonthlyT&& value) {
    SetMonthly(std::forward<MonthlyT>(value));
    return *this;
  }
  ///@}
 private:
  DailySchedule m_daily;

  WeeklySchedule m_weekly;

  MonthlySchedule m_monthly;
  bool m_dailyHasBeenSet = false;
  bool m_weeklyHasBeenSet = false;
  bool m_monthlyHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
