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

#include <aws/autoscaling-plans/model/TargetTrackingConfiguration.h>
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

TargetTrackingConfiguration::TargetTrackingConfiguration() : 
    m_predefinedScalingMetricSpecificationHasBeenSet(false),
    m_customizedScalingMetricSpecificationHasBeenSet(false),
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false),
    m_disableScaleIn(false),
    m_disableScaleInHasBeenSet(false),
    m_scaleOutCooldown(0),
    m_scaleOutCooldownHasBeenSet(false),
    m_scaleInCooldown(0),
    m_scaleInCooldownHasBeenSet(false),
    m_estimatedInstanceWarmup(0),
    m_estimatedInstanceWarmupHasBeenSet(false)
{
}

TargetTrackingConfiguration::TargetTrackingConfiguration(const JsonValue& jsonValue) : 
    m_predefinedScalingMetricSpecificationHasBeenSet(false),
    m_customizedScalingMetricSpecificationHasBeenSet(false),
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false),
    m_disableScaleIn(false),
    m_disableScaleInHasBeenSet(false),
    m_scaleOutCooldown(0),
    m_scaleOutCooldownHasBeenSet(false),
    m_scaleInCooldown(0),
    m_scaleInCooldownHasBeenSet(false),
    m_estimatedInstanceWarmup(0),
    m_estimatedInstanceWarmupHasBeenSet(false)
{
  *this = jsonValue;
}

TargetTrackingConfiguration& TargetTrackingConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PredefinedScalingMetricSpecification"))
  {
    m_predefinedScalingMetricSpecification = jsonValue.GetObject("PredefinedScalingMetricSpecification");

    m_predefinedScalingMetricSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomizedScalingMetricSpecification"))
  {
    m_customizedScalingMetricSpecification = jsonValue.GetObject("CustomizedScalingMetricSpecification");

    m_customizedScalingMetricSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetValue"))
  {
    m_targetValue = jsonValue.GetDouble("TargetValue");

    m_targetValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisableScaleIn"))
  {
    m_disableScaleIn = jsonValue.GetBool("DisableScaleIn");

    m_disableScaleInHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScaleOutCooldown"))
  {
    m_scaleOutCooldown = jsonValue.GetInteger("ScaleOutCooldown");

    m_scaleOutCooldownHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScaleInCooldown"))
  {
    m_scaleInCooldown = jsonValue.GetInteger("ScaleInCooldown");

    m_scaleInCooldownHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedInstanceWarmup"))
  {
    m_estimatedInstanceWarmup = jsonValue.GetInteger("EstimatedInstanceWarmup");

    m_estimatedInstanceWarmupHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetTrackingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_predefinedScalingMetricSpecificationHasBeenSet)
  {
   payload.WithObject("PredefinedScalingMetricSpecification", m_predefinedScalingMetricSpecification.Jsonize());

  }

  if(m_customizedScalingMetricSpecificationHasBeenSet)
  {
   payload.WithObject("CustomizedScalingMetricSpecification", m_customizedScalingMetricSpecification.Jsonize());

  }

  if(m_targetValueHasBeenSet)
  {
   payload.WithDouble("TargetValue", m_targetValue);

  }

  if(m_disableScaleInHasBeenSet)
  {
   payload.WithBool("DisableScaleIn", m_disableScaleIn);

  }

  if(m_scaleOutCooldownHasBeenSet)
  {
   payload.WithInteger("ScaleOutCooldown", m_scaleOutCooldown);

  }

  if(m_scaleInCooldownHasBeenSet)
  {
   payload.WithInteger("ScaleInCooldown", m_scaleInCooldown);

  }

  if(m_estimatedInstanceWarmupHasBeenSet)
  {
   payload.WithInteger("EstimatedInstanceWarmup", m_estimatedInstanceWarmup);

  }

  return payload;
}

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
