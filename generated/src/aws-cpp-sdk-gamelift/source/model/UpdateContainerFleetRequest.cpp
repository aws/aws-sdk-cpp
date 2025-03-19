/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/UpdateContainerFleetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateContainerFleetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_gameServerContainerGroupDefinitionNameHasBeenSet)
  {
   payload.WithString("GameServerContainerGroupDefinitionName", m_gameServerContainerGroupDefinitionName);

  }

  if(m_perInstanceContainerGroupDefinitionNameHasBeenSet)
  {
   payload.WithString("PerInstanceContainerGroupDefinitionName", m_perInstanceContainerGroupDefinitionName);

  }

  if(m_gameServerContainerGroupsPerInstanceHasBeenSet)
  {
   payload.WithInteger("GameServerContainerGroupsPerInstance", m_gameServerContainerGroupsPerInstance);

  }

  if(m_instanceConnectionPortRangeHasBeenSet)
  {
   payload.WithObject("InstanceConnectionPortRange", m_instanceConnectionPortRange.Jsonize());

  }

  if(m_instanceInboundPermissionAuthorizationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceInboundPermissionAuthorizationsJsonList(m_instanceInboundPermissionAuthorizations.size());
   for(unsigned instanceInboundPermissionAuthorizationsIndex = 0; instanceInboundPermissionAuthorizationsIndex < instanceInboundPermissionAuthorizationsJsonList.GetLength(); ++instanceInboundPermissionAuthorizationsIndex)
   {
     instanceInboundPermissionAuthorizationsJsonList[instanceInboundPermissionAuthorizationsIndex].AsObject(m_instanceInboundPermissionAuthorizations[instanceInboundPermissionAuthorizationsIndex].Jsonize());
   }
   payload.WithArray("InstanceInboundPermissionAuthorizations", std::move(instanceInboundPermissionAuthorizationsJsonList));

  }

  if(m_instanceInboundPermissionRevocationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceInboundPermissionRevocationsJsonList(m_instanceInboundPermissionRevocations.size());
   for(unsigned instanceInboundPermissionRevocationsIndex = 0; instanceInboundPermissionRevocationsIndex < instanceInboundPermissionRevocationsJsonList.GetLength(); ++instanceInboundPermissionRevocationsIndex)
   {
     instanceInboundPermissionRevocationsJsonList[instanceInboundPermissionRevocationsIndex].AsObject(m_instanceInboundPermissionRevocations[instanceInboundPermissionRevocationsIndex].Jsonize());
   }
   payload.WithArray("InstanceInboundPermissionRevocations", std::move(instanceInboundPermissionRevocationsJsonList));

  }

  if(m_deploymentConfigurationHasBeenSet)
  {
   payload.WithObject("DeploymentConfiguration", m_deploymentConfiguration.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_metricGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricGroupsJsonList(m_metricGroups.size());
   for(unsigned metricGroupsIndex = 0; metricGroupsIndex < metricGroupsJsonList.GetLength(); ++metricGroupsIndex)
   {
     metricGroupsJsonList[metricGroupsIndex].AsString(m_metricGroups[metricGroupsIndex]);
   }
   payload.WithArray("MetricGroups", std::move(metricGroupsJsonList));

  }

  if(m_newGameSessionProtectionPolicyHasBeenSet)
  {
   payload.WithString("NewGameSessionProtectionPolicy", ProtectionPolicyMapper::GetNameForProtectionPolicy(m_newGameSessionProtectionPolicy));
  }

  if(m_gameSessionCreationLimitPolicyHasBeenSet)
  {
   payload.WithObject("GameSessionCreationLimitPolicy", m_gameSessionCreationLimitPolicy.Jsonize());

  }

  if(m_logConfigurationHasBeenSet)
  {
   payload.WithObject("LogConfiguration", m_logConfiguration.Jsonize());

  }

  if(m_removeAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeAttributesJsonList(m_removeAttributes.size());
   for(unsigned removeAttributesIndex = 0; removeAttributesIndex < removeAttributesJsonList.GetLength(); ++removeAttributesIndex)
   {
     removeAttributesJsonList[removeAttributesIndex].AsString(ContainerFleetRemoveAttributeMapper::GetNameForContainerFleetRemoveAttribute(m_removeAttributes[removeAttributesIndex]));
   }
   payload.WithArray("RemoveAttributes", std::move(removeAttributesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateContainerFleetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.UpdateContainerFleet"));
  return headers;

}




