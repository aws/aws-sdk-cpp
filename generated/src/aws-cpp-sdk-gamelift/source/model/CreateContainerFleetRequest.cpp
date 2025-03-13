/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/CreateContainerFleetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateContainerFleetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetRoleArnHasBeenSet)
  {
   payload.WithString("FleetRoleArn", m_fleetRoleArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_gameServerContainerGroupDefinitionNameHasBeenSet)
  {
   payload.WithString("GameServerContainerGroupDefinitionName", m_gameServerContainerGroupDefinitionName);

  }

  if(m_perInstanceContainerGroupDefinitionNameHasBeenSet)
  {
   payload.WithString("PerInstanceContainerGroupDefinitionName", m_perInstanceContainerGroupDefinitionName);

  }

  if(m_instanceConnectionPortRangeHasBeenSet)
  {
   payload.WithObject("InstanceConnectionPortRange", m_instanceConnectionPortRange.Jsonize());

  }

  if(m_instanceInboundPermissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceInboundPermissionsJsonList(m_instanceInboundPermissions.size());
   for(unsigned instanceInboundPermissionsIndex = 0; instanceInboundPermissionsIndex < instanceInboundPermissionsJsonList.GetLength(); ++instanceInboundPermissionsIndex)
   {
     instanceInboundPermissionsJsonList[instanceInboundPermissionsIndex].AsObject(m_instanceInboundPermissions[instanceInboundPermissionsIndex].Jsonize());
   }
   payload.WithArray("InstanceInboundPermissions", std::move(instanceInboundPermissionsJsonList));

  }

  if(m_gameServerContainerGroupsPerInstanceHasBeenSet)
  {
   payload.WithInteger("GameServerContainerGroupsPerInstance", m_gameServerContainerGroupsPerInstance);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_billingTypeHasBeenSet)
  {
   payload.WithString("BillingType", ContainerFleetBillingTypeMapper::GetNameForContainerFleetBillingType(m_billingType));
  }

  if(m_locationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> locationsJsonList(m_locations.size());
   for(unsigned locationsIndex = 0; locationsIndex < locationsJsonList.GetLength(); ++locationsIndex)
   {
     locationsJsonList[locationsIndex].AsObject(m_locations[locationsIndex].Jsonize());
   }
   payload.WithArray("Locations", std::move(locationsJsonList));

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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateContainerFleetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.CreateContainerFleet"));
  return headers;

}




