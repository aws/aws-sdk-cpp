/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RecommendationMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

RecommendationMetrics::RecommendationMetrics() : 
    m_costPerHour(0.0),
    m_costPerHourHasBeenSet(false),
    m_costPerInference(0.0),
    m_costPerInferenceHasBeenSet(false),
    m_maxInvocations(0),
    m_maxInvocationsHasBeenSet(false),
    m_modelLatency(0),
    m_modelLatencyHasBeenSet(false)
{
}

RecommendationMetrics::RecommendationMetrics(JsonView jsonValue) : 
    m_costPerHour(0.0),
    m_costPerHourHasBeenSet(false),
    m_costPerInference(0.0),
    m_costPerInferenceHasBeenSet(false),
    m_maxInvocations(0),
    m_maxInvocationsHasBeenSet(false),
    m_modelLatency(0),
    m_modelLatencyHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationMetrics& RecommendationMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CostPerHour"))
  {
    m_costPerHour = jsonValue.GetDouble("CostPerHour");

    m_costPerHourHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CostPerInference"))
  {
    m_costPerInference = jsonValue.GetDouble("CostPerInference");

    m_costPerInferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxInvocations"))
  {
    m_maxInvocations = jsonValue.GetInteger("MaxInvocations");

    m_maxInvocationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelLatency"))
  {
    m_modelLatency = jsonValue.GetInteger("ModelLatency");

    m_modelLatencyHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_costPerHourHasBeenSet)
  {
   payload.WithDouble("CostPerHour", m_costPerHour);

  }

  if(m_costPerInferenceHasBeenSet)
  {
   payload.WithDouble("CostPerInference", m_costPerInference);

  }

  if(m_maxInvocationsHasBeenSet)
  {
   payload.WithInteger("MaxInvocations", m_maxInvocations);

  }

  if(m_modelLatencyHasBeenSet)
  {
   payload.WithInteger("ModelLatency", m_modelLatency);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
