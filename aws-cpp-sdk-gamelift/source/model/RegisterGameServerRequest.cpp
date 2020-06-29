/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/RegisterGameServerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterGameServerRequest::RegisterGameServerRequest() : 
    m_gameServerGroupNameHasBeenSet(false),
    m_gameServerIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_connectionInfoHasBeenSet(false),
    m_gameServerDataHasBeenSet(false),
    m_customSortKeyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String RegisterGameServerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gameServerGroupNameHasBeenSet)
  {
   payload.WithString("GameServerGroupName", m_gameServerGroupName);

  }

  if(m_gameServerIdHasBeenSet)
  {
   payload.WithString("GameServerId", m_gameServerId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_connectionInfoHasBeenSet)
  {
   payload.WithString("ConnectionInfo", m_connectionInfo);

  }

  if(m_gameServerDataHasBeenSet)
  {
   payload.WithString("GameServerData", m_gameServerData);

  }

  if(m_customSortKeyHasBeenSet)
  {
   payload.WithString("CustomSortKey", m_customSortKey);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterGameServerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.RegisterGameServer"));
  return headers;

}




