/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostAndUsageComparison.h>
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

CostAndUsageComparison::CostAndUsageComparison(JsonView jsonValue)
{
  *this = jsonValue;
}

CostAndUsageComparison& CostAndUsageComparison::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CostAndUsageSelector"))
  {
    m_costAndUsageSelector = jsonValue.GetObject("CostAndUsageSelector");
    m_costAndUsageSelectorHasBeenSet = true;
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
  return *this;
}

JsonValue CostAndUsageComparison::Jsonize() const
{
  JsonValue payload;

  if(m_costAndUsageSelectorHasBeenSet)
  {
   payload.WithObject("CostAndUsageSelector", m_costAndUsageSelector.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
