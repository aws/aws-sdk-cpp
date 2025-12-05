/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/AccessBudgetType.h>
#include <aws/cleanroomsml/model/AutoRefreshMode.h>
#include <aws/core/utils/DateTime.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRoomsML {
namespace Model {

/**
 * <p>The detailed information for a specific budget period, including time
 * boundaries and budget amounts.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/AccessBudgetDetails">AWS
 * API Reference</a></p>
 */
class AccessBudgetDetails {
 public:
  AWS_CLEANROOMSML_API AccessBudgetDetails() = default;
  AWS_CLEANROOMSML_API AccessBudgetDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API AccessBudgetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The start time of this budget period.</p>
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
   * <p>The end time of this budget period. If not specified, the budget period
   * continues indefinitely.</p>
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
   * <p>The amount of budget remaining in this period.</p>
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
   * <p>The total budget amount allocated for this period.</p>
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
   * <p>The type of budget period. Calendar-based types reset automatically at
   * regular intervals, while LIFETIME budgets never reset.</p>
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
   * <p>Specifies whether this budget automatically refreshes when the current period
   * ends.</p>
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

  Aws::Utils::DateTime m_endTime{};

  int m_remainingBudget{0};

  int m_budget{0};

  AccessBudgetType m_budgetType{AccessBudgetType::NOT_SET};

  AutoRefreshMode m_autoRefresh{AutoRefreshMode::NOT_SET};
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_remainingBudgetHasBeenSet = false;
  bool m_budgetHasBeenSet = false;
  bool m_budgetTypeHasBeenSet = false;
  bool m_autoRefreshHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
