/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/DescribeDimensionKeysRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDimensionKeysRequest::DescribeDimensionKeysRequest() : 
    m_serviceType(ServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_periodInSeconds(0),
    m_periodInSecondsHasBeenSet(false),
    m_groupByHasBeenSet(false),
    m_additionalMetricsHasBeenSet(false),
    m_partitionByHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeDimensionKeysRequest::SerializePayload() const
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

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_metricHasBeenSet)
  {
   payload.WithString("Metric", m_metric);

  }

  if(m_periodInSecondsHasBeenSet)
  {
   payload.WithInteger("PeriodInSeconds", m_periodInSeconds);

  }

  if(m_groupByHasBeenSet)
  {
   payload.WithObject("GroupBy", m_groupBy.Jsonize());

  }

  if(m_additionalMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalMetricsJsonList(m_additionalMetrics.size());
   for(unsigned additionalMetricsIndex = 0; additionalMetricsIndex < additionalMetricsJsonList.GetLength(); ++additionalMetricsIndex)
   {
     additionalMetricsJsonList[additionalMetricsIndex].AsString(m_additionalMetrics[additionalMetricsIndex]);
   }
   payload.WithArray("AdditionalMetrics", std::move(additionalMetricsJsonList));

  }

  if(m_partitionByHasBeenSet)
  {
   payload.WithObject("PartitionBy", m_partitionBy.Jsonize());

  }

  if(m_filterHasBeenSet)
  {
   JsonValue filterJsonMap;
   for(auto& filterItem : m_filter)
   {
     filterJsonMap.WithString(filterItem.first, filterItem.second);
   }
   payload.WithObject("Filter", std::move(filterJsonMap));

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

Aws::Http::HeaderValueCollection DescribeDimensionKeysRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PerformanceInsightsv20180227.DescribeDimensionKeys"));
  return headers;

}




