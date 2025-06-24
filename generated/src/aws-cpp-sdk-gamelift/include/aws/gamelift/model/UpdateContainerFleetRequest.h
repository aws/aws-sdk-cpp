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
    AWS_GAMELIFT_API UpdateContainerFleetRequest() = default;

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
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    UpdateContainerFleetRequest& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN value of a new game server container group definition to
     * deploy on the fleet. If you're updating the fleet to a specific version of a
     * container group definition, use the ARN value and include the version number. If
     * you're updating the fleet to the latest version of a container group definition,
     * you can use the name value. You can't remove a fleet's game server container
     * group definition, you can only update or replace it with another definition.</p>
     * <p>Update a container group definition by calling <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateContainerGroupDefinition.html">UpdateContainerGroupDefinition</a>.
     * This operation creates a <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ContainerGroupDefinition.html">ContainerGroupDefinition</a>
     * resource with an incremented version. </p>
     */
    inline const Aws::String& GetGameServerContainerGroupDefinitionName() const { return m_gameServerContainerGroupDefinitionName; }
    inline bool GameServerContainerGroupDefinitionNameHasBeenSet() const { return m_gameServerContainerGroupDefinitionNameHasBeenSet; }
    template<typename GameServerContainerGroupDefinitionNameT = Aws::String>
    void SetGameServerContainerGroupDefinitionName(GameServerContainerGroupDefinitionNameT&& value) { m_gameServerContainerGroupDefinitionNameHasBeenSet = true; m_gameServerContainerGroupDefinitionName = std::forward<GameServerContainerGroupDefinitionNameT>(value); }
    template<typename GameServerContainerGroupDefinitionNameT = Aws::String>
    UpdateContainerFleetRequest& WithGameServerContainerGroupDefinitionName(GameServerContainerGroupDefinitionNameT&& value) { SetGameServerContainerGroupDefinitionName(std::forward<GameServerContainerGroupDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN value of a new per-instance container group definition to
     * deploy on the fleet. If you're updating the fleet to a specific version of a
     * container group definition, use the ARN value and include the version number. If
     * you're updating the fleet to the latest version of a container group definition,
     * you can use the name value.</p> <p>Update a container group definition by
     * calling <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateContainerGroupDefinition.html">UpdateContainerGroupDefinition</a>.
     * This operation creates a <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ContainerGroupDefinition.html">ContainerGroupDefinition</a>
     * resource with an incremented version. </p> <p>To remove a fleet's per-instance
     * container group definition, leave this parameter empty and use the parameter
     * <code>RemoveAttributes</code>.</p>
     */
    inline const Aws::String& GetPerInstanceContainerGroupDefinitionName() const { return m_perInstanceContainerGroupDefinitionName; }
    inline bool PerInstanceContainerGroupDefinitionNameHasBeenSet() const { return m_perInstanceContainerGroupDefinitionNameHasBeenSet; }
    template<typename PerInstanceContainerGroupDefinitionNameT = Aws::String>
    void SetPerInstanceContainerGroupDefinitionName(PerInstanceContainerGroupDefinitionNameT&& value) { m_perInstanceContainerGroupDefinitionNameHasBeenSet = true; m_perInstanceContainerGroupDefinitionName = std::forward<PerInstanceContainerGroupDefinitionNameT>(value); }
    template<typename PerInstanceContainerGroupDefinitionNameT = Aws::String>
    UpdateContainerFleetRequest& WithPerInstanceContainerGroupDefinitionName(PerInstanceContainerGroupDefinitionNameT&& value) { SetPerInstanceContainerGroupDefinitionName(std::forward<PerInstanceContainerGroupDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times to replicate the game server container group on each
     * fleet instance. By default, Amazon GameLift Servers calculates the maximum
     * number of game server container groups that can fit on each instance. You can
     * remove this property value to use the calculated value, or set it manually. If
     * you set this number manually, Amazon GameLift Servers uses your value as long as
     * it's less than the calculated maximum.</p>
     */
    inline int GetGameServerContainerGroupsPerInstance() const { return m_gameServerContainerGroupsPerInstance; }
    inline bool GameServerContainerGroupsPerInstanceHasBeenSet() const { return m_gameServerContainerGroupsPerInstanceHasBeenSet; }
    inline void SetGameServerContainerGroupsPerInstance(int value) { m_gameServerContainerGroupsPerInstanceHasBeenSet = true; m_gameServerContainerGroupsPerInstance = value; }
    inline UpdateContainerFleetRequest& WithGameServerContainerGroupsPerInstance(int value) { SetGameServerContainerGroupsPerInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A revised set of port numbers to open on each fleet instance. By default,
     * Amazon GameLift Servers calculates an optimal port range based on your fleet
     * configuration. If you previously set this parameter manually, you can't reset
     * this to use the calculated settings.</p>
     */
    inline const ConnectionPortRange& GetInstanceConnectionPortRange() const { return m_instanceConnectionPortRange; }
    inline bool InstanceConnectionPortRangeHasBeenSet() const { return m_instanceConnectionPortRangeHasBeenSet; }
    template<typename InstanceConnectionPortRangeT = ConnectionPortRange>
    void SetInstanceConnectionPortRange(InstanceConnectionPortRangeT&& value) { m_instanceConnectionPortRangeHasBeenSet = true; m_instanceConnectionPortRange = std::forward<InstanceConnectionPortRangeT>(value); }
    template<typename InstanceConnectionPortRangeT = ConnectionPortRange>
    UpdateContainerFleetRequest& WithInstanceConnectionPortRange(InstanceConnectionPortRangeT&& value) { SetInstanceConnectionPortRange(std::forward<InstanceConnectionPortRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of ports to add to the container fleet's inbound permissions.</p>
     */
    inline const Aws::Vector<IpPermission>& GetInstanceInboundPermissionAuthorizations() const { return m_instanceInboundPermissionAuthorizations; }
    inline bool InstanceInboundPermissionAuthorizationsHasBeenSet() const { return m_instanceInboundPermissionAuthorizationsHasBeenSet; }
    template<typename InstanceInboundPermissionAuthorizationsT = Aws::Vector<IpPermission>>
    void SetInstanceInboundPermissionAuthorizations(InstanceInboundPermissionAuthorizationsT&& value) { m_instanceInboundPermissionAuthorizationsHasBeenSet = true; m_instanceInboundPermissionAuthorizations = std::forward<InstanceInboundPermissionAuthorizationsT>(value); }
    template<typename InstanceInboundPermissionAuthorizationsT = Aws::Vector<IpPermission>>
    UpdateContainerFleetRequest& WithInstanceInboundPermissionAuthorizations(InstanceInboundPermissionAuthorizationsT&& value) { SetInstanceInboundPermissionAuthorizations(std::forward<InstanceInboundPermissionAuthorizationsT>(value)); return *this;}
    template<typename InstanceInboundPermissionAuthorizationsT = IpPermission>
    UpdateContainerFleetRequest& AddInstanceInboundPermissionAuthorizations(InstanceInboundPermissionAuthorizationsT&& value) { m_instanceInboundPermissionAuthorizationsHasBeenSet = true; m_instanceInboundPermissionAuthorizations.emplace_back(std::forward<InstanceInboundPermissionAuthorizationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of ports to remove from the container fleet's inbound permissions.</p>
     */
    inline const Aws::Vector<IpPermission>& GetInstanceInboundPermissionRevocations() const { return m_instanceInboundPermissionRevocations; }
    inline bool InstanceInboundPermissionRevocationsHasBeenSet() const { return m_instanceInboundPermissionRevocationsHasBeenSet; }
    template<typename InstanceInboundPermissionRevocationsT = Aws::Vector<IpPermission>>
    void SetInstanceInboundPermissionRevocations(InstanceInboundPermissionRevocationsT&& value) { m_instanceInboundPermissionRevocationsHasBeenSet = true; m_instanceInboundPermissionRevocations = std::forward<InstanceInboundPermissionRevocationsT>(value); }
    template<typename InstanceInboundPermissionRevocationsT = Aws::Vector<IpPermission>>
    UpdateContainerFleetRequest& WithInstanceInboundPermissionRevocations(InstanceInboundPermissionRevocationsT&& value) { SetInstanceInboundPermissionRevocations(std::forward<InstanceInboundPermissionRevocationsT>(value)); return *this;}
    template<typename InstanceInboundPermissionRevocationsT = IpPermission>
    UpdateContainerFleetRequest& AddInstanceInboundPermissionRevocations(InstanceInboundPermissionRevocationsT&& value) { m_instanceInboundPermissionRevocationsHasBeenSet = true; m_instanceInboundPermissionRevocations.emplace_back(std::forward<InstanceInboundPermissionRevocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Instructions for how to deploy updates to a container fleet, if the fleet
     * update initiates a deployment. The deployment configuration lets you determine
     * how to replace fleet instances and what actions to take if the deployment
     * fails.</p>
     */
    inline const DeploymentConfiguration& GetDeploymentConfiguration() const { return m_deploymentConfiguration; }
    inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }
    template<typename DeploymentConfigurationT = DeploymentConfiguration>
    void SetDeploymentConfiguration(DeploymentConfigurationT&& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = std::forward<DeploymentConfigurationT>(value); }
    template<typename DeploymentConfigurationT = DeploymentConfiguration>
    UpdateContainerFleetRequest& WithDeploymentConfiguration(DeploymentConfigurationT&& value) { SetDeploymentConfiguration(std::forward<DeploymentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A meaningful description of the container fleet.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateContainerFleetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Amazon Web Services CloudWatch metric group to add this fleet
     * to. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricGroups() const { return m_metricGroups; }
    inline bool MetricGroupsHasBeenSet() const { return m_metricGroupsHasBeenSet; }
    template<typename MetricGroupsT = Aws::Vector<Aws::String>>
    void SetMetricGroups(MetricGroupsT&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = std::forward<MetricGroupsT>(value); }
    template<typename MetricGroupsT = Aws::Vector<Aws::String>>
    UpdateContainerFleetRequest& WithMetricGroups(MetricGroupsT&& value) { SetMetricGroups(std::forward<MetricGroupsT>(value)); return *this;}
    template<typename MetricGroupsT = Aws::String>
    UpdateContainerFleetRequest& AddMetricGroups(MetricGroupsT&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.emplace_back(std::forward<MetricGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The game session protection policy to apply to all new game sessions that are
     * started in this fleet. Game sessions that already exist are not affected. </p>
     */
    inline ProtectionPolicy GetNewGameSessionProtectionPolicy() const { return m_newGameSessionProtectionPolicy; }
    inline bool NewGameSessionProtectionPolicyHasBeenSet() const { return m_newGameSessionProtectionPolicyHasBeenSet; }
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }
    inline UpdateContainerFleetRequest& WithNewGameSessionProtectionPolicy(ProtectionPolicy value) { SetNewGameSessionProtectionPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A policy that limits the number of game sessions that each individual player
     * can create on instances in this fleet. The limit applies for a specified span of
     * time.</p>
     */
    inline const GameSessionCreationLimitPolicy& GetGameSessionCreationLimitPolicy() const { return m_gameSessionCreationLimitPolicy; }
    inline bool GameSessionCreationLimitPolicyHasBeenSet() const { return m_gameSessionCreationLimitPolicyHasBeenSet; }
    template<typename GameSessionCreationLimitPolicyT = GameSessionCreationLimitPolicy>
    void SetGameSessionCreationLimitPolicy(GameSessionCreationLimitPolicyT&& value) { m_gameSessionCreationLimitPolicyHasBeenSet = true; m_gameSessionCreationLimitPolicy = std::forward<GameSessionCreationLimitPolicyT>(value); }
    template<typename GameSessionCreationLimitPolicyT = GameSessionCreationLimitPolicy>
    UpdateContainerFleetRequest& WithGameSessionCreationLimitPolicy(GameSessionCreationLimitPolicyT&& value) { SetGameSessionCreationLimitPolicy(std::forward<GameSessionCreationLimitPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method for collecting container logs for the fleet. </p>
     */
    inline const LogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = LogConfiguration>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = LogConfiguration>
    UpdateContainerFleetRequest& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, this update removes a fleet's per-instance container group
     * definition. You can't remove a fleet's game server container group
     * definition.</p>
     */
    inline const Aws::Vector<ContainerFleetRemoveAttribute>& GetRemoveAttributes() const { return m_removeAttributes; }
    inline bool RemoveAttributesHasBeenSet() const { return m_removeAttributesHasBeenSet; }
    template<typename RemoveAttributesT = Aws::Vector<ContainerFleetRemoveAttribute>>
    void SetRemoveAttributes(RemoveAttributesT&& value) { m_removeAttributesHasBeenSet = true; m_removeAttributes = std::forward<RemoveAttributesT>(value); }
    template<typename RemoveAttributesT = Aws::Vector<ContainerFleetRemoveAttribute>>
    UpdateContainerFleetRequest& WithRemoveAttributes(RemoveAttributesT&& value) { SetRemoveAttributes(std::forward<RemoveAttributesT>(value)); return *this;}
    inline UpdateContainerFleetRequest& AddRemoveAttributes(ContainerFleetRemoveAttribute value) { m_removeAttributesHasBeenSet = true; m_removeAttributes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_gameServerContainerGroupDefinitionName;
    bool m_gameServerContainerGroupDefinitionNameHasBeenSet = false;

    Aws::String m_perInstanceContainerGroupDefinitionName;
    bool m_perInstanceContainerGroupDefinitionNameHasBeenSet = false;

    int m_gameServerContainerGroupsPerInstance{0};
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

    ProtectionPolicy m_newGameSessionProtectionPolicy{ProtectionPolicy::NOT_SET};
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
