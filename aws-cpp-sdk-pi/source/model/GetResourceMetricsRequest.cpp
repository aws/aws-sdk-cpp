﻿/*
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

#include <aws/pi/model/GetResourceMetricsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResourceMetricsRequest::GetResourceMetricsRequest() : 
    m_serviceType(ServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_metricQueriesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_periodInSeconds(0),
    m_periodInSecondsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetResourceMetricsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceTypeHasBeenSet)
  {
   payload.WithString("ServiceType", ServiceTypeMapper::GetNameForServiceType(m_serviceType));
  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_metricQueriesHasBeenSet)
  {
   Array<JsonValue> metricQueriesJsonList(m_metricQueries.size());
   for(unsigned metricQueriesIndex = 0; metricQueriesIndex < metricQueriesJsonList.GetLength(); ++metricQueriesIndex)
   {
     metricQueriesJsonList[metricQueriesIndex].AsObject(m_metricQueries[metricQueriesIndex].Jsonize());
   }
   payload.WithArray("MetricQueries", std::move(metricQueriesJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_periodInSecondsHasBeenSet)
  {
   payload.WithInteger("PeriodInSeconds", m_periodInSeconds);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetResourceMetricsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PerformanceInsightsv20180227.GetResourceMetrics"));
  return headers;

}




