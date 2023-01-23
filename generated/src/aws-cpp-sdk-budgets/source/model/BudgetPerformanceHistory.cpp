/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/BudgetPerformanceHistory.h>
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

BudgetPerformanceHistory::BudgetPerformanceHistory() : 
    m_budgetNameHasBeenSet(false),
    m_budgetType(BudgetType::NOT_SET),
    m_budgetTypeHasBeenSet(false),
    m_costFiltersHasBeenSet(false),
    m_costTypesHasBeenSet(false),
    m_timeUnit(TimeUnit::NOT_SET),
    m_timeUnitHasBeenSet(false),
    m_budgetedAndActualAmountsListHasBeenSet(false)
{
}

BudgetPerformanceHistory::BudgetPerformanceHistory(JsonView jsonValue) : 
    m_budgetNameHasBeenSet(false),
    m_budgetType(BudgetType::NOT_SET),
    m_budgetTypeHasBeenSet(false),
    m_costFiltersHasBeenSet(false),
    m_costTypesHasBeenSet(false),
    m_timeUnit(TimeUnit::NOT_SET),
    m_timeUnitHasBeenSet(false),
    m_budgetedAndActualAmountsListHasBeenSet(false)
{
  *this = jsonValue;
}

BudgetPerformanceHistory& BudgetPerformanceHistory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BudgetName"))
  {
    m_budgetName = jsonValue.GetString("BudgetName");

    m_budgetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BudgetType"))
  {
    m_budgetType = BudgetTypeMapper::GetBudgetTypeForName(jsonValue.GetString("BudgetType"));

    m_budgetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CostFilters"))
  {
    Aws::Map<Aws::String, JsonView> costFiltersJsonMap = jsonValue.GetObject("CostFilters").GetAllObjects();
    for(auto& costFiltersItem : costFiltersJsonMap)
    {
      Aws::Utils::Array<JsonView> dimensionValuesJsonList = costFiltersItem.second.AsArray();
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

  if(jsonValue.ValueExists("BudgetedAndActualAmountsList"))
  {
    Aws::Utils::Array<JsonView> budgetedAndActualAmountsListJsonList = jsonValue.GetArray("BudgetedAndActualAmountsList");
    for(unsigned budgetedAndActualAmountsListIndex = 0; budgetedAndActualAmountsListIndex < budgetedAndActualAmountsListJsonList.GetLength(); ++budgetedAndActualAmountsListIndex)
    {
      m_budgetedAndActualAmountsList.push_back(budgetedAndActualAmountsListJsonList[budgetedAndActualAmountsListIndex].AsObject());
    }
    m_budgetedAndActualAmountsListHasBeenSet = true;
  }

  return *this;
}

JsonValue BudgetPerformanceHistory::Jsonize() const
{
  JsonValue payload;

  if(m_budgetNameHasBeenSet)
  {
   payload.WithString("BudgetName", m_budgetName);

  }

  if(m_budgetTypeHasBeenSet)
  {
   payload.WithString("BudgetType", BudgetTypeMapper::GetNameForBudgetType(m_budgetType));
  }

  if(m_costFiltersHasBeenSet)
  {
   JsonValue costFiltersJsonMap;
   for(auto& costFiltersItem : m_costFilters)
   {
     Aws::Utils::Array<JsonValue> dimensionValuesJsonList(costFiltersItem.second.size());
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

  if(m_budgetedAndActualAmountsListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> budgetedAndActualAmountsListJsonList(m_budgetedAndActualAmountsList.size());
   for(unsigned budgetedAndActualAmountsListIndex = 0; budgetedAndActualAmountsListIndex < budgetedAndActualAmountsListJsonList.GetLength(); ++budgetedAndActualAmountsListIndex)
   {
     budgetedAndActualAmountsListJsonList[budgetedAndActualAmountsListIndex].AsObject(m_budgetedAndActualAmountsList[budgetedAndActualAmountsListIndex].Jsonize());
   }
   payload.WithArray("BudgetedAndActualAmountsList", std::move(budgetedAndActualAmountsListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
