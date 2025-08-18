/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/SavingsPlansCoverageQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDashboards
{
namespace Model
{

SavingsPlansCoverageQuery::SavingsPlansCoverageQuery(JsonView jsonValue)
{
  *this = jsonValue;
}

SavingsPlansCoverageQuery& SavingsPlansCoverageQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeRange"))
  {
    m_timeRange = jsonValue.GetObject("timeRange");
    m_timeRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metrics"))
  {
    Aws::Utils::Array<JsonView> metricsJsonList = jsonValue.GetArray("metrics");
    for(unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex)
    {
      m_metrics.push_back(MetricNameMapper::GetMetricNameForName(metricsJsonList[metricsIndex].AsString()));
    }
    m_metricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("granularity"))
  {
    m_granularity = GranularityMapper::GetGranularityForName(jsonValue.GetString("granularity"));
    m_granularityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("groupBy"))
  {
    Aws::Utils::Array<JsonView> groupByJsonList = jsonValue.GetArray("groupBy");
    for(unsigned groupByIndex = 0; groupByIndex < groupByJsonList.GetLength(); ++groupByIndex)
    {
      m_groupBy.push_back(groupByJsonList[groupByIndex].AsObject());
    }
    m_groupByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("filter"))
  {
    m_filter = jsonValue.GetObject("filter");
    m_filterHasBeenSet = true;
  }
  return *this;
}

JsonValue SavingsPlansCoverageQuery::Jsonize() const
{
  JsonValue payload;

  if(m_timeRangeHasBeenSet)
  {
   payload.WithObject("timeRange", m_timeRange.Jsonize());

  }

  if(m_metricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricsJsonList(m_metrics.size());
   for(unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex)
   {
     metricsJsonList[metricsIndex].AsString(MetricNameMapper::GetNameForMetricName(m_metrics[metricsIndex]));
   }
   payload.WithArray("metrics", std::move(metricsJsonList));

  }

  if(m_granularityHasBeenSet)
  {
   payload.WithString("granularity", GranularityMapper::GetNameForGranularity(m_granularity));
  }

  if(m_groupByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupByJsonList(m_groupBy.size());
   for(unsigned groupByIndex = 0; groupByIndex < groupByJsonList.GetLength(); ++groupByIndex)
   {
     groupByJsonList[groupByIndex].AsObject(m_groupBy[groupByIndex].Jsonize());
   }
   payload.WithArray("groupBy", std::move(groupByJsonList));

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("filter", m_filter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
