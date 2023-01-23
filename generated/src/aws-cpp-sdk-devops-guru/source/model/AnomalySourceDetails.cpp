/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/AnomalySourceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

AnomalySourceDetails::AnomalySourceDetails() : 
    m_cloudWatchMetricsHasBeenSet(false),
    m_performanceInsightsMetricsHasBeenSet(false)
{
}

AnomalySourceDetails::AnomalySourceDetails(JsonView jsonValue) : 
    m_cloudWatchMetricsHasBeenSet(false),
    m_performanceInsightsMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalySourceDetails& AnomalySourceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchMetrics"))
  {
    Aws::Utils::Array<JsonView> cloudWatchMetricsJsonList = jsonValue.GetArray("CloudWatchMetrics");
    for(unsigned cloudWatchMetricsIndex = 0; cloudWatchMetricsIndex < cloudWatchMetricsJsonList.GetLength(); ++cloudWatchMetricsIndex)
    {
      m_cloudWatchMetrics.push_back(cloudWatchMetricsJsonList[cloudWatchMetricsIndex].AsObject());
    }
    m_cloudWatchMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PerformanceInsightsMetrics"))
  {
    Aws::Utils::Array<JsonView> performanceInsightsMetricsJsonList = jsonValue.GetArray("PerformanceInsightsMetrics");
    for(unsigned performanceInsightsMetricsIndex = 0; performanceInsightsMetricsIndex < performanceInsightsMetricsJsonList.GetLength(); ++performanceInsightsMetricsIndex)
    {
      m_performanceInsightsMetrics.push_back(performanceInsightsMetricsJsonList[performanceInsightsMetricsIndex].AsObject());
    }
    m_performanceInsightsMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalySourceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cloudWatchMetricsJsonList(m_cloudWatchMetrics.size());
   for(unsigned cloudWatchMetricsIndex = 0; cloudWatchMetricsIndex < cloudWatchMetricsJsonList.GetLength(); ++cloudWatchMetricsIndex)
   {
     cloudWatchMetricsJsonList[cloudWatchMetricsIndex].AsObject(m_cloudWatchMetrics[cloudWatchMetricsIndex].Jsonize());
   }
   payload.WithArray("CloudWatchMetrics", std::move(cloudWatchMetricsJsonList));

  }

  if(m_performanceInsightsMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> performanceInsightsMetricsJsonList(m_performanceInsightsMetrics.size());
   for(unsigned performanceInsightsMetricsIndex = 0; performanceInsightsMetricsIndex < performanceInsightsMetricsJsonList.GetLength(); ++performanceInsightsMetricsIndex)
   {
     performanceInsightsMetricsJsonList[performanceInsightsMetricsIndex].AsObject(m_performanceInsightsMetrics[performanceInsightsMetricsIndex].Jsonize());
   }
   payload.WithArray("PerformanceInsightsMetrics", std::move(performanceInsightsMetricsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
