/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/Spend.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/budgets/model/TimeUnit.h>
#include <aws/budgets/model/TimePeriod.h>
#include <aws/budgets/model/CalculatedSpend.h>
#include <aws/budgets/model/BudgetType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/budgets/model/AutoAdjustData.h>
#include <aws/budgets/model/Expression.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/budgets/model/HealthStatus.h>
#include <aws/budgets/model/Metric.h>
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
   * <p>Represents the output of the <code>CreateBudget</code> operation. The content
   * consists of the detailed metadata and data file information, and the current
   * status of the <code>budget</code> object.</p> <p>This is the Amazon Resource
   * Name (ARN) pattern for a budget: </p> <p>
   * <code>arn:aws:budgets::AccountId:budget/budgetName</code> </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/Budget">AWS API
   * Reference</a></p>
   */
  class Budget
  {
  public:
    AWS_BUDGETS_API Budget() = default;
    AWS_BUDGETS_API Budget(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Budget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a budget. The name must be unique within an account. The
     * <code>:</code> and <code>\</code> characters, and the "/action/" substring,
     * aren't allowed in <code>BudgetName</code>.</p>
     */
    inline const Aws::String& GetBudgetName() const { return m_budgetName; }
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }
    template<typename BudgetNameT = Aws::String>
    void SetBudgetName(BudgetNameT&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::forward<BudgetNameT>(value); }
    template<typename BudgetNameT = Aws::String>
    Budget& WithBudgetName(BudgetNameT&& value) { SetBudgetName(std::forward<BudgetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of cost, usage, RI utilization, RI coverage, Savings Plans
     * utilization, or Savings Plans coverage that you want to track with your
     * budget.</p> <p> <code>BudgetLimit</code> is required for cost or usage budgets,
     * but optional for RI or Savings Plans utilization or coverage budgets. RI and
     * Savings Plans utilization or coverage budgets default to <code>100</code>. This
     * is the only valid value for RI or Savings Plans utilization or coverage budgets.
     * You can't use <code>BudgetLimit</code> with <code>PlannedBudgetLimits</code> for
     * <code>CreateBudget</code> and <code>UpdateBudget</code> actions. </p>
     */
    inline const Spend& GetBudgetLimit() const { return m_budgetLimit; }
    inline bool BudgetLimitHasBeenSet() const { return m_budgetLimitHasBeenSet; }
    template<typename BudgetLimitT = Spend>
    void SetBudgetLimit(BudgetLimitT&& value) { m_budgetLimitHasBeenSet = true; m_budgetLimit = std::forward<BudgetLimitT>(value); }
    template<typename BudgetLimitT = Spend>
    Budget& WithBudgetLimit(BudgetLimitT&& value) { SetBudgetLimit(std::forward<BudgetLimitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map containing multiple <code>BudgetLimit</code>, including current or
     * future limits.</p> <p> <code>PlannedBudgetLimits</code> is available for cost or
     * usage budget and supports both monthly and quarterly <code>TimeUnit</code>. </p>
     * <p>For monthly budgets, provide 12 months of <code>PlannedBudgetLimits</code>
     * values. This must start from the current month and include the next 11 months.
     * The <code>key</code> is the start of the month, <code>UTC</code> in epoch
     * seconds. </p> <p>For quarterly budgets, provide four quarters of
     * <code>PlannedBudgetLimits</code> value entries in standard calendar quarter
     * increments. This must start from the current quarter and include the next three
     * quarters. The <code>key</code> is the start of the quarter, <code>UTC</code> in
     * epoch seconds. </p> <p>If the planned budget expires before 12 months for
     * monthly or four quarters for quarterly, provide the
     * <code>PlannedBudgetLimits</code> values only for the remaining periods.</p>
     * <p>If the budget begins at a date in the future, provide
     * <code>PlannedBudgetLimits</code> values from the start date of the budget. </p>
     * <p>After all of the <code>BudgetLimit</code> values in
     * <code>PlannedBudgetLimits</code> are used, the budget continues to use the last
     * limit as the <code>BudgetLimit</code>. At that point, the planned budget
     * provides the same experience as a fixed budget. </p> <p>
     * <code>DescribeBudget</code> and <code>DescribeBudgets</code> response along with
     * <code>PlannedBudgetLimits</code> also contain <code>BudgetLimit</code>
     * representing the current month or quarter limit present in
     * <code>PlannedBudgetLimits</code>. This only applies to budgets that are created
     * with <code>PlannedBudgetLimits</code>. Budgets that are created without
     * <code>PlannedBudgetLimits</code> only contain <code>BudgetLimit</code>. They
     * don't contain <code>PlannedBudgetLimits</code>.</p>
     */
    inline const Aws::Map<Aws::String, Spend>& GetPlannedBudgetLimits() const { return m_plannedBudgetLimits; }
    inline bool PlannedBudgetLimitsHasBeenSet() const { return m_plannedBudgetLimitsHasBeenSet; }
    template<typename PlannedBudgetLimitsT = Aws::Map<Aws::String, Spend>>
    void SetPlannedBudgetLimits(PlannedBudgetLimitsT&& value) { m_plannedBudgetLimitsHasBeenSet = true; m_plannedBudgetLimits = std::forward<PlannedBudgetLimitsT>(value); }
    template<typename PlannedBudgetLimitsT = Aws::Map<Aws::String, Spend>>
    Budget& WithPlannedBudgetLimits(PlannedBudgetLimitsT&& value) { SetPlannedBudgetLimits(std::forward<PlannedBudgetLimitsT>(value)); return *this;}
    template<typename PlannedBudgetLimitsKeyT = Aws::String, typename PlannedBudgetLimitsValueT = Spend>
    Budget& AddPlannedBudgetLimits(PlannedBudgetLimitsKeyT&& key, PlannedBudgetLimitsValueT&& value) {
      m_plannedBudgetLimitsHasBeenSet = true; m_plannedBudgetLimits.emplace(std::forward<PlannedBudgetLimitsKeyT>(key), std::forward<PlannedBudgetLimitsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The length of time until a budget resets the actual and forecasted spend.</p>
     */
    inline TimeUnit GetTimeUnit() const { return m_timeUnit; }
    inline bool TimeUnitHasBeenSet() const { return m_timeUnitHasBeenSet; }
    inline void SetTimeUnit(TimeUnit value) { m_timeUnitHasBeenSet = true; m_timeUnit = value; }
    inline Budget& WithTimeUnit(TimeUnit value) { SetTimeUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period of time that's covered by a budget. You set the start date and end
     * date. The start date must come before the end date. The end date must come
     * before <code>06/15/87 00:00 UTC</code>. </p> <p>If you create your budget and
     * don't specify a start date, Amazon Web Services defaults to the start of your
     * chosen time period (DAILY, MONTHLY, QUARTERLY, ANNUALLY, or CUSTOM). For
     * example, if you created your budget on January 24, 2018, chose
     * <code>DAILY</code>, and didn't set a start date, Amazon Web Services set your
     * start date to <code>01/24/18 00:00 UTC</code>. If you chose
     * <code>MONTHLY</code>, Amazon Web Services set your start date to <code>01/01/18
     * 00:00 UTC</code>. If you didn't specify an end date, Amazon Web Services set
     * your end date to <code>06/15/87 00:00 UTC</code>. The defaults are the same for
     * the Billing and Cost Management console and the API. </p> <p>You can change
     * either date with the <code>UpdateBudget</code> operation.</p> <p>After the end
     * date, Amazon Web Services deletes the budget and all the associated
     * notifications and subscribers.</p>
     */
    inline const TimePeriod& GetTimePeriod() const { return m_timePeriod; }
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
    template<typename TimePeriodT = TimePeriod>
    void SetTimePeriod(TimePeriodT&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::forward<TimePeriodT>(value); }
    template<typename TimePeriodT = TimePeriod>
    Budget& WithTimePeriod(TimePeriodT&& value) { SetTimePeriod(std::forward<TimePeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual and forecasted cost or usage that the budget tracks.</p>
     */
    inline const CalculatedSpend& GetCalculatedSpend() const { return m_calculatedSpend; }
    inline bool CalculatedSpendHasBeenSet() const { return m_calculatedSpendHasBeenSet; }
    template<typename CalculatedSpendT = CalculatedSpend>
    void SetCalculatedSpend(CalculatedSpendT&& value) { m_calculatedSpendHasBeenSet = true; m_calculatedSpend = std::forward<CalculatedSpendT>(value); }
    template<typename CalculatedSpendT = CalculatedSpend>
    Budget& WithCalculatedSpend(CalculatedSpendT&& value) { SetCalculatedSpend(std::forward<CalculatedSpendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this budget tracks costs, usage, RI utilization, RI
     * coverage, Savings Plans utilization, or Savings Plans coverage.</p>
     */
    inline BudgetType GetBudgetType() const { return m_budgetType; }
    inline bool BudgetTypeHasBeenSet() const { return m_budgetTypeHasBeenSet; }
    inline void SetBudgetType(BudgetType value) { m_budgetTypeHasBeenSet = true; m_budgetType = value; }
    inline Budget& WithBudgetType(BudgetType value) { SetBudgetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that you updated this budget.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    Budget& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that determine the budget amount for an auto-adjusting
     * budget.</p>
     */
    inline const AutoAdjustData& GetAutoAdjustData() const { return m_autoAdjustData; }
    inline bool AutoAdjustDataHasBeenSet() const { return m_autoAdjustDataHasBeenSet; }
    template<typename AutoAdjustDataT = AutoAdjustData>
    void SetAutoAdjustData(AutoAdjustDataT&& value) { m_autoAdjustDataHasBeenSet = true; m_autoAdjustData = std::forward<AutoAdjustDataT>(value); }
    template<typename AutoAdjustDataT = AutoAdjustData>
    Budget& WithAutoAdjustData(AutoAdjustDataT&& value) { SetAutoAdjustData(std::forward<AutoAdjustDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filtering dimensions for the budget and their corresponding values.</p>
     */
    inline const Expression& GetFilterExpression() const { return m_filterExpression; }
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }
    template<typename FilterExpressionT = Expression>
    void SetFilterExpression(FilterExpressionT&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::forward<FilterExpressionT>(value); }
    template<typename FilterExpressionT = Expression>
    Budget& WithFilterExpression(FilterExpressionT&& value) { SetFilterExpression(std::forward<FilterExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition for how the budget data is aggregated.</p>
     */
    inline const Aws::Vector<Metric>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Vector<Metric>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Vector<Metric>>
    Budget& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    inline Budget& AddMetrics(Metric value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies a specific billing
     * view. The ARN is used to specify which particular billing view you want to
     * interact with or retrieve information from when making API calls related to
     * Amazon Web Services Billing and Cost Management features. The BillingViewArn can
     * be retrieved by calling the ListBillingViews API.</p>
     */
    inline const Aws::String& GetBillingViewArn() const { return m_billingViewArn; }
    inline bool BillingViewArnHasBeenSet() const { return m_billingViewArnHasBeenSet; }
    template<typename BillingViewArnT = Aws::String>
    void SetBillingViewArn(BillingViewArnT&& value) { m_billingViewArnHasBeenSet = true; m_billingViewArn = std::forward<BillingViewArnT>(value); }
    template<typename BillingViewArnT = Aws::String>
    Budget& WithBillingViewArn(BillingViewArnT&& value) { SetBillingViewArn(std::forward<BillingViewArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current operational state of a Billing View derived resource.</p>
     */
    inline const HealthStatus& GetHealthStatus() const { return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    template<typename HealthStatusT = HealthStatus>
    void SetHealthStatus(HealthStatusT&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::forward<HealthStatusT>(value); }
    template<typename HealthStatusT = HealthStatus>
    Budget& WithHealthStatus(HealthStatusT&& value) { SetHealthStatus(std::forward<HealthStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet = false;

    Spend m_budgetLimit;
    bool m_budgetLimitHasBeenSet = false;

    Aws::Map<Aws::String, Spend> m_plannedBudgetLimits;
    bool m_plannedBudgetLimitsHasBeenSet = false;

    TimeUnit m_timeUnit{TimeUnit::NOT_SET};
    bool m_timeUnitHasBeenSet = false;

    TimePeriod m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    CalculatedSpend m_calculatedSpend;
    bool m_calculatedSpendHasBeenSet = false;

    BudgetType m_budgetType{BudgetType::NOT_SET};
    bool m_budgetTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    AutoAdjustData m_autoAdjustData;
    bool m_autoAdjustDataHasBeenSet = false;

    Expression m_filterExpression;
    bool m_filterExpressionHasBeenSet = false;

    Aws::Vector<Metric> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_billingViewArn;
    bool m_billingViewArnHasBeenSet = false;

    HealthStatus m_healthStatus;
    bool m_healthStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
