/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ConnectionPortRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/DeploymentConfiguration.h>
#include <aws/gamelift/model/ProtectionPolicy.h>
#include <aws/gamelift/model/GameSessionCreationLimitPolicy.h>
#include <aws/gamelift/model/LogConfiguration.h>
#include <aws/gamelift/model/IpPermission.h>
#include <aws/gamelift/model/ContainerFleetRemoveAttribute.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class UpdateContainerFleetRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API UpdateContainerFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContainerFleet"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the container fleet to update. You can use either the
     * fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline UpdateContainerFleetRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline UpdateContainerFleetRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline UpdateContainerFleetRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN value of a new game server container group definition to
     * deploy on the fleet. If you're updating the fleet to a specific version of a
     * container group definition, use the ARN value and include the version number. If
     * you're updating the fleet to the latest version of a container group definition,
     * you can use the name value. You can't remove a fleet's game server container
     * group definition, you can only update or replace it with another definition.</p>
     * <p>Update a container group definition by calling
     * <a>UpdateContainerGroupDefinition</a>. This operation creates a
     * <a>ContainerGroupDefinition</a> resource with an incremented version. </p>
     */
    inline const Aws::String& GetGameServerContainerGroupDefinitionName() const{ return m_gameServerContainerGroupDefinitionName; }
    inline bool GameServerContainerGroupDefinitionNameHasBeenSet() const { return m_gameServerContainerGroupDefinitionNameHasBeenSet; }
    inline void SetGameServerContainerGroupDefinitionName(const Aws::String& value) { m_gameServerContainerGroupDefinitionNameHasBeenSet = true; m_gameServerContainerGroupDefinitionName = value; }
    inline void SetGameServerContainerGroupDefinitionName(Aws::String&& value) { m_gameServerContainerGroupDefinitionNameHasBeenSet = true; m_gameServerContainerGroupDefinitionName = std::move(value); }
    inline void SetGameServerContainerGroupDefinitionName(const char* value) { m_gameServerContainerGroupDefinitionNameHasBeenSet = true; m_gameServerContainerGroupDefinitionName.assign(value); }
    inline UpdateContainerFleetRequest& WithGameServerContainerGroupDefinitionName(const Aws::String& value) { SetGameServerContainerGroupDefinitionName(value); return *this;}
    inline UpdateContainerFleetRequest& WithGameServerContainerGroupDefinitionName(Aws::String&& value) { SetGameServerContainerGroupDefinitionName(std::move(value)); return *this;}
    inline UpdateContainerFleetRequest& WithGameServerContainerGroupDefinitionName(const char* value) { SetGameServerContainerGroupDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN value of a new per-instance container group definition to
     * deploy on the fleet. If you're updating the fleet to a specific version of a
     * container group definition, use the ARN value and include the version number. If
     * you're updating the fleet to the latest version of a container group definition,
     * you can use the name value.</p> <p>Update a container group definition by
     * calling <a>UpdateContainerGroupDefinition</a>. This operation creates a
     * <a>ContainerGroupDefinition</a> resource with an incremented version. </p> <p>To
     * remove a fleet's per-instance container group definition, leave this parameter
     * empty and use the parameter <code>RemoveAttributes</code>.</p>
     */
    inline const Aws::String& GetPerInstanceContainerGroupDefinitionName() const{ return m_perInstanceContainerGroupDefinitionName; }
    inline bool PerInstanceContainerGroupDefinitionNameHasBeenSet() const { return m_perInstanceContainerGroupDefinitionNameHasBeenSet; }
    inline void SetPerInstanceContainerGroupDefinitionName(const Aws::String& value) { m_perInstanceContainerGroupDefinitionNameHasBeenSet = true; m_perInstanceContainerGroupDefinitionName = value; }
    inline void SetPerInstanceContainerGroupDefinitionName(Aws::String&& value) { m_perInstanceContainerGroupDefinitionNameHasBeenSet = true; m_perInstanceContainerGroupDefinitionName = std::move(value); }
    inline void SetPerInstanceContainerGroupDefinitionName(const char* value) { m_perInstanceContainerGroupDefinitionNameHasBeenSet = true; m_perInstanceContainerGroupDefinitionName.assign(value); }
    inline UpdateContainerFleetRequest& WithPerInstanceContainerGroupDefinitionName(const Aws::String& value) { SetPerInstanceContainerGroupDefinitionName(value); return *this;}
    inline UpdateContainerFleetRequest& WithPerInstanceContainerGroupDefinitionName(Aws::String&& value) { SetPerInstanceContainerGroupDefinitionName(std::move(value)); return *this;}
    inline UpdateContainerFleetRequest& WithPerInstanceContainerGroupDefinitionName(const char* value) { SetPerInstanceContainerGroupDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times to replicate the game server container group on each
     * fleet instance. By default, Amazon GameLift calculates the maximum number of
     * game server container groups that can fit on each instance. You can remove this
     * property value to use the calculated value, or set it manually. If you set this
     * number manually, Amazon GameLift uses your value as long as it's less than the
     * calculated maximum.</p>
     */
    inline int GetGameServerContainerGroupsPerInstance() const{ return m_gameServerContainerGroupsPerInstance; }
    inline bool GameServerContainerGroupsPerInstanceHasBeenSet() const { return m_gameServerContainerGroupsPerInstanceHasBeenSet; }
    inline void SetGameServerContainerGroupsPerInstance(int value) { m_gameServerContainerGroupsPerInstanceHasBeenSet = true; m_gameServerContainerGroupsPerInstance = value; }
    inline UpdateContainerFleetRequest& WithGameServerContainerGroupsPerInstance(int value) { SetGameServerContainerGroupsPerInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A revised set of port numbers to open on each fleet instance. By default,
     * Amazon GameLift calculates an optimal port range based on your fleet
     * configuration. If you previously set this parameter manually, you can't reset
     * this to use the calculated settings.</p>
     */
    inline const ConnectionPortRange& GetInstanceConnectionPortRange() const{ return m_instanceConnectionPortRange; }
    inline bool InstanceConnectionPortRangeHasBeenSet() const { return m_instanceConnectionPortRangeHasBeenSet; }
    inline void SetInstanceConnectionPortRange(const ConnectionPortRange& value) { m_instanceConnectionPortRangeHasBeenSet = true; m_instanceConnectionPortRange = value; }
    inline void SetInstanceConnectionPortRange(ConnectionPortRange&& value) { m_instanceConnectionPortRangeHasBeenSet = true; m_instanceConnectionPortRange = std::move(value); }
    inline UpdateContainerFleetRequest& WithInstanceConnectionPortRange(const ConnectionPortRange& value) { SetInstanceConnectionPortRange(value); return *this;}
    inline UpdateContainerFleetRequest& WithInstanceConnectionPortRange(ConnectionPortRange&& value) { SetInstanceConnectionPortRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of ports to add to the container fleet's inbound permissions.</p>
     */
    inline const Aws::Vector<IpPermission>& GetInstanceInboundPermissionAuthorizations() const{ return m_instanceInboundPermissionAuthorizations; }
    inline bool InstanceInboundPermissionAuthorizationsHasBeenSet() const { return m_instanceInboundPermissionAuthorizationsHasBeenSet; }
    inline void SetInstanceInboundPermissionAuthorizations(const Aws::Vector<IpPermission>& value) { m_instanceInboundPermissionAuthorizationsHasBeenSet = true; m_instanceInboundPermissionAuthorizations = value; }
    inline void SetInstanceInboundPermissionAuthorizations(Aws::Vector<IpPermission>&& value) { m_instanceInboundPermissionAuthorizationsHasBeenSet = true; m_instanceInboundPermissionAuthorizations = std::move(value); }
    inline UpdateContainerFleetRequest& WithInstanceInboundPermissionAuthorizations(const Aws::Vector<IpPermission>& value) { SetInstanceInboundPermissionAuthorizations(value); return *this;}
    inline UpdateContainerFleetRequest& WithInstanceInboundPermissionAuthorizations(Aws::Vector<IpPermission>&& value) { SetInstanceInboundPermissionAuthorizations(std::move(value)); return *this;}
    inline UpdateContainerFleetRequest& AddInstanceInboundPermissionAuthorizations(const IpPermission& value) { m_instanceInboundPermissionAuthorizationsHasBeenSet = true; m_instanceInboundPermissionAuthorizations.push_back(value); return *this; }
    inline UpdateContainerFleetRequest& AddInstanceInboundPermissionAuthorizations(IpPermission&& value) { m_instanceInboundPermissionAuthorizationsHasBeenSet = true; m_instanceInboundPermissionAuthorizations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of ports to remove from the container fleet's inbound permissions.</p>
     */
    inline const Aws::Vector<IpPermission>& GetInstanceInboundPermissionRevocations() const{ return m_instanceInboundPermissionRevocations; }
    inline bool InstanceInboundPermissionRevocationsHasBeenSet() const { return m_instanceInboundPermissionRevocationsHasBeenSet; }
    inline void SetInstanceInboundPermissionRevocations(const Aws::Vector<IpPermission>& value) { m_instanceInboundPermissionRevocationsHasBeenSet = true; m_instanceInboundPermissionRevocations = value; }
    inline void SetInstanceInboundPermissionRevocations(Aws::Vector<IpPermission>&& value) { m_instanceInboundPermissionRevocationsHasBeenSet = true; m_instanceInboundPermissionRevocations = std::move(value); }
    inline UpdateContainerFleetRequest& WithInstanceInboundPermissionRevocations(const Aws::Vector<IpPermission>& value) { SetInstanceInboundPermissionRevocations(value); return *this;}
    inline UpdateContainerFleetRequest& WithInstanceInboundPermissionRevocations(Aws::Vector<IpPermission>&& value) { SetInstanceInboundPermissionRevocations(std::move(value)); return *this;}
    inline UpdateContainerFleetRequest& AddInstanceInboundPermissionRevocations(const IpPermission& value) { m_instanceInboundPermissionRevocationsHasBeenSet = true; m_instanceInboundPermissionRevocations.push_back(value); return *this; }
    inline UpdateContainerFleetRequest& AddInstanceInboundPermissionRevocations(IpPermission&& value) { m_instanceInboundPermissionRevocationsHasBeenSet = true; m_instanceInboundPermissionRevocations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Instructions for how to deploy updates to a container fleet, if the fleet
     * update initiates a deployment. The deployment configuration lets you determine
     * how to replace fleet instances and what actions to take if the deployment
     * fails.</p>
     */
    inline const DeploymentConfiguration& GetDeploymentConfiguration() const{ return m_deploymentConfiguration; }
    inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }
    inline void SetDeploymentConfiguration(const DeploymentConfiguration& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = value; }
    inline void SetDeploymentConfiguration(DeploymentConfiguration&& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = std::move(value); }
    inline UpdateContainerFleetRequest& WithDeploymentConfiguration(const DeploymentConfiguration& value) { SetDeploymentConfiguration(value); return *this;}
    inline UpdateContainerFleetRequest& WithDeploymentConfiguration(DeploymentConfiguration&& value) { SetDeploymentConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A meaningful description of the container fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateContainerFleetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateContainerFleetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateContainerFleetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Amazon Web Services CloudWatch metric group to add this fleet
     * to. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricGroups() const{ return m_metricGroups; }
    inline bool MetricGroupsHasBeenSet() const { return m_metricGroupsHasBeenSet; }
    inline void SetMetricGroups(const Aws::Vector<Aws::String>& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = value; }
    inline void SetMetricGroups(Aws::Vector<Aws::String>&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = std::move(value); }
    inline UpdateContainerFleetRequest& WithMetricGroups(const Aws::Vector<Aws::String>& value) { SetMetricGroups(value); return *this;}
    inline UpdateContainerFleetRequest& WithMetricGroups(Aws::Vector<Aws::String>&& value) { SetMetricGroups(std::move(value)); return *this;}
    inline UpdateContainerFleetRequest& AddMetricGroups(const Aws::String& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }
    inline UpdateContainerFleetRequest& AddMetricGroups(Aws::String&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(std::move(value)); return *this; }
    inline UpdateContainerFleetRequest& AddMetricGroups(const char* value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The game session protection policy to apply to all new game sessions that are
     * started in this fleet. Game sessions that already exist are not affected. </p>
     */
    inline const ProtectionPolicy& GetNewGameSessionProtectionPolicy() const{ return m_newGameSessionProtectionPolicy; }
    inline bool NewGameSessionProtectionPolicyHasBeenSet() const { return m_newGameSessionProtectionPolicyHasBeenSet; }
    inline void SetNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = std::move(value); }
    inline UpdateContainerFleetRequest& WithNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { SetNewGameSessionProtectionPolicy(value); return *this;}
    inline UpdateContainerFleetRequest& WithNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { SetNewGameSessionProtectionPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A policy that limits the number of game sessions that each individual player
     * can create on instances in this fleet. The limit applies for a specified span of
     * time.</p>
     */
    inline const GameSessionCreationLimitPolicy& GetGameSessionCreationLimitPolicy() const{ return m_gameSessionCreationLimitPolicy; }
    inline bool GameSessionCreationLimitPolicyHasBeenSet() const { return m_gameSessionCreationLimitPolicyHasBeenSet; }
    inline void SetGameSessionCreationLimitPolicy(const GameSessionCreationLimitPolicy& value) { m_gameSessionCreationLimitPolicyHasBeenSet = true; m_gameSessionCreationLimitPolicy = value; }
    inline void SetGameSessionCreationLimitPolicy(GameSessionCreationLimitPolicy&& value) { m_gameSessionCreationLimitPolicyHasBeenSet = true; m_gameSessionCreationLimitPolicy = std::move(value); }
    inline UpdateContainerFleetRequest& WithGameSessionCreationLimitPolicy(const GameSessionCreationLimitPolicy& value) { SetGameSessionCreationLimitPolicy(value); return *this;}
    inline UpdateContainerFleetRequest& WithGameSessionCreationLimitPolicy(GameSessionCreationLimitPolicy&& value) { SetGameSessionCreationLimitPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method for collecting container logs for the fleet. </p>
     */
    inline const LogConfiguration& GetLogConfiguration() const{ return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    inline void SetLogConfiguration(const LogConfiguration& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }
    inline void SetLogConfiguration(LogConfiguration&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }
    inline UpdateContainerFleetRequest& WithLogConfiguration(const LogConfiguration& value) { SetLogConfiguration(value); return *this;}
    inline UpdateContainerFleetRequest& WithLogConfiguration(LogConfiguration&& value) { SetLogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, this update removes a fleet's per-instance container group
     * definition. You can't remove a fleet's game server container group
     * definition.</p>
     */
    inline const Aws::Vector<ContainerFleetRemoveAttribute>& GetRemoveAttributes() const{ return m_removeAttributes; }
    inline bool RemoveAttributesHasBeenSet() const { return m_removeAttributesHasBeenSet; }
    inline void SetRemoveAttributes(const Aws::Vector<ContainerFleetRemoveAttribute>& value) { m_removeAttributesHasBeenSet = true; m_removeAttributes = value; }
    inline void SetRemoveAttributes(Aws::Vector<ContainerFleetRemoveAttribute>&& value) { m_removeAttributesHasBeenSet = true; m_removeAttributes = std::move(value); }
    inline UpdateContainerFleetRequest& WithRemoveAttributes(const Aws::Vector<ContainerFleetRemoveAttribute>& value) { SetRemoveAttributes(value); return *this;}
    inline UpdateContainerFleetRequest& WithRemoveAttributes(Aws::Vector<ContainerFleetRemoveAttribute>&& value) { SetRemoveAttributes(std::move(value)); return *this;}
    inline UpdateContainerFleetRequest& AddRemoveAttributes(const ContainerFleetRemoveAttribute& value) { m_removeAttributesHasBeenSet = true; m_removeAttributes.push_back(value); return *this; }
    inline UpdateContainerFleetRequest& AddRemoveAttributes(ContainerFleetRemoveAttribute&& value) { m_removeAttributesHasBeenSet = true; m_removeAttributes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_gameServerContainerGroupDefinitionName;
    bool m_gameServerContainerGroupDefinitionNameHasBeenSet = false;

    Aws::String m_perInstanceContainerGroupDefinitionName;
    bool m_perInstanceContainerGroupDefinitionNameHasBeenSet = false;

    int m_gameServerContainerGroupsPerInstance;
    bool m_gameServerContainerGroupsPerInstanceHasBeenSet = false;

    ConnectionPortRange m_instanceConnectionPortRange;
    bool m_instanceConnectionPortRangeHasBeenSet = false;

    Aws::Vector<IpPermission> m_instanceInboundPermissionAuthorizations;
    bool m_instanceInboundPermissionAuthorizationsHasBeenSet = false;

    Aws::Vector<IpPermission> m_instanceInboundPermissionRevocations;
    bool m_instanceInboundPermissionRevocationsHasBeenSet = false;

    DeploymentConfiguration m_deploymentConfiguration;
    bool m_deploymentConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricGroups;
    bool m_metricGroupsHasBeenSet = false;

    ProtectionPolicy m_newGameSessionProtectionPolicy;
    bool m_newGameSessionProtectionPolicyHasBeenSet = false;

    GameSessionCreationLimitPolicy m_gameSessionCreationLimitPolicy;
    bool m_gameSessionCreationLimitPolicyHasBeenSet = false;

    LogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    Aws::Vector<ContainerFleetRemoveAttribute> m_removeAttributes;
    bool m_removeAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
