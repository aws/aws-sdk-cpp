/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ResumeGameServerGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ResumeGameServerGroupRequest::ResumeGameServerGroupRequest() : 
    m_gameServerGroupNameHasBeenSet(false),
    m_resumeActionsHasBeenSet(false)
{
}

Aws::String ResumeGameServerGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gameServerGroupNameHasBeenSet)
  {
   payload.WithString("GameServerGroupName", m_gameServerGroupName);

  }

  if(m_resumeActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resumeActionsJsonList(m_resumeActions.size());
   for(unsigned resumeActionsIndex = 0; resumeActionsIndex < resumeActionsJsonList.GetLength(); ++resumeActionsIndex)
   {
     resumeActionsJsonList[resumeActionsIndex].AsString(GameServerGroupActionMapper::GetNameForGameServerGroupAction(m_resumeActions[resumeActionsIndex]));
   }
   payload.WithArray("ResumeActions", std::move(resumeActionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ResumeGameServerGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.ResumeGameServerGroup"));
  return headers;

}




