/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_maxResultsHasBeenSet(false)
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
   Array<JsonValue> groupingsJsonList(m_groupings.size());
   for(unsigned groupingsIndex = 0; groupingsIndex < groupingsJsonList.GetLength(); ++groupingsIndex)
   {
     groupingsJsonList[groupingsIndex].AsString(GroupingMapper::GetNameForGrouping(m_groupings[groupingsIndex]));
   }
   payload.WithArray("Groupings", std::move(groupingsJsonList));

  }

  if(m_currentMetricsHasBeenSet)
  {
   Array<JsonValue> currentMetricsJsonList(m_currentMetrics.size());
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

  return payload.View().WriteReadable();
}




