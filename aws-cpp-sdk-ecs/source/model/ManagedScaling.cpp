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

#include <aws/ecs/model/ManagedScaling.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

ManagedScaling::ManagedScaling() : 
    m_status(ManagedScalingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetCapacity(0),
    m_targetCapacityHasBeenSet(false),
    m_minimumScalingStepSize(0),
    m_minimumScalingStepSizeHasBeenSet(false),
    m_maximumScalingStepSize(0),
    m_maximumScalingStepSizeHasBeenSet(false)
{
}

ManagedScaling::ManagedScaling(JsonView jsonValue) : 
    m_status(ManagedScalingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetCapacity(0),
    m_targetCapacityHasBeenSet(false),
    m_minimumScalingStepSize(0),
    m_minimumScalingStepSizeHasBeenSet(false),
    m_maximumScalingStepSize(0),
    m_maximumScalingStepSizeHasBeenSet(false)
{
  *this = jsonValue;
}

ManagedScaling& ManagedScaling::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = ManagedScalingStatusMapper::GetManagedScalingStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetCapacity"))
  {
    m_targetCapacity = jsonValue.GetInteger("targetCapacity");

    m_targetCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimumScalingStepSize"))
  {
    m_minimumScalingStepSize = jsonValue.GetInteger("minimumScalingStepSize");

    m_minimumScalingStepSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maximumScalingStepSize"))
  {
    m_maximumScalingStepSize = jsonValue.GetInteger("maximumScalingStepSize");

    m_maximumScalingStepSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue ManagedScaling::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ManagedScalingStatusMapper::GetNameForManagedScalingStatus(m_status));
  }

  if(m_targetCapacityHasBeenSet)
  {
   payload.WithInteger("targetCapacity", m_targetCapacity);

  }

  if(m_minimumScalingStepSizeHasBeenSet)
  {
   payload.WithInteger("minimumScalingStepSize", m_minimumScalingStepSize);

  }

  if(m_maximumScalingStepSizeHasBeenSet)
  {
   payload.WithInteger("maximumScalingStepSize", m_maximumScalingStepSize);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
