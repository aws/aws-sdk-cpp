/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/EC2InstanceType.h>
#include <aws/gamelift/model/ProtectionPolicy.h>
#include <aws/gamelift/model/RuntimeConfiguration.h>
#include <aws/gamelift/model/ResourceCreationLimitPolicy.h>
#include <aws/gamelift/model/FleetType.h>
#include <aws/gamelift/model/CertificateConfiguration.h>
#include <aws/gamelift/model/ComputeType.h>
#include <aws/gamelift/model/AnywhereConfiguration.h>
#include <aws/gamelift/model/InstanceRoleCredentialsProvider.h>
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
  class CreateFleetRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API CreateFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFleet"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateFleetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateFleetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateFleetRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateFleetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateFleetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateFleetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for a custom game server build to be deployed to a
     * fleet with compute type <code>EC2</code>. You can use either the build ID or
     * ARN. The build must be uploaded to Amazon GameLift and in <code>READY</code>
     * status. This fleet property can't be changed after the fleet is created.</p>
     */
    inline const Aws::String& GetBuildId() const{ return m_buildId; }
    inline bool BuildIdHasBeenSet() const { return m_buildIdHasBeenSet; }
    inline void SetBuildId(const Aws::String& value) { m_buildIdHasBeenSet = true; m_buildId = value; }
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = std::move(value); }
    inline void SetBuildId(const char* value) { m_buildIdHasBeenSet = true; m_buildId.assign(value); }
    inline CreateFleetRequest& WithBuildId(const Aws::String& value) { SetBuildId(value); return *this;}
    inline CreateFleetRequest& WithBuildId(Aws::String&& value) { SetBuildId(std::move(value)); return *this;}
    inline CreateFleetRequest& WithBuildId(const char* value) { SetBuildId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for a Realtime configuration script to be deployed to a
     * fleet with compute type <code>EC2</code>. You can use either the script ID or
     * ARN. Scripts must be uploaded to Amazon GameLift prior to creating the fleet.
     * This fleet property can't be changed after the fleet is created.</p>
     */
    inline const Aws::String& GetScriptId() const{ return m_scriptId; }
    inline bool ScriptIdHasBeenSet() const { return m_scriptIdHasBeenSet; }
    inline void SetScriptId(const Aws::String& value) { m_scriptIdHasBeenSet = true; m_scriptId = value; }
    inline void SetScriptId(Aws::String&& value) { m_scriptIdHasBeenSet = true; m_scriptId = std::move(value); }
    inline void SetScriptId(const char* value) { m_scriptIdHasBeenSet = true; m_scriptId.assign(value); }
    inline CreateFleetRequest& WithScriptId(const Aws::String& value) { SetScriptId(value); return *this;}
    inline CreateFleetRequest& WithScriptId(Aws::String&& value) { SetScriptId(std::move(value)); return *this;}
    inline CreateFleetRequest& WithScriptId(const char* value) { SetScriptId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>This parameter is no longer used.</b> Specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline const Aws::String& GetServerLaunchPath() const{ return m_serverLaunchPath; }
    inline bool ServerLaunchPathHasBeenSet() const { return m_serverLaunchPathHasBeenSet; }
    inline void SetServerLaunchPath(const Aws::String& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = value; }
    inline void SetServerLaunchPath(Aws::String&& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = std::move(value); }
    inline void SetServerLaunchPath(const char* value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath.assign(value); }
    inline CreateFleetRequest& WithServerLaunchPath(const Aws::String& value) { SetServerLaunchPath(value); return *this;}
    inline CreateFleetRequest& WithServerLaunchPath(Aws::String&& value) { SetServerLaunchPath(std::move(value)); return *this;}
    inline CreateFleetRequest& WithServerLaunchPath(const char* value) { SetServerLaunchPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>This parameter is no longer used.</b> Specify server launch parameters
     * using the <code>RuntimeConfiguration</code> parameter. Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline const Aws::String& GetServerLaunchParameters() const{ return m_serverLaunchParameters; }
    inline bool ServerLaunchParametersHasBeenSet() const { return m_serverLaunchParametersHasBeenSet; }
    inline void SetServerLaunchParameters(const Aws::String& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = value; }
    inline void SetServerLaunchParameters(Aws::String&& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = std::move(value); }
    inline void SetServerLaunchParameters(const char* value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters.assign(value); }
    inline CreateFleetRequest& WithServerLaunchParameters(const Aws::String& value) { SetServerLaunchParameters(value); return *this;}
    inline CreateFleetRequest& WithServerLaunchParameters(Aws::String&& value) { SetServerLaunchParameters(std::move(value)); return *this;}
    inline CreateFleetRequest& WithServerLaunchParameters(const char* value) { SetServerLaunchParameters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>This parameter is no longer used.</b> To specify where Amazon GameLift
     * should store log files once a server process shuts down, use the Amazon GameLift
     * server API <code>ProcessReady()</code> and specify one or more directory paths
     * in <code>logParameters</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-initialize">Initialize
     * the server process</a> in the <i>Amazon GameLift Developer Guide</i>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLogPaths() const{ return m_logPaths; }
    inline bool LogPathsHasBeenSet() const { return m_logPathsHasBeenSet; }
    inline void SetLogPaths(const Aws::Vector<Aws::String>& value) { m_logPathsHasBeenSet = true; m_logPaths = value; }
    inline void SetLogPaths(Aws::Vector<Aws::String>&& value) { m_logPathsHasBeenSet = true; m_logPaths = std::move(value); }
    inline CreateFleetRequest& WithLogPaths(const Aws::Vector<Aws::String>& value) { SetLogPaths(value); return *this;}
    inline CreateFleetRequest& WithLogPaths(Aws::Vector<Aws::String>&& value) { SetLogPaths(std::move(value)); return *this;}
    inline CreateFleetRequest& AddLogPaths(const Aws::String& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }
    inline CreateFleetRequest& AddLogPaths(Aws::String&& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(std::move(value)); return *this; }
    inline CreateFleetRequest& AddLogPaths(const char* value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon GameLift-supported Amazon EC2 instance type to use with managed
     * EC2 fleets. Instance type determines the computing resources that will be used
     * to host your game servers, including CPU, memory, storage, and networking
     * capacity. See <a href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic
     * Compute Cloud Instance Types</a> for detailed descriptions of Amazon EC2
     * instance types.</p>
     */
    inline const EC2InstanceType& GetEC2InstanceType() const{ return m_eC2InstanceType; }
    inline bool EC2InstanceTypeHasBeenSet() const { return m_eC2InstanceTypeHasBeenSet; }
    inline void SetEC2InstanceType(const EC2InstanceType& value) { m_eC2InstanceTypeHasBeenSet = true; m_eC2InstanceType = value; }
    inline void SetEC2InstanceType(EC2InstanceType&& value) { m_eC2InstanceTypeHasBeenSet = true; m_eC2InstanceType = std::move(value); }
    inline CreateFleetRequest& WithEC2InstanceType(const EC2InstanceType& value) { SetEC2InstanceType(value); return *this;}
    inline CreateFleetRequest& WithEC2InstanceType(EC2InstanceType&& value) { SetEC2InstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address ranges and port settings that allow inbound traffic to access
     * game server processes and other processes on this fleet. Set this parameter for
     * managed EC2 fleets. You can leave this parameter empty when creating the fleet,
     * but you must call <a>UpdateFleetPortSettings</a> to set it before players can
     * connect to game sessions. As a best practice, we recommend opening ports for
     * remote access only when you need them and closing them when you're finished. For
     * Realtime Servers fleets, Amazon GameLift automatically sets TCP and UDP
     * ranges.</p>
     */
    inline const Aws::Vector<IpPermission>& GetEC2InboundPermissions() const{ return m_eC2InboundPermissions; }
    inline bool EC2InboundPermissionsHasBeenSet() const { return m_eC2InboundPermissionsHasBeenSet; }
    inline void SetEC2InboundPermissions(const Aws::Vector<IpPermission>& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions = value; }
    inline void SetEC2InboundPermissions(Aws::Vector<IpPermission>&& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions = std::move(value); }
    inline CreateFleetRequest& WithEC2InboundPermissions(const Aws::Vector<IpPermission>& value) { SetEC2InboundPermissions(value); return *this;}
    inline CreateFleetRequest& WithEC2InboundPermissions(Aws::Vector<IpPermission>&& value) { SetEC2InboundPermissions(std::move(value)); return *this;}
    inline CreateFleetRequest& AddEC2InboundPermissions(const IpPermission& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions.push_back(value); return *this; }
    inline CreateFleetRequest& AddEC2InboundPermissions(IpPermission&& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of termination protection for active game sessions on the fleet.
     * By default, this property is set to <code>NoProtection</code>. You can also set
     * game session protection for an individual game session by calling <a
     * href="gamelift/latest/apireference/API_UpdateGameSession.html">UpdateGameSession</a>.</p>
     * <ul> <li> <p> <b>NoProtection</b> - Game sessions can be terminated during
     * active gameplay as a result of a scale-down event. </p> </li> <li> <p>
     * <b>FullProtection</b> - Game sessions in <code>ACTIVE</code> status cannot be
     * terminated during a scale-down event.</p> </li> </ul>
     */
    inline const ProtectionPolicy& GetNewGameSessionProtectionPolicy() const{ return m_newGameSessionProtectionPolicy; }
    inline bool NewGameSessionProtectionPolicyHasBeenSet() const { return m_newGameSessionProtectionPolicyHasBeenSet; }
    inline void SetNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = std::move(value); }
    inline CreateFleetRequest& WithNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { SetNewGameSessionProtectionPolicy(value); return *this;}
    inline CreateFleetRequest& WithNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { SetNewGameSessionProtectionPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Instructions for how to launch and run server processes on the fleet. Set
     * runtime configuration for managed EC2 fleets. For an Anywhere fleets, set this
     * parameter only if the fleet is running the Amazon GameLift Agent. The runtime
     * configuration defines one or more server process configurations. Each server
     * process identifies a game executable or Realtime script file and the number of
     * processes to run concurrently. </p>  <p>This parameter replaces the
     * parameters <code>ServerLaunchPath</code> and
     * <code>ServerLaunchParameters</code>, which are still supported for backward
     * compatibility.</p> 
     */
    inline const RuntimeConfiguration& GetRuntimeConfiguration() const{ return m_runtimeConfiguration; }
    inline bool RuntimeConfigurationHasBeenSet() const { return m_runtimeConfigurationHasBeenSet; }
    inline void SetRuntimeConfiguration(const RuntimeConfiguration& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = value; }
    inline void SetRuntimeConfiguration(RuntimeConfiguration&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = std::move(value); }
    inline CreateFleetRequest& WithRuntimeConfiguration(const RuntimeConfiguration& value) { SetRuntimeConfiguration(value); return *this;}
    inline CreateFleetRequest& WithRuntimeConfiguration(RuntimeConfiguration&& value) { SetRuntimeConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A policy that limits the number of game sessions that an individual player
     * can create on instances in this fleet within a specified span of time.</p>
     */
    inline const ResourceCreationLimitPolicy& GetResourceCreationLimitPolicy() const{ return m_resourceCreationLimitPolicy; }
    inline bool ResourceCreationLimitPolicyHasBeenSet() const { return m_resourceCreationLimitPolicyHasBeenSet; }
    inline void SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = value; }
    inline void SetResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = std::move(value); }
    inline CreateFleetRequest& WithResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { SetResourceCreationLimitPolicy(value); return *this;}
    inline CreateFleetRequest& WithResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { SetResourceCreationLimitPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Amazon Web Services CloudWatch metric group to add this fleet
     * to. A metric group is used to aggregate the metrics for multiple fleets. You can
     * specify an existing metric group name or set a new name to create a new metric
     * group. A fleet can be included in only one metric group at a time. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricGroups() const{ return m_metricGroups; }
    inline bool MetricGroupsHasBeenSet() const { return m_metricGroupsHasBeenSet; }
    inline void SetMetricGroups(const Aws::Vector<Aws::String>& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = value; }
    inline void SetMetricGroups(Aws::Vector<Aws::String>&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = std::move(value); }
    inline CreateFleetRequest& WithMetricGroups(const Aws::Vector<Aws::String>& value) { SetMetricGroups(value); return *this;}
    inline CreateFleetRequest& WithMetricGroups(Aws::Vector<Aws::String>&& value) { SetMetricGroups(std::move(value)); return *this;}
    inline CreateFleetRequest& AddMetricGroups(const Aws::String& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }
    inline CreateFleetRequest& AddMetricGroups(Aws::String&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(std::move(value)); return *this; }
    inline CreateFleetRequest& AddMetricGroups(const char* value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Used when peering your Amazon GameLift fleet with a VPC, the unique
     * identifier for the Amazon Web Services account that owns the VPC. You can find
     * your account ID in the Amazon Web Services Management Console under account
     * settings. </p>
     */
    inline const Aws::String& GetPeerVpcAwsAccountId() const{ return m_peerVpcAwsAccountId; }
    inline bool PeerVpcAwsAccountIdHasBeenSet() const { return m_peerVpcAwsAccountIdHasBeenSet; }
    inline void SetPeerVpcAwsAccountId(const Aws::String& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = value; }
    inline void SetPeerVpcAwsAccountId(Aws::String&& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = std::move(value); }
    inline void SetPeerVpcAwsAccountId(const char* value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId.assign(value); }
    inline CreateFleetRequest& WithPeerVpcAwsAccountId(const Aws::String& value) { SetPeerVpcAwsAccountId(value); return *this;}
    inline CreateFleetRequest& WithPeerVpcAwsAccountId(Aws::String&& value) { SetPeerVpcAwsAccountId(std::move(value)); return *this;}
    inline CreateFleetRequest& WithPeerVpcAwsAccountId(const char* value) { SetPeerVpcAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about VPC peering in
     * <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline const Aws::String& GetPeerVpcId() const{ return m_peerVpcId; }
    inline bool PeerVpcIdHasBeenSet() const { return m_peerVpcIdHasBeenSet; }
    inline void SetPeerVpcId(const Aws::String& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = value; }
    inline void SetPeerVpcId(Aws::String&& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = std::move(value); }
    inline void SetPeerVpcId(const char* value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId.assign(value); }
    inline CreateFleetRequest& WithPeerVpcId(const Aws::String& value) { SetPeerVpcId(value); return *this;}
    inline CreateFleetRequest& WithPeerVpcId(Aws::String&& value) { SetPeerVpcId(std::move(value)); return *this;}
    inline CreateFleetRequest& WithPeerVpcId(const char* value) { SetPeerVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to use On-Demand or Spot instances for this fleet. By
     * default, this property is set to <code>ON_DEMAND</code>. Learn more about when
     * to use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. This fleet property can't be changed after
     * the fleet is created.</p>
     */
    inline const FleetType& GetFleetType() const{ return m_fleetType; }
    inline bool FleetTypeHasBeenSet() const { return m_fleetTypeHasBeenSet; }
    inline void SetFleetType(const FleetType& value) { m_fleetTypeHasBeenSet = true; m_fleetType = value; }
    inline void SetFleetType(FleetType&& value) { m_fleetTypeHasBeenSet = true; m_fleetType = std::move(value); }
    inline CreateFleetRequest& WithFleetType(const FleetType& value) { SetFleetType(value); return *this;}
    inline CreateFleetRequest& WithFleetType(FleetType&& value) { SetFleetType(std::move(value)); return *this;}
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
     * Access external resources from a game server</a>. This fleet property can't be
     * changed after the fleet is created.</p>
     */
    inline const Aws::String& GetInstanceRoleArn() const{ return m_instanceRoleArn; }
    inline bool InstanceRoleArnHasBeenSet() const { return m_instanceRoleArnHasBeenSet; }
    inline void SetInstanceRoleArn(const Aws::String& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = value; }
    inline void SetInstanceRoleArn(Aws::String&& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = std::move(value); }
    inline void SetInstanceRoleArn(const char* value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn.assign(value); }
    inline CreateFleetRequest& WithInstanceRoleArn(const Aws::String& value) { SetInstanceRoleArn(value); return *this;}
    inline CreateFleetRequest& WithInstanceRoleArn(Aws::String&& value) { SetInstanceRoleArn(std::move(value)); return *this;}
    inline CreateFleetRequest& WithInstanceRoleArn(const char* value) { SetInstanceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Prompts Amazon GameLift to generate a TLS/SSL certificate for the fleet.
     * Amazon GameLift uses the certificates to encrypt traffic between game clients
     * and the game servers running on Amazon GameLift. By default, the
     * <code>CertificateConfiguration</code> is <code>DISABLED</code>. You can't change
     * this property after you create the fleet. </p> <p>Certificate Manager (ACM)
     * certificates expire after 13 months. Certificate expiration can cause fleets to
     * fail, preventing players from connecting to instances in the fleet. We recommend
     * you replace fleets before 13 months, consider using fleet aliases for a smooth
     * transition.</p>  <p>ACM isn't available in all Amazon Web Services
     * regions. A fleet creation request with certificate generation enabled in an
     * unsupported Region, fails with a 4xx error. For more information about the
     * supported Regions, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-regions.html">Supported
     * Regions</a> in the <i>Certificate Manager User Guide</i>.</p> 
     */
    inline const CertificateConfiguration& GetCertificateConfiguration() const{ return m_certificateConfiguration; }
    inline bool CertificateConfigurationHasBeenSet() const { return m_certificateConfigurationHasBeenSet; }
    inline void SetCertificateConfiguration(const CertificateConfiguration& value) { m_certificateConfigurationHasBeenSet = true; m_certificateConfiguration = value; }
    inline void SetCertificateConfiguration(CertificateConfiguration&& value) { m_certificateConfigurationHasBeenSet = true; m_certificateConfiguration = std::move(value); }
    inline CreateFleetRequest& WithCertificateConfiguration(const CertificateConfiguration& value) { SetCertificateConfiguration(value); return *this;}
    inline CreateFleetRequest& WithCertificateConfiguration(CertificateConfiguration&& value) { SetCertificateConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of remote locations to deploy additional instances to and manage as a
     * multi-location fleet. Use this parameter when creating a fleet in Amazon Web
     * Services Regions that support multiple locations. You can add any Amazon Web
     * Services Region or Local Zone that's supported by Amazon GameLift. Provide a
     * list of one or more Amazon Web Services Region codes, such as
     * <code>us-west-2</code>, or Local Zone names. When using this parameter, Amazon
     * GameLift requires you to include your home location in the request. For a list
     * of supported Regions and Local Zones, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-regions.html">
     * Amazon GameLift service locations</a> for managed hosting.</p>
     */
    inline const Aws::Vector<LocationConfiguration>& GetLocations() const{ return m_locations; }
    inline bool LocationsHasBeenSet() const { return m_locationsHasBeenSet; }
    inline void SetLocations(const Aws::Vector<LocationConfiguration>& value) { m_locationsHasBeenSet = true; m_locations = value; }
    inline void SetLocations(Aws::Vector<LocationConfiguration>&& value) { m_locationsHasBeenSet = true; m_locations = std::move(value); }
    inline CreateFleetRequest& WithLocations(const Aws::Vector<LocationConfiguration>& value) { SetLocations(value); return *this;}
    inline CreateFleetRequest& WithLocations(Aws::Vector<LocationConfiguration>&& value) { SetLocations(std::move(value)); return *this;}
    inline CreateFleetRequest& AddLocations(const LocationConfiguration& value) { m_locationsHasBeenSet = true; m_locations.push_back(value); return *this; }
    inline CreateFleetRequest& AddLocations(LocationConfiguration&& value) { m_locationsHasBeenSet = true; m_locations.push_back(std::move(value)); return *this; }
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
    inline CreateFleetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateFleetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateFleetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateFleetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of compute resource used to host your game servers. </p> <ul> <li>
     * <p> <code>EC2</code> – The game server build is deployed to Amazon EC2 instances
     * for cloud hosting. This is the default setting.</p> </li> <li> <p>
     * <code>ANYWHERE</code> – Your game server and supporting software is deployed to
     * compute resources that are provided and managed by you. With this compute type,
     * you can also set the <code>AnywhereConfiguration</code> parameter.</p> </li>
     * </ul>
     */
    inline const ComputeType& GetComputeType() const{ return m_computeType; }
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::move(value); }
    inline CreateFleetRequest& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}
    inline CreateFleetRequest& WithComputeType(ComputeType&& value) { SetComputeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon GameLift Anywhere configuration options.</p>
     */
    inline const AnywhereConfiguration& GetAnywhereConfiguration() const{ return m_anywhereConfiguration; }
    inline bool AnywhereConfigurationHasBeenSet() const { return m_anywhereConfigurationHasBeenSet; }
    inline void SetAnywhereConfiguration(const AnywhereConfiguration& value) { m_anywhereConfigurationHasBeenSet = true; m_anywhereConfiguration = value; }
    inline void SetAnywhereConfiguration(AnywhereConfiguration&& value) { m_anywhereConfigurationHasBeenSet = true; m_anywhereConfiguration = std::move(value); }
    inline CreateFleetRequest& WithAnywhereConfiguration(const AnywhereConfiguration& value) { SetAnywhereConfiguration(value); return *this;}
    inline CreateFleetRequest& WithAnywhereConfiguration(AnywhereConfiguration&& value) { SetAnywhereConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Prompts Amazon GameLift to generate a shared credentials file for the IAM
     * role that's defined in <code>InstanceRoleArn</code>. The shared credentials file
     * is stored on each fleet instance and refreshed as needed. Use shared credentials
     * for applications that are deployed along with the game server executable, if the
     * game server is integrated with server SDK version 5.x. For more information
     * about using shared credentials, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Communicate with other Amazon Web Services resources from your fleets</a>.</p>
     */
    inline const InstanceRoleCredentialsProvider& GetInstanceRoleCredentialsProvider() const{ return m_instanceRoleCredentialsProvider; }
    inline bool InstanceRoleCredentialsProviderHasBeenSet() const { return m_instanceRoleCredentialsProviderHasBeenSet; }
    inline void SetInstanceRoleCredentialsProvider(const InstanceRoleCredentialsProvider& value) { m_instanceRoleCredentialsProviderHasBeenSet = true; m_instanceRoleCredentialsProvider = value; }
    inline void SetInstanceRoleCredentialsProvider(InstanceRoleCredentialsProvider&& value) { m_instanceRoleCredentialsProviderHasBeenSet = true; m_instanceRoleCredentialsProvider = std::move(value); }
    inline CreateFleetRequest& WithInstanceRoleCredentialsProvider(const InstanceRoleCredentialsProvider& value) { SetInstanceRoleCredentialsProvider(value); return *this;}
    inline CreateFleetRequest& WithInstanceRoleCredentialsProvider(InstanceRoleCredentialsProvider&& value) { SetInstanceRoleCredentialsProvider(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_buildId;
    bool m_buildIdHasBeenSet = false;

    Aws::String m_scriptId;
    bool m_scriptIdHasBeenSet = false;

    Aws::String m_serverLaunchPath;
    bool m_serverLaunchPathHasBeenSet = false;

    Aws::String m_serverLaunchParameters;
    bool m_serverLaunchParametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_logPaths;
    bool m_logPathsHasBeenSet = false;

    EC2InstanceType m_eC2InstanceType;
    bool m_eC2InstanceTypeHasBeenSet = false;

    Aws::Vector<IpPermission> m_eC2InboundPermissions;
    bool m_eC2InboundPermissionsHasBeenSet = false;

    ProtectionPolicy m_newGameSessionProtectionPolicy;
    bool m_newGameSessionProtectionPolicyHasBeenSet = false;

    RuntimeConfiguration m_runtimeConfiguration;
    bool m_runtimeConfigurationHasBeenSet = false;

    ResourceCreationLimitPolicy m_resourceCreationLimitPolicy;
    bool m_resourceCreationLimitPolicyHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricGroups;
    bool m_metricGroupsHasBeenSet = false;

    Aws::String m_peerVpcAwsAccountId;
    bool m_peerVpcAwsAccountIdHasBeenSet = false;

    Aws::String m_peerVpcId;
    bool m_peerVpcIdHasBeenSet = false;

    FleetType m_fleetType;
    bool m_fleetTypeHasBeenSet = false;

    Aws::String m_instanceRoleArn;
    bool m_instanceRoleArnHasBeenSet = false;

    CertificateConfiguration m_certificateConfiguration;
    bool m_certificateConfigurationHasBeenSet = false;

    Aws::Vector<LocationConfiguration> m_locations;
    bool m_locationsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

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
