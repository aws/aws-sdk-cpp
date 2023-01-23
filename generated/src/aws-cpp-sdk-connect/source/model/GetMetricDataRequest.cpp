/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GetMetricDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMetricDataRequest::GetMetricDataRequest() : 
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_groupingsHasBeenSet(false),
    m_historicalMetricsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetMetricDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_groupingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupingsJsonList(m_groupings.size());
   for(unsigned groupingsIndex = 0; groupingsIndex < groupingsJsonList.GetLength(); ++groupingsIndex)
   {
     groupingsJsonList[groupingsIndex].AsString(GroupingMapper::GetNameForGrouping(m_groupings[groupingsIndex]));
   }
   payload.WithArray("Groupings", std::move(groupingsJsonList));

  }

  if(m_historicalMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> historicalMetricsJsonList(m_historicalMetrics.size());
   for(unsigned historicalMetricsIndex = 0; historicalMetricsIndex < historicalMetricsJsonList.GetLength(); ++historicalMetricsIndex)
   {
     historicalMetricsJsonList[historicalMetricsIndex].AsObject(m_historicalMetrics[historicalMetricsIndex].Jsonize());
   }
   payload.WithArray("HistoricalMetrics", std::move(historicalMetricsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}




