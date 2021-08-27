/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/SimpleScalingPolicyConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

SimpleScalingPolicyConfiguration::SimpleScalingPolicyConfiguration() : 
    m_adjustmentType(AdjustmentType::NOT_SET),
    m_adjustmentTypeHasBeenSet(false),
    m_scalingAdjustment(0),
    m_scalingAdjustmentHasBeenSet(false),
    m_coolDown(0),
    m_coolDownHasBeenSet(false)
{
}

SimpleScalingPolicyConfiguration::SimpleScalingPolicyConfiguration(JsonView jsonValue) : 
    m_adjustmentType(AdjustmentType::NOT_SET),
    m_adjustmentTypeHasBeenSet(false),
    m_scalingAdjustment(0),
    m_scalingAdjustmentHasBeenSet(false),
    m_coolDown(0),
    m_coolDownHasBeenSet(false)
{
  *this = jsonValue;
}

SimpleScalingPolicyConfiguration& SimpleScalingPolicyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdjustmentType"))
  {
    m_adjustmentType = AdjustmentTypeMapper::GetAdjustmentTypeForName(jsonValue.GetString("AdjustmentType"));

    m_adjustmentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalingAdjustment"))
  {
    m_scalingAdjustment = jsonValue.GetInteger("ScalingAdjustment");

    m_scalingAdjustmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CoolDown"))
  {
    m_coolDown = jsonValue.GetInteger("CoolDown");

    m_coolDownHasBeenSet = true;
  }

  return *this;
}

JsonValue SimpleScalingPolicyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_adjustmentTypeHasBeenSet)
  {
   payload.WithString("AdjustmentType", AdjustmentTypeMapper::GetNameForAdjustmentType(m_adjustmentType));
  }

  if(m_scalingAdjustmentHasBeenSet)
  {
   payload.WithInteger("ScalingAdjustment", m_scalingAdjustment);

  }

  if(m_coolDownHasBeenSet)
  {
   payload.WithInteger("CoolDown", m_coolDown);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
