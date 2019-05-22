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

#include <aws/budgets/model/Budget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace Model
{

Budget::Budget() : 
    m_budgetNameHasBeenSet(false),
    m_budgetLimitHasBeenSet(false),
    m_plannedBudgetLimitsHasBeenSet(false),
    m_costFiltersHasBeenSet(false),
    m_costTypesHasBeenSet(false),
    m_timeUnit(TimeUnit::NOT_SET),
    m_timeUnitHasBeenSet(false),
    m_timePeriodHasBeenSet(false),
    m_calculatedSpendHasBeenSet(false),
    m_budgetType(BudgetType::NOT_SET),
    m_budgetTypeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

Budget::Budget(JsonView jsonValue) : 
    m_budgetNameHasBeenSet(false),
    m_budgetLimitHasBeenSet(false),
    m_plannedBudgetLimitsHasBeenSet(false),
    m_costFiltersHasBeenSet(false),
    m_costTypesHasBeenSet(false),
    m_timeUnit(TimeUnit::NOT_SET),
    m_timeUnitHasBeenSet(false),
    m_timePeriodHasBeenSet(false),
    m_calculatedSpendHasBeenSet(false),
    m_budgetType(BudgetType::NOT_SET),
    m_budgetTypeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Budget& Budget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BudgetName"))
  {
    m_budgetName = jsonValue.GetString("BudgetName");

    m_budgetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BudgetLimit"))
  {
    m_budgetLimit = jsonValue.GetObject("BudgetLimit");

    m_budgetLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlannedBudgetLimits"))
  {
    Aws::Map<Aws::String, JsonView> plannedBudgetLimitsJsonMap = jsonValue.GetObject("PlannedBudgetLimits").GetAllObjects();
    for(auto& plannedBudgetLimitsItem : plannedBudgetLimitsJsonMap)
    {
      m_plannedBudgetLimits[plannedBudgetLimitsItem.first] = plannedBudgetLimitsItem.second.AsObject();
    }
    m_plannedBudgetLimitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CostFilters"))
  {
    Aws::Map<Aws::String, JsonView> costFiltersJsonMap = jsonValue.GetObject("CostFilters").GetAllObjects();
    for(auto& costFiltersItem : costFiltersJsonMap)
    {
      Array<JsonView> dimensionValuesJsonList = costFiltersItem.second.AsArray();
      Aws::Vector<Aws::String> dimensionValuesList;
      dimensionValuesList.reserve((size_t)dimensionValuesJsonList.GetLength());
      for(unsigned dimensionValuesIndex = 0; dimensionValuesIndex < dimensionValuesJsonList.GetLength(); ++dimensionValuesIndex)
      {
        dimensionValuesList.push_back(dimensionValuesJsonList[dimensionValuesIndex].AsString());
      }
      m_costFilters[costFiltersItem.first] = std::move(dimensionValuesList);
    }
    m_costFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CostTypes"))
  {
    m_costTypes = jsonValue.GetObject("CostTypes");

    m_costTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeUnit"))
  {
    m_timeUnit = TimeUnitMapper::GetTimeUnitForName(jsonValue.GetString("TimeUnit"));

    m_timeUnitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimePeriod"))
  {
    m_timePeriod = jsonValue.GetObject("TimePeriod");

    m_timePeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CalculatedSpend"))
  {
    m_calculatedSpend = jsonValue.GetObject("CalculatedSpend");

    m_calculatedSpendHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BudgetType"))
  {
    m_budgetType = BudgetTypeMapper::GetBudgetTypeForName(jsonValue.GetString("BudgetType"));

    m_budgetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Budget::Jsonize() const
{
  JsonValue payload;

  if(m_budgetNameHasBeenSet)
  {
   payload.WithString("BudgetName", m_budgetName);

  }

  if(m_budgetLimitHasBeenSet)
  {
   payload.WithObject("BudgetLimit", m_budgetLimit.Jsonize());

  }

  if(m_plannedBudgetLimitsHasBeenSet)
  {
   JsonValue plannedBudgetLimitsJsonMap;
   for(auto& plannedBudgetLimitsItem : m_plannedBudgetLimits)
   {
     plannedBudgetLimitsJsonMap.WithObject(plannedBudgetLimitsItem.first, plannedBudgetLimitsItem.second.Jsonize());
   }
   payload.WithObject("PlannedBudgetLimits", std::move(plannedBudgetLimitsJsonMap));

  }

  if(m_costFiltersHasBeenSet)
  {
   JsonValue costFiltersJsonMap;
   for(auto& costFiltersItem : m_costFilters)
   {
     Array<JsonValue> dimensionValuesJsonList(costFiltersItem.second.size());
     for(unsigned dimensionValuesIndex = 0; dimensionValuesIndex < dimensionValuesJsonList.GetLength(); ++dimensionValuesIndex)
     {
       dimensionValuesJsonList[dimensionValuesIndex].AsString(costFiltersItem.second[dimensionValuesIndex]);
     }
     costFiltersJsonMap.WithArray(costFiltersItem.first, std::move(dimensionValuesJsonList));
   }
   payload.WithObject("CostFilters", std::move(costFiltersJsonMap));

  }

  if(m_costTypesHasBeenSet)
  {
   payload.WithObject("CostTypes", m_costTypes.Jsonize());

  }

  if(m_timeUnitHasBeenSet)
  {
   payload.WithString("TimeUnit", TimeUnitMapper::GetNameForTimeUnit(m_timeUnit));
  }

  if(m_timePeriodHasBeenSet)
  {
   payload.WithObject("TimePeriod", m_timePeriod.Jsonize());

  }

  if(m_calculatedSpendHasBeenSet)
  {
   payload.WithObject("CalculatedSpend", m_calculatedSpend.Jsonize());

  }

  if(m_budgetTypeHasBeenSet)
  {
   payload.WithString("BudgetType", BudgetTypeMapper::GetNameForBudgetType(m_budgetType));
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
