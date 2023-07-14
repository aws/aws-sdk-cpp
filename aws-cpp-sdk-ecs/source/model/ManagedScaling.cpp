/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_maximumScalingStepSizeHasBeenSet(false),
    m_instanceWarmupPeriod(0),
    m_instanceWarmupPeriodHasBeenSet(false)
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
    m_maximumScalingStepSizeHasBeenSet(false),
    m_instanceWarmupPeriod(0),
    m_instanceWarmupPeriodHasBeenSet(false)
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

  if(jsonValue.ValueExists("instanceWarmupPeriod"))
  {
    m_instanceWarmupPeriod = jsonValue.GetInteger("instanceWarmupPeriod");

    m_instanceWarmupPeriodHasBeenSet = true;
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

  if(m_instanceWarmupPeriodHasBeenSet)
  {
   payload.WithInteger("instanceWarmupPeriod", m_instanceWarmupPeriod);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
