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
