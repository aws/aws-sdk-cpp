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
    AWS_BUDGETS_API BudgetedAndActualAmounts();
    AWS_BUDGETS_API BudgetedAndActualAmounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API BudgetedAndActualAmounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of cost or usage that you created the budget for.</p>
     */
    inline const Spend& GetBudgetedAmount() const{ return m_budgetedAmount; }

    /**
     * <p>The amount of cost or usage that you created the budget for.</p>
     */
    inline bool BudgetedAmountHasBeenSet() const { return m_budgetedAmountHasBeenSet; }

    /**
     * <p>The amount of cost or usage that you created the budget for.</p>
     */
    inline void SetBudgetedAmount(const Spend& value) { m_budgetedAmountHasBeenSet = true; m_budgetedAmount = value; }

    /**
     * <p>The amount of cost or usage that you created the budget for.</p>
     */
    inline void SetBudgetedAmount(Spend&& value) { m_budgetedAmountHasBeenSet = true; m_budgetedAmount = std::move(value); }

    /**
     * <p>The amount of cost or usage that you created the budget for.</p>
     */
    inline BudgetedAndActualAmounts& WithBudgetedAmount(const Spend& value) { SetBudgetedAmount(value); return *this;}

    /**
     * <p>The amount of cost or usage that you created the budget for.</p>
     */
    inline BudgetedAndActualAmounts& WithBudgetedAmount(Spend&& value) { SetBudgetedAmount(std::move(value)); return *this;}


    /**
     * <p>Your actual costs or usage for a budget period.</p>
     */
    inline const Spend& GetActualAmount() const{ return m_actualAmount; }

    /**
     * <p>Your actual costs or usage for a budget period.</p>
     */
    inline bool ActualAmountHasBeenSet() const { return m_actualAmountHasBeenSet; }

    /**
     * <p>Your actual costs or usage for a budget period.</p>
     */
    inline void SetActualAmount(const Spend& value) { m_actualAmountHasBeenSet = true; m_actualAmount = value; }

    /**
     * <p>Your actual costs or usage for a budget period.</p>
     */
    inline void SetActualAmount(Spend&& value) { m_actualAmountHasBeenSet = true; m_actualAmount = std::move(value); }

    /**
     * <p>Your actual costs or usage for a budget period.</p>
     */
    inline BudgetedAndActualAmounts& WithActualAmount(const Spend& value) { SetActualAmount(value); return *this;}

    /**
     * <p>Your actual costs or usage for a budget period.</p>
     */
    inline BudgetedAndActualAmounts& WithActualAmount(Spend&& value) { SetActualAmount(std::move(value)); return *this;}


    /**
     * <p>The time period that's covered by this budget comparison.</p>
     */
    inline const TimePeriod& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The time period that's covered by this budget comparison.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>The time period that's covered by this budget comparison.</p>
     */
    inline void SetTimePeriod(const TimePeriod& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The time period that's covered by this budget comparison.</p>
     */
    inline void SetTimePeriod(TimePeriod&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The time period that's covered by this budget comparison.</p>
     */
    inline BudgetedAndActualAmounts& WithTimePeriod(const TimePeriod& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The time period that's covered by this budget comparison.</p>
     */
    inline BudgetedAndActualAmounts& WithTimePeriod(TimePeriod&& value) { SetTimePeriod(std::move(value)); return *this;}

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
