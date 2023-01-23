/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetECSServiceRecommendationProjectedMetricsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetECSServiceRecommendationProjectedMetricsRequest::GetECSServiceRecommendationProjectedMetricsRequest() : 
    m_serviceArnHasBeenSet(false),
    m_stat(MetricStatistic::NOT_SET),
    m_statHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

Aws::String GetECSServiceRecommendationProjectedMetricsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceArnHasBeenSet)
  {
   payload.WithString("serviceArn", m_serviceArn);

  }

  if(m_statHasBeenSet)
  {
   payload.WithString("stat", MetricStatisticMapper::GetNameForMetricStatistic(m_stat));
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetECSServiceRecommendationProjectedMetricsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComputeOptimizerService.GetECSServiceRecommendationProjectedMetrics"));
  return headers;

}




