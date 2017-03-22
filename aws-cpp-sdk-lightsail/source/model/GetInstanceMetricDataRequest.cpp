/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lightsail/model/GetInstanceMetricDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetInstanceMetricDataRequest::GetInstanceMetricDataRequest() : 
    m_instanceNameHasBeenSet(false),
    m_metricName(InstanceMetricName::NOT_SET),
    m_metricNameHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_unit(MetricUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_statisticsHasBeenSet(false)
{
}

Aws::String GetInstanceMetricDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", InstanceMetricNameMapper::GetNameForInstanceMetricName(m_metricName));
  }

  if(m_periodHasBeenSet)
  {
   payload.WithInteger("period", m_period);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", MetricUnitMapper::GetNameForMetricUnit(m_unit));
  }

  if(m_statisticsHasBeenSet)
  {
   Array<JsonValue> statisticsJsonList(m_statistics.size());
   for(unsigned statisticsIndex = 0; statisticsIndex < statisticsJsonList.GetLength(); ++statisticsIndex)
   {
     statisticsJsonList[statisticsIndex].AsString(MetricStatisticMapper::GetNameForMetricStatistic(m_statistics[statisticsIndex]));
   }
   payload.WithArray("statistics", std::move(statisticsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection GetInstanceMetricDataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetInstanceMetricData"));
  return headers;

}




