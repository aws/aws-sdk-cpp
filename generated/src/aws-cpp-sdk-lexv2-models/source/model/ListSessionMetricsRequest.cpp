/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ListSessionMetricsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListSessionMetricsRequest::ListSessionMetricsRequest() : 
    m_botIdHasBeenSet(false),
    m_startDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_binByHasBeenSet(false),
    m_groupByHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListSessionMetricsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_startDateTimeHasBeenSet)
  {
   payload.WithDouble("startDateTime", m_startDateTime.SecondsWithMSPrecision());
  }

  if(m_endDateTimeHasBeenSet)
  {
   payload.WithDouble("endDateTime", m_endDateTime.SecondsWithMSPrecision());
  }

  if(m_metricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricsJsonList(m_metrics.size());
   for(unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex)
   {
     metricsJsonList[metricsIndex].AsObject(m_metrics[metricsIndex].Jsonize());
   }
   payload.WithArray("metrics", std::move(metricsJsonList));

  }

  if(m_binByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> binByJsonList(m_binBy.size());
   for(unsigned binByIndex = 0; binByIndex < binByJsonList.GetLength(); ++binByIndex)
   {
     binByJsonList[binByIndex].AsObject(m_binBy[binByIndex].Jsonize());
   }
   payload.WithArray("binBy", std::move(binByJsonList));

  }

  if(m_groupByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupByJsonList(m_groupBy.size());
   for(unsigned groupByIndex = 0; groupByIndex < groupByJsonList.GetLength(); ++groupByIndex)
   {
     groupByJsonList[groupByIndex].AsObject(m_groupBy[groupByIndex].Jsonize());
   }
   payload.WithArray("groupBy", std::move(groupByJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




