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
   * <p>Describes an Amazon GameLift managed container fleet. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerFleet">AWS
   * API Reference</a></p>
   */
  class ContainerFleet
  {
  public:
    AWS_GAMELIFT_API ContainerFleet();
    AWS_GAMELIFT_API ContainerFleet(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerFleet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the container fleet to retrieve. </p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline ContainerFleet& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline ContainerFleet& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline ContainerFleet& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift fleet ARN, the resource ID matches the <code>FleetId</code>
     * value.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }
    inline ContainerFleet& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}
    inline ContainerFleet& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}
    inline ContainerFleet& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for an Identity and Access Management (IAM) role with
     * permissions to run your containers on resources that are managed by Amazon
     * GameLift. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/setting-up-role.html">Set
     * up an IAM service role</a>. This fleet property can't be changed.</p>
     */
    inline const Aws::String& GetFleetRoleArn() const{ return m_fleetRoleArn; }
    inline bool FleetRoleArnHasBeenSet() const { return m_fleetRoleArnHasBeenSet; }
    inline void SetFleetRoleArn(const Aws::String& value) { m_fleetRoleArnHasBeenSet = true; m_fleetRoleArn = value; }
    inline void SetFleetRoleArn(Aws::String&& value) { m_fleetRoleArnHasBeenSet = true; m_fleetRoleArn = std::move(value); }
    inline void SetFleetRoleArn(const char* value) { m_fleetRoleArnHasBeenSet = true; m_fleetRoleArn.assign(value); }
    inline ContainerFleet& WithFleetRoleArn(const Aws::String& value) { SetFleetRoleArn(value); return *this;}
    inline ContainerFleet& WithFleetRoleArn(Aws::String&& value) { SetFleetRoleArn(std::move(value)); return *this;}
    inline ContainerFleet& WithFleetRoleArn(const char* value) { SetFleetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet's game server container group definition, which
     * describes how to deploy containers with your game server build and support
     * software onto each fleet instance. </p>
     */
    inline const Aws::String& GetGameServerContainerGroupDefinitionName() const{ return m_gameServerContainerGroupDefinitionName; }
    inline bool GameServerContainerGroupDefinitionNameHasBeenSet() const { return m_gameServerContainerGroupDefinitionNameHasBeenSet; }
    inline void SetGameServerContainerGroupDefinitionName(const Aws::String& value) { m_gameServerContainerGroupDefinitionNameHasBeenSet = true; m_gameServerContainerGroupDefinitionName = value; }
    inline void SetGameServerContainerGroupDefinitionName(Aws::String&& value) { m_gameServerContainerGroupDefinitionNameHasBeenSet = true; m_gameServerContainerGroupDefinitionName = std::move(value); }
    inline void SetGameServerContainerGroupDefinitionName(const char* value) { m_gameServerContainerGroupDefinitionNameHasBeenSet = true; m_gameServerContainerGroupDefinitionName.assign(value); }
    inline ContainerFleet& WithGameServerContainerGroupDefinitionName(const Aws::String& value) { SetGameServerContainerGroupDefinitionName(value); return *this;}
    inline ContainerFleet& WithGameServerContainerGroupDefinitionName(Aws::String&& value) { SetGameServerContainerGroupDefinitionName(std::move(value)); return *this;}
    inline ContainerFleet& WithGameServerContainerGroupDefinitionName(const char* value) { SetGameServerContainerGroupDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to the fleet's game server container group. The ARN value also
     * identifies the specific container group definition version in use.</p>
     */
    inline const Aws::String& GetGameServerContainerGroupDefinitionArn() const{ return m_gameServerContainerGroupDefinitionArn; }
    inline bool GameServerContainerGroupDefinitionArnHasBeenSet() const { return m_gameServerContainerGroupDefinitionArnHasBeenSet; }
    inline void SetGameServerContainerGroupDefinitionArn(const Aws::String& value) { m_gameServerContainerGroupDefinitionArnHasBeenSet = true; m_gameServerContainerGroupDefinitionArn = value; }
    inline void SetGameServerContainerGroupDefinitionArn(Aws::String&& value) { m_gameServerContainerGroupDefinitionArnHasBeenSet = true; m_gameServerContainerGroupDefinitionArn = std::move(value); }
    inline void SetGameServerContainerGroupDefinitionArn(const char* value) { m_gameServerContainerGroupDefinitionArnHasBeenSet = true; m_gameServerContainerGroupDefinitionArn.assign(value); }
    inline ContainerFleet& WithGameServerContainerGroupDefinitionArn(const Aws::String& value) { SetGameServerContainerGroupDefinitionArn(value); return *this;}
    inline ContainerFleet& WithGameServerContainerGroupDefinitionArn(Aws::String&& value) { SetGameServerContainerGroupDefinitionArn(std::move(value)); return *this;}
    inline ContainerFleet& WithGameServerContainerGroupDefinitionArn(const char* value) { SetGameServerContainerGroupDefinitionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet's per-instance container group definition. </p>
     */
    inline const Aws::String& GetPerInstanceContainerGroupDefinitionName() const{ return m_perInstanceContainerGroupDefinitionName; }
    inline bool PerInstanceContainerGroupDefinitionNameHasBeenSet() const { return m_perInstanceContainerGroupDefinitionNameHasBeenSet; }
    inline void SetPerInstanceContainerGroupDefinitionName(const Aws::String& value) { m_perInstanceContainerGroupDefinitionNameHasBeenSet = true; m_perInstanceContainerGroupDefinitionName = value; }
    inline void SetPerInstanceContainerGroupDefinitionName(Aws::String&& value) { m_perInstanceContainerGroupDefinitionNameHasBeenSet = true; m_perInstanceContainerGroupDefinitionName = std::move(value); }
    inline void SetPerInstanceContainerGroupDefinitionName(const char* value) { m_perInstanceContainerGroupDefinitionNameHasBeenSet = true; m_perInstanceContainerGroupDefinitionName.assign(value); }
    inline ContainerFleet& WithPerInstanceContainerGroupDefinitionName(const Aws::String& value) { SetPerInstanceContainerGroupDefinitionName(value); return *this;}
    inline ContainerFleet& WithPerInstanceContainerGroupDefinitionName(Aws::String&& value) { SetPerInstanceContainerGroupDefinitionName(std::move(value)); return *this;}
    inline ContainerFleet& WithPerInstanceContainerGroupDefinitionName(const char* value) { SetPerInstanceContainerGroupDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to the fleet's per-instance container group. The ARN value also
     * identifies the specific container group definition version in use.</p>
     */
    inline const Aws::String& GetPerInstanceContainerGroupDefinitionArn() const{ return m_perInstanceContainerGroupDefinitionArn; }
    inline bool PerInstanceContainerGroupDefinitionArnHasBeenSet() const { return m_perInstanceContainerGroupDefinitionArnHasBeenSet; }
    inline void SetPerInstanceContainerGroupDefinitionArn(const Aws::String& value) { m_perInstanceContainerGroupDefinitionArnHasBeenSet = true; m_perInstanceContainerGroupDefinitionArn = value; }
    inline void SetPerInstanceContainerGroupDefinitionArn(Aws::String&& value) { m_perInstanceContainerGroupDefinitionArnHasBeenSet = true; m_perInstanceContainerGroupDefinitionArn = std::move(value); }
    inline void SetPerInstanceContainerGroupDefinitionArn(const char* value) { m_perInstanceContainerGroupDefinitionArnHasBeenSet = true; m_perInstanceContainerGroupDefinitionArn.assign(value); }
    inline ContainerFleet& WithPerInstanceContainerGroupDefinitionArn(const Aws::String& value) { SetPerInstanceContainerGroupDefinitionArn(value); return *this;}
    inline ContainerFleet& WithPerInstanceContainerGroupDefinitionArn(Aws::String&& value) { SetPerInstanceContainerGroupDefinitionArn(std::move(value)); return *this;}
    inline ContainerFleet& WithPerInstanceContainerGroupDefinitionArn(const char* value) { SetPerInstanceContainerGroupDefinitionArn(value); return *this;}
    ///@}

    ///@{
    
    inline const ConnectionPortRange& GetInstanceConnectionPortRange() const{ return m_instanceConnectionPortRange; }
    inline bool InstanceConnectionPortRangeHasBeenSet() const { return m_instanceConnectionPortRangeHasBeenSet; }
    inline void SetInstanceConnectionPortRange(const ConnectionPortRange& value) { m_instanceConnectionPortRangeHasBeenSet = true; m_instanceConnectionPortRange = value; }
    inline void SetInstanceConnectionPortRange(ConnectionPortRange&& value) { m_instanceConnectionPortRangeHasBeenSet = true; m_instanceConnectionPortRange = std::move(value); }
    inline ContainerFleet& WithInstanceConnectionPortRange(const ConnectionPortRange& value) { SetInstanceConnectionPortRange(value); return *this;}
    inline ContainerFleet& WithInstanceConnectionPortRange(ConnectionPortRange&& value) { SetInstanceConnectionPortRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address ranges and port settings that allow inbound traffic to access
     * game server processes and other processes on this fleet. </p>
     */
    inline const Aws::Vector<IpPermission>& GetInstanceInboundPermissions() const{ return m_instanceInboundPermissions; }
    inline bool InstanceInboundPermissionsHasBeenSet() const { return m_instanceInboundPermissionsHasBeenSet; }
    inline void SetInstanceInboundPermissions(const Aws::Vector<IpPermission>& value) { m_instanceInboundPermissionsHasBeenSet = true; m_instanceInboundPermissions = value; }
    inline void SetInstanceInboundPermissions(Aws::Vector<IpPermission>&& value) { m_instanceInboundPermissionsHasBeenSet = true; m_instanceInboundPermissions = std::move(value); }
    inline ContainerFleet& WithInstanceInboundPermissions(const Aws::Vector<IpPermission>& value) { SetInstanceInboundPermissions(value); return *this;}
    inline ContainerFleet& WithInstanceInboundPermissions(Aws::Vector<IpPermission>&& value) { SetInstanceInboundPermissions(std::move(value)); return *this;}
    inline ContainerFleet& AddInstanceInboundPermissions(const IpPermission& value) { m_instanceInboundPermissionsHasBeenSet = true; m_instanceInboundPermissions.push_back(value); return *this; }
    inline ContainerFleet& AddInstanceInboundPermissions(IpPermission&& value) { m_instanceInboundPermissionsHasBeenSet = true; m_instanceInboundPermissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of times to replicate the game server container group on each
     * fleet instance. </p>
     */
    inline int GetGameServerContainerGroupsPerInstance() const{ return m_gameServerContainerGroupsPerInstance; }
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
    inline int GetMaximumGameServerContainerGroupsPerInstance() const{ return m_maximumGameServerContainerGroupsPerInstance; }
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
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline ContainerFleet& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline ContainerFleet& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline ContainerFleet& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the fleet uses On-Demand or Spot instances for this fleet.
     * Learn more about when to use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. You can't update this fleet property.</p>
     * <p>By default, this property is set to <code>ON_DEMAND</code>.</p>
     */
    inline const ContainerFleetBillingType& GetBillingType() const{ return m_billingType; }
    inline bool BillingTypeHasBeenSet() const { return m_billingTypeHasBeenSet; }
    inline void SetBillingType(const ContainerFleetBillingType& value) { m_billingTypeHasBeenSet = true; m_billingType = value; }
    inline void SetBillingType(ContainerFleetBillingType&& value) { m_billingTypeHasBeenSet = true; m_billingType = std::move(value); }
    inline ContainerFleet& WithBillingType(const ContainerFleetBillingType& value) { SetBillingType(value); return *this;}
    inline ContainerFleet& WithBillingType(ContainerFleetBillingType&& value) { SetBillingType(std::move(value)); return *this;}
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
    inline ContainerFleet& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ContainerFleet& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ContainerFleet& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ContainerFleet& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ContainerFleet& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Amazon Web Services CloudWatch metric group to add this fleet
     * to. Metric groups aggregate metrics for multiple fleets. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricGroups() const{ return m_metricGroups; }
    inline bool MetricGroupsHasBeenSet() const { return m_metricGroupsHasBeenSet; }
    inline void SetMetricGroups(const Aws::Vector<Aws::String>& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = value; }
    inline void SetMetricGroups(Aws::Vector<Aws::String>&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = std::move(value); }
    inline ContainerFleet& WithMetricGroups(const Aws::Vector<Aws::String>& value) { SetMetricGroups(value); return *this;}
    inline ContainerFleet& WithMetricGroups(Aws::Vector<Aws::String>&& value) { SetMetricGroups(std::move(value)); return *this;}
    inline ContainerFleet& AddMetricGroups(const Aws::String& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }
    inline ContainerFleet& AddMetricGroups(Aws::String&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(std::move(value)); return *this; }
    inline ContainerFleet& AddMetricGroups(const char* value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines whether Amazon GameLift can shut down game sessions on the fleet
     * that are actively running and hosting players. Amazon GameLift might prompt an
     * instance shutdown when scaling down fleet capacity or when retiring unhealthy
     * instances. You can also set game session protection for individual game sessions
     * using <a
     * href="gamelift/latest/apireference/API_UpdateGameSession.html">UpdateGameSession</a>.</p>
     * <ul> <li> <p> <b>NoProtection</b> -- Game sessions can be shut down during
     * active gameplay. </p> </li> <li> <p> <b>FullProtection</b> -- Game sessions in
     * <code>ACTIVE</code> status can't be shut down.</p> </li> </ul>
     */
    inline const ProtectionPolicy& GetNewGameSessionProtectionPolicy() const{ return m_newGameSessionProtectionPolicy; }
    inline bool NewGameSessionProtectionPolicyHasBeenSet() const { return m_newGameSessionProtectionPolicyHasBeenSet; }
    inline void SetNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = std::move(value); }
    inline ContainerFleet& WithNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { SetNewGameSessionProtectionPolicy(value); return *this;}
    inline ContainerFleet& WithNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { SetNewGameSessionProtectionPolicy(std::move(value)); return *this;}
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
    inline ContainerFleet& WithGameSessionCreationLimitPolicy(const GameSessionCreationLimitPolicy& value) { SetGameSessionCreationLimitPolicy(value); return *this;}
    inline ContainerFleet& WithGameSessionCreationLimitPolicy(GameSessionCreationLimitPolicy&& value) { SetGameSessionCreationLimitPolicy(std::move(value)); return *this;}
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
    inline const ContainerFleetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ContainerFleetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ContainerFleetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ContainerFleet& WithStatus(const ContainerFleetStatus& value) { SetStatus(value); return *this;}
    inline ContainerFleet& WithStatus(ContainerFleetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the most recent deployment for the container fleet.</p>
     */
    inline const DeploymentDetails& GetDeploymentDetails() const{ return m_deploymentDetails; }
    inline bool DeploymentDetailsHasBeenSet() const { return m_deploymentDetailsHasBeenSet; }
    inline void SetDeploymentDetails(const DeploymentDetails& value) { m_deploymentDetailsHasBeenSet = true; m_deploymentDetails = value; }
    inline void SetDeploymentDetails(DeploymentDetails&& value) { m_deploymentDetailsHasBeenSet = true; m_deploymentDetails = std::move(value); }
    inline ContainerFleet& WithDeploymentDetails(const DeploymentDetails& value) { SetDeploymentDetails(value); return *this;}
    inline ContainerFleet& WithDeploymentDetails(DeploymentDetails&& value) { SetDeploymentDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method that is used to collect container logs for the fleet. Amazon
     * GameLift saves all standard output for each container in logs, including game
     * session logs. </p> <ul> <li> <p> <code>CLOUDWATCH</code> -- Send logs to an
     * Amazon CloudWatch log group that you define. Each container emits a log stream,
     * which is organized in the log group. </p> </li> <li> <p> <code>S3</code> --
     * Store logs in an Amazon S3 bucket that you define.</p> </li> <li> <p>
     * <code>NONE</code> -- Don't collect container logs.</p> </li> </ul>
     */
    inline const LogConfiguration& GetLogConfiguration() const{ return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    inline void SetLogConfiguration(const LogConfiguration& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }
    inline void SetLogConfiguration(LogConfiguration&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }
    inline ContainerFleet& WithLogConfiguration(const LogConfiguration& value) { SetLogConfiguration(value); return *this;}
    inline ContainerFleet& WithLogConfiguration(LogConfiguration&& value) { SetLogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the container fleet's remote locations where fleet
     * instances are deployed.</p>
     */
    inline const Aws::Vector<ContainerFleetLocationAttributes>& GetLocationAttributes() const{ return m_locationAttributes; }
    inline bool LocationAttributesHasBeenSet() const { return m_locationAttributesHasBeenSet; }
    inline void SetLocationAttributes(const Aws::Vector<ContainerFleetLocationAttributes>& value) { m_locationAttributesHasBeenSet = true; m_locationAttributes = value; }
    inline void SetLocationAttributes(Aws::Vector<ContainerFleetLocationAttributes>&& value) { m_locationAttributesHasBeenSet = true; m_locationAttributes = std::move(value); }
    inline ContainerFleet& WithLocationAttributes(const Aws::Vector<ContainerFleetLocationAttributes>& value) { SetLocationAttributes(value); return *this;}
    inline ContainerFleet& WithLocationAttributes(Aws::Vector<ContainerFleetLocationAttributes>&& value) { SetLocationAttributes(std::move(value)); return *this;}
    inline ContainerFleet& AddLocationAttributes(const ContainerFleetLocationAttributes& value) { m_locationAttributesHasBeenSet = true; m_locationAttributes.push_back(value); return *this; }
    inline ContainerFleet& AddLocationAttributes(ContainerFleetLocationAttributes&& value) { m_locationAttributesHasBeenSet = true; m_locationAttributes.push_back(std::move(value)); return *this; }
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

    int m_gameServerContainerGroupsPerInstance;
    bool m_gameServerContainerGroupsPerInstanceHasBeenSet = false;

    int m_maximumGameServerContainerGroupsPerInstance;
    bool m_maximumGameServerContainerGroupsPerInstanceHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    ContainerFleetBillingType m_billingType;
    bool m_billingTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricGroups;
    bool m_metricGroupsHasBeenSet = false;

    ProtectionPolicy m_newGameSessionProtectionPolicy;
    bool m_newGameSessionProtectionPolicyHasBeenSet = false;

    GameSessionCreationLimitPolicy m_gameSessionCreationLimitPolicy;
    bool m_gameSessionCreationLimitPolicyHasBeenSet = false;

    ContainerFleetStatus m_status;
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
