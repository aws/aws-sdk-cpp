/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostComparisonDriver.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

CostComparisonDriver::CostComparisonDriver(JsonView jsonValue)
{
  *this = jsonValue;
}

CostComparisonDriver& CostComparisonDriver::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CostSelector"))
  {
    m_costSelector = jsonValue.GetObject("CostSelector");
    m_costSelectorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Metrics"))
  {
    Aws::Map<Aws::String, JsonView> metricsJsonMap = jsonValue.GetObject("Metrics").GetAllObjects();
    for(auto& metricsItem : metricsJsonMap)
    {
      m_metrics[metricsItem.first] = metricsItem.second.AsObject();
    }
    m_metricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CostDrivers"))
  {
    Aws::Utils::Array<JsonView> costDriversJsonList = jsonValue.GetArray("CostDrivers");
    for(unsigned costDriversIndex = 0; costDriversIndex < costDriversJsonList.GetLength(); ++costDriversIndex)
    {
      m_costDrivers.push_back(costDriversJsonList[costDriversIndex].AsObject());
    }
    m_costDriversHasBeenSet = true;
  }
  return *this;
}

JsonValue CostComparisonDriver::Jsonize() const
{
  JsonValue payload;

  if(m_costSelectorHasBeenSet)
  {
   payload.WithObject("CostSelector", m_costSelector.Jsonize());

  }

  if(m_metricsHasBeenSet)
  {
   JsonValue metricsJsonMap;
   for(auto& metricsItem : m_metrics)
   {
     metricsJsonMap.WithObject(metricsItem.first, metricsItem.second.Jsonize());
   }
   payload.WithObject("Metrics", std::move(metricsJsonMap));

  }

  if(m_costDriversHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> costDriversJsonList(m_costDrivers.size());
   for(unsigned costDriversIndex = 0; costDriversIndex < costDriversJsonList.GetLength(); ++costDriversIndex)
   {
     costDriversJsonList[costDriversIndex].AsObject(m_costDrivers[costDriversIndex].Jsonize());
   }
   payload.WithArray("CostDrivers", std::move(costDriversJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
