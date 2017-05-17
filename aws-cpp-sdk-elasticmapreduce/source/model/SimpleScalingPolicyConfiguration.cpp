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

SimpleScalingPolicyConfiguration::SimpleScalingPolicyConfiguration(const JsonValue& jsonValue) : 
    m_adjustmentType(AdjustmentType::NOT_SET),
    m_adjustmentTypeHasBeenSet(false),
    m_scalingAdjustment(0),
    m_scalingAdjustmentHasBeenSet(false),
    m_coolDown(0),
    m_coolDownHasBeenSet(false)
{
  *this = jsonValue;
}

SimpleScalingPolicyConfiguration& SimpleScalingPolicyConfiguration::operator =(const JsonValue& jsonValue)
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