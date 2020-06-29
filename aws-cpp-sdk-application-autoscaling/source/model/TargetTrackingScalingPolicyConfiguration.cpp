/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/TargetTrackingScalingPolicyConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

TargetTrackingScalingPolicyConfiguration::TargetTrackingScalingPolicyConfiguration() : 
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false),
    m_predefinedMetricSpecificationHasBeenSet(false),
    m_customizedMetricSpecificationHasBeenSet(false),
    m_scaleOutCooldown(0),
    m_scaleOutCooldownHasBeenSet(false),
    m_scaleInCooldown(0),
    m_scaleInCooldownHasBeenSet(false),
    m_disableScaleIn(false),
    m_disableScaleInHasBeenSet(false)
{
}

TargetTrackingScalingPolicyConfiguration::TargetTrackingScalingPolicyConfiguration(JsonView jsonValue) : 
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false),
    m_predefinedMetricSpecificationHasBeenSet(false),
    m_customizedMetricSpecificationHasBeenSet(false),
    m_scaleOutCooldown(0),
    m_scaleOutCooldownHasBeenSet(false),
    m_scaleInCooldown(0),
    m_scaleInCooldownHasBeenSet(false),
    m_disableScaleIn(false),
    m_disableScaleInHasBeenSet(false)
{
  *this = jsonValue;
}

TargetTrackingScalingPolicyConfiguration& TargetTrackingScalingPolicyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetValue"))
  {
    m_targetValue = jsonValue.GetDouble("TargetValue");

    m_targetValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PredefinedMetricSpecification"))
  {
    m_predefinedMetricSpecification = jsonValue.GetObject("PredefinedMetricSpecification");

    m_predefinedMetricSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomizedMetricSpecification"))
  {
    m_customizedMetricSpecification = jsonValue.GetObject("CustomizedMetricSpecification");

    m_customizedMetricSpecificationHasBeenSet = true;
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

  if(jsonValue.ValueExists("DisableScaleIn"))
  {
    m_disableScaleIn = jsonValue.GetBool("DisableScaleIn");

    m_disableScaleInHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetTrackingScalingPolicyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_targetValueHasBeenSet)
  {
   payload.WithDouble("TargetValue", m_targetValue);

  }

  if(m_predefinedMetricSpecificationHasBeenSet)
  {
   payload.WithObject("PredefinedMetricSpecification", m_predefinedMetricSpecification.Jsonize());

  }

  if(m_customizedMetricSpecificationHasBeenSet)
  {
   payload.WithObject("CustomizedMetricSpecification", m_customizedMetricSpecification.Jsonize());

  }

  if(m_scaleOutCooldownHasBeenSet)
  {
   payload.WithInteger("ScaleOutCooldown", m_scaleOutCooldown);

  }

  if(m_scaleInCooldownHasBeenSet)
  {
   payload.WithInteger("ScaleInCooldown", m_scaleInCooldown);

  }

  if(m_disableScaleInHasBeenSet)
  {
   payload.WithBool("DisableScaleIn", m_disableScaleIn);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
