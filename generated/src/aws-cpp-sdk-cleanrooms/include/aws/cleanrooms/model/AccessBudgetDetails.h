/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AccessBudgetType.h>
#include <aws/cleanrooms/model/AutoRefreshMode.h>
#include <aws/core/utils/DateTime.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Detailed information about an access budget including time bounds, budget
 * allocation, and configuration settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AccessBudgetDetails">AWS
 * API Reference</a></p>
 */
class AccessBudgetDetails {
 public:
  AWS_CLEANROOMS_API AccessBudgetDetails() = default;
  AWS_CLEANROOMS_API AccessBudgetDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API AccessBudgetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The start time for the access budget period.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  AccessBudgetDetails& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time for the access budget period.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  AccessBudgetDetails& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The remaining budget amount available for use within this access budget.</p>
   */
  inline int GetRemainingBudget() const { return m_remainingBudget; }
  inline bool RemainingBudgetHasBeenSet() const { return m_remainingBudgetHasBeenSet; }
  inline void SetRemainingBudget(int value) {
    m_remainingBudgetHasBeenSet = true;
    m_remainingBudget = value;
  }
  inline AccessBudgetDetails& WithRemainingBudget(int value) {
    SetRemainingBudget(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total budget allocation amount for this access budget.</p>
   */
  inline int GetBudget() const { return m_budget; }
  inline bool BudgetHasBeenSet() const { return m_budgetHasBeenSet; }
  inline void SetBudget(int value) {
    m_budgetHasBeenSet = true;
    m_budget = value;
  }
  inline AccessBudgetDetails& WithBudget(int value) {
    SetBudget(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the time period for limiting table usage in queries and jobs. For
   * calendar-based periods, the budget can renew if auto refresh is enabled. For
   * lifetime budgets, the limit applies to the total usage throughout the
   * collaboration. Valid values are:</p> <p> <code>CALENDAR_DAY</code> - Limit table
   * usage per day.</p> <p> <code>CALENDAR_WEEK</code> - Limit table usage per
   * week.</p> <p> <code>CALENDAR_MONTH</code> - Limit table usage per month.</p> <p>
   * <code>LIFETIME</code> - Limit total table usage for the collaboration
   * duration.</p>
   */
  inline AccessBudgetType GetBudgetType() const { return m_budgetType; }
  inline bool BudgetTypeHasBeenSet() const { return m_budgetTypeHasBeenSet; }
  inline void SetBudgetType(AccessBudgetType value) {
    m_budgetTypeHasBeenSet = true;
    m_budgetType = value;
  }
  inline AccessBudgetDetails& WithBudgetType(AccessBudgetType value) {
    SetBudgetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the budget automatically refreshes for each time period
   * specified in <code>budgetType</code>. Valid values are:</p> <p>
   * <code>ENABLED</code> - The budget refreshes automatically at the start of each
   * period.</p> <p> <code>DISABLED</code> - The budget must be refreshed
   * manually.</p> <p> <code>NULL</code> - The value is null when
   * <code>budgetType</code> is set to <code>LIFETIME</code>.</p>
   */
  inline AutoRefreshMode GetAutoRefresh() const { return m_autoRefresh; }
  inline bool AutoRefreshHasBeenSet() const { return m_autoRefreshHasBeenSet; }
  inline void SetAutoRefresh(AutoRefreshMode value) {
    m_autoRefreshHasBeenSet = true;
    m_autoRefresh = value;
  }
  inline AccessBudgetDetails& WithAutoRefresh(AutoRefreshMode value) {
    SetAutoRefresh(value);
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_startTime{};
  bool m_startTimeHasBeenSet = false;

  Aws::Utils::DateTime m_endTime{};
  bool m_endTimeHasBeenSet = false;

  int m_remainingBudget{0};
  bool m_remainingBudgetHasBeenSet = false;

  int m_budget{0};
  bool m_budgetHasBeenSet = false;

  AccessBudgetType m_budgetType{AccessBudgetType::NOT_SET};
  bool m_budgetTypeHasBeenSet = false;

  AutoRefreshMode m_autoRefresh{AutoRefreshMode::NOT_SET};
  bool m_autoRefreshHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
