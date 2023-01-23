/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetContainerServiceMetricDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetContainerServiceMetricDataRequest::GetContainerServiceMetricDataRequest() : 
    m_serviceNameHasBeenSet(false),
    m_metricName(ContainerServiceMetricName::NOT_SET),
    m_metricNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_statisticsHasBeenSet(false)
{
}

Aws::String GetContainerServiceMetricDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", ContainerServiceMetricNameMapper::GetNameForContainerServiceMetricName(m_metricName));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_periodHasBeenSet)
  {
   payload.WithInteger("period", m_period);

  }

  if(m_statisticsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statisticsJsonList(m_statistics.size());
   for(unsigned statisticsIndex = 0; statisticsIndex < statisticsJsonList.GetLength(); ++statisticsIndex)
   {
     statisticsJsonList[statisticsIndex].AsString(MetricStatisticMapper::GetNameForMetricStatistic(m_statistics[statisticsIndex]));
   }
   payload.WithArray("statistics", std::move(statisticsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetContainerServiceMetricDataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetContainerServiceMetricData"));
  return headers;

}




