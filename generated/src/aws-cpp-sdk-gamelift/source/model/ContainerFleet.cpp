/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerFleet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

ContainerFleet::ContainerFleet(JsonView jsonValue)
{
  *this = jsonValue;
}

ContainerFleet& ContainerFleet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FleetId"))
  {
    m_fleetId = jsonValue.GetString("FleetId");
    m_fleetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FleetArn"))
  {
    m_fleetArn = jsonValue.GetString("FleetArn");
    m_fleetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FleetRoleArn"))
  {
    m_fleetRoleArn = jsonValue.GetString("FleetRoleArn");
    m_fleetRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GameServerContainerGroupDefinitionName"))
  {
    m_gameServerContainerGroupDefinitionName = jsonValue.GetString("GameServerContainerGroupDefinitionName");
    m_gameServerContainerGroupDefinitionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GameServerContainerGroupDefinitionArn"))
  {
    m_gameServerContainerGroupDefinitionArn = jsonValue.GetString("GameServerContainerGroupDefinitionArn");
    m_gameServerContainerGroupDefinitionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PerInstanceContainerGroupDefinitionName"))
  {
    m_perInstanceContainerGroupDefinitionName = jsonValue.GetString("PerInstanceContainerGroupDefinitionName");
    m_perInstanceContainerGroupDefinitionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PerInstanceContainerGroupDefinitionArn"))
  {
    m_perInstanceContainerGroupDefinitionArn = jsonValue.GetString("PerInstanceContainerGroupDefinitionArn");
    m_perInstanceContainerGroupDefinitionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceConnectionPortRange"))
  {
    m_instanceConnectionPortRange = jsonValue.GetObject("InstanceConnectionPortRange");
    m_instanceConnectionPortRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceInboundPermissions"))
  {
    Aws::Utils::Array<JsonView> instanceInboundPermissionsJsonList = jsonValue.GetArray("InstanceInboundPermissions");
    for(unsigned instanceInboundPermissionsIndex = 0; instanceInboundPermissionsIndex < instanceInboundPermissionsJsonList.GetLength(); ++instanceInboundPermissionsIndex)
    {
      m_instanceInboundPermissions.push_back(instanceInboundPermissionsJsonList[instanceInboundPermissionsIndex].AsObject());
    }
    m_instanceInboundPermissionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GameServerContainerGroupsPerInstance"))
  {
    m_gameServerContainerGroupsPerInstance = jsonValue.GetInteger("GameServerContainerGroupsPerInstance");
    m_gameServerContainerGroupsPerInstanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaximumGameServerContainerGroupsPerInstance"))
  {
    m_maximumGameServerContainerGroupsPerInstance = jsonValue.GetInteger("MaximumGameServerContainerGroupsPerInstance");
    m_maximumGameServerContainerGroupsPerInstanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BillingType"))
  {
    m_billingType = ContainerFleetBillingTypeMapper::GetContainerFleetBillingTypeForName(jsonValue.GetString("BillingType"));
    m_billingTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricGroups"))
  {
    Aws::Utils::Array<JsonView> metricGroupsJsonList = jsonValue.GetArray("MetricGroups");
    for(unsigned metricGroupsIndex = 0; metricGroupsIndex < metricGroupsJsonList.GetLength(); ++metricGroupsIndex)
    {
      m_metricGroups.push_back(metricGroupsJsonList[metricGroupsIndex].AsString());
    }
    m_metricGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NewGameSessionProtectionPolicy"))
  {
    m_newGameSessionProtectionPolicy = ProtectionPolicyMapper::GetProtectionPolicyForName(jsonValue.GetString("NewGameSessionProtectionPolicy"));
    m_newGameSessionProtectionPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GameSessionCreationLimitPolicy"))
  {
    m_gameSessionCreationLimitPolicy = jsonValue.GetObject("GameSessionCreationLimitPolicy");
    m_gameSessionCreationLimitPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ContainerFleetStatusMapper::GetContainerFleetStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeploymentDetails"))
  {
    m_deploymentDetails = jsonValue.GetObject("DeploymentDetails");
    m_deploymentDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogConfiguration"))
  {
    m_logConfiguration = jsonValue.GetObject("LogConfiguration");
    m_logConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LocationAttributes"))
  {
    Aws::Utils::Array<JsonView> locationAttributesJsonList = jsonValue.GetArray("LocationAttributes");
    for(unsigned locationAttributesIndex = 0; locationAttributesIndex < locationAttributesJsonList.GetLength(); ++locationAttributesIndex)
    {
      m_locationAttributes.push_back(locationAttributesJsonList[locationAttributesIndex].AsObject());
    }
    m_locationAttributesHasBeenSet = true;
  }
  return *this;
}

JsonValue ContainerFleet::Jsonize() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  if(m_fleetRoleArnHasBeenSet)
  {
   payload.WithString("FleetRoleArn", m_fleetRoleArn);

  }

  if(m_gameServerContainerGroupDefinitionNameHasBeenSet)
  {
   payload.WithString("GameServerContainerGroupDefinitionName", m_gameServerContainerGroupDefinitionName);

  }

  if(m_gameServerContainerGroupDefinitionArnHasBeenSet)
  {
   payload.WithString("GameServerContainerGroupDefinitionArn", m_gameServerContainerGroupDefinitionArn);

  }

  if(m_perInstanceContainerGroupDefinitionNameHasBeenSet)
  {
   payload.WithString("PerInstanceContainerGroupDefinitionName", m_perInstanceContainerGroupDefinitionName);

  }

  if(m_perInstanceContainerGroupDefinitionArnHasBeenSet)
  {
   payload.WithString("PerInstanceContainerGroupDefinitionArn", m_perInstanceContainerGroupDefinitionArn);

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

  if(m_maximumGameServerContainerGroupsPerInstanceHasBeenSet)
  {
   payload.WithInteger("MaximumGameServerContainerGroupsPerInstance", m_maximumGameServerContainerGroupsPerInstance);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_billingTypeHasBeenSet)
  {
   payload.WithString("BillingType", ContainerFleetBillingTypeMapper::GetNameForContainerFleetBillingType(m_billingType));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
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

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ContainerFleetStatusMapper::GetNameForContainerFleetStatus(m_status));
  }

  if(m_deploymentDetailsHasBeenSet)
  {
   payload.WithObject("DeploymentDetails", m_deploymentDetails.Jsonize());

  }

  if(m_logConfigurationHasBeenSet)
  {
   payload.WithObject("LogConfiguration", m_logConfiguration.Jsonize());

  }

  if(m_locationAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> locationAttributesJsonList(m_locationAttributes.size());
   for(unsigned locationAttributesIndex = 0; locationAttributesIndex < locationAttributesJsonList.GetLength(); ++locationAttributesIndex)
   {
     locationAttributesJsonList[locationAttributesIndex].AsObject(m_locationAttributes[locationAttributesIndex].Jsonize());
   }
   payload.WithArray("LocationAttributes", std::move(locationAttributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
