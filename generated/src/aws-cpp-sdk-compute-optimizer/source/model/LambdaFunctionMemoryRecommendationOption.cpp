/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LambdaFunctionMemoryRecommendationOption.h>
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

LambdaFunctionMemoryRecommendationOption::LambdaFunctionMemoryRecommendationOption() : 
    m_rank(0),
    m_rankHasBeenSet(false),
    m_memorySize(0),
    m_memorySizeHasBeenSet(false),
    m_projectedUtilizationMetricsHasBeenSet(false),
    m_savingsOpportunityHasBeenSet(false)
{
}

LambdaFunctionMemoryRecommendationOption::LambdaFunctionMemoryRecommendationOption(JsonView jsonValue) : 
    m_rank(0),
    m_rankHasBeenSet(false),
    m_memorySize(0),
    m_memorySizeHasBeenSet(false),
    m_projectedUtilizationMetricsHasBeenSet(false),
    m_savingsOpportunityHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaFunctionMemoryRecommendationOption& LambdaFunctionMemoryRecommendationOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rank"))
  {
    m_rank = jsonValue.GetInteger("rank");

    m_rankHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memorySize"))
  {
    m_memorySize = jsonValue.GetInteger("memorySize");

    m_memorySizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectedUtilizationMetrics"))
  {
    Aws::Utils::Array<JsonView> projectedUtilizationMetricsJsonList = jsonValue.GetArray("projectedUtilizationMetrics");
    for(unsigned projectedUtilizationMetricsIndex = 0; projectedUtilizationMetricsIndex < projectedUtilizationMetricsJsonList.GetLength(); ++projectedUtilizationMetricsIndex)
    {
      m_projectedUtilizationMetrics.push_back(projectedUtilizationMetricsJsonList[projectedUtilizationMetricsIndex].AsObject());
    }
    m_projectedUtilizationMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("savingsOpportunity"))
  {
    m_savingsOpportunity = jsonValue.GetObject("savingsOpportunity");

    m_savingsOpportunityHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaFunctionMemoryRecommendationOption::Jsonize() const
{
  JsonValue payload;

  if(m_rankHasBeenSet)
  {
   payload.WithInteger("rank", m_rank);

  }

  if(m_memorySizeHasBeenSet)
  {
   payload.WithInteger("memorySize", m_memorySize);

  }

  if(m_projectedUtilizationMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> projectedUtilizationMetricsJsonList(m_projectedUtilizationMetrics.size());
   for(unsigned projectedUtilizationMetricsIndex = 0; projectedUtilizationMetricsIndex < projectedUtilizationMetricsJsonList.GetLength(); ++projectedUtilizationMetricsIndex)
   {
     projectedUtilizationMetricsJsonList[projectedUtilizationMetricsIndex].AsObject(m_projectedUtilizationMetrics[projectedUtilizationMetricsIndex].Jsonize());
   }
   payload.WithArray("projectedUtilizationMetrics", std::move(projectedUtilizationMetricsJsonList));

  }

  if(m_savingsOpportunityHasBeenSet)
  {
   payload.WithObject("savingsOpportunity", m_savingsOpportunity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
