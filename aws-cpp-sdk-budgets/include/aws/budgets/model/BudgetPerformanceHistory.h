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
#include <aws/budgets/model/BudgetType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/budgets/model/CostTypes.h>
#include <aws/budgets/model/TimeUnit.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/budgets/model/BudgetedAndActualAmounts.h>
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
   * <p>A history of the state of a budget at the end of the budget's specified time
   * period.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/BudgetPerformanceHistory">AWS
   * API Reference</a></p>
   */
  class AWS_BUDGETS_API BudgetPerformanceHistory
  {
  public:
    BudgetPerformanceHistory();
    BudgetPerformanceHistory(Aws::Utils::Json::JsonView jsonValue);
    BudgetPerformanceHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }

    
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }

    
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    
    inline BudgetPerformanceHistory& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    
    inline BudgetPerformanceHistory& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}

    
    inline BudgetPerformanceHistory& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}


    
    inline const BudgetType& GetBudgetType() const{ return m_budgetType; }

    
    inline bool BudgetTypeHasBeenSet() const { return m_budgetTypeHasBeenSet; }

    
    inline void SetBudgetType(const BudgetType& value) { m_budgetTypeHasBeenSet = true; m_budgetType = value; }

    
    inline void SetBudgetType(BudgetType&& value) { m_budgetTypeHasBeenSet = true; m_budgetType = std::move(value); }

    
    inline BudgetPerformanceHistory& WithBudgetType(const BudgetType& value) { SetBudgetType(value); return *this;}

    
    inline BudgetPerformanceHistory& WithBudgetType(BudgetType&& value) { SetBudgetType(std::move(value)); return *this;}


    /**
     * <p>The history of the cost filters for a budget during the specified time
     * period.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetCostFilters() const{ return m_costFilters; }

    /**
     * <p>The history of the cost filters for a budget during the specified time
     * period.</p>
     */
    inline bool CostFiltersHasBeenSet() const { return m_costFiltersHasBeenSet; }

    /**
     * <p>The history of the cost filters for a budget during the specified time
     * period.</p>
     */
    inline void SetCostFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_costFiltersHasBeenSet = true; m_costFilters = value; }

    /**
     * <p>The history of the cost filters for a budget during the specified time
     * period.</p>
     */
    inline void SetCostFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_costFiltersHasBeenSet = true; m_costFilters = std::move(value); }

    /**
     * <p>The history of the cost filters for a budget during the specified time
     * period.</p>
     */
    inline BudgetPerformanceHistory& WithCostFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetCostFilters(value); return *this;}

    /**
     * <p>The history of the cost filters for a budget during the specified time
     * period.</p>
     */
    inline BudgetPerformanceHistory& WithCostFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetCostFilters(std::move(value)); return *this;}

    /**
     * <p>The history of the cost filters for a budget during the specified time
     * period.</p>
     */
    inline BudgetPerformanceHistory& AddCostFilters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(key, value); return *this; }

    /**
     * <p>The history of the cost filters for a budget during the specified time
     * period.</p>
     */
    inline BudgetPerformanceHistory& AddCostFilters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The history of the cost filters for a budget during the specified time
     * period.</p>
     */
    inline BudgetPerformanceHistory& AddCostFilters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The history of the cost filters for a budget during the specified time
     * period.</p>
     */
    inline BudgetPerformanceHistory& AddCostFilters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The history of the cost filters for a budget during the specified time
     * period.</p>
     */
    inline BudgetPerformanceHistory& AddCostFilters(const char* key, Aws::Vector<Aws::String>&& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The history of the cost filters for a budget during the specified time
     * period.</p>
     */
    inline BudgetPerformanceHistory& AddCostFilters(const char* key, const Aws::Vector<Aws::String>& value) { m_costFiltersHasBeenSet = true; m_costFilters.emplace(key, value); return *this; }


    /**
     * <p>The history of the cost types for a budget during the specified time
     * period.</p>
     */
    inline const CostTypes& GetCostTypes() const{ return m_costTypes; }

    /**
     * <p>The history of the cost types for a budget during the specified time
     * period.</p>
     */
    inline bool CostTypesHasBeenSet() const { return m_costTypesHasBeenSet; }

    /**
     * <p>The history of the cost types for a budget during the specified time
     * period.</p>
     */
    inline void SetCostTypes(const CostTypes& value) { m_costTypesHasBeenSet = true; m_costTypes = value; }

    /**
     * <p>The history of the cost types for a budget during the specified time
     * period.</p>
     */
    inline void SetCostTypes(CostTypes&& value) { m_costTypesHasBeenSet = true; m_costTypes = std::move(value); }

    /**
     * <p>The history of the cost types for a budget during the specified time
     * period.</p>
     */
    inline BudgetPerformanceHistory& WithCostTypes(const CostTypes& value) { SetCostTypes(value); return *this;}

    /**
     * <p>The history of the cost types for a budget during the specified time
     * period.</p>
     */
    inline BudgetPerformanceHistory& WithCostTypes(CostTypes&& value) { SetCostTypes(std::move(value)); return *this;}


    
    inline const TimeUnit& GetTimeUnit() const{ return m_timeUnit; }

    
    inline bool TimeUnitHasBeenSet() const { return m_timeUnitHasBeenSet; }

    
    inline void SetTimeUnit(const TimeUnit& value) { m_timeUnitHasBeenSet = true; m_timeUnit = value; }

    
    inline void SetTimeUnit(TimeUnit&& value) { m_timeUnitHasBeenSet = true; m_timeUnit = std::move(value); }

    
    inline BudgetPerformanceHistory& WithTimeUnit(const TimeUnit& value) { SetTimeUnit(value); return *this;}

    
    inline BudgetPerformanceHistory& WithTimeUnit(TimeUnit&& value) { SetTimeUnit(std::move(value)); return *this;}


    /**
     * <p>A list of amounts of cost or usage that you created budgets for, compared to
     * your actual costs or usage.</p>
     */
    inline const Aws::Vector<BudgetedAndActualAmounts>& GetBudgetedAndActualAmountsList() const{ return m_budgetedAndActualAmountsList; }

    /**
     * <p>A list of amounts of cost or usage that you created budgets for, compared to
     * your actual costs or usage.</p>
     */
    inline bool BudgetedAndActualAmountsListHasBeenSet() const { return m_budgetedAndActualAmountsListHasBeenSet; }

    /**
     * <p>A list of amounts of cost or usage that you created budgets for, compared to
     * your actual costs or usage.</p>
     */
    inline void SetBudgetedAndActualAmountsList(const Aws::Vector<BudgetedAndActualAmounts>& value) { m_budgetedAndActualAmountsListHasBeenSet = true; m_budgetedAndActualAmountsList = value; }

    /**
     * <p>A list of amounts of cost or usage that you created budgets for, compared to
     * your actual costs or usage.</p>
     */
    inline void SetBudgetedAndActualAmountsList(Aws::Vector<BudgetedAndActualAmounts>&& value) { m_budgetedAndActualAmountsListHasBeenSet = true; m_budgetedAndActualAmountsList = std::move(value); }

    /**
     * <p>A list of amounts of cost or usage that you created budgets for, compared to
     * your actual costs or usage.</p>
     */
    inline BudgetPerformanceHistory& WithBudgetedAndActualAmountsList(const Aws::Vector<BudgetedAndActualAmounts>& value) { SetBudgetedAndActualAmountsList(value); return *this;}

    /**
     * <p>A list of amounts of cost or usage that you created budgets for, compared to
     * your actual costs or usage.</p>
     */
    inline BudgetPerformanceHistory& WithBudgetedAndActualAmountsList(Aws::Vector<BudgetedAndActualAmounts>&& value) { SetBudgetedAndActualAmountsList(std::move(value)); return *this;}

    /**
     * <p>A list of amounts of cost or usage that you created budgets for, compared to
     * your actual costs or usage.</p>
     */
    inline BudgetPerformanceHistory& AddBudgetedAndActualAmountsList(const BudgetedAndActualAmounts& value) { m_budgetedAndActualAmountsListHasBeenSet = true; m_budgetedAndActualAmountsList.push_back(value); return *this; }

    /**
     * <p>A list of amounts of cost or usage that you created budgets for, compared to
     * your actual costs or usage.</p>
     */
    inline BudgetPerformanceHistory& AddBudgetedAndActualAmountsList(BudgetedAndActualAmounts&& value) { m_budgetedAndActualAmountsListHasBeenSet = true; m_budgetedAndActualAmountsList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet;

    BudgetType m_budgetType;
    bool m_budgetTypeHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_costFilters;
    bool m_costFiltersHasBeenSet;

    CostTypes m_costTypes;
    bool m_costTypesHasBeenSet;

    TimeUnit m_timeUnit;
    bool m_timeUnitHasBeenSet;

    Aws::Vector<BudgetedAndActualAmounts> m_budgetedAndActualAmountsList;
    bool m_budgetedAndActualAmountsListHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
