/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/LocationAttributes.h>
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

LocationAttributes::LocationAttributes() : 
    m_locationStateHasBeenSet(false),
    m_stoppedActionsHasBeenSet(false),
    m_updateStatus(LocationUpdateStatus::NOT_SET),
    m_updateStatusHasBeenSet(false)
{
}

LocationAttributes::LocationAttributes(JsonView jsonValue) : 
    m_locationStateHasBeenSet(false),
    m_stoppedActionsHasBeenSet(false),
    m_updateStatus(LocationUpdateStatus::NOT_SET),
    m_updateStatusHasBeenSet(false)
{
  *this = jsonValue;
}

LocationAttributes& LocationAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocationState"))
  {
    m_locationState = jsonValue.GetObject("LocationState");

    m_locationStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StoppedActions"))
  {
    Aws::Utils::Array<JsonView> stoppedActionsJsonList = jsonValue.GetArray("StoppedActions");
    for(unsigned stoppedActionsIndex = 0; stoppedActionsIndex < stoppedActionsJsonList.GetLength(); ++stoppedActionsIndex)
    {
      m_stoppedActions.push_back(FleetActionMapper::GetFleetActionForName(stoppedActionsJsonList[stoppedActionsIndex].AsString()));
    }
    m_stoppedActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateStatus"))
  {
    m_updateStatus = LocationUpdateStatusMapper::GetLocationUpdateStatusForName(jsonValue.GetString("UpdateStatus"));

    m_updateStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue LocationAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_locationStateHasBeenSet)
  {
   payload.WithObject("LocationState", m_locationState.Jsonize());

  }

  if(m_stoppedActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stoppedActionsJsonList(m_stoppedActions.size());
   for(unsigned stoppedActionsIndex = 0; stoppedActionsIndex < stoppedActionsJsonList.GetLength(); ++stoppedActionsIndex)
   {
     stoppedActionsJsonList[stoppedActionsIndex].AsString(FleetActionMapper::GetNameForFleetAction(m_stoppedActions[stoppedActionsIndex]));
   }
   payload.WithArray("StoppedActions", std::move(stoppedActionsJsonList));

  }

  if(m_updateStatusHasBeenSet)
  {
   payload.WithString("UpdateStatus", LocationUpdateStatusMapper::GetNameForLocationUpdateStatus(m_updateStatus));
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
