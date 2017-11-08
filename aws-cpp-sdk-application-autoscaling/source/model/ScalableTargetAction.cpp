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

#include <aws/application-autoscaling/model/ScalableTargetAction.h>
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

ScalableTargetAction::ScalableTargetAction() : 
    m_minCapacity(0),
    m_minCapacityHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false)
{
}

ScalableTargetAction::ScalableTargetAction(const JsonValue& jsonValue) : 
    m_minCapacity(0),
    m_minCapacityHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false)
{
  *this = jsonValue;
}

ScalableTargetAction& ScalableTargetAction::operator =(const JsonValue& jsonValue)
{
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

  return *this;
}

JsonValue ScalableTargetAction::Jsonize() const
{
  JsonValue payload;

  if(m_minCapacityHasBeenSet)
  {
   payload.WithInteger("MinCapacity", m_minCapacity);

  }

  if(m_maxCapacityHasBeenSet)
  {
   payload.WithInteger("MaxCapacity", m_maxCapacity);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
