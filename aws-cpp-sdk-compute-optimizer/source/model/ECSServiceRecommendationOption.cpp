/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ECSServiceRecommendationOption.h>
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

ECSServiceRecommendationOption::ECSServiceRecommendationOption() : 
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false),
    m_savingsOpportunityHasBeenSet(false),
    m_projectedUtilizationMetricsHasBeenSet(false),
    m_containerRecommendationsHasBeenSet(false)
{
}

ECSServiceRecommendationOption::ECSServiceRecommendationOption(JsonView jsonValue) : 
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false),
    m_savingsOpportunityHasBeenSet(false),
    m_projectedUtilizationMetricsHasBeenSet(false),
    m_containerRecommendationsHasBeenSet(false)
{
  *this = jsonValue;
}

ECSServiceRecommendationOption& ECSServiceRecommendationOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("memory"))
  {
    m_memory = jsonValue.GetInteger("memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpu"))
  {
    m_cpu = jsonValue.GetInteger("cpu");

    m_cpuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("savingsOpportunity"))
  {
    m_savingsOpportunity = jsonValue.GetObject("savingsOpportunity");

    m_savingsOpportunityHasBeenSet = true;
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

  if(jsonValue.ValueExists("containerRecommendations"))
  {
    Aws::Utils::Array<JsonView> containerRecommendationsJsonList = jsonValue.GetArray("containerRecommendations");
    for(unsigned containerRecommendationsIndex = 0; containerRecommendationsIndex < containerRecommendationsJsonList.GetLength(); ++containerRecommendationsIndex)
    {
      m_containerRecommendations.push_back(containerRecommendationsJsonList[containerRecommendationsIndex].AsObject());
    }
    m_containerRecommendationsHasBeenSet = true;
  }

  return *this;
}

JsonValue ECSServiceRecommendationOption::Jsonize() const
{
  JsonValue payload;

  if(m_memoryHasBeenSet)
  {
   payload.WithInteger("memory", m_memory);

  }

  if(m_cpuHasBeenSet)
  {
   payload.WithInteger("cpu", m_cpu);

  }

  if(m_savingsOpportunityHasBeenSet)
  {
   payload.WithObject("savingsOpportunity", m_savingsOpportunity.Jsonize());

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

  if(m_containerRecommendationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerRecommendationsJsonList(m_containerRecommendations.size());
   for(unsigned containerRecommendationsIndex = 0; containerRecommendationsIndex < containerRecommendationsJsonList.GetLength(); ++containerRecommendationsIndex)
   {
     containerRecommendationsJsonList[containerRecommendationsIndex].AsObject(m_containerRecommendations[containerRecommendationsIndex].Jsonize());
   }
   payload.WithArray("containerRecommendations", std::move(containerRecommendationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
