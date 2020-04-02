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
    m_customSortKeyHasBeenSet(false),
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

  if(m_customSortKeyHasBeenSet)
  {
   payload.WithString("CustomSortKey", m_customSortKey);

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




