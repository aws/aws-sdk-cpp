/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetCostAndUsageComparisonsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetCostAndUsageComparisonsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_billingViewArnHasBeenSet)
  {
   payload.WithString("BillingViewArn", m_billingViewArn);

  }

  if(m_baselineTimePeriodHasBeenSet)
  {
   payload.WithObject("BaselineTimePeriod", m_baselineTimePeriod.Jsonize());

  }

  if(m_comparisonTimePeriodHasBeenSet)
  {
   payload.WithObject("ComparisonTimePeriod", m_comparisonTimePeriod.Jsonize());

  }

  if(m_metricForComparisonHasBeenSet)
  {
   payload.WithString("MetricForComparison", m_metricForComparison);

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("Filter", m_filter.Jsonize());

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

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextPageTokenHasBeenSet)
  {
   payload.WithString("NextPageToken", m_nextPageToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCostAndUsageComparisonsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.GetCostAndUsageComparisons"));
  return headers;

}




