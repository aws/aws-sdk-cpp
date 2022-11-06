/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetBucketMetricDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBucketMetricDataRequest::GetBucketMetricDataRequest() : 
    m_bucketNameHasBeenSet(false),
    m_metricName(BucketMetricName::NOT_SET),
    m_metricNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_unit(MetricUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
}

Aws::String GetBucketMetricDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", BucketMetricNameMapper::GetNameForBucketMetricName(m_metricName));
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

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", MetricUnitMapper::GetNameForMetricUnit(m_unit));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetBucketMetricDataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetBucketMetricData"));
  return headers;

}




