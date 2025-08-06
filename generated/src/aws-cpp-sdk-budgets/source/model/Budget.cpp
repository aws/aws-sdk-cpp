/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

Budget::Budget(JsonView jsonValue)
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
  if(jsonValue.ValueExists("AutoAdjustData"))
  {
    m_autoAdjustData = jsonValue.GetObject("AutoAdjustData");
    m_autoAdjustDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilterExpression"))
  {
    m_filterExpression = jsonValue.GetObject("FilterExpression");
    m_filterExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Metrics"))
  {
    Aws::Utils::Array<JsonView> metricsJsonList = jsonValue.GetArray("Metrics");
    for(unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex)
    {
      m_metrics.push_back(MetricMapper::GetMetricForName(metricsJsonList[metricsIndex].AsString()));
    }
    m_metricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BillingViewArn"))
  {
    m_billingViewArn = jsonValue.GetString("BillingViewArn");
    m_billingViewArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HealthStatus"))
  {
    m_healthStatus = jsonValue.GetObject("HealthStatus");
    m_healthStatusHasBeenSet = true;
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

  if(m_autoAdjustDataHasBeenSet)
  {
   payload.WithObject("AutoAdjustData", m_autoAdjustData.Jsonize());

  }

  if(m_filterExpressionHasBeenSet)
  {
   payload.WithObject("FilterExpression", m_filterExpression.Jsonize());

  }

  if(m_metricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricsJsonList(m_metrics.size());
   for(unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex)
   {
     metricsJsonList[metricsIndex].AsString(MetricMapper::GetNameForMetric(m_metrics[metricsIndex]));
   }
   payload.WithArray("Metrics", std::move(metricsJsonList));

  }

  if(m_billingViewArnHasBeenSet)
  {
   payload.WithString("BillingViewArn", m_billingViewArn);

  }

  if(m_healthStatusHasBeenSet)
  {
   payload.WithObject("HealthStatus", m_healthStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
