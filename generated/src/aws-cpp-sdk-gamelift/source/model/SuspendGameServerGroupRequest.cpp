/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/SuspendGameServerGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SuspendGameServerGroupRequest::SuspendGameServerGroupRequest() : 
    m_gameServerGroupNameHasBeenSet(false),
    m_suspendActionsHasBeenSet(false)
{
}

Aws::String SuspendGameServerGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gameServerGroupNameHasBeenSet)
  {
   payload.WithString("GameServerGroupName", m_gameServerGroupName);

  }

  if(m_suspendActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> suspendActionsJsonList(m_suspendActions.size());
   for(unsigned suspendActionsIndex = 0; suspendActionsIndex < suspendActionsJsonList.GetLength(); ++suspendActionsIndex)
   {
     suspendActionsJsonList[suspendActionsIndex].AsString(GameServerGroupActionMapper::GetNameForGameServerGroupAction(m_suspendActions[suspendActionsIndex]));
   }
   payload.WithArray("SuspendActions", std::move(suspendActionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SuspendGameServerGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.SuspendGameServerGroup"));
  return headers;

}




