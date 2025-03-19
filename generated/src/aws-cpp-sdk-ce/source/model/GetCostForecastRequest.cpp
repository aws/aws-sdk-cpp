/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetCostForecastRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetCostForecastRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_timePeriodHasBeenSet)
  {
   payload.WithObject("TimePeriod", m_timePeriod.Jsonize());

  }

  if(m_metricHasBeenSet)
  {
   payload.WithString("Metric", MetricMapper::GetNameForMetric(m_metric));
  }

  if(m_granularityHasBeenSet)
  {
   payload.WithString("Granularity", GranularityMapper::GetNameForGranularity(m_granularity));
  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("Filter", m_filter.Jsonize());

  }

  if(m_billingViewArnHasBeenSet)
  {
   payload.WithString("BillingViewArn", m_billingViewArn);

  }

  if(m_predictionIntervalLevelHasBeenSet)
  {
   payload.WithInteger("PredictionIntervalLevel", m_predictionIntervalLevel);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCostForecastRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.GetCostForecast"));
  return headers;

}




