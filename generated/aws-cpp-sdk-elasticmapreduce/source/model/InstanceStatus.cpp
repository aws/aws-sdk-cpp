/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/InstanceStatus.h>
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

InstanceStatus::InstanceStatus() : 
    m_state(InstanceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false),
    m_timelineHasBeenSet(false)
{
}

InstanceStatus::InstanceStatus(JsonView jsonValue) : 
    m_state(InstanceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false),
    m_timelineHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceStatus& InstanceStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = InstanceStateMapper::GetInstanceStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateChangeReason"))
  {
    m_stateChangeReason = jsonValue.GetObject("StateChangeReason");

    m_stateChangeReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timeline"))
  {
    m_timeline = jsonValue.GetObject("Timeline");

    m_timelineHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceStatus::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", InstanceStateMapper::GetNameForInstanceState(m_state));
  }

  if(m_stateChangeReasonHasBeenSet)
  {
   payload.WithObject("StateChangeReason", m_stateChangeReason.Jsonize());

  }

  if(m_timelineHasBeenSet)
  {
   payload.WithObject("Timeline", m_timeline.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
