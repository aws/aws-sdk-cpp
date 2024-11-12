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
#include <aws/gamelift/model/ContainerFleetBillingType.h>
#include <aws/gamelift/model/ProtectionPolicy.h>
#include <aws/gamelift/model/GameSessionCreationLimitPolicy.h>
#include <aws/gamelift/model/LogConfiguration.h>
#include <aws/gamelift/model/IpPermission.h>
#include <aws/gamelift/model/LocationConfiguration.h>
#include <aws/gamelift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class CreateContainerFleetRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API CreateContainerFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContainerFleet"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier for an Identity and Access Management (IAM) role with
     * permissions to run your containers on resources that are managed by Amazon
     * GameLift. Use an IAM service role with the
     * <code>GameLiftContainerFleetPolicy</code> managed policy attached. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/setting-up-role.html">Set
     * up an IAM service role</a>. You can't change this fleet property after the fleet
     * is created.</p> <p>IAM role ARN values use the following pattern:
     * <code>arn:aws:iam::[Amazon Web Services account]:role/[role name]</code>.</p>
     */
    inline const Aws::String& GetFleetRoleArn() const{ return m_fleetRoleArn; }
    inline bool FleetRoleArnHasBeenSet() const { return m_fleetRoleArnHasBeenSet; }
    inline void SetFleetRoleArn(const Aws::String& value) { m_fleetRoleArnHasBeenSet = true; m_fleetRoleArn = value; }
    inline void SetFleetRoleArn(Aws::String&& value) { m_fleetRoleArnHasBeenSet = true; m_fleetRoleArn = std::move(value); }
    inline void SetFleetRoleArn(const char* value) { m_fleetRoleArnHasBeenSet = true; m_fleetRoleArn.assign(value); }
    inline CreateContainerFleetRequest& WithFleetRoleArn(const Aws::String& value) { SetFleetRoleArn(value); return *this;}
    inline CreateContainerFleetRequest& WithFleetRoleArn(Aws::String&& value) { SetFleetRoleArn(std::move(value)); return *this;}
    inline CreateContainerFleetRequest& WithFleetRoleArn(const char* value) { SetFleetRoleArn(value); return *this;}
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
    inline CreateContainerFleetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateContainerFleetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateContainerFleetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container group definition resource that describes how to deploy containers
     * with your game server build and support software onto each fleet instance. You
     * can specify the container group definition's name to use the latest version.
     * Alternatively, provide an ARN value with a specific version number.</p>
     * <p>Create a container group definition by calling
     * <a>CreateContainerGroupDefinition</a>. This operation creates a
     * <a>ContainerGroupDefinition</a> resource. </p>
     */
    inline const Aws::String& GetGameServerContainerGroupDefinitionName() const{ return m_gameServerContainerGroupDefinitionName; }
    inline bool GameServerContainerGroupDefinitionNameHasBeenSet() const { return m_gameServerContainerGroupDefinitionNameHasBeenSet; }
    inline void SetGameServerContainerGroupDefinitionName(const Aws::String& value) { m_gameServerContainerGroupDefinitionNameHasBeenSet = true; m_gameServerContainerGroupDefinitionName = value; }
    inline void SetGameServerContainerGroupDefinitionName(Aws::String&& value) { m_gameServerContainerGroupDefinitionNameHasBeenSet = true; m_gameServerContainerGroupDefinitionName = std::move(value); }
    inline void SetGameServerContainerGroupDefinitionName(const char* value) { m_gameServerContainerGroupDefinitionNameHasBeenSet = true; m_gameServerContainerGroupDefinitionName.assign(value); }
    inline CreateContainerFleetRequest& WithGameServerContainerGroupDefinitionName(const Aws::String& value) { SetGameServerContainerGroupDefinitionName(value); return *this;}
    inline CreateContainerFleetRequest& WithGameServerContainerGroupDefinitionName(Aws::String&& value) { SetGameServerContainerGroupDefinitionName(std::move(value)); return *this;}
    inline CreateContainerFleetRequest& WithGameServerContainerGroupDefinitionName(const char* value) { SetGameServerContainerGroupDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a container group definition resource that describes a set of
     * axillary software. A fleet instance has one process for executables in this
     * container group. A per-instance container group is optional. You can update the
     * fleet to add or remove a per-instance container group at any time. You can
     * specify the container group definition's name to use the latest version.
     * Alternatively, provide an ARN value with a specific version number. </p>
     * <p>Create a container group definition by calling
     * <a>CreateContainerGroupDefinition</a>. This operation creates a
     * <a>ContainerGroupDefinition</a> resource.</p>
     */
    inline const Aws::String& GetPerInstanceContainerGroupDefinitionName() const{ return m_perInstanceContainerGroupDefinitionName; }
    inline bool PerInstanceContainerGroupDefinitionNameHasBeenSet() const { return m_perInstanceContainerGroupDefinitionNameHasBeenSet; }
    inline void SetPerInstanceContainerGroupDefinitionName(const Aws::String& value) { m_perInstanceContainerGroupDefinitionNameHasBeenSet = true; m_perInstanceContainerGroupDefinitionName = value; }
    inline void SetPerInstanceContainerGroupDefinitionName(Aws::String&& value) { m_perInstanceContainerGroupDefinitionNameHasBeenSet = true; m_perInstanceContainerGroupDefinitionName = std::move(value); }
    inline void SetPerInstanceContainerGroupDefinitionName(const char* value) { m_perInstanceContainerGroupDefinitionNameHasBeenSet = true; m_perInstanceContainerGroupDefinitionName.assign(value); }
    inline CreateContainerFleetRequest& WithPerInstanceContainerGroupDefinitionName(const Aws::String& value) { SetPerInstanceContainerGroupDefinitionName(value); return *this;}
    inline CreateContainerFleetRequest& WithPerInstanceContainerGroupDefinitionName(Aws::String&& value) { SetPerInstanceContainerGroupDefinitionName(std::move(value)); return *this;}
    inline CreateContainerFleetRequest& WithPerInstanceContainerGroupDefinitionName(const char* value) { SetPerInstanceContainerGroupDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of port numbers to open on each fleet instance. A fleet's connection
     * ports map to container ports that are configured in the fleet's container group
     * definitions. </p> <p>By default, Amazon GameLift calculates an optimal port
     * range based on your fleet configuration. To use the calculated range, don't set
     * this parameter. The values are:</p> <ul> <li> <p>Port range: 4192 to a number
     * calculated based on your fleet configuration. Amazon GameLift uses the following
     * formula: <code>4192 + [# of game server container groups per fleet instance] *
     * [# of container ports in the game server container group definition] + [# of
     * container ports in the game server container group definition]</code> </p> </li>
     * </ul> <p>You can also choose to manually set this parameter. When manually
     * setting this parameter, you must use port numbers that match the fleet's inbound
     * permissions port range.</p>  <p>If you set values manually, Amazon
     * GameLift no longer calculates a port range for you, even if you later remove the
     * manual settings. </p> 
     */
    inline const ConnectionPortRange& GetInstanceConnectionPortRange() const{ return m_instanceConnectionPortRange; }
    inline bool InstanceConnectionPortRangeHasBeenSet() const { return m_instanceConnectionPortRangeHasBeenSet; }
    inline void SetInstanceConnectionPortRange(const ConnectionPortRange& value) { m_instanceConnectionPortRangeHasBeenSet = true; m_instanceConnectionPortRange = value; }
    inline void SetInstanceConnectionPortRange(ConnectionPortRange&& value) { m_instanceConnectionPortRangeHasBeenSet = true; m_instanceConnectionPortRange = std::move(value); }
    inline CreateContainerFleetRequest& WithInstanceConnectionPortRange(const ConnectionPortRange& value) { SetInstanceConnectionPortRange(value); return *this;}
    inline CreateContainerFleetRequest& WithInstanceConnectionPortRange(ConnectionPortRange&& value) { SetInstanceConnectionPortRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address ranges and port settings that allow inbound traffic to access
     * game server processes and other processes on this fleet. As a best practice,
     * when remotely accessing a fleet instance, we recommend opening ports only when
     * you need them and closing them when you're finished.</p> <p>By default, Amazon
     * GameLift calculates an optimal port range based on your fleet configuration. To
     * use the calculated range, don't set this parameter. The values are:</p> <ul>
     * <li> <p>Protocol: UDP</p> </li> <li> <p>Port range: 4192 to a number calculated
     * based on your fleet configuration. Amazon GameLift uses the following formula:
     * <code>4192 + [# of game server container groups per fleet instance] * [# of
     * container ports in the game server container group definition] + [# of container
     * ports in the game server container group definition]</code> </p> </li> </ul>
     * <p>You can also choose to manually set this parameter. When manually setting
     * this parameter, you must use port numbers that match the fleet's connection port
     * range.</p>  <p>If you set values manually, Amazon GameLift no longer
     * calculates a port range for you, even if you later remove the manual settings.
     * </p> 
     */
    inline const Aws::Vector<IpPermission>& GetInstanceInboundPermissions() const{ return m_instanceInboundPermissions; }
    inline bool InstanceInboundPermissionsHasBeenSet() const { return m_instanceInboundPermissionsHasBeenSet; }
    inline void SetInstanceInboundPermissions(const Aws::Vector<IpPermission>& value) { m_instanceInboundPermissionsHasBeenSet = true; m_instanceInboundPermissions = value; }
    inline void SetInstanceInboundPermissions(Aws::Vector<IpPermission>&& value) { m_instanceInboundPermissionsHasBeenSet = true; m_instanceInboundPermissions = std::move(value); }
    inline CreateContainerFleetRequest& WithInstanceInboundPermissions(const Aws::Vector<IpPermission>& value) { SetInstanceInboundPermissions(value); return *this;}
    inline CreateContainerFleetRequest& WithInstanceInboundPermissions(Aws::Vector<IpPermission>&& value) { SetInstanceInboundPermissions(std::move(value)); return *this;}
    inline CreateContainerFleetRequest& AddInstanceInboundPermissions(const IpPermission& value) { m_instanceInboundPermissionsHasBeenSet = true; m_instanceInboundPermissions.push_back(value); return *this; }
    inline CreateContainerFleetRequest& AddInstanceInboundPermissions(IpPermission&& value) { m_instanceInboundPermissionsHasBeenSet = true; m_instanceInboundPermissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of times to replicate the game server container group on each
     * fleet instance. </p> <p>By default, Amazon GameLift calculates the maximum
     * number of game server container groups that can fit on each instance. This
     * calculation is based on the CPU and memory resources of the fleet's instance
     * type). To use the calculated maximum, don't set this parameter. If you set this
     * number manually, Amazon GameLift uses your value as long as it's less than the
     * calculated maximum.</p>
     */
    inline int GetGameServerContainerGroupsPerInstance() const{ return m_gameServerContainerGroupsPerInstance; }
    inline bool GameServerContainerGroupsPerInstanceHasBeenSet() const { return m_gameServerContainerGroupsPerInstanceHasBeenSet; }
    inline void SetGameServerContainerGroupsPerInstance(int value) { m_gameServerContainerGroupsPerInstanceHasBeenSet = true; m_gameServerContainerGroupsPerInstance = value; }
    inline CreateContainerFleetRequest& WithGameServerContainerGroupsPerInstance(int value) { SetGameServerContainerGroupsPerInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type to use for all instances in the fleet. For
     * multi-location fleets, the instance type must be available in the home region
     * and all remote locations. Instance type determines the computing resources and
     * processing power that's available to host your game servers. This includes
     * including CPU, memory, storage, and networking capacity. </p> <p>By default,
     * Amazon GameLift selects an instance type that fits the needs of your container
     * groups and is available in all selected fleet locations. You can also choose to
     * manually set this parameter. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions of Amazon EC2 instance types.</p>
     * <p>You can't update this fleet property later.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline CreateContainerFleetRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline CreateContainerFleetRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline CreateContainerFleetRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to use On-Demand or Spot instances for this fleet. Learn
     * more about when to use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. This fleet property can't be changed after
     * the fleet is created.</p> <p>By default, this property is set to
     * <code>ON_DEMAND</code>.</p> <p>You can't update this fleet property later.</p>
     */
    inline const ContainerFleetBillingType& GetBillingType() const{ return m_billingType; }
    inline bool BillingTypeHasBeenSet() const { return m_billingTypeHasBeenSet; }
    inline void SetBillingType(const ContainerFleetBillingType& value) { m_billingTypeHasBeenSet = true; m_billingType = value; }
    inline void SetBillingType(ContainerFleetBillingType&& value) { m_billingTypeHasBeenSet = true; m_billingType = std::move(value); }
    inline CreateContainerFleetRequest& WithBillingType(const ContainerFleetBillingType& value) { SetBillingType(value); return *this;}
    inline CreateContainerFleetRequest& WithBillingType(ContainerFleetBillingType&& value) { SetBillingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of locations to deploy container fleet instances to. You can add any
     * Amazon Web Services Region or Local Zone that's supported by Amazon GameLift.
     * Provide a list of one or more Amazon Web Services Region codes, such as
     * <code>us-west-2</code>, or Local Zone names. Also include the fleet's home
     * Region, which is the Amazon Web Services Region where the fleet is created. For
     * a list of supported Regions and Local Zones, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-regions.html">
     * Amazon GameLift service locations</a> for managed hosting.</p>
     */
    inline const Aws::Vector<LocationConfiguration>& GetLocations() const{ return m_locations; }
    inline bool LocationsHasBeenSet() const { return m_locationsHasBeenSet; }
    inline void SetLocations(const Aws::Vector<LocationConfiguration>& value) { m_locationsHasBeenSet = true; m_locations = value; }
    inline void SetLocations(Aws::Vector<LocationConfiguration>&& value) { m_locationsHasBeenSet = true; m_locations = std::move(value); }
    inline CreateContainerFleetRequest& WithLocations(const Aws::Vector<LocationConfiguration>& value) { SetLocations(value); return *this;}
    inline CreateContainerFleetRequest& WithLocations(Aws::Vector<LocationConfiguration>&& value) { SetLocations(std::move(value)); return *this;}
    inline CreateContainerFleetRequest& AddLocations(const LocationConfiguration& value) { m_locationsHasBeenSet = true; m_locations.push_back(value); return *this; }
    inline CreateContainerFleetRequest& AddLocations(LocationConfiguration&& value) { m_locationsHasBeenSet = true; m_locations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of an Amazon Web Services CloudWatch metric group to add this fleet
     * to. You can use a metric group to aggregate metrics for multiple fleets. You can
     * specify an existing metric group name or use a new name to create a new metric
     * group. Each fleet can have only one metric group, but you can change this value
     * at any time. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricGroups() const{ return m_metricGroups; }
    inline bool MetricGroupsHasBeenSet() const { return m_metricGroupsHasBeenSet; }
    inline void SetMetricGroups(const Aws::Vector<Aws::String>& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = value; }
    inline void SetMetricGroups(Aws::Vector<Aws::String>&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = std::move(value); }
    inline CreateContainerFleetRequest& WithMetricGroups(const Aws::Vector<Aws::String>& value) { SetMetricGroups(value); return *this;}
    inline CreateContainerFleetRequest& WithMetricGroups(Aws::Vector<Aws::String>&& value) { SetMetricGroups(std::move(value)); return *this;}
    inline CreateContainerFleetRequest& AddMetricGroups(const Aws::String& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }
    inline CreateContainerFleetRequest& AddMetricGroups(Aws::String&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(std::move(value)); return *this; }
    inline CreateContainerFleetRequest& AddMetricGroups(const char* value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }
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
     * <code>ACTIVE</code> status can't be shut down.</p> </li> </ul> <p>By default,
     * this property is set to <code>NoProtection</code>. </p>
     */
    inline const ProtectionPolicy& GetNewGameSessionProtectionPolicy() const{ return m_newGameSessionProtectionPolicy; }
    inline bool NewGameSessionProtectionPolicyHasBeenSet() const { return m_newGameSessionProtectionPolicyHasBeenSet; }
    inline void SetNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = std::move(value); }
    inline CreateContainerFleetRequest& WithNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { SetNewGameSessionProtectionPolicy(value); return *this;}
    inline CreateContainerFleetRequest& WithNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { SetNewGameSessionProtectionPolicy(std::move(value)); return *this;}
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
    inline CreateContainerFleetRequest& WithGameSessionCreationLimitPolicy(const GameSessionCreationLimitPolicy& value) { SetGameSessionCreationLimitPolicy(value); return *this;}
    inline CreateContainerFleetRequest& WithGameSessionCreationLimitPolicy(GameSessionCreationLimitPolicy&& value) { SetGameSessionCreationLimitPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A method for collecting container logs for the fleet. Amazon GameLift saves
     * all standard output for each container in logs, including game session logs. You
     * can select from the following methods: </p> <ul> <li> <p>
     * <code>CLOUDWATCH</code> -- Send logs to an Amazon CloudWatch log group that you
     * define. Each container emits a log stream, which is organized in the log group.
     * </p> </li> <li> <p> <code>S3</code> -- Store logs in an Amazon S3 bucket that
     * you define.</p> </li> <li> <p> <code>NONE</code> -- Don't collect container
     * logs.</p> </li> </ul> <p>By default, this property is set to
     * <code>CLOUDWATCH</code>. </p> <p>Amazon GameLift requires permissions to send
     * logs other Amazon Web Services services in your account. These permissions are
     * included in the IAM fleet role for this container fleet (see
     * <code>FleetRoleArn)</code>.</p>
     */
    inline const LogConfiguration& GetLogConfiguration() const{ return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    inline void SetLogConfiguration(const LogConfiguration& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }
    inline void SetLogConfiguration(LogConfiguration&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }
    inline CreateContainerFleetRequest& WithLogConfiguration(const LogConfiguration& value) { SetLogConfiguration(value); return *this;}
    inline CreateContainerFleetRequest& WithLogConfiguration(LogConfiguration&& value) { SetLogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of labels to assign to the new fleet resource. Tags are
     * developer-defined key-value pairs. Tagging Amazon Web Services resources are
     * useful for resource management, access management and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateContainerFleetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateContainerFleetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateContainerFleetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateContainerFleetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_fleetRoleArn;
    bool m_fleetRoleArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_gameServerContainerGroupDefinitionName;
    bool m_gameServerContainerGroupDefinitionNameHasBeenSet = false;

    Aws::String m_perInstanceContainerGroupDefinitionName;
    bool m_perInstanceContainerGroupDefinitionNameHasBeenSet = false;

    ConnectionPortRange m_instanceConnectionPortRange;
    bool m_instanceConnectionPortRangeHasBeenSet = false;

    Aws::Vector<IpPermission> m_instanceInboundPermissions;
    bool m_instanceInboundPermissionsHasBeenSet = false;

    int m_gameServerContainerGroupsPerInstance;
    bool m_gameServerContainerGroupsPerInstanceHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    ContainerFleetBillingType m_billingType;
    bool m_billingTypeHasBeenSet = false;

    Aws::Vector<LocationConfiguration> m_locations;
    bool m_locationsHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricGroups;
    bool m_metricGroupsHasBeenSet = false;

    ProtectionPolicy m_newGameSessionProtectionPolicy;
    bool m_newGameSessionProtectionPolicyHasBeenSet = false;

    GameSessionCreationLimitPolicy m_gameSessionCreationLimitPolicy;
    bool m_gameSessionCreationLimitPolicyHasBeenSet = false;

    LogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
