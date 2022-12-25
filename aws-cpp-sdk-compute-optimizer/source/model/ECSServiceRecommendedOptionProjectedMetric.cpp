/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ECSServiceRecommendedOptionProjectedMetric.h>
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

ECSServiceRecommendedOptionProjectedMetric::ECSServiceRecommendedOptionProjectedMetric() : 
    m_recommendedCpuUnits(0),
    m_recommendedCpuUnitsHasBeenSet(false),
    m_recommendedMemorySize(0),
    m_recommendedMemorySizeHasBeenSet(false),
    m_projectedMetricsHasBeenSet(false)
{
}

ECSServiceRecommendedOptionProjectedMetric::ECSServiceRecommendedOptionProjectedMetric(JsonView jsonValue) : 
    m_recommendedCpuUnits(0),
    m_recommendedCpuUnitsHasBeenSet(false),
    m_recommendedMemorySize(0),
    m_recommendedMemorySizeHasBeenSet(false),
    m_projectedMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

ECSServiceRecommendedOptionProjectedMetric& ECSServiceRecommendedOptionProjectedMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recommendedCpuUnits"))
  {
    m_recommendedCpuUnits = jsonValue.GetInteger("recommendedCpuUnits");

    m_recommendedCpuUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendedMemorySize"))
  {
    m_recommendedMemorySize = jsonValue.GetInteger("recommendedMemorySize");

    m_recommendedMemorySizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectedMetrics"))
  {
    Aws::Utils::Array<JsonView> projectedMetricsJsonList = jsonValue.GetArray("projectedMetrics");
    for(unsigned projectedMetricsIndex = 0; projectedMetricsIndex < projectedMetricsJsonList.GetLength(); ++projectedMetricsIndex)
    {
      m_projectedMetrics.push_back(projectedMetricsJsonList[projectedMetricsIndex].AsObject());
    }
    m_projectedMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue ECSServiceRecommendedOptionProjectedMetric::Jsonize() const
{
  JsonValue payload;

  if(m_recommendedCpuUnitsHasBeenSet)
  {
   payload.WithInteger("recommendedCpuUnits", m_recommendedCpuUnits);

  }

  if(m_recommendedMemorySizeHasBeenSet)
  {
   payload.WithInteger("recommendedMemorySize", m_recommendedMemorySize);

  }

  if(m_projectedMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> projectedMetricsJsonList(m_projectedMetrics.size());
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
