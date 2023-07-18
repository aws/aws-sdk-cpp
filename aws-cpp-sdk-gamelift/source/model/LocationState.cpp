/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/LocationState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

LocationState::LocationState() : 
    m_locationHasBeenSet(false),
    m_status(FleetStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

LocationState::LocationState(JsonView jsonValue) : 
    m_locationHasBeenSet(false),
    m_status(FleetStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

LocationState& LocationState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = FleetStatusMapper::GetFleetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue LocationState::Jsonize() const
{
  JsonValue payload;

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FleetStatusMapper::GetNameForFleetStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
