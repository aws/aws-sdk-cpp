﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/CreateFleetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateFleetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_buildIdHasBeenSet)
  {
   payload.WithString("BuildId", m_buildId);

  }

  if(m_scriptIdHasBeenSet)
  {
   payload.WithString("ScriptId", m_scriptId);

  }

  if(m_serverLaunchPathHasBeenSet)
  {
   payload.WithString("ServerLaunchPath", m_serverLaunchPath);

  }

  if(m_serverLaunchParametersHasBeenSet)
  {
   payload.WithString("ServerLaunchParameters", m_serverLaunchParameters);

  }

  if(m_logPathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logPathsJsonList(m_logPaths.size());
   for(unsigned logPathsIndex = 0; logPathsIndex < logPathsJsonList.GetLength(); ++logPathsIndex)
   {
     logPathsJsonList[logPathsIndex].AsString(m_logPaths[logPathsIndex]);
   }
   payload.WithArray("LogPaths", std::move(logPathsJsonList));

  }

  if(m_eC2InstanceTypeHasBeenSet)
  {
   payload.WithString("EC2InstanceType", EC2InstanceTypeMapper::GetNameForEC2InstanceType(m_eC2InstanceType));
  }

  if(m_eC2InboundPermissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eC2InboundPermissionsJsonList(m_eC2InboundPermissions.size());
   for(unsigned eC2InboundPermissionsIndex = 0; eC2InboundPermissionsIndex < eC2InboundPermissionsJsonList.GetLength(); ++eC2InboundPermissionsIndex)
   {
     eC2InboundPermissionsJsonList[eC2InboundPermissionsIndex].AsObject(m_eC2InboundPermissions[eC2InboundPermissionsIndex].Jsonize());
   }
   payload.WithArray("EC2InboundPermissions", std::move(eC2InboundPermissionsJsonList));

  }

  if(m_newGameSessionProtectionPolicyHasBeenSet)
  {
   payload.WithString("NewGameSessionProtectionPolicy", ProtectionPolicyMapper::GetNameForProtectionPolicy(m_newGameSessionProtectionPolicy));
  }

  if(m_runtimeConfigurationHasBeenSet)
  {
   payload.WithObject("RuntimeConfiguration", m_runtimeConfiguration.Jsonize());

  }

  if(m_resourceCreationLimitPolicyHasBeenSet)
  {
   payload.WithObject("ResourceCreationLimitPolicy", m_resourceCreationLimitPolicy.Jsonize());

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

  if(m_peerVpcAwsAccountIdHasBeenSet)
  {
   payload.WithString("PeerVpcAwsAccountId", m_peerVpcAwsAccountId);

  }

  if(m_peerVpcIdHasBeenSet)
  {
   payload.WithString("PeerVpcId", m_peerVpcId);

  }

  if(m_fleetTypeHasBeenSet)
  {
   payload.WithString("FleetType", FleetTypeMapper::GetNameForFleetType(m_fleetType));
  }

  if(m_instanceRoleArnHasBeenSet)
  {
   payload.WithString("InstanceRoleArn", m_instanceRoleArn);

  }

  if(m_certificateConfigurationHasBeenSet)
  {
   payload.WithObject("CertificateConfiguration", m_certificateConfiguration.Jsonize());

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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_computeTypeHasBeenSet)
  {
   payload.WithString("ComputeType", ComputeTypeMapper::GetNameForComputeType(m_computeType));
  }

  if(m_anywhereConfigurationHasBeenSet)
  {
   payload.WithObject("AnywhereConfiguration", m_anywhereConfiguration.Jsonize());

  }

  if(m_instanceRoleCredentialsProviderHasBeenSet)
  {
   payload.WithString("InstanceRoleCredentialsProvider", InstanceRoleCredentialsProviderMapper::GetNameForInstanceRoleCredentialsProvider(m_instanceRoleCredentialsProvider));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFleetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.CreateFleet"));
  return headers;

}




