/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GetCurrentMetricDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCurrentMetricDataRequest::GetCurrentMetricDataRequest() : 
    m_instanceIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_groupingsHasBeenSet(false),
    m_currentMetricsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_sortCriteriaHasBeenSet(false)
{
}

Aws::String GetCurrentMetricDataRequest::SerializePayload() const
{
  JsonValue payload;

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

  if(m_currentMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> currentMetricsJsonList(m_currentMetrics.size());
   for(unsigned currentMetricsIndex = 0; currentMetricsIndex < currentMetricsJsonList.GetLength(); ++currentMetricsIndex)
   {
     currentMetricsJsonList[currentMetricsIndex].AsObject(m_currentMetrics[currentMetricsIndex].Jsonize());
   }
   payload.WithArray("CurrentMetrics", std::move(currentMetricsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_sortCriteriaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sortCriteriaJsonList(m_sortCriteria.size());
   for(unsigned sortCriteriaIndex = 0; sortCriteriaIndex < sortCriteriaJsonList.GetLength(); ++sortCriteriaIndex)
   {
     sortCriteriaJsonList[sortCriteriaIndex].AsObject(m_sortCriteria[sortCriteriaIndex].Jsonize());
   }
   payload.WithArray("SortCriteria", std::move(sortCriteriaJsonList));

  }

  return payload.View().WriteReadable();
}




