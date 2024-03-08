/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/TargetTrackingScalingPolicyConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

TargetTrackingScalingPolicyConfiguration::TargetTrackingScalingPolicyConfiguration() : 
    m_disableScaleIn(false),
    m_disableScaleInHasBeenSet(false),
    m_scaleInCooldown(0),
    m_scaleInCooldownHasBeenSet(false),
    m_scaleOutCooldown(0),
    m_scaleOutCooldownHasBeenSet(false),
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false)
{
}

TargetTrackingScalingPolicyConfiguration::TargetTrackingScalingPolicyConfiguration(JsonView jsonValue) : 
    m_disableScaleIn(false),
    m_disableScaleInHasBeenSet(false),
    m_scaleInCooldown(0),
    m_scaleInCooldownHasBeenSet(false),
    m_scaleOutCooldown(0),
    m_scaleOutCooldownHasBeenSet(false),
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false)
{
  *this = jsonValue;
}

TargetTrackingScalingPolicyConfiguration& TargetTrackingScalingPolicyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("disableScaleIn"))
  {
    m_disableScaleIn = jsonValue.GetBool("disableScaleIn");

    m_disableScaleInHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scaleInCooldown"))
  {
    m_scaleInCooldown = jsonValue.GetInteger("scaleInCooldown");

    m_scaleInCooldownHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scaleOutCooldown"))
  {
    m_scaleOutCooldown = jsonValue.GetInteger("scaleOutCooldown");

    m_scaleOutCooldownHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetValue"))
  {
    m_targetValue = jsonValue.GetDouble("targetValue");

    m_targetValueHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetTrackingScalingPolicyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_disableScaleInHasBeenSet)
  {
   payload.WithBool("disableScaleIn", m_disableScaleIn);

  }

  if(m_scaleInCooldownHasBeenSet)
  {
   payload.WithInteger("scaleInCooldown", m_scaleInCooldown);

  }

  if(m_scaleOutCooldownHasBeenSet)
  {
   payload.WithInteger("scaleOutCooldown", m_scaleOutCooldown);

  }

  if(m_targetValueHasBeenSet)
  {
   payload.WithDouble("targetValue", m_targetValue);

  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
