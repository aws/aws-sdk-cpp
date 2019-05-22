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
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * status of the <code>budget</code> object.</p> <p>This is the ARN pattern for a
   * budget: </p> <p> <code>arn:aws:budgetservice::AccountId:budget/budgetName</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/Budget">AWS API
   * Reference</a></p>
   */
  class AWS_BUDGETS_API Budget
  {
  public:
    Budget();
    Budget(Aws::Utils::Json::JsonView jsonValue);
    Budget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a budget. The name must be unique within an account. The
     * <code>:</code> and <code>\</code> characters aren't allowed in
     * <code>BudgetName</code>.</p>
     */
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    /**
     * <p>The name of a budget. The name must be unique within an account. The
     * <code>:</code> and <code>\</code> characters aren't allowed in
     * <code>BudgetName</code>.</p>
     */
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }

    /**
     * <p>The name of a budget. The name must be unique within an account. The
     * <code>:</code> and <code>\</code> characters aren't allowed in
     * <code>BudgetName</code>.</p>
     */
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    /**
     * <p>The name of a budget. The name must be unique within an account. The
     * <code>:</code> and <code>\</code> characters aren't allowed in
     * <code>BudgetName</code>.</p>
     */
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }

    /**
     * <p>The name of a budget. The name must be unique within an account. The
     * <code>:</code> and <code>\</code> characters aren't allowed in
     * <code>BudgetName</code>.</p>
     */
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    /**
     * <p>The name of a budget. The name must be unique within an account. The
     * <code>:</code> and <code>\</code> characters aren't allowed in
     * <code>BudgetName</code>.</p>
     */
    inline Budget& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    /**
     * <p>The name of a budget. The name must be unique within an account. The
     * <code>:</code> and <code>\</code> characters aren't allowed in
     * <code>BudgetName</code>.</p>
     */
    inline Budget& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}

    /**
     * <p>The name of a budget. The name must be unique within an account. The
     * <code>:</code> and <code>\</code> characters aren't allowed in
     * <code>BudgetName</code>.</p>
     */
    inline Budget& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}


    /**
     * <p>The total amount of cost, usage, RI utilization, or RI coverage that you want
     * to track with your budget.</p> <p> <code>BudgetLimit</code> is required for cost
     * or usage budgets, but optional for RI utilization or coverage budgets. RI
     * utilization or coverage budgets default to <code>100</code>, which is the only
     * valid value for RI utilization or coverage budgets. You can't use
     * <code>BudgetLimit</code> with <code>PlannedBudgetLimits</code> for
     * <code>CreateBudget</code> and <code>UpdateBudget</code> actions. </p>
     */
    inline const Spend& GetBudgetLimit() const{ return m_budgetLimit; }

    /**
     * <p>The total amount of cost, usage, RI utilization, or RI coverage that you want
     * to track with your budget.</p> <p> <code>BudgetLimit</code> is required for cost
     * or usage budgets, but optional for RI utilization or coverage budgets. RI
     * utilization or coverage budgets default to <code>100</code>, which is the only
     * valid value for RI utilization or coverage budgets. You can't use
     * <code>BudgetLimit</code> with <code>PlannedBudgetLimits</code> for
     * <code>CreateBudget</code> and <code>UpdateBudget</code> actions. </p>
     */
    inline bool BudgetLimitHasBeenSet() const { return m_budgetLimitHasBeenSet; }

    /**
     * <p>The total amount of cost, usage, RI utilization, or RI coverage that you want
     * to track with your budget.</p> <p> <code>BudgetLimit</code> is required for cost
     * or usage budgets, but optional for RI utilization or coverage budgets. RI
     * utilization or coverage budgets default to <code>100</code>, which is the only
     * valid value for RI utilization or coverage budgets. You can't use
     * <code>BudgetLimit</code> with <code>PlannedBudgetLimits</code> for
     * <code>CreateBudget</code> and <code>UpdateBudget</code> actions. </p>
     */
    inline void SetBudgetLimit(const Spend& value) { m_budgetLimitHasBeenSet = true; m_budgetLimit = value; }

    /**
     * <p>The total amount of cost, usage, RI utilization, or RI coverage that you want
     * to track with your budget.</p> <p> <code>BudgetLimit</code> is required for cost
     * or usage budgets, but optional for RI utilization or coverage budgets. RI
     * utilization or coverage budgets default to <code>100</code>, which is the only
     * valid value for RI utilization or coverage budgets. You can't use
     * <code>BudgetLimit</code> with <code>PlannedBudgetLimits</code> for
     * <code>CreateBudget</code> and <code>UpdateBudget</code> actions. </p>
     */
    inline void SetBudgetLimit(Spend&& value) { m_budgetLimitHasBeenSet = true; m_budgetLimit = std::move(value); }

    /**
     * <p>The total amount of cost, usage, RI utilization, or RI coverage that you want
     * to track with your budget.</p> <p> <code>BudgetLimit</code> is required for cost
     * or usage budgets, but optional for RI utilization or coverage budgets. RI
     * utilization or coverage budgets default to <code>100</code>, which is the only
     * valid value for RI utilization or coverage budgets. You can't use
     * <code>BudgetLimit</code> with <code>PlannedBudgetLimits</code> for
     * <code>CreateBudget</code> and <code>UpdateBudget</code> actions. </p>
     */
    inline Budget& WithBudgetLimit(const Spend& value) { SetBudgetLimit(value); return *this;}

    /**
     * <p>The total amount of cost, usage, RI utilization, or RI coverage that you want
     * to track with your budget.</p> <p> <code>BudgetLimit</code> is required for cost
     * or usage budgets, but optional for RI utilization or coverage budgets. RI
     * utilization or coverage budgets default to <code>100</code>, which is the only
     * valid value for RI utilization or coverage budgets. You can't use
     * <code>BudgetLimit</code> with <code>PlannedBudgetLimits</code> for
     * <code>CreateBudget</code> and <code>UpdateBudget</code> actions. </p>
     */
    inline Budget& WithBudgetLimit(Spend&& value) { SetBudgetLimit(std::move(value)); return *this;}


    /**
     * <p>A map containing multiple <code>BudgetLimit</code>, including current or
     * future limits.</p> <p> <code>PlannedBudgetLimits</code> is available for cost or
     * usage budget and supports monthly and quarterly <code>TimeUnit</code>. </p>
     * <p>For monthly budgets, provide 12 months of <code>PlannedBudgetLimits</code>
     * values. This must start from the current month and include the next 11 months.
     * The <code>key</code> is the start of the month, <code>UTC</code> in epoch
     * seconds. </p> <p>For quarterly budgets, provide 4 quarters of
     * <code>PlannedBudgetLimits</code> value entries in standard calendar quarter
     * increments. This must start from the current quarter and include the next 3
     * quarters. The <code>key</code> is the start of the quarter, <code>UTC</code> in
     * epoch seconds. </p> <p>If the planned budget expires before 12 months for
     * monthly or 4 quarters for quarterly, provide the
     * <code>PlannedBudgetLimits</code> values only for the remaining periods.</p>
     * <p>If the budget begins at a date in the future, provide
     * <code>PlannedBudgetLimits</code> values from the start date of the budget. </p>
     * <p>After all of the <code>BudgetLimit</code> values in
     * <code>PlannedBudgetLimits</code> are used, the budget continues to use the last
     * limit as the <code>BudgetLimit</code>. At that point, the planned budget
     * provides the same experience as a fixed budget. </p> <p>
     * <code>DescribeBudget</code> and <code>DescribeBudgets</code> response along with
     * <code>PlannedBudgetLimits</code> will also contain <code>BudgetLimit</code>
     * representing the current month or quarter limit present in
     * <code>PlannedBudgetLimits</code>. This only applies to budgets created with
     * <code>PlannedBudgetLimits</code>. Budgets created without
     * <code>PlannedBudgetLimits</code> will only contain <code>BudgetLimit</code>, and
     * no <code>PlannedBudgetLimits</code>.</p>
     */
    inline const Aws::Map<Aws::String, Spend>& GetPlannedBudgetLimits() const{ return m_plannedBudgetLimits; }

    /**
     * <p>A map containing multiple <code>BudgetLimit</code>, including current or
     * future limits.</p> <p> <code>PlannedBudgetLimits</code> is available for cost or
     * usage budget and supports monthly and quarterly <code>TimeUnit</code>. </p>
     * <p>For monthly budgets, provide 12 months of <code>PlannedBudgetLimits</code>
     * values. This must start from the current month and include the next 11 months.
     * The <code>key</code> is the start of the month, <code>UTC</code> in epoch
     * seconds. </p> <p>For quarterly budgets, provide 4 quarters of
     * <code>PlannedBudgetLimits</code> value entries in standard calendar quarter
     * increments. This must start from the current quarter and include the next 3
     * quarters. The <code>key</code> is the start of the quarter, <code>UTC</code> in
     * epoch seconds. </p> <p>If the planned budget expires before 12 months for
     * monthly or 4 quarters for quarterly, provide the
     * <code>PlannedBudgetLimits</code> values only for the remaining periods.</p>
     * <p>If the budget begins at a date in the future, provide
     * <code>PlannedBudgetLimits</code> values from the start date of the budget. </p>
     * <p>After all of the <code>BudgetLimit</code> values in
     * <code>PlannedBudgetLimits</code> are used, the budget continues to use the last
     * limit as the <code>BudgetLimit</code>. At that point, the planned budget
     * provides the same experience as a fixed budget. </p> <p>
     * <code>DescribeBudget</code> and <code>DescribeBudgets</code> response along with
     * <code>PlannedBudgetLimits</code> will also contain <code>BudgetLimit</code>
     * representing the current month or quarter limit present in
     * <code>PlannedBudgetLimits</code>. This only applies to budgets created with
     * <code>PlannedBudgetLimits</code>. Budgets created without
     * <code>PlannedBudgetLimits</code> will only contain <code>BudgetLimit</code>, and
     * no <code>PlannedBudgetLimits</code>.</p>
     */
    inline bool PlannedBudgetLimitsHasBeenSet() const { return m_plannedBudgetLimitsHasBeenSet; }

    /**
     * <p>A map containing multiple <code>BudgetLimit</code>, including current or
     * future limits.</p> <p> <code>PlannedBudgetLimits</code> is available for cost or
     * usage budget and supports monthly and quarterly <code>TimeUnit</code>. </p>
     * <p>For monthly budgets, provide 12 months of <code>PlannedBudgetLimits</code>
     * values. This must start from the current month and include the next 11 months.
     * The <code>key</code> is the start of the month, <code>UTC</code> in epoch
     * seconds. </p> <p>For quarterly budgets, provide 4 quarters of
     * <code>PlannedBudgetLimits</code> value entries in standard calendar quarter
     * increments. This must start from the current quarter and include the next 3
     * quarters. The <code>key</code> is the start of the quarter, <code>UTC</code> in
     * epoch seconds. </p> <p>If the planned budget expires before 12 months for
     * monthly or 4 quarters for quarterly, provide the
     * <code>PlannedBudgetLimits</code> values only for the remaining periods.</p>
     * <p>If the budget begins at a date in the future, provide
     * <code>PlannedBudgetLimits</code> values from the start date of the budget. </p>
     * <p>After all of the <code>BudgetLimit</code> values in
     * <code>PlannedBudgetLimits</code> are used, the budget continues to use the last
     * limit as the <code>BudgetLimit</code>. At that point, the planned budget
     * provides the same experience as a fixed budget. </p> <p>
     * <code>DescribeBudget</code> and <code>DescribeBudgets</code> response along with
     * <code>PlannedBudgetLimits</code> will also contain <code>BudgetLimit</code>
     * representing the current month or quarter limit present in
     * <code>PlannedBudgetLimits</code>. This only applies to budgets created with
     * <code>PlannedBudgetLimits</code>. Budgets created without
     * <code>PlannedBudgetLimits</code> will only contain <code>BudgetLimit</code>, and
     * no <code>PlannedBudgetLimits</code>.</p>
     */
    inline void SetPlannedBudgetLimits(const Aws::Map<Aws::String, Spend>& value) { m_plannedBudgetLimitsHasBeenSet = true; m_plannedBudgetLimits = value; }

    /**
     * <p>A map containing multiple <code>BudgetLimit</code>, including current or
     * future limits.</p> <p> <code>PlannedBudgetLimits</code> is available for cost or
     * usage budget and supports monthly and quarterly <code>TimeUnit</code>. </p>
     * <p>For monthly budgets, provide 12 months of <code>PlannedBudgetLimits</code>
     * values. This must start from the current month and include the next 11 months.
     * The <code>key</code> is the start of the month, <code>UTC</code> in epoch
     * seconds. </p> <p>For quarterly budgets, provide 4 quarters of
     * <code>PlannedBudgetLimits</code> value entries in standard calendar quarter
     * increments. This must start from the current quarter and include the next 3
     * quarters. The <code>key</code> is the start of the quarter, <code>UTC</code> in
     * epoch seconds. </p> <p>If the planned budget expires before 12 months for
     * monthly or 4 quarters for quarterly, provide the
     * <code>PlannedBudgetLimits</code> values only for the remaining periods.</p>
     * <p>If the budget begins at a date in the future, provide
     * <code>PlannedBudgetLimits</code> values from the start date of the budget. </p>
     * <p>After all of the <code>BudgetLimit</code> values in
     * <code>PlannedBudgetLimits</code> are used, the budget continues to use the last
     * limit as the <code>BudgetLimit</code>. At that point, the planned budget
     * provides the same experience as a fixed budget. </p> <p>
     * <code>DescribeBudget</code> and <code>DescribeBudgets</code> response along with
     * <code>PlannedBudgetLimits</code> will also contain <code>BudgetLimit</code>
     * representing the current month or quarter limit present in
     * <code>PlannedBudgetLimits</code>. This only applies to budgets created with
     * <code>PlannedBudgetLimits</code>. Budgets created without
     * <code>PlannedBudgetLimits</code> will only contain <code>BudgetLimit</code>, and
     * no <code>PlannedBudgetLimits</code>.</p>
     */
    inline void SetPlannedBudgetLimits(Aws::Map<Aws::String, Spend>&& value) { m_plannedBudgetLimitsHasBeenSet = true; m_plannedBudgetLimits = std::move(value); }

    /**
     * <p>A map containing multiple <code>BudgetLimit</code>, including current or
     * future limits.</p> <p> <code>PlannedBudgetLimits</code> is available for cost or
     * usage budget and supports monthly and quarterly <code>TimeUnit</code>. </p>
     * <p>For monthly budgets, provide 12 months of <code>PlannedBudgetLimits</code>
     * values. This must start from the current month and include the next 11 months.
     * The <code>key</code> is the start of the month, <code>UTC</code> in epoch
     * seconds. </p> <p>For quarterly budgets, provide 4 quarters of
     * <code>PlannedBudgetLimits</code> value entries in standard calendar quarter
     * increments. This must start from the current quarter and include the next 3
     * quarters. The <code>key</code> is the start of the quarter, <code>UTC</code> in
     * epoch seconds. </p> <p>If the planned budget expires before 12 months for
     * monthly or 4 quarters for quarterly, provide the
     * <code>PlannedBudgetLimits</code> values only for the remaining periods.</p>
     * <p>If the budget begins at a date in the future, provide
     * <code>PlannedBudgetLimits</code> values from the start date of the budget. </p>
     * <p>After all of the <code>BudgetLimit</code> values in
     * <code>PlannedBudgetLimits</code> are used, the budget continues to use the last
     * limit as the <code>BudgetLimit</code>. At that point, the planned budget
     * provides the same experience as a fixed budget. </p> <p>
     * <code>DescribeBudget</code> and <code>DescribeBudgets</code> response along with
     * <code>PlannedBudgetLimits</code> will also contain <code>BudgetLimit</code>
     * representing the current month or quarter limit present in
     * <code>PlannedBudgetLimits</code>. This only applies to budgets created with
     * <code>PlannedBudgetLimits</code>. Budgets created without
     * <code>PlannedBudgetLimits</code> will only contain <code>BudgetLimit</code>, and
     * no <code>PlannedBudgetLimits</code>.</p>
     */
    inline Budget& WithPlannedBudgetLimits(const Aws::Map<Aws::String, Spend>& value) { SetPlannedBudgetLimits(value); return *this;}

    /**
     * <p>A map containing multiple <code>BudgetLimit</code>, including current or
     * future limits.</p> <p> <code>PlannedBudgetLimits</code> is available for cost or
     * usage budget and supports monthly and quarterly <code>TimeUnit</code>. </p>
     * <p>For monthly budgets, provide 12 months of <code>PlannedBudgetLimits</code>
     * values. This must start from the current month and include the next 11 months.
     * The <code>key</code> is the start of the month, <code>UTC</code> in epoch
     * seconds. </p> <p>For quarterly budgets, provide 4 quarters of
     * <code>PlannedBudgetLimits</code> value entries in standard calendar quarter
     * increments. This must start from the current quarter and include the next 3
     * quarters. The <code>key</code> is the start of the quarter, <code>UTC</code> in
     * epoch seconds. </p> <p>If the planned budget expires before 12 months for
     * monthly or 4 quarters for quarterly, provide the
     * <code>PlannedBudgetLimits</code> values only for the remaining periods.</p>
     * <p>If the budget begins at a date in the future, provide
     * <code>PlannedBudgetLimits</code> values from the start date of the budget. </p>
     * <p>After all of the <code>BudgetLimit</code> values in
     * <code>PlannedBudgetLimits</code> are used, the budget continues to use the last
     * limit as the <code>BudgetLimit</code>. At that point, the planned budget
     * provides the same experience as a fixed budget. </p> <p>
     * <code>DescribeBudget</code> and <code>DescribeBudgets</code> response along with
     * <code>PlannedBudgetLimits</code> will also contain <code>BudgetLimit</code>
     * representing the current month or quarter limit present in
     * <code>PlannedBudgetLimits</code>. This only applies to budgets created with
     * <code>PlannedBudgetLimits</code>. Budgets created without
     * <code>PlannedBudgetLimits</code> will only contain <code>BudgetLimit</code>, and
     * no <code>PlannedBudgetLimits</code>.</p>
     */
    inline Budget& WithPlannedBudgetLimits(Aws::Map<Aws::String, Spend>&& value) { SetPlannedBudgetLimits(std::move(value)); return *this;}

    /**
     * <p>A map containing multiple <code>BudgetLimit</code>, including current or
     * future limits.</p> <p> <code>PlannedBudgetLimits</code> is available for cost or
     * usage budget and supports monthly and quarterly <code>TimeUnit</code>. </p>
     * <p>For monthly budgets, provide 12 months of <code>PlannedBudgetLimits</code>
     * values. This must start from the current month and include the next 11 months.
     * The <code>key</code> is the start of the month, <code>UTC</code> in epoch
     * seconds. </p> <p>For quarterly budgets, provide 4 quarters of
     * <code>PlannedBudgetLimits</code> value entries in standard calendar quarter
     * increments. This must start from the current quarter and include the next 3
     * quarters. The <code>key</code> is the start of the quarter, <code>UTC</code> in
     * epoch seconds. </p> <p>If the planned budget expires before 12 months for
     * monthly or 4 quarters for quarterly, provide the
     * <code>PlannedBudgetLimits</code> values only for the remaining periods.</p>
     * <p>If the budget begins at a date in the future, provide
     * <code>PlannedBudgetLimits</code> values from the start date of the budget. </p>
     * <p>After all of the <code>BudgetLimit</code> values in
     * <code>PlannedBudgetLimits</code> are used, the budget continues to use the last
     * limit as the <code>BudgetLimit</code>. At that point, the planned budget
     * provides the same experience as a fixed budget. </p> <p>
     * <code>DescribeBudget</code> and <code>DescribeBudgets</code> response along with
     * <code>PlannedBudgetLimits</code> will also contain <code>BudgetLimit</code>
     * representing the current month or quarter limit present in
     * <code>PlannedBudgetLimits</code>. This only applies to budgets created with
     * <code>PlannedBudgetLimits</code>. Budgets created without
     * <code>PlannedBudgetLimits</code> will only contain <code>BudgetLimit</code>, and
     * no <code>PlannedBudgetLimits</code>.</p>
     */
    inline Budget& AddPlannedBudgetLimits(const Aws::String& key, const Spend& value) { m_plannedBudgetLimitsHasBeenSet = true; m_plannedBudgetLimits.emplace(key, value); return *this; }

    /**
     * <p>A map containing multiple <code>BudgetLimit</code>, including current or
     * future limits.</p> <p> <code>PlannedBudgetLimits</code> is available for cost or
     * usage budget and supports monthly and quarterly <code>TimeUnit</code>. </p>
     * <p>For monthly budgets, provide 12 months of <code>PlannedBudgetLimits</code>
     * values. This must start from the current month and include the next 11 months.
     * The <code>key</code> is the start of the month, <code>UTC</code> in epoch
     * seconds. </p> <p>For quarterly budgets, provide 4 quarters of
     * <code>PlannedBudgetLimits</code> value entries in standard calendar quarter
     * increments. This must start from the current quarter and include the next 3
     * quarters. The <code>key</code> is the start of the quarter, <code>UTC</code> in
     * epoch seconds. </p> <p>If the planned budget expires before 12 months for
     * monthly or 4 quarters for quarterly, provide the
     * <code>PlannedBudgetLimits</code> values only for the remaining periods.</p>
     * <p>If the budget begins at a date in the future, provide
     * <code>PlannedBudgetLimits</code> values from the start date of the budget. </p>
     * <p>After all of the <code>BudgetLimit</code> values in
     * <code>PlannedBudgetLimits</code> are used, the budget continues to use the last
     * limit as the <code>BudgetLimit</code>. At that point, the planned budget
     * provides the same experience as a fixed budget. </p> <p>
     * <code>DescribeBudget</code> and <code>DescribeBudgets</code> response along with
     * <code>PlannedBudgetLimits</code> will also contain <code>BudgetLimit</code>
     * representing the current month or quarter limit present in
     * <code>PlannedBudgetLimits</code>. This only applies to budgets created with
     * <code>PlannedBudgetLimits</code>. Budgets created without
     * <code>PlannedBudgetLimits</code> will only contain <code>BudgetLimit</code>, and
     * no <code>PlannedBudgetLimits</code>.</p>
     */
    inline Budget& AddPlannedBudgetLimits(Aws::String&& key, const Spend& value) { m_plannedBudgetLimitsHasBeenSet = true; m_plannedBudgetLimits.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map containing multiple <code>BudgetLimit</code>, including current or
     * future limits.</p> <p> <code>PlannedBudgetLimits</code> is available for cost or
     * usage budget and supports monthly and quarterly <code>TimeUnit</code>. </p>
     * <p>For monthly budgets, provide 12 months of <code>PlannedBudgetLimits</code>
     * values. This must start from the current month and include the next 11 months.
     * The <code>key</code> is the start of the month, <code>UTC</code> in epoch
     * seconds. </p> <p>For quarterly budgets, provide 4 quarters of
     * <code>PlannedBudgetLimits</code> value entries in standard calendar quarter
     * increments. This must start from the current quarter and include the next 3
     * quarters. The <code>key</code> is the start of the quarter, <code>UTC</code> in
     * epoch seconds. </p> <p>If the planned budget expires before 12 months for
     * monthly or 4 quarters for quarterly, provide the
     * <code>PlannedBudgetLimits</code> values only for the remaining periods.</p>
     * <p>If the budget begins at a date in the future, provide
     * <code>PlannedBudgetLimits</code> values from the start date of the budget. </p>
     * <p>After all of the <code>BudgetLimit</code> values in
     * <code>PlannedBudgetLimits</code> are used, the budget continues to use the last
     * limit as the <code>BudgetLimit</code>. At that point, the planned budget
     * provides the same experience as a fixed budget. </p> <p>
     * <code>DescribeBudget</code> and <code>DescribeBudgets</code> response along with
     * <code>PlannedBudgetLimits</code> will also contain <code>BudgetLimit</code>
     * representing the current month or quarter limit present in
     * <code>PlannedBudgetLimits</code>. This only applies to budgets created with
     * <code>PlannedBudgetLimits</code>. Budgets created without
     * <code>PlannedBudgetLimits</code> will only contain <code>BudgetLimit</code>, and
     * no <code>PlannedBudgetLimits</code>.</p>
     */
    inline Budget& AddPlannedBudgetLimits(const Aws::String& key, Spend&& value) { m_plannedBudgetLimitsHasBeenSet = true; m_plannedBudgetLimits.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map containing multiple <code>BudgetLimit</code>, including current or
     * future limits.</p> <p> <code>PlannedBudgetLimits</code> is available for cost or
     * usage budget and supports monthly and quarterly <code>TimeUnit</code>. </p>
     * <p>For monthly budgets, provide 12 months of <code>PlannedBudgetLimits</code>
     * values. This must start from the current month and include the next 11 months.
     * The <code>key</code> is the start of the month, <code>UTC</code> in epoch
     * seconds. </p> <p>For quarterly budgets, provide 4 quarters of
     * <code>PlannedBudgetLimits</code> value entries in standard calendar quarter
     * increments. This must start from the current quarter and include the next 3
     * quarters. The <code>key</code> is the start of the quarter, <code>UTC</code> in
     * epoch seconds. </p> <p>If the planned budget expires before 12 months for
     * monthly or 4 quarters for quarterly, provide the
     * <code>PlannedBudgetLimits</code> values only for the remaining periods.</p>
     * <p>If the budget begins at a date in the future, provide
     * <code>PlannedBudgetLimits</code> values from the start date of the budget. </p>
     * <p>After all of the <code>BudgetLimit</code> values in
     * <code>PlannedBudgetLimits</code> are used, the budget continues to use the last
     * limit as the <code>BudgetLimit</code>. At that point, the planned budget
     * provides the same experience as a fixed budget. </p> <p>
     * <code>DescribeBudget</code> and <code>DescribeBudgets</code> response along with
     * <code>PlannedBudgetLimits</code> will also contain <code>BudgetLimit</code>
     * representing the current month or quarter limit present in
     * <code>PlannedBudgetLimits</code>. This only applies to budgets created with
     * <code>PlannedBudgetLimits</code>. Budgets created without
     * <code>PlannedBudgetLimits</code> will only contain <code>BudgetLimit</code>, and
     * no <code>PlannedBudgetLimits</code>.</p>
     */
    inline Budget& AddPlannedBudgetLimits(Aws::String&& key, Spend&& value) { m_plannedBudgetLimitsHasBeenSet = true; m_plannedBudgetLimits.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map containing multiple <code>BudgetLimit</code>, including current or
     * future limits.</p> <p> <code>PlannedBudgetLimits</code> is available for cost or
     * usage budget and supports monthly and quarterly <code>TimeUnit</code>. </p>
     * <p>For monthly budgets, provide 12 months of <code>PlannedBudgetLimits</code>
     * values. This must start from the current month and include the next 11 months.
     * The <code>key</code> is the start of the month, <code>UTC</code> in epoch
     * seconds. </p> <p>For quarterly budgets, provide 4 quarters of
     * <code>PlannedBudgetLimits</code> value entries in standard calendar quarter
     * increments. This must start from the current quarter and include the next 3
     * quarters. The <code>key</code> is the start of the quarter, <code>UTC</code> in
     * epoch seconds. </p> <p>If the planned budget expires before 12 months for
     * monthly or 4 quarters for quarterly, provide the
     * <code>PlannedBudgetLimits</code> values only for the remaining periods.</p>
     * <p>If the budget begins at a date in the future, provide
     * <code>PlannedBudgetLimits</code> values from the start date of the budget. </p>
     * <p>After all of the <code>BudgetLimit</code> values in
     * <code>PlannedBudgetLimits</code> are used, the budget continues to use the last
     * limit as the <code>BudgetLimit</code>. At that point, the planned budget
     * provides the same experience as a fixed budget. </p> <p>
     * <code>DescribeBudget</code> and <code>DescribeBudgets</code> response along with
     * <code>PlannedBudgetLimits</code> will also contain <code>BudgetLimit</code>
     * representing the current month or quarter limit present in
     * <code>PlannedBudgetLimits</code>. This only applies to budgets created with
     * <code>PlannedBudgetLimits</code>. Budgets created without
     * <code>PlannedBudgetLimits</code> will only contain <code>BudgetLimit</code>, and
     * no <code>PlannedBudgetLimits</code>.</p>
     */
    inline Budget& AddPlannedBudgetLimits(const char* key, Spend&& value) { m_plannedBudgetLimitsHasBeenSet = true; m_plannedBudgetLimits.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map containing multiple <code>BudgetLimit</code>, including current or
     * future limits.</p> <p> <code>PlannedBudgetLimits</code> is available for cost or
     * usage budget and supports monthly and quarterly <code>TimeUnit</code>. </p>
     * <p>For monthly budgets, provide 12 months of <code>PlannedBudgetLimits</code>
     * values. This must start from the current month and include the next 11 months.
     * The <code>key</code> is the start of the month, <code>UTC</code> in epoch
     * seconds. </p> <p>For quarterly budgets, provide 4 quarters of
     * <code>PlannedBudgetLimits</code> value entries in standard calendar quarter
     * increments. This must start from the current quarter and include the next 3
     * quarters. The <code>key</code> is the start of the quarter, <code>UTC</code> in
     * epoch seconds. </p> <p>If the planned budget expires before 12 months for
     * monthly or 4 quarters for quarterly, provide the
     * <code>PlannedBudgetLimits</code> values only for the remaining periods.</p>
     * <p>If the budget begins at a date in the future, provide
     * <code>PlannedBudgetLimits</code> values from the start date of the budget. </p>
     * <p>After all of the <code>BudgetLimit</code> values in
     * <code>PlannedBudgetLimits</code> are used, the budget continues to use the last
     * limit as the <code>BudgetLimit</code>. At that point, the planned budget
     * provides the same experience as a fixed budget. </p> <p>
     * <code>DescribeBudget</code> and <code>DescribeBudgets</code> response along with
     * <code>PlannedBudgetLimits</code> will also contain <code>BudgetLimit</code>
     * representing the current month or quarter limit present in
     * <code>PlannedBudgetLimits</code>. This only applies to budgets created with
     * <code>PlannedBudgetLimits</code>. Budgets created without
     * <code>PlannedBudgetLimits</code> will only contain <code>BudgetLimit</code>, and
     * no <code>PlannedBudgetLimits</code>.</p>
     */
    inline Budget& AddPlannedBudgetLimits(const char* key, const Spend& value) { m_plannedBudgetLimitsHasBeenSet = true; m_plannedBudgetLimits.emplace(key, value); return *this; }


    /**
     * <p>The cost filters, such as service or tag, that are applied to a budget.</p>
     * <p>AWS Budgets supports the following services as a filter for RI budgets:</p>
     * <ul> <li> <p>Amazon Elastic Compute Cloud - Compute</p> </li> <li> <p>Amazon
     * Redshift</p> </li> <li> <p>Amazon Relational Database Service</p> </li> <li>
     * <p>Amazon ElastiCache</p> </li> <li> <p>Amazon Elasticsearch Service</p> </li>
     * </ul>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetCostFilters() const{ return m_costFilters; }

    /**
     * <p>The cost filters, such as service or tag, that are applied to a budget.</p>
     * <p>AWS Budgets supports the following services as a filter for RI budgets:</p>
     * <ul> <li> <p>Amazon Elastic Compute Cloud - Compute</p> </li> <li> <p>Amazon
     * Redshift</p> </li> <li> <p>Amazon Relational Database Service</p> </li> <li>
     * <p>Amazon ElastiCache</p> </li> <li> <p>Amazon Elasticsearch Service</p> </li>
     * </ul>
     */
    inline bool CostFiltersHasBeenSet() const { return m_costFiltersHasBeenSet; }

    /**
     * <p>The cost filters, such as service or tag, that are applied to a budget.</p>
     * <p>AWS Budgets supports the following services as a filter for RI budgets:</p>
     * <ul> <li> <p>Amazon Elastic Compute Cloud - Compute</p> </li> <li> <p>Amazon
     * Redshift</p> </li> <li> <p>Amazon Relational Database Service</p> </li> <li>
     * <p>Amazon ElastiCache</p> </li> <li> <p>Amazon Elasticsearch Service</p> </li>
     * </ul>
     */
    inline void SetCostFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_costFiltersHasBeenSet = true; m_costFilters = value; }

    /**
     * <p>The cost filters, such as service or tag, that are applied to a budget.</p>
     * <p>AWS Budgets supports the following services as a filter for RI budgets:</p>
     * <ul> <li> <p>Amazon Elastic Compute Cloud - Compute</p> </li> <li> <p>Amazon
     * Redshift</p> </li> <li> <p>Amazon Relational Database Service</p> </li> <li>
     * <p>Amazon ElastiCache</p> </li> <li> <p>Amazon Elasticsearch Service</p> </li>
     * </ul>
     */
    inline void SetCostFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_costFiltersHasBeenSet = true; m_costFilters = std::move(value); }

    /**
     * <p>The cost filters, such as service or tag, that are applied to a budget.</p>
     * <p>AWS Budgets supports the following services as a filter for RI budgets:</p>
     * <ul> <li> <p>Amazon Elastic Compute Cloud - Compute</p> </li> <li> <p>Amazon
     * Redshift</p> </li> <li> <p>Amazon Relational Database Service</p> </li> <li>
     * <p>Amazon ElastiCache</p> </li> <li> <p>Amazon Elasticsearch Service</p> </li>
     * </ul>
     */
    inline Budget& WithCostFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetCostFilters(value); return *this;}

    /**
     * <p>The cost filters, such as service or tag, that are applied to a budget.</p>
     * <p>AWS Budgets supports the following services as a filter for RI budgets:</p>
     * <ul> <li> <p>Amazon Elastic Compute Cloud - Compute</p> </li> <li> <p>Amazon
     * Redshift</p> </li> <li> <p>Amazon Relational Database Service</p> </li> <li>
     * <p>Amazon ElastiCache</p> </li> <li> <p>Amazon Elasticsearch Service</p> </li>
     * </ul>
     */
    inline Budget& WithCostFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetCostFilters(std::move(value)); return *this;}

    /**
     * <p>The cost filters, such as service or tag, that are applied to a budget.</p>
     * <p>AWS Budgets supports the following services as a filter for RI budgets:</p>
     * <ul> <li> <p>Amazon Elastic Compute Cloud - Compute</p> </li> <li> <p>Amazon
     * Redshift</p> </li> <li> <p>Amazon Relational Database Service</p> </li> <li>
     * <p>Amazon ElastiCache</p> </li> <li> <p>Amazon Elasticsearch Service</p> </li>
     * </ul>
     */
    inline Budget& AddCostFilters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(key, value); return *this; }

    /**
     * <p>The cost filters, such as service or tag, that are applied to a budget.</p>
     * <p>AWS Budgets supports the following services as a filter for RI budgets:</p>
     * <ul> <li> <p>Amazon Elastic Compute Cloud - Compute</p> </li> <li> <p>Amazon
     * Redshift</p> </li> <li> <p>Amazon Relational Database Service</p> </li> <li>
     * <p>Amazon ElastiCache</p> </li> <li> <p>Amazon Elasticsearch Service</p> </li>
     * </ul>
     */
    inline Budget& AddCostFilters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The cost filters, such as service or tag, that are applied to a budget.</p>
     * <p>AWS Budgets supports the following services as a filter for RI budgets:</p>
     * <ul> <li> <p>Amazon Elastic Compute Cloud - Compute</p> </li> <li> <p>Amazon
     * Redshift</p> </li> <li> <p>Amazon Relational Database Service</p> </li> <li>
     * <p>Amazon ElastiCache</p> </li> <li> <p>Amazon Elasticsearch Service</p> </li>
     * </ul>
     */
    inline Budget& AddCostFilters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The cost filters, such as service or tag, that are applied to a budget.</p>
     * <p>AWS Budgets supports the following services as a filter for RI budgets:</p>
     * <ul> <li> <p>Amazon Elastic Compute Cloud - Compute</p> </li> <li> <p>Amazon
     * Redshift</p> </li> <li> <p>Amazon Relational Database Service</p> </li> <li>
     * <p>Amazon ElastiCache</p> </li> <li> <p>Amazon Elasticsearch Service</p> </li>
     * </ul>
     */
    inline Budget& AddCostFilters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The cost filters, such as service or tag, that are applied to a budget.</p>
     * <p>AWS Budgets supports the following services as a filter for RI budgets:</p>
     * <ul> <li> <p>Amazon Elastic Compute Cloud - Compute</p> </li> <li> <p>Amazon
     * Redshift</p> </li> <li> <p>Amazon Relational Database Service</p> </li> <li>
     * <p>Amazon ElastiCache</p> </li> <li> <p>Amazon Elasticsearch Service</p> </li>
     * </ul>
     */
    inline Budget& AddCostFilters(const char* key, Aws::Vector<Aws::String>&& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The cost filters, such as service or tag, that are applied to a budget.</p>
     * <p>AWS Budgets supports the following services as a filter for RI budgets:</p>
     * <ul> <li> <p>Amazon Elastic Compute Cloud - Compute</p> </li> <li> <p>Amazon
     * Redshift</p> </li> <li> <p>Amazon Relational Database Service</p> </li> <li>
     * <p>Amazon ElastiCache</p> </li> <li> <p>Amazon Elasticsearch Service</p> </li>
     * </ul>
     */
    inline Budget& AddCostFilters(const char* key, const Aws::Vector<Aws::String>& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(key, value); return *this; }


    /**
     * <p>The types of costs that are included in this <code>COST</code> budget.</p>
     * <p> <code>USAGE</code>, <code>RI_UTILIZATION</code>, and
     * <code>RI_COVERAGE</code> budgets do not have <code>CostTypes</code>.</p>
     */
    inline const CostTypes& GetCostTypes() const{ return m_costTypes; }

    /**
     * <p>The types of costs that are included in this <code>COST</code> budget.</p>
     * <p> <code>USAGE</code>, <code>RI_UTILIZATION</code>, and
     * <code>RI_COVERAGE</code> budgets do not have <code>CostTypes</code>.</p>
     */
    inline bool CostTypesHasBeenSet() const { return m_costTypesHasBeenSet; }

    /**
     * <p>The types of costs that are included in this <code>COST</code> budget.</p>
     * <p> <code>USAGE</code>, <code>RI_UTILIZATION</code>, and
     * <code>RI_COVERAGE</code> budgets do not have <code>CostTypes</code>.</p>
     */
    inline void SetCostTypes(const CostTypes& value) { m_costTypesHasBeenSet = true; m_costTypes = value; }

    /**
     * <p>The types of costs that are included in this <code>COST</code> budget.</p>
     * <p> <code>USAGE</code>, <code>RI_UTILIZATION</code>, and
     * <code>RI_COVERAGE</code> budgets do not have <code>CostTypes</code>.</p>
     */
    inline void SetCostTypes(CostTypes&& value) { m_costTypesHasBeenSet = true; m_costTypes = std::move(value); }

    /**
     * <p>The types of costs that are included in this <code>COST</code> budget.</p>
     * <p> <code>USAGE</code>, <code>RI_UTILIZATION</code>, and
     * <code>RI_COVERAGE</code> budgets do not have <code>CostTypes</code>.</p>
     */
    inline Budget& WithCostTypes(const CostTypes& value) { SetCostTypes(value); return *this;}

    /**
     * <p>The types of costs that are included in this <code>COST</code> budget.</p>
     * <p> <code>USAGE</code>, <code>RI_UTILIZATION</code>, and
     * <code>RI_COVERAGE</code> budgets do not have <code>CostTypes</code>.</p>
     */
    inline Budget& WithCostTypes(CostTypes&& value) { SetCostTypes(std::move(value)); return *this;}


    /**
     * <p>The length of time until a budget resets the actual and forecasted spend.
     * <code>DAILY</code> is available only for <code>RI_UTILIZATION</code> and
     * <code>RI_COVERAGE</code> budgets.</p>
     */
    inline const TimeUnit& GetTimeUnit() const{ return m_timeUnit; }

    /**
     * <p>The length of time until a budget resets the actual and forecasted spend.
     * <code>DAILY</code> is available only for <code>RI_UTILIZATION</code> and
     * <code>RI_COVERAGE</code> budgets.</p>
     */
    inline bool TimeUnitHasBeenSet() const { return m_timeUnitHasBeenSet; }

    /**
     * <p>The length of time until a budget resets the actual and forecasted spend.
     * <code>DAILY</code> is available only for <code>RI_UTILIZATION</code> and
     * <code>RI_COVERAGE</code> budgets.</p>
     */
    inline void SetTimeUnit(const TimeUnit& value) { m_timeUnitHasBeenSet = true; m_timeUnit = value; }

    /**
     * <p>The length of time until a budget resets the actual and forecasted spend.
     * <code>DAILY</code> is available only for <code>RI_UTILIZATION</code> and
     * <code>RI_COVERAGE</code> budgets.</p>
     */
    inline void SetTimeUnit(TimeUnit&& value) { m_timeUnitHasBeenSet = true; m_timeUnit = std::move(value); }

    /**
     * <p>The length of time until a budget resets the actual and forecasted spend.
     * <code>DAILY</code> is available only for <code>RI_UTILIZATION</code> and
     * <code>RI_COVERAGE</code> budgets.</p>
     */
    inline Budget& WithTimeUnit(const TimeUnit& value) { SetTimeUnit(value); return *this;}

    /**
     * <p>The length of time until a budget resets the actual and forecasted spend.
     * <code>DAILY</code> is available only for <code>RI_UTILIZATION</code> and
     * <code>RI_COVERAGE</code> budgets.</p>
     */
    inline Budget& WithTimeUnit(TimeUnit&& value) { SetTimeUnit(std::move(value)); return *this;}


    /**
     * <p>The period of time that is covered by a budget. The period has a start date
     * and an end date. The start date must come before the end date. The end date must
     * come before <code>06/15/87 00:00 UTC</code>. </p> <p>If you create your budget
     * and don't specify a start date, AWS defaults to the start of your chosen time
     * period (DAILY, MONTHLY, QUARTERLY, or ANNUALLY). For example, if you created
     * your budget on January 24, 2018, chose <code>DAILY</code>, and didn't set a
     * start date, AWS set your start date to <code>01/24/18 00:00 UTC</code>. If you
     * chose <code>MONTHLY</code>, AWS set your start date to <code>01/01/18 00:00
     * UTC</code>. If you didn't specify an end date, AWS set your end date to
     * <code>06/15/87 00:00 UTC</code>. The defaults are the same for the AWS Billing
     * and Cost Management console and the API. </p> <p>You can change either date with
     * the <code>UpdateBudget</code> operation.</p> <p>After the end date, AWS deletes
     * the budget and all associated notifications and subscribers.</p>
     */
    inline const TimePeriod& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The period of time that is covered by a budget. The period has a start date
     * and an end date. The start date must come before the end date. The end date must
     * come before <code>06/15/87 00:00 UTC</code>. </p> <p>If you create your budget
     * and don't specify a start date, AWS defaults to the start of your chosen time
     * period (DAILY, MONTHLY, QUARTERLY, or ANNUALLY). For example, if you created
     * your budget on January 24, 2018, chose <code>DAILY</code>, and didn't set a
     * start date, AWS set your start date to <code>01/24/18 00:00 UTC</code>. If you
     * chose <code>MONTHLY</code>, AWS set your start date to <code>01/01/18 00:00
     * UTC</code>. If you didn't specify an end date, AWS set your end date to
     * <code>06/15/87 00:00 UTC</code>. The defaults are the same for the AWS Billing
     * and Cost Management console and the API. </p> <p>You can change either date with
     * the <code>UpdateBudget</code> operation.</p> <p>After the end date, AWS deletes
     * the budget and all associated notifications and subscribers.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>The period of time that is covered by a budget. The period has a start date
     * and an end date. The start date must come before the end date. The end date must
     * come before <code>06/15/87 00:00 UTC</code>. </p> <p>If you create your budget
     * and don't specify a start date, AWS defaults to the start of your chosen time
     * period (DAILY, MONTHLY, QUARTERLY, or ANNUALLY). For example, if you created
     * your budget on January 24, 2018, chose <code>DAILY</code>, and didn't set a
     * start date, AWS set your start date to <code>01/24/18 00:00 UTC</code>. If you
     * chose <code>MONTHLY</code>, AWS set your start date to <code>01/01/18 00:00
     * UTC</code>. If you didn't specify an end date, AWS set your end date to
     * <code>06/15/87 00:00 UTC</code>. The defaults are the same for the AWS Billing
     * and Cost Management console and the API. </p> <p>You can change either date with
     * the <code>UpdateBudget</code> operation.</p> <p>After the end date, AWS deletes
     * the budget and all associated notifications and subscribers.</p>
     */
    inline void SetTimePeriod(const TimePeriod& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The period of time that is covered by a budget. The period has a start date
     * and an end date. The start date must come before the end date. The end date must
     * come before <code>06/15/87 00:00 UTC</code>. </p> <p>If you create your budget
     * and don't specify a start date, AWS defaults to the start of your chosen time
     * period (DAILY, MONTHLY, QUARTERLY, or ANNUALLY). For example, if you created
     * your budget on January 24, 2018, chose <code>DAILY</code>, and didn't set a
     * start date, AWS set your start date to <code>01/24/18 00:00 UTC</code>. If you
     * chose <code>MONTHLY</code>, AWS set your start date to <code>01/01/18 00:00
     * UTC</code>. If you didn't specify an end date, AWS set your end date to
     * <code>06/15/87 00:00 UTC</code>. The defaults are the same for the AWS Billing
     * and Cost Management console and the API. </p> <p>You can change either date with
     * the <code>UpdateBudget</code> operation.</p> <p>After the end date, AWS deletes
     * the budget and all associated notifications and subscribers.</p>
     */
    inline void SetTimePeriod(TimePeriod&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The period of time that is covered by a budget. The period has a start date
     * and an end date. The start date must come before the end date. The end date must
     * come before <code>06/15/87 00:00 UTC</code>. </p> <p>If you create your budget
     * and don't specify a start date, AWS defaults to the start of your chosen time
     * period (DAILY, MONTHLY, QUARTERLY, or ANNUALLY). For example, if you created
     * your budget on January 24, 2018, chose <code>DAILY</code>, and didn't set a
     * start date, AWS set your start date to <code>01/24/18 00:00 UTC</code>. If you
     * chose <code>MONTHLY</code>, AWS set your start date to <code>01/01/18 00:00
     * UTC</code>. If you didn't specify an end date, AWS set your end date to
     * <code>06/15/87 00:00 UTC</code>. The defaults are the same for the AWS Billing
     * and Cost Management console and the API. </p> <p>You can change either date with
     * the <code>UpdateBudget</code> operation.</p> <p>After the end date, AWS deletes
     * the budget and all associated notifications and subscribers.</p>
     */
    inline Budget& WithTimePeriod(const TimePeriod& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The period of time that is covered by a budget. The period has a start date
     * and an end date. The start date must come before the end date. The end date must
     * come before <code>06/15/87 00:00 UTC</code>. </p> <p>If you create your budget
     * and don't specify a start date, AWS defaults to the start of your chosen time
     * period (DAILY, MONTHLY, QUARTERLY, or ANNUALLY). For example, if you created
     * your budget on January 24, 2018, chose <code>DAILY</code>, and didn't set a
     * start date, AWS set your start date to <code>01/24/18 00:00 UTC</code>. If you
     * chose <code>MONTHLY</code>, AWS set your start date to <code>01/01/18 00:00
     * UTC</code>. If you didn't specify an end date, AWS set your end date to
     * <code>06/15/87 00:00 UTC</code>. The defaults are the same for the AWS Billing
     * and Cost Management console and the API. </p> <p>You can change either date with
     * the <code>UpdateBudget</code> operation.</p> <p>After the end date, AWS deletes
     * the budget and all associated notifications and subscribers.</p>
     */
    inline Budget& WithTimePeriod(TimePeriod&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>The actual and forecasted cost or usage that the budget tracks.</p>
     */
    inline const CalculatedSpend& GetCalculatedSpend() const{ return m_calculatedSpend; }

    /**
     * <p>The actual and forecasted cost or usage that the budget tracks.</p>
     */
    inline bool CalculatedSpendHasBeenSet() const { return m_calculatedSpendHasBeenSet; }

    /**
     * <p>The actual and forecasted cost or usage that the budget tracks.</p>
     */
    inline void SetCalculatedSpend(const CalculatedSpend& value) { m_calculatedSpendHasBeenSet = true; m_calculatedSpend = value; }

    /**
     * <p>The actual and forecasted cost or usage that the budget tracks.</p>
     */
    inline void SetCalculatedSpend(CalculatedSpend&& value) { m_calculatedSpendHasBeenSet = true; m_calculatedSpend = std::move(value); }

    /**
     * <p>The actual and forecasted cost or usage that the budget tracks.</p>
     */
    inline Budget& WithCalculatedSpend(const CalculatedSpend& value) { SetCalculatedSpend(value); return *this;}

    /**
     * <p>The actual and forecasted cost or usage that the budget tracks.</p>
     */
    inline Budget& WithCalculatedSpend(CalculatedSpend&& value) { SetCalculatedSpend(std::move(value)); return *this;}


    /**
     * <p>Whether this budget tracks costs, usage, RI utilization, or RI coverage.</p>
     */
    inline const BudgetType& GetBudgetType() const{ return m_budgetType; }

    /**
     * <p>Whether this budget tracks costs, usage, RI utilization, or RI coverage.</p>
     */
    inline bool BudgetTypeHasBeenSet() const { return m_budgetTypeHasBeenSet; }

    /**
     * <p>Whether this budget tracks costs, usage, RI utilization, or RI coverage.</p>
     */
    inline void SetBudgetType(const BudgetType& value) { m_budgetTypeHasBeenSet = true; m_budgetType = value; }

    /**
     * <p>Whether this budget tracks costs, usage, RI utilization, or RI coverage.</p>
     */
    inline void SetBudgetType(BudgetType&& value) { m_budgetTypeHasBeenSet = true; m_budgetType = std::move(value); }

    /**
     * <p>Whether this budget tracks costs, usage, RI utilization, or RI coverage.</p>
     */
    inline Budget& WithBudgetType(const BudgetType& value) { SetBudgetType(value); return *this;}

    /**
     * <p>Whether this budget tracks costs, usage, RI utilization, or RI coverage.</p>
     */
    inline Budget& WithBudgetType(BudgetType&& value) { SetBudgetType(std::move(value)); return *this;}


    /**
     * <p>The last time that you updated this budget.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The last time that you updated this budget.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The last time that you updated this budget.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The last time that you updated this budget.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The last time that you updated this budget.</p>
     */
    inline Budget& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The last time that you updated this budget.</p>
     */
    inline Budget& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet;

    Spend m_budgetLimit;
    bool m_budgetLimitHasBeenSet;

    Aws::Map<Aws::String, Spend> m_plannedBudgetLimits;
    bool m_plannedBudgetLimitsHasBeenSet;

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

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
