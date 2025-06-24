/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ConnectionPortRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ContainerFleetBillingType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamelift/model/ProtectionPolicy.h>
#include <aws/gamelift/model/GameSessionCreationLimitPolicy.h>
#include <aws/gamelift/model/ContainerFleetStatus.h>
#include <aws/gamelift/model/DeploymentDetails.h>
#include <aws/gamelift/model/LogConfiguration.h>
#include <aws/gamelift/model/IpPermission.h>
#include <aws/gamelift/model/ContainerFleetLocationAttributes.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Describes an Amazon GameLift Servers managed container fleet. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerFleet">AWS
   * API Reference</a></p>
   */
  class ContainerFleet
  {
  public:
    AWS_GAMELIFT_API ContainerFleet() = default;
    AWS_GAMELIFT_API ContainerFleet(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerFleet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the container fleet to retrieve. </p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    ContainerFleet& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift Servers fleet resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift fleet ARN, the resource ID matches the <code>FleetId</code>
     * value.</p>
     */
    inline const Aws::String& GetFleetArn() const { return m_fleetArn; }
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }
    template<typename FleetArnT = Aws::String>
    void SetFleetArn(FleetArnT&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::forward<FleetArnT>(value); }
    template<typename FleetArnT = Aws::String>
    ContainerFleet& WithFleetArn(FleetArnT&& value) { SetFleetArn(std::forward<FleetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for an Identity and Access Management (IAM) role with
     * permissions to run your containers on resources that are managed by Amazon
     * GameLift Servers. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/setting-up-role.html">Set
     * up an IAM service role</a>. This fleet property can't be changed.</p>
     */
    inline const Aws::String& GetFleetRoleArn() const { return m_fleetRoleArn; }
    inline bool FleetRoleArnHasBeenSet() const { return m_fleetRoleArnHasBeenSet; }
    template<typename FleetRoleArnT = Aws::String>
    void SetFleetRoleArn(FleetRoleArnT&& value) { m_fleetRoleArnHasBeenSet = true; m_fleetRoleArn = std::forward<FleetRoleArnT>(value); }
    template<typename FleetRoleArnT = Aws::String>
    ContainerFleet& WithFleetRoleArn(FleetRoleArnT&& value) { SetFleetRoleArn(std::forward<FleetRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet's game server container group definition, which
     * describes how to deploy containers with your game server build and support
     * software onto each fleet instance. </p>
     */
    inline const Aws::String& GetGameServerContainerGroupDefinitionName() const { return m_gameServerContainerGroupDefinitionName; }
    inline bool GameServerContainerGroupDefinitionNameHasBeenSet() const { return m_gameServerContainerGroupDefinitionNameHasBeenSet; }
    template<typename GameServerContainerGroupDefinitionNameT = Aws::String>
    void SetGameServerContainerGroupDefinitionName(GameServerContainerGroupDefinitionNameT&& value) { m_gameServerContainerGroupDefinitionNameHasBeenSet = true; m_gameServerContainerGroupDefinitionName = std::forward<GameServerContainerGroupDefinitionNameT>(value); }
    template<typename GameServerContainerGroupDefinitionNameT = Aws::String>
    ContainerFleet& WithGameServerContainerGroupDefinitionName(GameServerContainerGroupDefinitionNameT&& value) { SetGameServerContainerGroupDefinitionName(std::forward<GameServerContainerGroupDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to the fleet's game server container group. The ARN value also
     * identifies the specific container group definition version in use.</p>
     */
    inline const Aws::String& GetGameServerContainerGroupDefinitionArn() const { return m_gameServerContainerGroupDefinitionArn; }
    inline bool GameServerContainerGroupDefinitionArnHasBeenSet() const { return m_gameServerContainerGroupDefinitionArnHasBeenSet; }
    template<typename GameServerContainerGroupDefinitionArnT = Aws::String>
    void SetGameServerContainerGroupDefinitionArn(GameServerContainerGroupDefinitionArnT&& value) { m_gameServerContainerGroupDefinitionArnHasBeenSet = true; m_gameServerContainerGroupDefinitionArn = std::forward<GameServerContainerGroupDefinitionArnT>(value); }
    template<typename GameServerContainerGroupDefinitionArnT = Aws::String>
    ContainerFleet& WithGameServerContainerGroupDefinitionArn(GameServerContainerGroupDefinitionArnT&& value) { SetGameServerContainerGroupDefinitionArn(std::forward<GameServerContainerGroupDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet's per-instance container group definition. </p>
     */
    inline const Aws::String& GetPerInstanceContainerGroupDefinitionName() const { return m_perInstanceContainerGroupDefinitionName; }
    inline bool PerInstanceContainerGroupDefinitionNameHasBeenSet() const { return m_perInstanceContainerGroupDefinitionNameHasBeenSet; }
    template<typename PerInstanceContainerGroupDefinitionNameT = Aws::String>
    void SetPerInstanceContainerGroupDefinitionName(PerInstanceContainerGroupDefinitionNameT&& value) { m_perInstanceContainerGroupDefinitionNameHasBeenSet = true; m_perInstanceContainerGroupDefinitionName = std::forward<PerInstanceContainerGroupDefinitionNameT>(value); }
    template<typename PerInstanceContainerGroupDefinitionNameT = Aws::String>
    ContainerFleet& WithPerInstanceContainerGroupDefinitionName(PerInstanceContainerGroupDefinitionNameT&& value) { SetPerInstanceContainerGroupDefinitionName(std::forward<PerInstanceContainerGroupDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to the fleet's per-instance container group. The ARN value also
     * identifies the specific container group definition version in use.</p>
     */
    inline const Aws::String& GetPerInstanceContainerGroupDefinitionArn() const { return m_perInstanceContainerGroupDefinitionArn; }
    inline bool PerInstanceContainerGroupDefinitionArnHasBeenSet() const { return m_perInstanceContainerGroupDefinitionArnHasBeenSet; }
    template<typename PerInstanceContainerGroupDefinitionArnT = Aws::String>
    void SetPerInstanceContainerGroupDefinitionArn(PerInstanceContainerGroupDefinitionArnT&& value) { m_perInstanceContainerGroupDefinitionArnHasBeenSet = true; m_perInstanceContainerGroupDefinitionArn = std::forward<PerInstanceContainerGroupDefinitionArnT>(value); }
    template<typename PerInstanceContainerGroupDefinitionArnT = Aws::String>
    ContainerFleet& WithPerInstanceContainerGroupDefinitionArn(PerInstanceContainerGroupDefinitionArnT&& value) { SetPerInstanceContainerGroupDefinitionArn(std::forward<PerInstanceContainerGroupDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ConnectionPortRange& GetInstanceConnectionPortRange() const { return m_instanceConnectionPortRange; }
    inline bool InstanceConnectionPortRangeHasBeenSet() const { return m_instanceConnectionPortRangeHasBeenSet; }
    template<typename InstanceConnectionPortRangeT = ConnectionPortRange>
    void SetInstanceConnectionPortRange(InstanceConnectionPortRangeT&& value) { m_instanceConnectionPortRangeHasBeenSet = true; m_instanceConnectionPortRange = std::forward<InstanceConnectionPortRangeT>(value); }
    template<typename InstanceConnectionPortRangeT = ConnectionPortRange>
    ContainerFleet& WithInstanceConnectionPortRange(InstanceConnectionPortRangeT&& value) { SetInstanceConnectionPortRange(std::forward<InstanceConnectionPortRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address ranges and port settings that allow inbound traffic to access
     * game server processes and other processes on this fleet. </p>
     */
    inline const Aws::Vector<IpPermission>& GetInstanceInboundPermissions() const { return m_instanceInboundPermissions; }
    inline bool InstanceInboundPermissionsHasBeenSet() const { return m_instanceInboundPermissionsHasBeenSet; }
    template<typename InstanceInboundPermissionsT = Aws::Vector<IpPermission>>
    void SetInstanceInboundPermissions(InstanceInboundPermissionsT&& value) { m_instanceInboundPermissionsHasBeenSet = true; m_instanceInboundPermissions = std::forward<InstanceInboundPermissionsT>(value); }
    template<typename InstanceInboundPermissionsT = Aws::Vector<IpPermission>>
    ContainerFleet& WithInstanceInboundPermissions(InstanceInboundPermissionsT&& value) { SetInstanceInboundPermissions(std::forward<InstanceInboundPermissionsT>(value)); return *this;}
    template<typename InstanceInboundPermissionsT = IpPermission>
    ContainerFleet& AddInstanceInboundPermissions(InstanceInboundPermissionsT&& value) { m_instanceInboundPermissionsHasBeenSet = true; m_instanceInboundPermissions.emplace_back(std::forward<InstanceInboundPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of times to replicate the game server container group on each
     * fleet instance. </p>
     */
    inline int GetGameServerContainerGroupsPerInstance() const { return m_gameServerContainerGroupsPerInstance; }
    inline bool GameServerContainerGroupsPerInstanceHasBeenSet() const { return m_gameServerContainerGroupsPerInstanceHasBeenSet; }
    inline void SetGameServerContainerGroupsPerInstance(int value) { m_gameServerContainerGroupsPerInstanceHasBeenSet = true; m_gameServerContainerGroupsPerInstance = value; }
    inline ContainerFleet& WithGameServerContainerGroupsPerInstance(int value) { SetGameServerContainerGroupsPerInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The calculated maximum number of game server container group that can be
     * deployed on each fleet instance. The calculation depends on the resource needs
     * of the container group and the CPU and memory resources of the fleet's instance
     * type.</p>
     */
    inline int GetMaximumGameServerContainerGroupsPerInstance() const { return m_maximumGameServerContainerGroupsPerInstance; }
    inline bool MaximumGameServerContainerGroupsPerInstanceHasBeenSet() const { return m_maximumGameServerContainerGroupsPerInstanceHasBeenSet; }
    inline void SetMaximumGameServerContainerGroupsPerInstance(int value) { m_maximumGameServerContainerGroupsPerInstanceHasBeenSet = true; m_maximumGameServerContainerGroupsPerInstance = value; }
    inline ContainerFleet& WithMaximumGameServerContainerGroupsPerInstance(int value) { SetMaximumGameServerContainerGroupsPerInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type to use for all instances in the fleet. Instance
     * type determines the computing resources and processing power that's available to
     * host your game servers. This includes including CPU, memory, storage, and
     * networking capacity. You can't update this fleet property.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    ContainerFleet& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the fleet uses On-Demand or Spot instances for this fleet.
     * Learn more about when to use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. You can't update this fleet property.</p>
     * <p>By default, this property is set to <code>ON_DEMAND</code>.</p>
     */
    inline ContainerFleetBillingType GetBillingType() const { return m_billingType; }
    inline bool BillingTypeHasBeenSet() const { return m_billingTypeHasBeenSet; }
    inline void SetBillingType(ContainerFleetBillingType value) { m_billingTypeHasBeenSet = true; m_billingType = value; }
    inline ContainerFleet& WithBillingType(ContainerFleetBillingType value) { SetBillingType(value); return *this;}
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
    ContainerFleet& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ContainerFleet& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Amazon Web Services CloudWatch metric group to add this fleet
     * to. Metric groups aggregate metrics for multiple fleets. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricGroups() const { return m_metricGroups; }
    inline bool MetricGroupsHasBeenSet() const { return m_metricGroupsHasBeenSet; }
    template<typename MetricGroupsT = Aws::Vector<Aws::String>>
    void SetMetricGroups(MetricGroupsT&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = std::forward<MetricGroupsT>(value); }
    template<typename MetricGroupsT = Aws::Vector<Aws::String>>
    ContainerFleet& WithMetricGroups(MetricGroupsT&& value) { SetMetricGroups(std::forward<MetricGroupsT>(value)); return *this;}
    template<typename MetricGroupsT = Aws::String>
    ContainerFleet& AddMetricGroups(MetricGroupsT&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.emplace_back(std::forward<MetricGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines whether Amazon GameLift Servers can shut down game sessions on the
     * fleet that are actively running and hosting players. Amazon GameLift Servers
     * might prompt an instance shutdown when scaling down fleet capacity or when
     * retiring unhealthy instances. You can also set game session protection for
     * individual game sessions using <a
     * href="gamelift/latest/apireference/API_UpdateGameSession.html">UpdateGameSession</a>.</p>
     * <ul> <li> <p> <b>NoProtection</b> -- Game sessions can be shut down during
     * active gameplay. </p> </li> <li> <p> <b>FullProtection</b> -- Game sessions in
     * <code>ACTIVE</code> status can't be shut down.</p> </li> </ul>
     */
    inline ProtectionPolicy GetNewGameSessionProtectionPolicy() const { return m_newGameSessionProtectionPolicy; }
    inline bool NewGameSessionProtectionPolicyHasBeenSet() const { return m_newGameSessionProtectionPolicyHasBeenSet; }
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }
    inline ContainerFleet& WithNewGameSessionProtectionPolicy(ProtectionPolicy value) { SetNewGameSessionProtectionPolicy(value); return *this;}
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
    ContainerFleet& WithGameSessionCreationLimitPolicy(GameSessionCreationLimitPolicyT&& value) { SetGameSessionCreationLimitPolicy(std::forward<GameSessionCreationLimitPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the container fleet.</p> <ul> <li> <p>
     * <code>PENDING</code> -- A new container fleet has been requested.</p> </li> <li>
     * <p> <code>CREATING</code> -- A new container fleet resource is being created.
     * </p> </li> <li> <p> <code>CREATED</code> -- A new container fleet resource has
     * been created. No fleet instances have been deployed.</p> </li> <li> <p>
     * <code>ACTIVATING</code> -- New container fleet instances are being deployed.</p>
     * </li> <li> <p> <code>ACTIVE</code> -- The container fleet has been deployed and
     * is ready to host game sessions.</p> </li> <li> <p> <code>UPDATING</code> --
     * Updates to the container fleet is being updated. A deployment is in
     * progress.</p> </li> </ul>
     */
    inline ContainerFleetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ContainerFleetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ContainerFleet& WithStatus(ContainerFleetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the most recent deployment for the container fleet.</p>
     */
    inline const DeploymentDetails& GetDeploymentDetails() const { return m_deploymentDetails; }
    inline bool DeploymentDetailsHasBeenSet() const { return m_deploymentDetailsHasBeenSet; }
    template<typename DeploymentDetailsT = DeploymentDetails>
    void SetDeploymentDetails(DeploymentDetailsT&& value) { m_deploymentDetailsHasBeenSet = true; m_deploymentDetails = std::forward<DeploymentDetailsT>(value); }
    template<typename DeploymentDetailsT = DeploymentDetails>
    ContainerFleet& WithDeploymentDetails(DeploymentDetailsT&& value) { SetDeploymentDetails(std::forward<DeploymentDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method that is used to collect container logs for the fleet. Amazon
     * GameLift Servers saves all standard output for each container in logs, including
     * game session logs. </p> <ul> <li> <p> <code>CLOUDWATCH</code> -- Send logs to an
     * Amazon CloudWatch log group that you define. Each container emits a log stream,
     * which is organized in the log group. </p> </li> <li> <p> <code>S3</code> --
     * Store logs in an Amazon S3 bucket that you define.</p> </li> <li> <p>
     * <code>NONE</code> -- Don't collect container logs.</p> </li> </ul>
     */
    inline const LogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = LogConfiguration>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = LogConfiguration>
    ContainerFleet& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the container fleet's remote locations where fleet
     * instances are deployed.</p>
     */
    inline const Aws::Vector<ContainerFleetLocationAttributes>& GetLocationAttributes() const { return m_locationAttributes; }
    inline bool LocationAttributesHasBeenSet() const { return m_locationAttributesHasBeenSet; }
    template<typename LocationAttributesT = Aws::Vector<ContainerFleetLocationAttributes>>
    void SetLocationAttributes(LocationAttributesT&& value) { m_locationAttributesHasBeenSet = true; m_locationAttributes = std::forward<LocationAttributesT>(value); }
    template<typename LocationAttributesT = Aws::Vector<ContainerFleetLocationAttributes>>
    ContainerFleet& WithLocationAttributes(LocationAttributesT&& value) { SetLocationAttributes(std::forward<LocationAttributesT>(value)); return *this;}
    template<typename LocationAttributesT = ContainerFleetLocationAttributes>
    ContainerFleet& AddLocationAttributes(LocationAttributesT&& value) { m_locationAttributesHasBeenSet = true; m_locationAttributes.emplace_back(std::forward<LocationAttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    Aws::String m_fleetRoleArn;
    bool m_fleetRoleArnHasBeenSet = false;

    Aws::String m_gameServerContainerGroupDefinitionName;
    bool m_gameServerContainerGroupDefinitionNameHasBeenSet = false;

    Aws::String m_gameServerContainerGroupDefinitionArn;
    bool m_gameServerContainerGroupDefinitionArnHasBeenSet = false;

    Aws::String m_perInstanceContainerGroupDefinitionName;
    bool m_perInstanceContainerGroupDefinitionNameHasBeenSet = false;

    Aws::String m_perInstanceContainerGroupDefinitionArn;
    bool m_perInstanceContainerGroupDefinitionArnHasBeenSet = false;

    ConnectionPortRange m_instanceConnectionPortRange;
    bool m_instanceConnectionPortRangeHasBeenSet = false;

    Aws::Vector<IpPermission> m_instanceInboundPermissions;
    bool m_instanceInboundPermissionsHasBeenSet = false;

    int m_gameServerContainerGroupsPerInstance{0};
    bool m_gameServerContainerGroupsPerInstanceHasBeenSet = false;

    int m_maximumGameServerContainerGroupsPerInstance{0};
    bool m_maximumGameServerContainerGroupsPerInstanceHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    ContainerFleetBillingType m_billingType{ContainerFleetBillingType::NOT_SET};
    bool m_billingTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricGroups;
    bool m_metricGroupsHasBeenSet = false;

    ProtectionPolicy m_newGameSessionProtectionPolicy{ProtectionPolicy::NOT_SET};
    bool m_newGameSessionProtectionPolicyHasBeenSet = false;

    GameSessionCreationLimitPolicy m_gameSessionCreationLimitPolicy;
    bool m_gameSessionCreationLimitPolicyHasBeenSet = false;

    ContainerFleetStatus m_status{ContainerFleetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    DeploymentDetails m_deploymentDetails;
    bool m_deploymentDetailsHasBeenSet = false;

    LogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    Aws::Vector<ContainerFleetLocationAttributes> m_locationAttributes;
    bool m_locationAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
