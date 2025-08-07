/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/LocationState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{

LocationState::LocationState(JsonView jsonValue)
{
  *this = jsonValue;
}

LocationState& LocationState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocationName"))
  {
    m_locationName = jsonValue.GetString("LocationName");
    m_locationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StreamGroupLocationStatusMapper::GetStreamGroupLocationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AlwaysOnCapacity"))
  {
    m_alwaysOnCapacity = jsonValue.GetInteger("AlwaysOnCapacity");
    m_alwaysOnCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OnDemandCapacity"))
  {
    m_onDemandCapacity = jsonValue.GetInteger("OnDemandCapacity");
    m_onDemandCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequestedCapacity"))
  {
    m_requestedCapacity = jsonValue.GetInteger("RequestedCapacity");
    m_requestedCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AllocatedCapacity"))
  {
    m_allocatedCapacity = jsonValue.GetInteger("AllocatedCapacity");
    m_allocatedCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdleCapacity"))
  {
    m_idleCapacity = jsonValue.GetInteger("IdleCapacity");
    m_idleCapacityHasBeenSet = true;
  }
  return *this;
}

JsonValue LocationState::Jsonize() const
{
  JsonValue payload;

  if(m_locationNameHasBeenSet)
  {
   payload.WithString("LocationName", m_locationName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StreamGroupLocationStatusMapper::GetNameForStreamGroupLocationStatus(m_status));
  }

  if(m_alwaysOnCapacityHasBeenSet)
  {
   payload.WithInteger("AlwaysOnCapacity", m_alwaysOnCapacity);

  }

  if(m_onDemandCapacityHasBeenSet)
  {
   payload.WithInteger("OnDemandCapacity", m_onDemandCapacity);

  }

  if(m_requestedCapacityHasBeenSet)
  {
   payload.WithInteger("RequestedCapacity", m_requestedCapacity);

  }

  if(m_allocatedCapacityHasBeenSet)
  {
   payload.WithInteger("AllocatedCapacity", m_allocatedCapacity);

  }

  if(m_idleCapacityHasBeenSet)
  {
   payload.WithInteger("IdleCapacity", m_idleCapacity);

  }

  return payload;
}

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
