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
   * <p>Describes an Amazon GameLift fleet of game hosting resources. Attributes
   * differ based on the fleet's compute type, as follows:</p> <ul> <li> <p>EC2 fleet
   * attributes identify a <code>Build</code> resource (for fleets with customer game
   * server builds) or a <code>Script</code> resource (for Realtime Servers
   * fleets).</p> </li> <li> <p>Amazon GameLift Anywhere fleets have an abbreviated
   * set of attributes, because most fleet configurations are set directly on the
   * fleet's computes. Attributes include fleet identifiers and descriptive
   * properties, creation/termination time, and fleet status.</p> </li> </ul> <p>
   * <b>Returned by:</b> <a>DescribeFleetAttributes</a> </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/FleetAttributes">AWS
   * API Reference</a></p>
   */
  class FleetAttributes
  {
  public:
    AWS_GAMELIFT_API FleetAttributes();
    AWS_GAMELIFT_API FleetAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API FleetAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline FleetAttributes& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline FleetAttributes& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline FleetAttributes& WithFleetId(const char* value) { SetFleetId(value); return *this;}
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
    inline FleetAttributes& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}
    inline FleetAttributes& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}
    inline FleetAttributes& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the fleet uses On-Demand or Spot instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. This fleet property can't be changed after
     * the fleet is created.</p>
     */
    inline const FleetType& GetFleetType() const{ return m_fleetType; }
    inline bool FleetTypeHasBeenSet() const { return m_fleetTypeHasBeenSet; }
    inline void SetFleetType(const FleetType& value) { m_fleetTypeHasBeenSet = true; m_fleetType = value; }
    inline void SetFleetType(FleetType&& value) { m_fleetTypeHasBeenSet = true; m_fleetType = std::move(value); }
    inline FleetAttributes& WithFleetType(const FleetType& value) { SetFleetType(value); return *this;}
    inline FleetAttributes& WithFleetType(FleetType&& value) { SetFleetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type that the fleet uses. Instance type determines
     * the computing resources of each instance in the fleet, including CPU, memory,
     * storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions. This attribute is used with fleets
     * where <code>ComputeType</code> is "EC2".</p>
     */
    inline const EC2InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const EC2InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(EC2InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline FleetAttributes& WithInstanceType(const EC2InstanceType& value) { SetInstanceType(value); return *this;}
    inline FleetAttributes& WithInstanceType(EC2InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline FleetAttributes& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline FleetAttributes& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline FleetAttributes& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FleetAttributes& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FleetAttributes& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FleetAttributes& WithName(const char* value) { SetName(value); return *this;}
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
    inline FleetAttributes& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline FleetAttributes& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetTerminationTime() const{ return m_terminationTime; }
    inline bool TerminationTimeHasBeenSet() const { return m_terminationTimeHasBeenSet; }
    inline void SetTerminationTime(const Aws::Utils::DateTime& value) { m_terminationTimeHasBeenSet = true; m_terminationTime = value; }
    inline void SetTerminationTime(Aws::Utils::DateTime&& value) { m_terminationTimeHasBeenSet = true; m_terminationTime = std::move(value); }
    inline FleetAttributes& WithTerminationTime(const Aws::Utils::DateTime& value) { SetTerminationTime(value); return *this;}
    inline FleetAttributes& WithTerminationTime(Aws::Utils::DateTime&& value) { SetTerminationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the fleet. Possible fleet statuses include the
     * following:</p> <ul> <li> <p>NEW -- A new fleet resource has been defined and
     * Amazon GameLift has started creating the fleet. Desired instances is set to 1.
     * </p> </li> <li> <p>DOWNLOADING/VALIDATING/BUILDING -- Amazon GameLift is
     * download the game server build, running install scripts, and then validating the
     * build files. When complete, Amazon GameLift launches a fleet instance. </p>
     * </li> <li> <p>ACTIVATING -- Amazon GameLift is launching a game server process
     * and testing its connectivity with the Amazon GameLift service.</p> </li> <li>
     * <p>ACTIVE -- The fleet is now ready to host game sessions.</p> </li> <li>
     * <p>ERROR -- An error occurred when downloading, validating, building, or
     * activating the fleet.</p> </li> <li> <p>DELETING -- Hosts are responding to a
     * delete fleet request.</p> </li> <li> <p>TERMINATED -- The fleet no longer
     * exists.</p> </li> </ul>
     */
    inline const FleetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const FleetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(FleetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline FleetAttributes& WithStatus(const FleetStatus& value) { SetStatus(value); return *this;}
    inline FleetAttributes& WithStatus(FleetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the build resource that is deployed on instances in
     * this fleet. This attribute is used with fleets where <code>ComputeType</code> is
     * "EC2".</p>
     */
    inline const Aws::String& GetBuildId() const{ return m_buildId; }
    inline bool BuildIdHasBeenSet() const { return m_buildIdHasBeenSet; }
    inline void SetBuildId(const Aws::String& value) { m_buildIdHasBeenSet = true; m_buildId = value; }
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = std::move(value); }
    inline void SetBuildId(const char* value) { m_buildIdHasBeenSet = true; m_buildId.assign(value); }
    inline FleetAttributes& WithBuildId(const Aws::String& value) { SetBuildId(value); return *this;}
    inline FleetAttributes& WithBuildId(Aws::String&& value) { SetBuildId(std::move(value)); return *this;}
    inline FleetAttributes& WithBuildId(const char* value) { SetBuildId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the Amazon GameLift build resource that is deployed on instances
     * in this fleet. In a GameLift build ARN, the resource ID matches the
     * <code>BuildId</code> value. This attribute is used with fleets where
     * <code>ComputeType</code> is "EC2".</p>
     */
    inline const Aws::String& GetBuildArn() const{ return m_buildArn; }
    inline bool BuildArnHasBeenSet() const { return m_buildArnHasBeenSet; }
    inline void SetBuildArn(const Aws::String& value) { m_buildArnHasBeenSet = true; m_buildArn = value; }
    inline void SetBuildArn(Aws::String&& value) { m_buildArnHasBeenSet = true; m_buildArn = std::move(value); }
    inline void SetBuildArn(const char* value) { m_buildArnHasBeenSet = true; m_buildArn.assign(value); }
    inline FleetAttributes& WithBuildArn(const Aws::String& value) { SetBuildArn(value); return *this;}
    inline FleetAttributes& WithBuildArn(Aws::String&& value) { SetBuildArn(std::move(value)); return *this;}
    inline FleetAttributes& WithBuildArn(const char* value) { SetBuildArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the Realtime script resource that is deployed on
     * instances in this fleet. This attribute is used with fleets where
     * <code>ComputeType</code> is "EC2".</p>
     */
    inline const Aws::String& GetScriptId() const{ return m_scriptId; }
    inline bool ScriptIdHasBeenSet() const { return m_scriptIdHasBeenSet; }
    inline void SetScriptId(const Aws::String& value) { m_scriptIdHasBeenSet = true; m_scriptId = value; }
    inline void SetScriptId(Aws::String&& value) { m_scriptIdHasBeenSet = true; m_scriptId = std::move(value); }
    inline void SetScriptId(const char* value) { m_scriptIdHasBeenSet = true; m_scriptId.assign(value); }
    inline FleetAttributes& WithScriptId(const Aws::String& value) { SetScriptId(value); return *this;}
    inline FleetAttributes& WithScriptId(Aws::String&& value) { SetScriptId(std::move(value)); return *this;}
    inline FleetAttributes& WithScriptId(const char* value) { SetScriptId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift script resource that is deployed on instances in
     * this fleet. In a GameLift script ARN, the resource ID matches the
     * <code>ScriptId</code> value.</p>
     */
    inline const Aws::String& GetScriptArn() const{ return m_scriptArn; }
    inline bool ScriptArnHasBeenSet() const { return m_scriptArnHasBeenSet; }
    inline void SetScriptArn(const Aws::String& value) { m_scriptArnHasBeenSet = true; m_scriptArn = value; }
    inline void SetScriptArn(Aws::String&& value) { m_scriptArnHasBeenSet = true; m_scriptArn = std::move(value); }
    inline void SetScriptArn(const char* value) { m_scriptArnHasBeenSet = true; m_scriptArn.assign(value); }
    inline FleetAttributes& WithScriptArn(const Aws::String& value) { SetScriptArn(value); return *this;}
    inline FleetAttributes& WithScriptArn(Aws::String&& value) { SetScriptArn(std::move(value)); return *this;}
    inline FleetAttributes& WithScriptArn(const char* value) { SetScriptArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>This parameter is no longer used.</b> Server launch paths are now defined
     * using the fleet's <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/RuntimeConfiguration.html">RuntimeConfiguration</a>.
     * Requests that use this parameter continue to be valid.</p>
     */
    inline const Aws::String& GetServerLaunchPath() const{ return m_serverLaunchPath; }
    inline bool ServerLaunchPathHasBeenSet() const { return m_serverLaunchPathHasBeenSet; }
    inline void SetServerLaunchPath(const Aws::String& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = value; }
    inline void SetServerLaunchPath(Aws::String&& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = std::move(value); }
    inline void SetServerLaunchPath(const char* value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath.assign(value); }
    inline FleetAttributes& WithServerLaunchPath(const Aws::String& value) { SetServerLaunchPath(value); return *this;}
    inline FleetAttributes& WithServerLaunchPath(Aws::String&& value) { SetServerLaunchPath(std::move(value)); return *this;}
    inline FleetAttributes& WithServerLaunchPath(const char* value) { SetServerLaunchPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>This parameter is no longer used.</b> Server launch parameters are now
     * defined using the fleet's runtime configuration. Requests that use this
     * parameter continue to be valid.</p>
     */
    inline const Aws::String& GetServerLaunchParameters() const{ return m_serverLaunchParameters; }
    inline bool ServerLaunchParametersHasBeenSet() const { return m_serverLaunchParametersHasBeenSet; }
    inline void SetServerLaunchParameters(const Aws::String& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = value; }
    inline void SetServerLaunchParameters(Aws::String&& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = std::move(value); }
    inline void SetServerLaunchParameters(const char* value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters.assign(value); }
    inline FleetAttributes& WithServerLaunchParameters(const Aws::String& value) { SetServerLaunchParameters(value); return *this;}
    inline FleetAttributes& WithServerLaunchParameters(Aws::String&& value) { SetServerLaunchParameters(std::move(value)); return *this;}
    inline FleetAttributes& WithServerLaunchParameters(const char* value) { SetServerLaunchParameters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>This parameter is no longer used.</b> Game session log paths are now
     * defined using the Amazon GameLift server API <code>ProcessReady()</code>
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLogPaths() const{ return m_logPaths; }
    inline bool LogPathsHasBeenSet() const { return m_logPathsHasBeenSet; }
    inline void SetLogPaths(const Aws::Vector<Aws::String>& value) { m_logPathsHasBeenSet = true; m_logPaths = value; }
    inline void SetLogPaths(Aws::Vector<Aws::String>&& value) { m_logPathsHasBeenSet = true; m_logPaths = std::move(value); }
    inline FleetAttributes& WithLogPaths(const Aws::Vector<Aws::String>& value) { SetLogPaths(value); return *this;}
    inline FleetAttributes& WithLogPaths(Aws::Vector<Aws::String>&& value) { SetLogPaths(std::move(value)); return *this;}
    inline FleetAttributes& AddLogPaths(const Aws::String& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }
    inline FleetAttributes& AddLogPaths(Aws::String&& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(std::move(value)); return *this; }
    inline FleetAttributes& AddLogPaths(const char* value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of game session protection to set on all new instances that are
     * started in the fleet. This attribute is used with fleets where
     * <code>ComputeType</code> is "EC2".</p> <ul> <li> <p> <b>NoProtection</b> -- The
     * game session can be terminated during a scale-down event.</p> </li> <li> <p>
     * <b>FullProtection</b> -- If the game session is in an <code>ACTIVE</code>
     * status, it cannot be terminated during a scale-down event.</p> </li> </ul>
     */
    inline const ProtectionPolicy& GetNewGameSessionProtectionPolicy() const{ return m_newGameSessionProtectionPolicy; }
    inline bool NewGameSessionProtectionPolicyHasBeenSet() const { return m_newGameSessionProtectionPolicyHasBeenSet; }
    inline void SetNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = std::move(value); }
    inline FleetAttributes& WithNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { SetNewGameSessionProtectionPolicy(value); return *this;}
    inline FleetAttributes& WithNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { SetNewGameSessionProtectionPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system of the fleet's computing resources. A fleet's operating
     * system is determined by the OS of the build or script that is deployed on this
     * fleet. This attribute is used with fleets where <code>ComputeType</code> is
     * "EC2".</p>  <p>Amazon Linux 2 (AL2) will reach end of support on
     * 6/30/2025. See more details in the <a
     * href="https://aws.amazon.com/amazon-linux-2/faqs/">Amazon Linux 2 FAQs</a>. For
     * game servers that are hosted on AL2 and use Amazon GameLift server SDK 4.x,
     * first update the game server build to server SDK 5.x, and then deploy to AL2023
     * instances. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-serversdk5-migration.html">
     * Migrate to Amazon GameLift server SDK version 5.</a> </p> 
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }
    inline FleetAttributes& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}
    inline FleetAttributes& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceCreationLimitPolicy& GetResourceCreationLimitPolicy() const{ return m_resourceCreationLimitPolicy; }
    inline bool ResourceCreationLimitPolicyHasBeenSet() const { return m_resourceCreationLimitPolicyHasBeenSet; }
    inline void SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = value; }
    inline void SetResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = std::move(value); }
    inline FleetAttributes& WithResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { SetResourceCreationLimitPolicy(value); return *this;}
    inline FleetAttributes& WithResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { SetResourceCreationLimitPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a metric group that metrics for this fleet are added to. In Amazon
     * CloudWatch, you can view aggregated metrics for fleets that are in a metric
     * group. A fleet can be included in only one metric group at a time. This
     * attribute is used with fleets where <code>ComputeType</code> is "EC2".</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricGroups() const{ return m_metricGroups; }
    inline bool MetricGroupsHasBeenSet() const { return m_metricGroupsHasBeenSet; }
    inline void SetMetricGroups(const Aws::Vector<Aws::String>& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = value; }
    inline void SetMetricGroups(Aws::Vector<Aws::String>&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = std::move(value); }
    inline FleetAttributes& WithMetricGroups(const Aws::Vector<Aws::String>& value) { SetMetricGroups(value); return *this;}
    inline FleetAttributes& WithMetricGroups(Aws::Vector<Aws::String>&& value) { SetMetricGroups(std::move(value)); return *this;}
    inline FleetAttributes& AddMetricGroups(const Aws::String& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }
    inline FleetAttributes& AddMetricGroups(Aws::String&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(std::move(value)); return *this; }
    inline FleetAttributes& AddMetricGroups(const char* value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of fleet activity that has been suspended using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StopFleetActions.html">StopFleetActions</a>.
     * This includes fleet auto-scaling. This attribute is used with fleets where
     * <code>ComputeType</code> is "EC2".</p>
     */
    inline const Aws::Vector<FleetAction>& GetStoppedActions() const{ return m_stoppedActions; }
    inline bool StoppedActionsHasBeenSet() const { return m_stoppedActionsHasBeenSet; }
    inline void SetStoppedActions(const Aws::Vector<FleetAction>& value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions = value; }
    inline void SetStoppedActions(Aws::Vector<FleetAction>&& value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions = std::move(value); }
    inline FleetAttributes& WithStoppedActions(const Aws::Vector<FleetAction>& value) { SetStoppedActions(value); return *this;}
    inline FleetAttributes& WithStoppedActions(Aws::Vector<FleetAction>&& value) { SetStoppedActions(std::move(value)); return *this;}
    inline FleetAttributes& AddStoppedActions(const FleetAction& value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions.push_back(value); return *this; }
    inline FleetAttributes& AddStoppedActions(FleetAction&& value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions.push_back(std::move(value)); return *this; }
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
     * fleets where <code>ComputeType</code> is "EC2".</p>
     */
    inline const Aws::String& GetInstanceRoleArn() const{ return m_instanceRoleArn; }
    inline bool InstanceRoleArnHasBeenSet() const { return m_instanceRoleArnHasBeenSet; }
    inline void SetInstanceRoleArn(const Aws::String& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = value; }
    inline void SetInstanceRoleArn(Aws::String&& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = std::move(value); }
    inline void SetInstanceRoleArn(const char* value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn.assign(value); }
    inline FleetAttributes& WithInstanceRoleArn(const Aws::String& value) { SetInstanceRoleArn(value); return *this;}
    inline FleetAttributes& WithInstanceRoleArn(Aws::String&& value) { SetInstanceRoleArn(std::move(value)); return *this;}
    inline FleetAttributes& WithInstanceRoleArn(const char* value) { SetInstanceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether a TLS/SSL certificate is generated for a fleet. This
     * feature must be enabled when creating the fleet. All instances in a fleet share
     * the same certificate.</p>
     */
    inline const CertificateConfiguration& GetCertificateConfiguration() const{ return m_certificateConfiguration; }
    inline bool CertificateConfigurationHasBeenSet() const { return m_certificateConfigurationHasBeenSet; }
    inline void SetCertificateConfiguration(const CertificateConfiguration& value) { m_certificateConfigurationHasBeenSet = true; m_certificateConfiguration = value; }
    inline void SetCertificateConfiguration(CertificateConfiguration&& value) { m_certificateConfigurationHasBeenSet = true; m_certificateConfiguration = std::move(value); }
    inline FleetAttributes& WithCertificateConfiguration(const CertificateConfiguration& value) { SetCertificateConfiguration(value); return *this;}
    inline FleetAttributes& WithCertificateConfiguration(CertificateConfiguration&& value) { SetCertificateConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of compute resource used to host your game servers. You can use your
     * own compute resources with Amazon GameLift Anywhere or use Amazon EC2 instances
     * with managed Amazon GameLift.</p>
     */
    inline const ComputeType& GetComputeType() const{ return m_computeType; }
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::move(value); }
    inline FleetAttributes& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}
    inline FleetAttributes& WithComputeType(ComputeType&& value) { SetComputeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon GameLift Anywhere configuration options.</p>
     */
    inline const AnywhereConfiguration& GetAnywhereConfiguration() const{ return m_anywhereConfiguration; }
    inline bool AnywhereConfigurationHasBeenSet() const { return m_anywhereConfigurationHasBeenSet; }
    inline void SetAnywhereConfiguration(const AnywhereConfiguration& value) { m_anywhereConfigurationHasBeenSet = true; m_anywhereConfiguration = value; }
    inline void SetAnywhereConfiguration(AnywhereConfiguration&& value) { m_anywhereConfigurationHasBeenSet = true; m_anywhereConfiguration = std::move(value); }
    inline FleetAttributes& WithAnywhereConfiguration(const AnywhereConfiguration& value) { SetAnywhereConfiguration(value); return *this;}
    inline FleetAttributes& WithAnywhereConfiguration(AnywhereConfiguration&& value) { SetAnywhereConfiguration(std::move(value)); return *this;}
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
     * attribute is used with fleets where <code>ComputeType</code> is "EC2".</p>
     */
    inline const InstanceRoleCredentialsProvider& GetInstanceRoleCredentialsProvider() const{ return m_instanceRoleCredentialsProvider; }
    inline bool InstanceRoleCredentialsProviderHasBeenSet() const { return m_instanceRoleCredentialsProviderHasBeenSet; }
    inline void SetInstanceRoleCredentialsProvider(const InstanceRoleCredentialsProvider& value) { m_instanceRoleCredentialsProviderHasBeenSet = true; m_instanceRoleCredentialsProvider = value; }
    inline void SetInstanceRoleCredentialsProvider(InstanceRoleCredentialsProvider&& value) { m_instanceRoleCredentialsProviderHasBeenSet = true; m_instanceRoleCredentialsProvider = std::move(value); }
    inline FleetAttributes& WithInstanceRoleCredentialsProvider(const InstanceRoleCredentialsProvider& value) { SetInstanceRoleCredentialsProvider(value); return *this;}
    inline FleetAttributes& WithInstanceRoleCredentialsProvider(InstanceRoleCredentialsProvider&& value) { SetInstanceRoleCredentialsProvider(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    FleetType m_fleetType;
    bool m_fleetTypeHasBeenSet = false;

    EC2InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_terminationTime;
    bool m_terminationTimeHasBeenSet = false;

    FleetStatus m_status;
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

    ProtectionPolicy m_newGameSessionProtectionPolicy;
    bool m_newGameSessionProtectionPolicyHasBeenSet = false;

    OperatingSystem m_operatingSystem;
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

    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet = false;

    AnywhereConfiguration m_anywhereConfiguration;
    bool m_anywhereConfigurationHasBeenSet = false;

    InstanceRoleCredentialsProvider m_instanceRoleCredentialsProvider;
    bool m_instanceRoleCredentialsProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
