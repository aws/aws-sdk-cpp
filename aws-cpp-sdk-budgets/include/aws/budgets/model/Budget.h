/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/Spend.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/budgets/model/CostTypes.h>
#include <aws/budgets/model/TimeUnit.h>
#include <aws/budgets/model/TimePeriod.h>
#include <aws/budgets/model/CalculatedSpend.h>
#include <aws/budgets/model/BudgetType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Budgets
{
namespace Model
{

  /**
   * <p>Represents the output of the <code>CreateBudget</code> operation. The content
   * consists of the detailed metadata and data file information, and the current
   * status of the <code>budget</code>.</p> <p>The ARN pattern for a budget is:
   * <code>arn:aws:budgetservice::AccountId:budget/budgetName</code> </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/Budget">AWS API
   * Reference</a></p>
   */
  class AWS_BUDGETS_API Budget
  {
  public:
    Budget();
    Budget(const Aws::Utils::Json::JsonValue& jsonValue);
    Budget& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a budget. Unique within accounts. <code>:</code> and
     * <code>\</code> characters are not allowed in the <code>BudgetName</code>.</p>
     */
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    /**
     * <p>The name of a budget. Unique within accounts. <code>:</code> and
     * <code>\</code> characters are not allowed in the <code>BudgetName</code>.</p>
     */
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    /**
     * <p>The name of a budget. Unique within accounts. <code>:</code> and
     * <code>\</code> characters are not allowed in the <code>BudgetName</code>.</p>
     */
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }

    /**
     * <p>The name of a budget. Unique within accounts. <code>:</code> and
     * <code>\</code> characters are not allowed in the <code>BudgetName</code>.</p>
     */
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    /**
     * <p>The name of a budget. Unique within accounts. <code>:</code> and
     * <code>\</code> characters are not allowed in the <code>BudgetName</code>.</p>
     */
    inline Budget& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    /**
     * <p>The name of a budget. Unique within accounts. <code>:</code> and
     * <code>\</code> characters are not allowed in the <code>BudgetName</code>.</p>
     */
    inline Budget& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}

    /**
     * <p>The name of a budget. Unique within accounts. <code>:</code> and
     * <code>\</code> characters are not allowed in the <code>BudgetName</code>.</p>
     */
    inline Budget& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}


    /**
     * <p>The total amount of cost, usage, or RI utilization that you want to track
     * with your budget.</p> <p> <code>BudgetLimit</code> is required for cost or usage
     * budgets, but optional for RI utilization budgets. RI utilization budgets default
     * to the only valid value for RI utilization budgets, which is
     * <code>100</code>.</p>
     */
    inline const Spend& GetBudgetLimit() const{ return m_budgetLimit; }

    /**
     * <p>The total amount of cost, usage, or RI utilization that you want to track
     * with your budget.</p> <p> <code>BudgetLimit</code> is required for cost or usage
     * budgets, but optional for RI utilization budgets. RI utilization budgets default
     * to the only valid value for RI utilization budgets, which is
     * <code>100</code>.</p>
     */
    inline void SetBudgetLimit(const Spend& value) { m_budgetLimitHasBeenSet = true; m_budgetLimit = value; }

    /**
     * <p>The total amount of cost, usage, or RI utilization that you want to track
     * with your budget.</p> <p> <code>BudgetLimit</code> is required for cost or usage
     * budgets, but optional for RI utilization budgets. RI utilization budgets default
     * to the only valid value for RI utilization budgets, which is
     * <code>100</code>.</p>
     */
    inline void SetBudgetLimit(Spend&& value) { m_budgetLimitHasBeenSet = true; m_budgetLimit = std::move(value); }

    /**
     * <p>The total amount of cost, usage, or RI utilization that you want to track
     * with your budget.</p> <p> <code>BudgetLimit</code> is required for cost or usage
     * budgets, but optional for RI utilization budgets. RI utilization budgets default
     * to the only valid value for RI utilization budgets, which is
     * <code>100</code>.</p>
     */
    inline Budget& WithBudgetLimit(const Spend& value) { SetBudgetLimit(value); return *this;}

    /**
     * <p>The total amount of cost, usage, or RI utilization that you want to track
     * with your budget.</p> <p> <code>BudgetLimit</code> is required for cost or usage
     * budgets, but optional for RI utilization budgets. RI utilization budgets default
     * to the only valid value for RI utilization budgets, which is
     * <code>100</code>.</p>
     */
    inline Budget& WithBudgetLimit(Spend&& value) { SetBudgetLimit(std::move(value)); return *this;}


    /**
     * <p>The cost filters applied to a budget, such as service or region.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetCostFilters() const{ return m_costFilters; }

    /**
     * <p>The cost filters applied to a budget, such as service or region.</p>
     */
    inline void SetCostFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_costFiltersHasBeenSet = true; m_costFilters = value; }

    /**
     * <p>The cost filters applied to a budget, such as service or region.</p>
     */
    inline void SetCostFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_costFiltersHasBeenSet = true; m_costFilters = std::move(value); }

    /**
     * <p>The cost filters applied to a budget, such as service or region.</p>
     */
    inline Budget& WithCostFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetCostFilters(value); return *this;}

    /**
     * <p>The cost filters applied to a budget, such as service or region.</p>
     */
    inline Budget& WithCostFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetCostFilters(std::move(value)); return *this;}

    /**
     * <p>The cost filters applied to a budget, such as service or region.</p>
     */
    inline Budget& AddCostFilters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(key, value); return *this; }

    /**
     * <p>The cost filters applied to a budget, such as service or region.</p>
     */
    inline Budget& AddCostFilters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The cost filters applied to a budget, such as service or region.</p>
     */
    inline Budget& AddCostFilters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The cost filters applied to a budget, such as service or region.</p>
     */
    inline Budget& AddCostFilters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The cost filters applied to a budget, such as service or region.</p>
     */
    inline Budget& AddCostFilters(const char* key, Aws::Vector<Aws::String>&& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The cost filters applied to a budget, such as service or region.</p>
     */
    inline Budget& AddCostFilters(const char* key, const Aws::Vector<Aws::String>& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(key, value); return *this; }


    /**
     * <p>The types of costs included in this budget.</p>
     */
    inline const CostTypes& GetCostTypes() const{ return m_costTypes; }

    /**
     * <p>The types of costs included in this budget.</p>
     */
    inline void SetCostTypes(const CostTypes& value) { m_costTypesHasBeenSet = true; m_costTypes = value; }

    /**
     * <p>The types of costs included in this budget.</p>
     */
    inline void SetCostTypes(CostTypes&& value) { m_costTypesHasBeenSet = true; m_costTypes = std::move(value); }

    /**
     * <p>The types of costs included in this budget.</p>
     */
    inline Budget& WithCostTypes(const CostTypes& value) { SetCostTypes(value); return *this;}

    /**
     * <p>The types of costs included in this budget.</p>
     */
    inline Budget& WithCostTypes(CostTypes&& value) { SetCostTypes(std::move(value)); return *this;}


    /**
     * <p>The length of time until a budget resets the actual and forecasted spend.</p>
     */
    inline const TimeUnit& GetTimeUnit() const{ return m_timeUnit; }

    /**
     * <p>The length of time until a budget resets the actual and forecasted spend.</p>
     */
    inline void SetTimeUnit(const TimeUnit& value) { m_timeUnitHasBeenSet = true; m_timeUnit = value; }

    /**
     * <p>The length of time until a budget resets the actual and forecasted spend.</p>
     */
    inline void SetTimeUnit(TimeUnit&& value) { m_timeUnitHasBeenSet = true; m_timeUnit = std::move(value); }

    /**
     * <p>The length of time until a budget resets the actual and forecasted spend.</p>
     */
    inline Budget& WithTimeUnit(const TimeUnit& value) { SetTimeUnit(value); return *this;}

    /**
     * <p>The length of time until a budget resets the actual and forecasted spend.</p>
     */
    inline Budget& WithTimeUnit(TimeUnit&& value) { SetTimeUnit(std::move(value)); return *this;}


    /**
     * <p>The period of time covered by a budget. Has a start date and an end date. The
     * start date must come before the end date. There are no restrictions on the end
     * date. </p> <p>If you created your budget and didn't specify a start date, AWS
     * defaults to the start of your chosen time period (i.e. DAILY, MONTHLY,
     * QUARTERLY, ANNUALLY). For example, if you created your budget on January 24th
     * 2018, chose <code>DAILY</code>, and didn't set a start date, AWS set your start
     * date to <code>01/24/18 00:00 UTC</code>. If you chose <code>MONTHLY</code>, AWS
     * set your start date to <code>01/01/18 00:00 UTC</code>. If you didn't specify an
     * end date, AWS set your end date to <code>06/15/87 00:00 UTC</code>. The defaults
     * are the same for the AWS Billing and Cost Management console and the API. </p>
     * <p>You can change either date with the <code>UpdateBudget</code> operation.</p>
     * <p>After the end date, AWS deletes the budget and all associated notifications
     * and subscribers.</p>
     */
    inline const TimePeriod& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The period of time covered by a budget. Has a start date and an end date. The
     * start date must come before the end date. There are no restrictions on the end
     * date. </p> <p>If you created your budget and didn't specify a start date, AWS
     * defaults to the start of your chosen time period (i.e. DAILY, MONTHLY,
     * QUARTERLY, ANNUALLY). For example, if you created your budget on January 24th
     * 2018, chose <code>DAILY</code>, and didn't set a start date, AWS set your start
     * date to <code>01/24/18 00:00 UTC</code>. If you chose <code>MONTHLY</code>, AWS
     * set your start date to <code>01/01/18 00:00 UTC</code>. If you didn't specify an
     * end date, AWS set your end date to <code>06/15/87 00:00 UTC</code>. The defaults
     * are the same for the AWS Billing and Cost Management console and the API. </p>
     * <p>You can change either date with the <code>UpdateBudget</code> operation.</p>
     * <p>After the end date, AWS deletes the budget and all associated notifications
     * and subscribers.</p>
     */
    inline void SetTimePeriod(const TimePeriod& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The period of time covered by a budget. Has a start date and an end date. The
     * start date must come before the end date. There are no restrictions on the end
     * date. </p> <p>If you created your budget and didn't specify a start date, AWS
     * defaults to the start of your chosen time period (i.e. DAILY, MONTHLY,
     * QUARTERLY, ANNUALLY). For example, if you created your budget on January 24th
     * 2018, chose <code>DAILY</code>, and didn't set a start date, AWS set your start
     * date to <code>01/24/18 00:00 UTC</code>. If you chose <code>MONTHLY</code>, AWS
     * set your start date to <code>01/01/18 00:00 UTC</code>. If you didn't specify an
     * end date, AWS set your end date to <code>06/15/87 00:00 UTC</code>. The defaults
     * are the same for the AWS Billing and Cost Management console and the API. </p>
     * <p>You can change either date with the <code>UpdateBudget</code> operation.</p>
     * <p>After the end date, AWS deletes the budget and all associated notifications
     * and subscribers.</p>
     */
    inline void SetTimePeriod(TimePeriod&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The period of time covered by a budget. Has a start date and an end date. The
     * start date must come before the end date. There are no restrictions on the end
     * date. </p> <p>If you created your budget and didn't specify a start date, AWS
     * defaults to the start of your chosen time period (i.e. DAILY, MONTHLY,
     * QUARTERLY, ANNUALLY). For example, if you created your budget on January 24th
     * 2018, chose <code>DAILY</code>, and didn't set a start date, AWS set your start
     * date to <code>01/24/18 00:00 UTC</code>. If you chose <code>MONTHLY</code>, AWS
     * set your start date to <code>01/01/18 00:00 UTC</code>. If you didn't specify an
     * end date, AWS set your end date to <code>06/15/87 00:00 UTC</code>. The defaults
     * are the same for the AWS Billing and Cost Management console and the API. </p>
     * <p>You can change either date with the <code>UpdateBudget</code> operation.</p>
     * <p>After the end date, AWS deletes the budget and all associated notifications
     * and subscribers.</p>
     */
    inline Budget& WithTimePeriod(const TimePeriod& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The period of time covered by a budget. Has a start date and an end date. The
     * start date must come before the end date. There are no restrictions on the end
     * date. </p> <p>If you created your budget and didn't specify a start date, AWS
     * defaults to the start of your chosen time period (i.e. DAILY, MONTHLY,
     * QUARTERLY, ANNUALLY). For example, if you created your budget on January 24th
     * 2018, chose <code>DAILY</code>, and didn't set a start date, AWS set your start
     * date to <code>01/24/18 00:00 UTC</code>. If you chose <code>MONTHLY</code>, AWS
     * set your start date to <code>01/01/18 00:00 UTC</code>. If you didn't specify an
     * end date, AWS set your end date to <code>06/15/87 00:00 UTC</code>. The defaults
     * are the same for the AWS Billing and Cost Management console and the API. </p>
     * <p>You can change either date with the <code>UpdateBudget</code> operation.</p>
     * <p>After the end date, AWS deletes the budget and all associated notifications
     * and subscribers.</p>
     */
    inline Budget& WithTimePeriod(TimePeriod&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>The actual and forecasted cost or usage being tracked by a budget.</p>
     */
    inline const CalculatedSpend& GetCalculatedSpend() const{ return m_calculatedSpend; }

    /**
     * <p>The actual and forecasted cost or usage being tracked by a budget.</p>
     */
    inline void SetCalculatedSpend(const CalculatedSpend& value) { m_calculatedSpendHasBeenSet = true; m_calculatedSpend = value; }

    /**
     * <p>The actual and forecasted cost or usage being tracked by a budget.</p>
     */
    inline void SetCalculatedSpend(CalculatedSpend&& value) { m_calculatedSpendHasBeenSet = true; m_calculatedSpend = std::move(value); }

    /**
     * <p>The actual and forecasted cost or usage being tracked by a budget.</p>
     */
    inline Budget& WithCalculatedSpend(const CalculatedSpend& value) { SetCalculatedSpend(value); return *this;}

    /**
     * <p>The actual and forecasted cost or usage being tracked by a budget.</p>
     */
    inline Budget& WithCalculatedSpend(CalculatedSpend&& value) { SetCalculatedSpend(std::move(value)); return *this;}


    /**
     * <p>Whether this budget tracks monetary costs, usage, or RI utilization.</p>
     */
    inline const BudgetType& GetBudgetType() const{ return m_budgetType; }

    /**
     * <p>Whether this budget tracks monetary costs, usage, or RI utilization.</p>
     */
    inline void SetBudgetType(const BudgetType& value) { m_budgetTypeHasBeenSet = true; m_budgetType = value; }

    /**
     * <p>Whether this budget tracks monetary costs, usage, or RI utilization.</p>
     */
    inline void SetBudgetType(BudgetType&& value) { m_budgetTypeHasBeenSet = true; m_budgetType = std::move(value); }

    /**
     * <p>Whether this budget tracks monetary costs, usage, or RI utilization.</p>
     */
    inline Budget& WithBudgetType(const BudgetType& value) { SetBudgetType(value); return *this;}

    /**
     * <p>Whether this budget tracks monetary costs, usage, or RI utilization.</p>
     */
    inline Budget& WithBudgetType(BudgetType&& value) { SetBudgetType(std::move(value)); return *this;}

  private:

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet;

    Spend m_budgetLimit;
    bool m_budgetLimitHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_costFilters;
    bool m_costFiltersHasBeenSet;

    CostTypes m_costTypes;
    bool m_costTypesHasBeenSet;

    TimeUnit m_timeUnit;
    bool m_timeUnitHasBeenSet;

    TimePeriod m_timePeriod;
    bool m_timePeriodHasBeenSet;

    CalculatedSpend m_calculatedSpend;
    bool m_calculatedSpendHasBeenSet;

    BudgetType m_budgetType;
    bool m_budgetTypeHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
