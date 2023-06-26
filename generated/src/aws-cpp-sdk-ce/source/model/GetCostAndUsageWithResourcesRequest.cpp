/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetCostAndUsageWithResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCostAndUsageWithResourcesRequest::GetCostAndUsageWithResourcesRequest() : 
    m_timePeriodHasBeenSet(false),
    m_granularity(Granularity::NOT_SET),
    m_granularityHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_groupByHasBeenSet(false),
    m_nextPageTokenHasBeenSet(false)
{
}

Aws::String GetCostAndUsageWithResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_timePeriodHasBeenSet)
  {
   payload.WithObject("TimePeriod", m_timePeriod.Jsonize());

  }

  if(m_granularityHasBeenSet)
  {
   payload.WithString("Granularity", GranularityMapper::GetNameForGranularity(m_granularity));
  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("Filter", m_filter.Jsonize());

  }

  if(m_metricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricsJsonList(m_metrics.size());
   for(unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex)
   {
     metricsJsonList[metricsIndex].AsString(m_metrics[metricsIndex]);
   }
   payload.WithArray("Metrics", std::move(metricsJsonList));

  }

  if(m_groupByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupByJsonList(m_groupBy.size());
   for(unsigned groupByIndex = 0; groupByIndex < groupByJsonList.GetLength(); ++groupByIndex)
   {
     groupByJsonList[groupByIndex].AsObject(m_groupBy[groupByIndex].Jsonize());
   }
   payload.WithArray("GroupBy", std::move(groupByJsonList));

  }

  if(m_nextPageTokenHasBeenSet)
  {
   payload.WithString("NextPageToken", m_nextPageToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCostAndUsageWithResourcesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.GetCostAndUsageWithResources"));
  return headers;

}




