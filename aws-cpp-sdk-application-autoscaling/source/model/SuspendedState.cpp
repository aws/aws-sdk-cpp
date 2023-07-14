/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/SuspendedState.h>
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

SuspendedState::SuspendedState() : 
    m_dynamicScalingInSuspended(false),
    m_dynamicScalingInSuspendedHasBeenSet(false),
    m_dynamicScalingOutSuspended(false),
    m_dynamicScalingOutSuspendedHasBeenSet(false),
    m_scheduledScalingSuspended(false),
    m_scheduledScalingSuspendedHasBeenSet(false)
{
}

SuspendedState::SuspendedState(JsonView jsonValue) : 
    m_dynamicScalingInSuspended(false),
    m_dynamicScalingInSuspendedHasBeenSet(false),
    m_dynamicScalingOutSuspended(false),
    m_dynamicScalingOutSuspendedHasBeenSet(false),
    m_scheduledScalingSuspended(false),
    m_scheduledScalingSuspendedHasBeenSet(false)
{
  *this = jsonValue;
}

SuspendedState& SuspendedState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DynamicScalingInSuspended"))
  {
    m_dynamicScalingInSuspended = jsonValue.GetBool("DynamicScalingInSuspended");

    m_dynamicScalingInSuspendedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DynamicScalingOutSuspended"))
  {
    m_dynamicScalingOutSuspended = jsonValue.GetBool("DynamicScalingOutSuspended");

    m_dynamicScalingOutSuspendedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduledScalingSuspended"))
  {
    m_scheduledScalingSuspended = jsonValue.GetBool("ScheduledScalingSuspended");

    m_scheduledScalingSuspendedHasBeenSet = true;
  }

  return *this;
}

JsonValue SuspendedState::Jsonize() const
{
  JsonValue payload;

  if(m_dynamicScalingInSuspendedHasBeenSet)
  {
   payload.WithBool("DynamicScalingInSuspended", m_dynamicScalingInSuspended);

  }

  if(m_dynamicScalingOutSuspendedHasBeenSet)
  {
   payload.WithBool("DynamicScalingOutSuspended", m_dynamicScalingOutSuspended);

  }

  if(m_scheduledScalingSuspendedHasBeenSet)
  {
   payload.WithBool("ScheduledScalingSuspended", m_scheduledScalingSuspended);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
