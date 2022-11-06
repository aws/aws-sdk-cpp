/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetSavingsPlansCoverageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSavingsPlansCoverageRequest::GetSavingsPlansCoverageRequest() : 
    m_timePeriodHasBeenSet(false),
    m_groupByHasBeenSet(false),
    m_granularity(Granularity::NOT_SET),
    m_granularityHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_sortByHasBeenSet(false)
{
}

Aws::String GetSavingsPlansCoverageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_timePeriodHasBeenSet)
  {
   payload.WithObject("TimePeriod", m_timePeriod.Jsonize());

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

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithObject("SortBy", m_sortBy.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSavingsPlansCoverageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.GetSavingsPlansCoverage"));
  return headers;

}




