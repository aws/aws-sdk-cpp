/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AccessBudgetType.h>
#include <aws/cleanrooms/model/AutoRefreshMode.h>

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
 * <p>Individual budget parameter configuration that defines specific budget
 * allocation settings for access budgets.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/BudgetParameter">AWS
 * API Reference</a></p>
 */
class BudgetParameter {
 public:
  AWS_CLEANROOMS_API BudgetParameter() = default;
  AWS_CLEANROOMS_API BudgetParameter(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API BudgetParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of budget parameter being configured.</p>
   */
  inline AccessBudgetType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(AccessBudgetType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline BudgetParameter& WithType(AccessBudgetType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The budget allocation amount for this specific parameter.</p>
   */
  inline int GetBudget() const { return m_budget; }
  inline bool BudgetHasBeenSet() const { return m_budgetHasBeenSet; }
  inline void SetBudget(int value) {
    m_budgetHasBeenSet = true;
    m_budget = value;
  }
  inline BudgetParameter& WithBudget(int value) {
    SetBudget(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether this individual budget parameter automatically refreshes when the
   * budget period resets.</p>
   */
  inline AutoRefreshMode GetAutoRefresh() const { return m_autoRefresh; }
  inline bool AutoRefreshHasBeenSet() const { return m_autoRefreshHasBeenSet; }
  inline void SetAutoRefresh(AutoRefreshMode value) {
    m_autoRefreshHasBeenSet = true;
    m_autoRefresh = value;
  }
  inline BudgetParameter& WithAutoRefresh(AutoRefreshMode value) {
    SetAutoRefresh(value);
    return *this;
  }
  ///@}
 private:
  AccessBudgetType m_type{AccessBudgetType::NOT_SET};

  int m_budget{0};

  AutoRefreshMode m_autoRefresh{AutoRefreshMode::NOT_SET};
  bool m_typeHasBeenSet = false;
  bool m_budgetHasBeenSet = false;
  bool m_autoRefreshHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
