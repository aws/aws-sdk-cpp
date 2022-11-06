/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RecommendationJobStoppingConditions.h>
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

RecommendationJobStoppingConditions::RecommendationJobStoppingConditions() : 
    m_maxInvocations(0),
    m_maxInvocationsHasBeenSet(false),
    m_modelLatencyThresholdsHasBeenSet(false)
{
}

RecommendationJobStoppingConditions::RecommendationJobStoppingConditions(JsonView jsonValue) : 
    m_maxInvocations(0),
    m_maxInvocationsHasBeenSet(false),
    m_modelLatencyThresholdsHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationJobStoppingConditions& RecommendationJobStoppingConditions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxInvocations"))
  {
    m_maxInvocations = jsonValue.GetInteger("MaxInvocations");

    m_maxInvocationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelLatencyThresholds"))
  {
    Aws::Utils::Array<JsonView> modelLatencyThresholdsJsonList = jsonValue.GetArray("ModelLatencyThresholds");
    for(unsigned modelLatencyThresholdsIndex = 0; modelLatencyThresholdsIndex < modelLatencyThresholdsJsonList.GetLength(); ++modelLatencyThresholdsIndex)
    {
      m_modelLatencyThresholds.push_back(modelLatencyThresholdsJsonList[modelLatencyThresholdsIndex].AsObject());
    }
    m_modelLatencyThresholdsHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationJobStoppingConditions::Jsonize() const
{
  JsonValue payload;

  if(m_maxInvocationsHasBeenSet)
  {
   payload.WithInteger("MaxInvocations", m_maxInvocations);

  }

  if(m_modelLatencyThresholdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modelLatencyThresholdsJsonList(m_modelLatencyThresholds.size());
   for(unsigned modelLatencyThresholdsIndex = 0; modelLatencyThresholdsIndex < modelLatencyThresholdsJsonList.GetLength(); ++modelLatencyThresholdsIndex)
   {
     modelLatencyThresholdsJsonList[modelLatencyThresholdsIndex].AsObject(m_modelLatencyThresholds[modelLatencyThresholdsIndex].Jsonize());
   }
   payload.WithArray("ModelLatencyThresholds", std::move(modelLatencyThresholdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
