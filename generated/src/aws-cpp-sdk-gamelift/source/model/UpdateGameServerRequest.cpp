/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/UpdateGameServerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGameServerRequest::UpdateGameServerRequest() : 
    m_gameServerGroupNameHasBeenSet(false),
    m_gameServerIdHasBeenSet(false),
    m_gameServerDataHasBeenSet(false),
    m_utilizationStatus(GameServerUtilizationStatus::NOT_SET),
    m_utilizationStatusHasBeenSet(false),
    m_healthCheck(GameServerHealthCheck::NOT_SET),
    m_healthCheckHasBeenSet(false)
{
}

Aws::String UpdateGameServerRequest::SerializePayload() const
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

  if(m_gameServerDataHasBeenSet)
  {
   payload.WithString("GameServerData", m_gameServerData);

  }

  if(m_utilizationStatusHasBeenSet)
  {
   payload.WithString("UtilizationStatus", GameServerUtilizationStatusMapper::GetNameForGameServerUtilizationStatus(m_utilizationStatus));
  }

  if(m_healthCheckHasBeenSet)
  {
   payload.WithString("HealthCheck", GameServerHealthCheckMapper::GetNameForGameServerHealthCheck(m_healthCheck));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateGameServerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.UpdateGameServer"));
  return headers;

}




