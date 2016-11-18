/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * AWS Budget model
   */
  class AWS_BUDGETS_API Budget
  {
  public:
    Budget();
    Budget(const Aws::Utils::Json::JsonValue& jsonValue);
    Budget& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    
    inline Budget& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    
    inline Budget& WithBudgetName(Aws::String&& value) { SetBudgetName(value); return *this;}

    
    inline Budget& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}

    
    inline const Spend& GetBudgetLimit() const{ return m_budgetLimit; }

    
    inline void SetBudgetLimit(const Spend& value) { m_budgetLimitHasBeenSet = true; m_budgetLimit = value; }

    
    inline void SetBudgetLimit(Spend&& value) { m_budgetLimitHasBeenSet = true; m_budgetLimit = value; }

    
    inline Budget& WithBudgetLimit(const Spend& value) { SetBudgetLimit(value); return *this;}

    
    inline Budget& WithBudgetLimit(Spend&& value) { SetBudgetLimit(value); return *this;}

    
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetCostFilters() const{ return m_costFilters; }

    
    inline void SetCostFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_costFiltersHasBeenSet = true; m_costFilters = value; }

    
    inline void SetCostFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_costFiltersHasBeenSet = true; m_costFilters = value; }

    
    inline Budget& WithCostFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetCostFilters(value); return *this;}

    
    inline Budget& WithCostFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetCostFilters(value); return *this;}

    
    inline Budget& AddCostFilters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_costFiltersHasBeenSet = true; m_costFilters[key] = value; return *this; }

    
    inline Budget& AddCostFilters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_costFiltersHasBeenSet = true; m_costFilters[key] = value; return *this; }

    
    inline Budget& AddCostFilters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_costFiltersHasBeenSet = true; m_costFilters[key] = value; return *this; }

    
    inline Budget& AddCostFilters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_costFiltersHasBeenSet = true; m_costFilters[key] = value; return *this; }

    
    inline Budget& AddCostFilters(const char* key, Aws::Vector<Aws::String>&& value) { m_costFiltersHasBeenSet = true; m_costFilters[key] = value; return *this; }

    
    inline Budget& AddCostFilters(const char* key, const Aws::Vector<Aws::String>& value) { m_costFiltersHasBeenSet = true; m_costFilters[key] = value; return *this; }

    
    inline const CostTypes& GetCostTypes() const{ return m_costTypes; }

    
    inline void SetCostTypes(const CostTypes& value) { m_costTypesHasBeenSet = true; m_costTypes = value; }

    
    inline void SetCostTypes(CostTypes&& value) { m_costTypesHasBeenSet = true; m_costTypes = value; }

    
    inline Budget& WithCostTypes(const CostTypes& value) { SetCostTypes(value); return *this;}

    
    inline Budget& WithCostTypes(CostTypes&& value) { SetCostTypes(value); return *this;}

    
    inline const TimeUnit& GetTimeUnit() const{ return m_timeUnit; }

    
    inline void SetTimeUnit(const TimeUnit& value) { m_timeUnitHasBeenSet = true; m_timeUnit = value; }

    
    inline void SetTimeUnit(TimeUnit&& value) { m_timeUnitHasBeenSet = true; m_timeUnit = value; }

    
    inline Budget& WithTimeUnit(const TimeUnit& value) { SetTimeUnit(value); return *this;}

    
    inline Budget& WithTimeUnit(TimeUnit&& value) { SetTimeUnit(value); return *this;}

    
    inline const TimePeriod& GetTimePeriod() const{ return m_timePeriod; }

    
    inline void SetTimePeriod(const TimePeriod& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    
    inline void SetTimePeriod(TimePeriod&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    
    inline Budget& WithTimePeriod(const TimePeriod& value) { SetTimePeriod(value); return *this;}

    
    inline Budget& WithTimePeriod(TimePeriod&& value) { SetTimePeriod(value); return *this;}

    
    inline const CalculatedSpend& GetCalculatedSpend() const{ return m_calculatedSpend; }

    
    inline void SetCalculatedSpend(const CalculatedSpend& value) { m_calculatedSpendHasBeenSet = true; m_calculatedSpend = value; }

    
    inline void SetCalculatedSpend(CalculatedSpend&& value) { m_calculatedSpendHasBeenSet = true; m_calculatedSpend = value; }

    
    inline Budget& WithCalculatedSpend(const CalculatedSpend& value) { SetCalculatedSpend(value); return *this;}

    
    inline Budget& WithCalculatedSpend(CalculatedSpend&& value) { SetCalculatedSpend(value); return *this;}

    
    inline const BudgetType& GetBudgetType() const{ return m_budgetType; }

    
    inline void SetBudgetType(const BudgetType& value) { m_budgetTypeHasBeenSet = true; m_budgetType = value; }

    
    inline void SetBudgetType(BudgetType&& value) { m_budgetTypeHasBeenSet = true; m_budgetType = value; }

    
    inline Budget& WithBudgetType(const BudgetType& value) { SetBudgetType(value); return *this;}

    
    inline Budget& WithBudgetType(BudgetType&& value) { SetBudgetType(value); return *this;}

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
