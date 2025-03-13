/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/Spend.h>
#include <aws/budgets/model/TimePeriod.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Budgets
{
namespace Model
{

  /**
   * <p>The amount of cost or usage that you created the budget for, compared to your
   * actual costs or usage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/BudgetedAndActualAmounts">AWS
   * API Reference</a></p>
   */
  class BudgetedAndActualAmounts
  {
  public:
    AWS_BUDGETS_API BudgetedAndActualAmounts() = default;
    AWS_BUDGETS_API BudgetedAndActualAmounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API BudgetedAndActualAmounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of cost or usage that you created the budget for.</p>
     */
    inline const Spend& GetBudgetedAmount() const { return m_budgetedAmount; }
    inline bool BudgetedAmountHasBeenSet() const { return m_budgetedAmountHasBeenSet; }
    template<typename BudgetedAmountT = Spend>
    void SetBudgetedAmount(BudgetedAmountT&& value) { m_budgetedAmountHasBeenSet = true; m_budgetedAmount = std::forward<BudgetedAmountT>(value); }
    template<typename BudgetedAmountT = Spend>
    BudgetedAndActualAmounts& WithBudgetedAmount(BudgetedAmountT&& value) { SetBudgetedAmount(std::forward<BudgetedAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your actual costs or usage for a budget period.</p>
     */
    inline const Spend& GetActualAmount() const { return m_actualAmount; }
    inline bool ActualAmountHasBeenSet() const { return m_actualAmountHasBeenSet; }
    template<typename ActualAmountT = Spend>
    void SetActualAmount(ActualAmountT&& value) { m_actualAmountHasBeenSet = true; m_actualAmount = std::forward<ActualAmountT>(value); }
    template<typename ActualAmountT = Spend>
    BudgetedAndActualAmounts& WithActualAmount(ActualAmountT&& value) { SetActualAmount(std::forward<ActualAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period that's covered by this budget comparison.</p>
     */
    inline const TimePeriod& GetTimePeriod() const { return m_timePeriod; }
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
    template<typename TimePeriodT = TimePeriod>
    void SetTimePeriod(TimePeriodT&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::forward<TimePeriodT>(value); }
    template<typename TimePeriodT = TimePeriod>
    BudgetedAndActualAmounts& WithTimePeriod(TimePeriodT&& value) { SetTimePeriod(std::forward<TimePeriodT>(value)); return *this;}
    ///@}
  private:

    Spend m_budgetedAmount;
    bool m_budgetedAmountHasBeenSet = false;

    Spend m_actualAmount;
    bool m_actualAmountHasBeenSet = false;

    TimePeriod m_timePeriod;
    bool m_timePeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
