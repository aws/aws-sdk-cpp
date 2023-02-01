/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/UpdateGameServerGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGameServerGroupRequest::UpdateGameServerGroupRequest() : 
    m_gameServerGroupNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_instanceDefinitionsHasBeenSet(false),
    m_gameServerProtectionPolicy(GameServerProtectionPolicy::NOT_SET),
    m_gameServerProtectionPolicyHasBeenSet(false),
    m_balancingStrategy(BalancingStrategy::NOT_SET),
    m_balancingStrategyHasBeenSet(false)
{
}

Aws::String UpdateGameServerGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gameServerGroupNameHasBeenSet)
  {
   payload.WithString("GameServerGroupName", m_gameServerGroupName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_instanceDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceDefinitionsJsonList(m_instanceDefinitions.size());
   for(unsigned instanceDefinitionsIndex = 0; instanceDefinitionsIndex < instanceDefinitionsJsonList.GetLength(); ++instanceDefinitionsIndex)
   {
     instanceDefinitionsJsonList[instanceDefinitionsIndex].AsObject(m_instanceDefinitions[instanceDefinitionsIndex].Jsonize());
   }
   payload.WithArray("InstanceDefinitions", std::move(instanceDefinitionsJsonList));

  }

  if(m_gameServerProtectionPolicyHasBeenSet)
  {
   payload.WithString("GameServerProtectionPolicy", GameServerProtectionPolicyMapper::GetNameForGameServerProtectionPolicy(m_gameServerProtectionPolicy));
  }

  if(m_balancingStrategyHasBeenSet)
  {
   payload.WithString("BalancingStrategy", BalancingStrategyMapper::GetNameForBalancingStrategy(m_balancingStrategy));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateGameServerGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.UpdateGameServerGroup"));
  return headers;

}




