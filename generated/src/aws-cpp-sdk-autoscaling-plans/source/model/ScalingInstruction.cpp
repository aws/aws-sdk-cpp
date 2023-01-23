/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/ScalingInstruction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScalingPlans
{
namespace Model
{

ScalingInstruction::ScalingInstruction() : 
    m_serviceNamespace(ServiceNamespace::NOT_SET),
    m_serviceNamespaceHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_scalableDimension(ScalableDimension::NOT_SET),
    m_scalableDimensionHasBeenSet(false),
    m_minCapacity(0),
    m_minCapacityHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false),
    m_targetTrackingConfigurationsHasBeenSet(false),
    m_predefinedLoadMetricSpecificationHasBeenSet(false),
    m_customizedLoadMetricSpecificationHasBeenSet(false),
    m_scheduledActionBufferTime(0),
    m_scheduledActionBufferTimeHasBeenSet(false),
    m_predictiveScalingMaxCapacityBehavior(PredictiveScalingMaxCapacityBehavior::NOT_SET),
    m_predictiveScalingMaxCapacityBehaviorHasBeenSet(false),
    m_predictiveScalingMaxCapacityBuffer(0),
    m_predictiveScalingMaxCapacityBufferHasBeenSet(false),
    m_predictiveScalingMode(PredictiveScalingMode::NOT_SET),
    m_predictiveScalingModeHasBeenSet(false),
    m_scalingPolicyUpdateBehavior(ScalingPolicyUpdateBehavior::NOT_SET),
    m_scalingPolicyUpdateBehaviorHasBeenSet(false),
    m_disableDynamicScaling(false),
    m_disableDynamicScalingHasBeenSet(false)
{
}

ScalingInstruction::ScalingInstruction(JsonView jsonValue) : 
    m_serviceNamespace(ServiceNamespace::NOT_SET),
    m_serviceNamespaceHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_scalableDimension(ScalableDimension::NOT_SET),
    m_scalableDimensionHasBeenSet(false),
    m_minCapacity(0),
    m_minCapacityHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false),
    m_targetTrackingConfigurationsHasBeenSet(false),
    m_predefinedLoadMetricSpecificationHasBeenSet(false),
    m_customizedLoadMetricSpecificationHasBeenSet(false),
    m_scheduledActionBufferTime(0),
    m_scheduledActionBufferTimeHasBeenSet(false),
    m_predictiveScalingMaxCapacityBehavior(PredictiveScalingMaxCapacityBehavior::NOT_SET),
    m_predictiveScalingMaxCapacityBehaviorHasBeenSet(false),
    m_predictiveScalingMaxCapacityBuffer(0),
    m_predictiveScalingMaxCapacityBufferHasBeenSet(false),
    m_predictiveScalingMode(PredictiveScalingMode::NOT_SET),
    m_predictiveScalingModeHasBeenSet(false),
    m_scalingPolicyUpdateBehavior(ScalingPolicyUpdateBehavior::NOT_SET),
    m_scalingPolicyUpdateBehaviorHasBeenSet(false),
    m_disableDynamicScaling(false),
    m_disableDynamicScalingHasBeenSet(false)
{
  *this = jsonValue;
}

ScalingInstruction& ScalingInstruction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceNamespace"))
  {
    m_serviceNamespace = ServiceNamespaceMapper::GetServiceNamespaceForName(jsonValue.GetString("ServiceNamespace"));

    m_serviceNamespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalableDimension"))
  {
    m_scalableDimension = ScalableDimensionMapper::GetScalableDimensionForName(jsonValue.GetString("ScalableDimension"));

    m_scalableDimensionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinCapacity"))
  {
    m_minCapacity = jsonValue.GetInteger("MinCapacity");

    m_minCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxCapacity"))
  {
    m_maxCapacity = jsonValue.GetInteger("MaxCapacity");

    m_maxCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetTrackingConfigurations"))
  {
    Aws::Utils::Array<JsonView> targetTrackingConfigurationsJsonList = jsonValue.GetArray("TargetTrackingConfigurations");
    for(unsigned targetTrackingConfigurationsIndex = 0; targetTrackingConfigurationsIndex < targetTrackingConfigurationsJsonList.GetLength(); ++targetTrackingConfigurationsIndex)
    {
      m_targetTrackingConfigurations.push_back(targetTrackingConfigurationsJsonList[targetTrackingConfigurationsIndex].AsObject());
    }
    m_targetTrackingConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PredefinedLoadMetricSpecification"))
  {
    m_predefinedLoadMetricSpecification = jsonValue.GetObject("PredefinedLoadMetricSpecification");

    m_predefinedLoadMetricSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomizedLoadMetricSpecification"))
  {
    m_customizedLoadMetricSpecification = jsonValue.GetObject("CustomizedLoadMetricSpecification");

    m_customizedLoadMetricSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduledActionBufferTime"))
  {
    m_scheduledActionBufferTime = jsonValue.GetInteger("ScheduledActionBufferTime");

    m_scheduledActionBufferTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PredictiveScalingMaxCapacityBehavior"))
  {
    m_predictiveScalingMaxCapacityBehavior = PredictiveScalingMaxCapacityBehaviorMapper::GetPredictiveScalingMaxCapacityBehaviorForName(jsonValue.GetString("PredictiveScalingMaxCapacityBehavior"));

    m_predictiveScalingMaxCapacityBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PredictiveScalingMaxCapacityBuffer"))
  {
    m_predictiveScalingMaxCapacityBuffer = jsonValue.GetInteger("PredictiveScalingMaxCapacityBuffer");

    m_predictiveScalingMaxCapacityBufferHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PredictiveScalingMode"))
  {
    m_predictiveScalingMode = PredictiveScalingModeMapper::GetPredictiveScalingModeForName(jsonValue.GetString("PredictiveScalingMode"));

    m_predictiveScalingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalingPolicyUpdateBehavior"))
  {
    m_scalingPolicyUpdateBehavior = ScalingPolicyUpdateBehaviorMapper::GetScalingPolicyUpdateBehaviorForName(jsonValue.GetString("ScalingPolicyUpdateBehavior"));

    m_scalingPolicyUpdateBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisableDynamicScaling"))
  {
    m_disableDynamicScaling = jsonValue.GetBool("DisableDynamicScaling");

    m_disableDynamicScalingHasBeenSet = true;
  }

  return *this;
}

JsonValue ScalingInstruction::Jsonize() const
{
  JsonValue payload;

  if(m_serviceNamespaceHasBeenSet)
  {
   payload.WithString("ServiceNamespace", ServiceNamespaceMapper::GetNameForServiceNamespace(m_serviceNamespace));
  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_scalableDimensionHasBeenSet)
  {
   payload.WithString("ScalableDimension", ScalableDimensionMapper::GetNameForScalableDimension(m_scalableDimension));
  }

  if(m_minCapacityHasBeenSet)
  {
   payload.WithInteger("MinCapacity", m_minCapacity);

  }

  if(m_maxCapacityHasBeenSet)
  {
   payload.WithInteger("MaxCapacity", m_maxCapacity);

  }

  if(m_targetTrackingConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetTrackingConfigurationsJsonList(m_targetTrackingConfigurations.size());
   for(unsigned targetTrackingConfigurationsIndex = 0; targetTrackingConfigurationsIndex < targetTrackingConfigurationsJsonList.GetLength(); ++targetTrackingConfigurationsIndex)
   {
     targetTrackingConfigurationsJsonList[targetTrackingConfigurationsIndex].AsObject(m_targetTrackingConfigurations[targetTrackingConfigurationsIndex].Jsonize());
   }
   payload.WithArray("TargetTrackingConfigurations", std::move(targetTrackingConfigurationsJsonList));

  }

  if(m_predefinedLoadMetricSpecificationHasBeenSet)
  {
   payload.WithObject("PredefinedLoadMetricSpecification", m_predefinedLoadMetricSpecification.Jsonize());

  }

  if(m_customizedLoadMetricSpecificationHasBeenSet)
  {
   payload.WithObject("CustomizedLoadMetricSpecification", m_customizedLoadMetricSpecification.Jsonize());

  }

  if(m_scheduledActionBufferTimeHasBeenSet)
  {
   payload.WithInteger("ScheduledActionBufferTime", m_scheduledActionBufferTime);

  }

  if(m_predictiveScalingMaxCapacityBehaviorHasBeenSet)
  {
   payload.WithString("PredictiveScalingMaxCapacityBehavior", PredictiveScalingMaxCapacityBehaviorMapper::GetNameForPredictiveScalingMaxCapacityBehavior(m_predictiveScalingMaxCapacityBehavior));
  }

  if(m_predictiveScalingMaxCapacityBufferHasBeenSet)
  {
   payload.WithInteger("PredictiveScalingMaxCapacityBuffer", m_predictiveScalingMaxCapacityBuffer);

  }

  if(m_predictiveScalingModeHasBeenSet)
  {
   payload.WithString("PredictiveScalingMode", PredictiveScalingModeMapper::GetNameForPredictiveScalingMode(m_predictiveScalingMode));
  }

  if(m_scalingPolicyUpdateBehaviorHasBeenSet)
  {
   payload.WithString("ScalingPolicyUpdateBehavior", ScalingPolicyUpdateBehaviorMapper::GetNameForScalingPolicyUpdateBehavior(m_scalingPolicyUpdateBehavior));
  }

  if(m_disableDynamicScalingHasBeenSet)
  {
   payload.WithBool("DisableDynamicScaling", m_disableDynamicScaling);

  }

  return payload;
}

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
