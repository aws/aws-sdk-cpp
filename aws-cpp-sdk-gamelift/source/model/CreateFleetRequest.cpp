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

#include <aws/gamelift/model/CreateFleetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFleetRequest::CreateFleetRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_buildIdHasBeenSet(false),
    m_scriptIdHasBeenSet(false),
    m_serverLaunchPathHasBeenSet(false),
    m_serverLaunchParametersHasBeenSet(false),
    m_logPathsHasBeenSet(false),
    m_eC2InstanceType(EC2InstanceType::NOT_SET),
    m_eC2InstanceTypeHasBeenSet(false),
    m_eC2InboundPermissionsHasBeenSet(false),
    m_newGameSessionProtectionPolicy(ProtectionPolicy::NOT_SET),
    m_newGameSessionProtectionPolicyHasBeenSet(false),
    m_runtimeConfigurationHasBeenSet(false),
    m_resourceCreationLimitPolicyHasBeenSet(false),
    m_metricGroupsHasBeenSet(false),
    m_peerVpcAwsAccountIdHasBeenSet(false),
    m_peerVpcIdHasBeenSet(false),
    m_fleetType(FleetType::NOT_SET),
    m_fleetTypeHasBeenSet(false),
    m_instanceRoleArnHasBeenSet(false)
{
}

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
   Array<JsonValue> logPathsJsonList(m_logPaths.size());
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
   Array<JsonValue> eC2InboundPermissionsJsonList(m_eC2InboundPermissions.size());
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
   Array<JsonValue> metricGroupsJsonList(m_metricGroups.size());
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFleetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.CreateFleet"));
  return headers;

}




