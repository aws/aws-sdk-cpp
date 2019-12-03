/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/compute-optimizer/model/RecommendedOptionProjectedMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

RecommendedOptionProjectedMetric::RecommendedOptionProjectedMetric() : 
    m_recommendedInstanceTypeHasBeenSet(false),
    m_rank(0),
    m_rankHasBeenSet(false),
    m_projectedMetricsHasBeenSet(false)
{
}

RecommendedOptionProjectedMetric::RecommendedOptionProjectedMetric(JsonView jsonValue) : 
    m_recommendedInstanceTypeHasBeenSet(false),
    m_rank(0),
    m_rankHasBeenSet(false),
    m_projectedMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendedOptionProjectedMetric& RecommendedOptionProjectedMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recommendedInstanceType"))
  {
    m_recommendedInstanceType = jsonValue.GetString("recommendedInstanceType");

    m_recommendedInstanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rank"))
  {
    m_rank = jsonValue.GetInteger("rank");

    m_rankHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectedMetrics"))
  {
    Array<JsonView> projectedMetricsJsonList = jsonValue.GetArray("projectedMetrics");
    for(unsigned projectedMetricsIndex = 0; projectedMetricsIndex < projectedMetricsJsonList.GetLength(); ++projectedMetricsIndex)
    {
      m_projectedMetrics.push_back(projectedMetricsJsonList[projectedMetricsIndex].AsObject());
    }
    m_projectedMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendedOptionProjectedMetric::Jsonize() const
{
  JsonValue payload;

  if(m_recommendedInstanceTypeHasBeenSet)
  {
   payload.WithString("recommendedInstanceType", m_recommendedInstanceType);

  }

  if(m_rankHasBeenSet)
  {
   payload.WithInteger("rank", m_rank);

  }

  if(m_projectedMetricsHasBeenSet)
  {
   Array<JsonValue> projectedMetricsJsonList(m_projectedMetrics.size());
   for(unsigned projectedMetricsIndex = 0; projectedMetricsIndex < projectedMetricsJsonList.GetLength(); ++projectedMetricsIndex)
   {
     projectedMetricsJsonList[projectedMetricsIndex].AsObject(m_projectedMetrics[projectedMetricsIndex].Jsonize());
   }
   payload.WithArray("projectedMetrics", std::move(projectedMetricsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
