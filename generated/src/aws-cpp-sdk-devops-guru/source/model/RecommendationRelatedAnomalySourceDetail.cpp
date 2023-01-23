/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/RecommendationRelatedAnomalySourceDetail.h>
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

RecommendationRelatedAnomalySourceDetail::RecommendationRelatedAnomalySourceDetail() : 
    m_cloudWatchMetricsHasBeenSet(false)
{
}

RecommendationRelatedAnomalySourceDetail::RecommendationRelatedAnomalySourceDetail(JsonView jsonValue) : 
    m_cloudWatchMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationRelatedAnomalySourceDetail& RecommendationRelatedAnomalySourceDetail::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue RecommendationRelatedAnomalySourceDetail::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
