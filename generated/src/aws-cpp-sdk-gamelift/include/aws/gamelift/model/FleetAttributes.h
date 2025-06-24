/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/FleetType.h>
#include <aws/gamelift/model/EC2InstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamelift/model/FleetStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ProtectionPolicy.h>
#include <aws/gamelift/model/OperatingSystem.h>
#include <aws/gamelift/model/ResourceCreationLimitPolicy.h>
#include <aws/gamelift/model/CertificateConfiguration.h>
#include <aws/gamelift/model/ComputeType.h>
#include <aws/gamelift/model/AnywhereConfiguration.h>
#include <aws/gamelift/model/InstanceRoleCredentialsProvider.h>
#include <aws/gamelift/model/FleetAction.h>
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
   * <p>Describes an Amazon GameLift Servers fleet of game hosting resources.
   * Attributes differ based on the fleet's compute type, as follows:</p> <ul> <li>
   * <p>EC2 fleet attributes identify a <code>Build</code> resource (for fleets with
   * customer game server builds) or a <code>Script</code> resource (for Amazon
   * GameLift Servers Realtime fleets).</p> </li> <li> <p>Amazon GameLift Servers
   * Anywhere fleets have an abbreviated set of attributes, because most fleet
   * configurations are set directly on the fleet's computes. Attributes include
   * fleet identifiers and descriptive properties, creation/termination time, and
   * fleet status.</p> </li> </ul> <p> <b>Returned by:</b> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeFleetAttributes">https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeFleetAttributes</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/FleetAttributes">AWS
   * API Reference</a></p>
   */
  class FleetAttributes
  {
  public:
    AWS_GAMELIFT_API FleetAttributes() = default;
    AWS_GAMELIFT_API FleetAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API FleetAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the fleet.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    FleetAttributes& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
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
    FleetAttributes& WithFleetArn(FleetArnT&& value) { SetFleetArn(std::forward<FleetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the fleet uses On-Demand or Spot instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. This fleet property can't be changed after
     * the fleet is created.</p>
     */
    inline FleetType GetFleetType() const { return m_fleetType; }
    inline bool FleetTypeHasBeenSet() const { return m_fleetTypeHasBeenSet; }
    inline void SetFleetType(FleetType value) { m_fleetTypeHasBeenSet = true; m_fleetType = value; }
    inline FleetAttributes& WithFleetType(FleetType value) { SetFleetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type that the fleet uses. Instance type determines
     * the computing resources of each instance in the fleet, including CPU, memory,
     * storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions. This attribute is used with fleets
     * where <code>ComputeType</code> is <code>EC2</code>.</p>
     */
    inline EC2InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(EC2InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline FleetAttributes& WithInstanceType(EC2InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    FleetAttributes& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    FleetAttributes& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    FleetAttributes& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetTerminationTime() const { return m_terminationTime; }
    inline bool TerminationTimeHasBeenSet() const { return m_terminationTimeHasBeenSet; }
    template<typename TerminationTimeT = Aws::Utils::DateTime>
    void SetTerminationTime(TerminationTimeT&& value) { m_terminationTimeHasBeenSet = true; m_terminationTime = std::forward<TerminationTimeT>(value); }
    template<typename TerminationTimeT = Aws::Utils::DateTime>
    FleetAttributes& WithTerminationTime(TerminationTimeT&& value) { SetTerminationTime(std::forward<TerminationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the fleet. Possible fleet statuses include the
     * following:</p> <ul> <li> <p>NEW -- A new fleet resource has been defined and
     * Amazon GameLift Servers has started creating the fleet. Desired instances is set
     * to 1. </p> </li> <li> <p>DOWNLOADING/VALIDATING/BUILDING -- Amazon GameLift
     * Servers is download the game server build, running install scripts, and then
     * validating the build files. When complete, Amazon GameLift Servers launches a
     * fleet instance. </p> </li> <li> <p>ACTIVATING -- Amazon GameLift Servers is
     * launching a game server process and testing its connectivity with the Amazon
     * GameLift Servers service.</p> </li> <li> <p>ACTIVE -- The fleet is now ready to
     * host game sessions.</p> </li> <li> <p>ERROR -- An error occurred when
     * downloading, validating, building, or activating the fleet.</p> </li> <li>
     * <p>DELETING -- Hosts are responding to a delete fleet request.</p> </li> <li>
     * <p>TERMINATED -- The fleet no longer exists.</p> </li> </ul>
     */
    inline FleetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FleetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline FleetAttributes& WithStatus(FleetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the build resource that is deployed on instances in
     * this fleet. This attribute is used with fleets where <code>ComputeType</code> is
     * "EC2".</p>
     */
    inline const Aws::String& GetBuildId() const { return m_buildId; }
    inline bool BuildIdHasBeenSet() const { return m_buildIdHasBeenSet; }
    template<typename BuildIdT = Aws::String>
    void SetBuildId(BuildIdT&& value) { m_buildIdHasBeenSet = true; m_buildId = std::forward<BuildIdT>(value); }
    template<typename BuildIdT = Aws::String>
    FleetAttributes& WithBuildId(BuildIdT&& value) { SetBuildId(std::forward<BuildIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the Amazon GameLift Servers build resource that is deployed on
     * instances in this fleet. In a GameLift build ARN, the resource ID matches the
     * <code>BuildId</code> value. This attribute is used with fleets where
     * <code>ComputeType</code> is "EC2".</p>
     */
    inline const Aws::String& GetBuildArn() const { return m_buildArn; }
    inline bool BuildArnHasBeenSet() const { return m_buildArnHasBeenSet; }
    template<typename BuildArnT = Aws::String>
    void SetBuildArn(BuildArnT&& value) { m_buildArnHasBeenSet = true; m_buildArn = std::forward<BuildArnT>(value); }
    template<typename BuildArnT = Aws::String>
    FleetAttributes& WithBuildArn(BuildArnT&& value) { SetBuildArn(std::forward<BuildArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the Realtime script resource that is deployed on
     * instances in this fleet. This attribute is used with fleets where
     * <code>ComputeType</code> is "EC2".</p>
     */
    inline const Aws::String& GetScriptId() const { return m_scriptId; }
    inline bool ScriptIdHasBeenSet() const { return m_scriptIdHasBeenSet; }
    template<typename ScriptIdT = Aws::String>
    void SetScriptId(ScriptIdT&& value) { m_scriptIdHasBeenSet = true; m_scriptId = std::forward<ScriptIdT>(value); }
    template<typename ScriptIdT = Aws::String>
    FleetAttributes& WithScriptId(ScriptIdT&& value) { SetScriptId(std::forward<ScriptIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift script resource that is deployed on instances in
     * this fleet. In a GameLift script ARN, the resource ID matches the
     * <code>ScriptId</code> value.</p>
     */
    inline const Aws::String& GetScriptArn() const { return m_scriptArn; }
    inline bool ScriptArnHasBeenSet() const { return m_scriptArnHasBeenSet; }
    template<typename ScriptArnT = Aws::String>
    void SetScriptArn(ScriptArnT&& value) { m_scriptArnHasBeenSet = true; m_scriptArn = std::forward<ScriptArnT>(value); }
    template<typename ScriptArnT = Aws::String>
    FleetAttributes& WithScriptArn(ScriptArnT&& value) { SetScriptArn(std::forward<ScriptArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>This parameter is no longer used.</b> Server launch paths are now defined
     * using the fleet's <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/RuntimeConfiguration.html">RuntimeConfiguration</a>.
     * Requests that use this parameter continue to be valid.</p>
     */
    inline const Aws::String& GetServerLaunchPath() const { return m_serverLaunchPath; }
    inline bool ServerLaunchPathHasBeenSet() const { return m_serverLaunchPathHasBeenSet; }
    template<typename ServerLaunchPathT = Aws::String>
    void SetServerLaunchPath(ServerLaunchPathT&& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = std::forward<ServerLaunchPathT>(value); }
    template<typename ServerLaunchPathT = Aws::String>
    FleetAttributes& WithServerLaunchPath(ServerLaunchPathT&& value) { SetServerLaunchPath(std::forward<ServerLaunchPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>This parameter is no longer used.</b> Server launch parameters are now
     * defined using the fleet's runtime configuration. Requests that use this
     * parameter continue to be valid.</p>
     */
    inline const Aws::String& GetServerLaunchParameters() const { return m_serverLaunchParameters; }
    inline bool ServerLaunchParametersHasBeenSet() const { return m_serverLaunchParametersHasBeenSet; }
    template<typename ServerLaunchParametersT = Aws::String>
    void SetServerLaunchParameters(ServerLaunchParametersT&& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = std::forward<ServerLaunchParametersT>(value); }
    template<typename ServerLaunchParametersT = Aws::String>
    FleetAttributes& WithServerLaunchParameters(ServerLaunchParametersT&& value) { SetServerLaunchParameters(std::forward<ServerLaunchParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>This parameter is no longer used.</b> Game session log paths are now
     * defined using the Amazon GameLift Servers server API <code>ProcessReady()</code>
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLogPaths() const { return m_logPaths; }
    inline bool LogPathsHasBeenSet() const { return m_logPathsHasBeenSet; }
    template<typename LogPathsT = Aws::Vector<Aws::String>>
    void SetLogPaths(LogPathsT&& value) { m_logPathsHasBeenSet = true; m_logPaths = std::forward<LogPathsT>(value); }
    template<typename LogPathsT = Aws::Vector<Aws::String>>
    FleetAttributes& WithLogPaths(LogPathsT&& value) { SetLogPaths(std::forward<LogPathsT>(value)); return *this;}
    template<typename LogPathsT = Aws::String>
    FleetAttributes& AddLogPaths(LogPathsT&& value) { m_logPathsHasBeenSet = true; m_logPaths.emplace_back(std::forward<LogPathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of game session protection to set on all new instances that are
     * started in the fleet. This attribute is used with fleets where
     * <code>ComputeType</code> is <code>EC2</code>.</p> <ul> <li> <p>
     * <b>NoProtection</b> -- The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline ProtectionPolicy GetNewGameSessionProtectionPolicy() const { return m_newGameSessionProtectionPolicy; }
    inline bool NewGameSessionProtectionPolicyHasBeenSet() const { return m_newGameSessionProtectionPolicyHasBeenSet; }
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }
    inline FleetAttributes& WithNewGameSessionProtectionPolicy(ProtectionPolicy value) { SetNewGameSessionProtectionPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system of the fleet's computing resources. A fleet's operating
     * system is determined by the OS of the build or script that is deployed on this
     * fleet. This attribute is used with fleets where <code>ComputeType</code> is
     * <code>EC2</code>.</p>  <p>Amazon Linux 2 (AL2) will reach end of support
     * on 6/30/2025. See more details in the <a
     * href="http://aws.amazon.com/aws.amazon.com/amazon-linux-2/faqs/">Amazon Linux 2
     * FAQs</a>. For game servers that are hosted on AL2 and use server SDK version 4.x
     * for Amazon GameLift Servers, first update the game server build to server SDK
     * 5.x, and then deploy to AL2023 instances. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-serversdk5-migration.html">
     * Migrate to server SDK version 5.</a> </p> 
     */
    inline OperatingSystem GetOperatingSystem() const { return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(OperatingSystem value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline FleetAttributes& WithOperatingSystem(OperatingSystem value) { SetOperatingSystem(value); return *this;}
    ///@}

    ///@{
    
    inline const ResourceCreationLimitPolicy& GetResourceCreationLimitPolicy() const { return m_resourceCreationLimitPolicy; }
    inline bool ResourceCreationLimitPolicyHasBeenSet() const { return m_resourceCreationLimitPolicyHasBeenSet; }
    template<typename ResourceCreationLimitPolicyT = ResourceCreationLimitPolicy>
    void SetResourceCreationLimitPolicy(ResourceCreationLimitPolicyT&& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = std::forward<ResourceCreationLimitPolicyT>(value); }
    template<typename ResourceCreationLimitPolicyT = ResourceCreationLimitPolicy>
    FleetAttributes& WithResourceCreationLimitPolicy(ResourceCreationLimitPolicyT&& value) { SetResourceCreationLimitPolicy(std::forward<ResourceCreationLimitPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a metric group that metrics for this fleet are added to. In Amazon
     * CloudWatch, you can view aggregated metrics for fleets that are in a metric
     * group. A fleet can be included in only one metric group at a time. This
     * attribute is used with fleets where <code>ComputeType</code> is
     * <code>EC2</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricGroups() const { return m_metricGroups; }
    inline bool MetricGroupsHasBeenSet() const { return m_metricGroupsHasBeenSet; }
    template<typename MetricGroupsT = Aws::Vector<Aws::String>>
    void SetMetricGroups(MetricGroupsT&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = std::forward<MetricGroupsT>(value); }
    template<typename MetricGroupsT = Aws::Vector<Aws::String>>
    FleetAttributes& WithMetricGroups(MetricGroupsT&& value) { SetMetricGroups(std::forward<MetricGroupsT>(value)); return *this;}
    template<typename MetricGroupsT = Aws::String>
    FleetAttributes& AddMetricGroups(MetricGroupsT&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.emplace_back(std::forward<MetricGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of fleet activity that has been suspended using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StopFleetActions.html">StopFleetActions</a>.
     * This includes fleet auto-scaling. This attribute is used with fleets where
     * <code>ComputeType</code> is <code>EC2</code>.</p>
     */
    inline const Aws::Vector<FleetAction>& GetStoppedActions() const { return m_stoppedActions; }
    inline bool StoppedActionsHasBeenSet() const { return m_stoppedActionsHasBeenSet; }
    template<typename StoppedActionsT = Aws::Vector<FleetAction>>
    void SetStoppedActions(StoppedActionsT&& value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions = std::forward<StoppedActionsT>(value); }
    template<typename StoppedActionsT = Aws::Vector<FleetAction>>
    FleetAttributes& WithStoppedActions(StoppedActionsT&& value) { SetStoppedActions(std::forward<StoppedActionsT>(value)); return *this;}
    inline FleetAttributes& AddStoppedActions(FleetAction value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for an IAM role that manages access to your Amazon Web
     * Services services. With an instance role ARN set, any application that runs on
     * an instance in this fleet can assume the role, including install scripts, server
     * processes, and daemons (background processes). Create a role or look up a role's
     * ARN by using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about using on-box
     * credentials for your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>. This attribute is used with
     * fleets where <code>ComputeType</code> is <code>EC2</code>.</p>
     */
    inline const Aws::String& GetInstanceRoleArn() const { return m_instanceRoleArn; }
    inline bool InstanceRoleArnHasBeenSet() const { return m_instanceRoleArnHasBeenSet; }
    template<typename InstanceRoleArnT = Aws::String>
    void SetInstanceRoleArn(InstanceRoleArnT&& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = std::forward<InstanceRoleArnT>(value); }
    template<typename InstanceRoleArnT = Aws::String>
    FleetAttributes& WithInstanceRoleArn(InstanceRoleArnT&& value) { SetInstanceRoleArn(std::forward<InstanceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether a TLS/SSL certificate is generated for a fleet. This
     * feature must be enabled when creating the fleet. All instances in a fleet share
     * the same certificate.</p>
     */
    inline const CertificateConfiguration& GetCertificateConfiguration() const { return m_certificateConfiguration; }
    inline bool CertificateConfigurationHasBeenSet() const { return m_certificateConfigurationHasBeenSet; }
    template<typename CertificateConfigurationT = CertificateConfiguration>
    void SetCertificateConfiguration(CertificateConfigurationT&& value) { m_certificateConfigurationHasBeenSet = true; m_certificateConfiguration = std::forward<CertificateConfigurationT>(value); }
    template<typename CertificateConfigurationT = CertificateConfiguration>
    FleetAttributes& WithCertificateConfiguration(CertificateConfigurationT&& value) { SetCertificateConfiguration(std::forward<CertificateConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of compute resource used to host your game servers. You can use your
     * own compute resources with Amazon GameLift Servers Anywhere or use Amazon EC2
     * instances with managed Amazon GameLift Servers.</p>
     */
    inline ComputeType GetComputeType() const { return m_computeType; }
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
    inline void SetComputeType(ComputeType value) { m_computeTypeHasBeenSet = true; m_computeType = value; }
    inline FleetAttributes& WithComputeType(ComputeType value) { SetComputeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of attributes that are specific to an Anywhere fleet.</p>
     */
    inline const AnywhereConfiguration& GetAnywhereConfiguration() const { return m_anywhereConfiguration; }
    inline bool AnywhereConfigurationHasBeenSet() const { return m_anywhereConfigurationHasBeenSet; }
    template<typename AnywhereConfigurationT = AnywhereConfiguration>
    void SetAnywhereConfiguration(AnywhereConfigurationT&& value) { m_anywhereConfigurationHasBeenSet = true; m_anywhereConfiguration = std::forward<AnywhereConfigurationT>(value); }
    template<typename AnywhereConfigurationT = AnywhereConfiguration>
    FleetAttributes& WithAnywhereConfiguration(AnywhereConfigurationT&& value) { SetAnywhereConfiguration(std::forward<AnywhereConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that fleet instances maintain a shared credentials file for the IAM
     * role defined in <code>InstanceRoleArn</code>. Shared credentials allow
     * applications that are deployed with the game server executable to communicate
     * with other Amazon Web Services resources. This property is used only when the
     * game server is integrated with the server SDK version 5.x. For more information
     * about using shared credentials, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Communicate with other Amazon Web Services resources from your fleets</a>. This
     * attribute is used with fleets where <code>ComputeType</code> is
     * <code>EC2</code>.</p>
     */
    inline InstanceRoleCredentialsProvider GetInstanceRoleCredentialsProvider() const { return m_instanceRoleCredentialsProvider; }
    inline bool InstanceRoleCredentialsProviderHasBeenSet() const { return m_instanceRoleCredentialsProviderHasBeenSet; }
    inline void SetInstanceRoleCredentialsProvider(InstanceRoleCredentialsProvider value) { m_instanceRoleCredentialsProviderHasBeenSet = true; m_instanceRoleCredentialsProvider = value; }
    inline FleetAttributes& WithInstanceRoleCredentialsProvider(InstanceRoleCredentialsProvider value) { SetInstanceRoleCredentialsProvider(value); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    FleetType m_fleetType{FleetType::NOT_SET};
    bool m_fleetTypeHasBeenSet = false;

    EC2InstanceType m_instanceType{EC2InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_terminationTime{};
    bool m_terminationTimeHasBeenSet = false;

    FleetStatus m_status{FleetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_buildId;
    bool m_buildIdHasBeenSet = false;

    Aws::String m_buildArn;
    bool m_buildArnHasBeenSet = false;

    Aws::String m_scriptId;
    bool m_scriptIdHasBeenSet = false;

    Aws::String m_scriptArn;
    bool m_scriptArnHasBeenSet = false;

    Aws::String m_serverLaunchPath;
    bool m_serverLaunchPathHasBeenSet = false;

    Aws::String m_serverLaunchParameters;
    bool m_serverLaunchParametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_logPaths;
    bool m_logPathsHasBeenSet = false;

    ProtectionPolicy m_newGameSessionProtectionPolicy{ProtectionPolicy::NOT_SET};
    bool m_newGameSessionProtectionPolicyHasBeenSet = false;

    OperatingSystem m_operatingSystem{OperatingSystem::NOT_SET};
    bool m_operatingSystemHasBeenSet = false;

    ResourceCreationLimitPolicy m_resourceCreationLimitPolicy;
    bool m_resourceCreationLimitPolicyHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricGroups;
    bool m_metricGroupsHasBeenSet = false;

    Aws::Vector<FleetAction> m_stoppedActions;
    bool m_stoppedActionsHasBeenSet = false;

    Aws::String m_instanceRoleArn;
    bool m_instanceRoleArnHasBeenSet = false;

    CertificateConfiguration m_certificateConfiguration;
    bool m_certificateConfigurationHasBeenSet = false;

    ComputeType m_computeType{ComputeType::NOT_SET};
    bool m_computeTypeHasBeenSet = false;

    AnywhereConfiguration m_anywhereConfiguration;
    bool m_anywhereConfigurationHasBeenSet = false;

    InstanceRoleCredentialsProvider m_instanceRoleCredentialsProvider{InstanceRoleCredentialsProvider::NOT_SET};
    bool m_instanceRoleCredentialsProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
