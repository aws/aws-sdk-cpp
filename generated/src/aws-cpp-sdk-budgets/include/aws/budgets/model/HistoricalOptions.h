/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>

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
   * <p>The parameters that define or describe the historical data that your
   * auto-adjusting budget is based on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/HistoricalOptions">AWS
   * API Reference</a></p>
   */
  class HistoricalOptions
  {
  public:
    AWS_BUDGETS_API HistoricalOptions();
    AWS_BUDGETS_API HistoricalOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API HistoricalOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of budget periods included in the moving-average calculation that
     * determines your auto-adjusted budget amount. The maximum value depends on the
     * <code>TimeUnit</code> granularity of the budget:</p> <ul> <li> <p>For the
     * <code>DAILY</code> granularity, the maximum value is <code>60</code>.</p> </li>
     * <li> <p>For the <code>MONTHLY</code> granularity, the maximum value is
     * <code>12</code>.</p> </li> <li> <p>For the <code>QUARTERLY</code> granularity,
     * the maximum value is <code>4</code>.</p> </li> <li> <p>For the
     * <code>ANNUALLY</code> granularity, the maximum value is <code>1</code>.</p>
     * </li> </ul>
     */
    inline int GetBudgetAdjustmentPeriod() const{ return m_budgetAdjustmentPeriod; }

    /**
     * <p>The number of budget periods included in the moving-average calculation that
     * determines your auto-adjusted budget amount. The maximum value depends on the
     * <code>TimeUnit</code> granularity of the budget:</p> <ul> <li> <p>For the
     * <code>DAILY</code> granularity, the maximum value is <code>60</code>.</p> </li>
     * <li> <p>For the <code>MONTHLY</code> granularity, the maximum value is
     * <code>12</code>.</p> </li> <li> <p>For the <code>QUARTERLY</code> granularity,
     * the maximum value is <code>4</code>.</p> </li> <li> <p>For the
     * <code>ANNUALLY</code> granularity, the maximum value is <code>1</code>.</p>
     * </li> </ul>
     */
    inline bool BudgetAdjustmentPeriodHasBeenSet() const { return m_budgetAdjustmentPeriodHasBeenSet; }

    /**
     * <p>The number of budget periods included in the moving-average calculation that
     * determines your auto-adjusted budget amount. The maximum value depends on the
     * <code>TimeUnit</code> granularity of the budget:</p> <ul> <li> <p>For the
     * <code>DAILY</code> granularity, the maximum value is <code>60</code>.</p> </li>
     * <li> <p>For the <code>MONTHLY</code> granularity, the maximum value is
     * <code>12</code>.</p> </li> <li> <p>For the <code>QUARTERLY</code> granularity,
     * the maximum value is <code>4</code>.</p> </li> <li> <p>For the
     * <code>ANNUALLY</code> granularity, the maximum value is <code>1</code>.</p>
     * </li> </ul>
     */
    inline void SetBudgetAdjustmentPeriod(int value) { m_budgetAdjustmentPeriodHasBeenSet = true; m_budgetAdjustmentPeriod = value; }

    /**
     * <p>The number of budget periods included in the moving-average calculation that
     * determines your auto-adjusted budget amount. The maximum value depends on the
     * <code>TimeUnit</code> granularity of the budget:</p> <ul> <li> <p>For the
     * <code>DAILY</code> granularity, the maximum value is <code>60</code>.</p> </li>
     * <li> <p>For the <code>MONTHLY</code> granularity, the maximum value is
     * <code>12</code>.</p> </li> <li> <p>For the <code>QUARTERLY</code> granularity,
     * the maximum value is <code>4</code>.</p> </li> <li> <p>For the
     * <code>ANNUALLY</code> granularity, the maximum value is <code>1</code>.</p>
     * </li> </ul>
     */
    inline HistoricalOptions& WithBudgetAdjustmentPeriod(int value) { SetBudgetAdjustmentPeriod(value); return *this;}


    /**
     * <p>The integer that describes how many budget periods in your
     * <code>BudgetAdjustmentPeriod</code> are included in the calculation of your
     * current <code>BudgetLimit</code>. If the first budget period in your
     * <code>BudgetAdjustmentPeriod</code> has no cost data, then that budget period
     * isn’t included in the average that determines your budget limit. </p> <p>For
     * example, if you set <code>BudgetAdjustmentPeriod</code> as <code>4</code>
     * quarters, but your account had no cost data in the first quarter, then only the
     * last three quarters are included in the calculation. In this scenario,
     * <code>LookBackAvailablePeriods</code> returns <code>3</code>. </p> <p>You can’t
     * set your own <code>LookBackAvailablePeriods</code>. The value is automatically
     * calculated from the <code>BudgetAdjustmentPeriod</code> and your historical cost
     * data.</p>
     */
    inline int GetLookBackAvailablePeriods() const{ return m_lookBackAvailablePeriods; }

    /**
     * <p>The integer that describes how many budget periods in your
     * <code>BudgetAdjustmentPeriod</code> are included in the calculation of your
     * current <code>BudgetLimit</code>. If the first budget period in your
     * <code>BudgetAdjustmentPeriod</code> has no cost data, then that budget period
     * isn’t included in the average that determines your budget limit. </p> <p>For
     * example, if you set <code>BudgetAdjustmentPeriod</code> as <code>4</code>
     * quarters, but your account had no cost data in the first quarter, then only the
     * last three quarters are included in the calculation. In this scenario,
     * <code>LookBackAvailablePeriods</code> returns <code>3</code>. </p> <p>You can’t
     * set your own <code>LookBackAvailablePeriods</code>. The value is automatically
     * calculated from the <code>BudgetAdjustmentPeriod</code> and your historical cost
     * data.</p>
     */
    inline bool LookBackAvailablePeriodsHasBeenSet() const { return m_lookBackAvailablePeriodsHasBeenSet; }

    /**
     * <p>The integer that describes how many budget periods in your
     * <code>BudgetAdjustmentPeriod</code> are included in the calculation of your
     * current <code>BudgetLimit</code>. If the first budget period in your
     * <code>BudgetAdjustmentPeriod</code> has no cost data, then that budget period
     * isn’t included in the average that determines your budget limit. </p> <p>For
     * example, if you set <code>BudgetAdjustmentPeriod</code> as <code>4</code>
     * quarters, but your account had no cost data in the first quarter, then only the
     * last three quarters are included in the calculation. In this scenario,
     * <code>LookBackAvailablePeriods</code> returns <code>3</code>. </p> <p>You can’t
     * set your own <code>LookBackAvailablePeriods</code>. The value is automatically
     * calculated from the <code>BudgetAdjustmentPeriod</code> and your historical cost
     * data.</p>
     */
    inline void SetLookBackAvailablePeriods(int value) { m_lookBackAvailablePeriodsHasBeenSet = true; m_lookBackAvailablePeriods = value; }

    /**
     * <p>The integer that describes how many budget periods in your
     * <code>BudgetAdjustmentPeriod</code> are included in the calculation of your
     * current <code>BudgetLimit</code>. If the first budget period in your
     * <code>BudgetAdjustmentPeriod</code> has no cost data, then that budget period
     * isn’t included in the average that determines your budget limit. </p> <p>For
     * example, if you set <code>BudgetAdjustmentPeriod</code> as <code>4</code>
     * quarters, but your account had no cost data in the first quarter, then only the
     * last three quarters are included in the calculation. In this scenario,
     * <code>LookBackAvailablePeriods</code> returns <code>3</code>. </p> <p>You can’t
     * set your own <code>LookBackAvailablePeriods</code>. The value is automatically
     * calculated from the <code>BudgetAdjustmentPeriod</code> and your historical cost
     * data.</p>
     */
    inline HistoricalOptions& WithLookBackAvailablePeriods(int value) { SetLookBackAvailablePeriods(value); return *this;}

  private:

    int m_budgetAdjustmentPeriod;
    bool m_budgetAdjustmentPeriodHasBeenSet = false;

    int m_lookBackAvailablePeriods;
    bool m_lookBackAvailablePeriodsHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
