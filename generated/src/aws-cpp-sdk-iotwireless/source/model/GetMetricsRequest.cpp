/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetMetricsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMetricsRequest::GetMetricsRequest() : 
    m_summaryMetricQueriesHasBeenSet(false)
{
}

Aws::String GetMetricsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_summaryMetricQueriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> summaryMetricQueriesJsonList(m_summaryMetricQueries.size());
   for(unsigned summaryMetricQueriesIndex = 0; summaryMetricQueriesIndex < summaryMetricQueriesJsonList.GetLength(); ++summaryMetricQueriesIndex)
   {
     summaryMetricQueriesJsonList[summaryMetricQueriesIndex].AsObject(m_summaryMetricQueries[summaryMetricQueriesIndex].Jsonize());
   }
   payload.WithArray("SummaryMetricQueries", std::move(summaryMetricQueriesJsonList));

  }

  return payload.View().WriteReadable();
}




