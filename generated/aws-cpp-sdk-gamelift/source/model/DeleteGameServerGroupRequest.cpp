/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DeleteGameServerGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteGameServerGroupRequest::DeleteGameServerGroupRequest() : 
    m_gameServerGroupNameHasBeenSet(false),
    m_deleteOption(GameServerGroupDeleteOption::NOT_SET),
    m_deleteOptionHasBeenSet(false)
{
}

Aws::String DeleteGameServerGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gameServerGroupNameHasBeenSet)
  {
   payload.WithString("GameServerGroupName", m_gameServerGroupName);

  }

  if(m_deleteOptionHasBeenSet)
  {
   payload.WithString("DeleteOption", GameServerGroupDeleteOptionMapper::GetNameForGameServerGroupDeleteOption(m_deleteOption));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteGameServerGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.DeleteGameServerGroup"));
  return headers;

}




