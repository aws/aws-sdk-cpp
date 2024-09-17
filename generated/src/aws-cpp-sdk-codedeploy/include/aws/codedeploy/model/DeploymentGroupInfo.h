/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/RevisionLocation.h>
#include <aws/codedeploy/model/AlarmConfiguration.h>
#include <aws/codedeploy/model/AutoRollbackConfiguration.h>
#include <aws/codedeploy/model/DeploymentStyle.h>
#include <aws/codedeploy/model/OutdatedInstancesStrategy.h>
#include <aws/codedeploy/model/BlueGreenDeploymentConfiguration.h>
#include <aws/codedeploy/model/LoadBalancerInfo.h>
#include <aws/codedeploy/model/LastDeploymentInfo.h>
#include <aws/codedeploy/model/EC2TagSet.h>
#include <aws/codedeploy/model/OnPremisesTagSet.h>
#include <aws/codedeploy/model/ComputePlatform.h>
#include <aws/codedeploy/model/EC2TagFilter.h>
#include <aws/codedeploy/model/TagFilter.h>
#include <aws/codedeploy/model/AutoScalingGroup.h>
#include <aws/codedeploy/model/TriggerConfig.h>
#include <aws/codedeploy/model/ECSService.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about a deployment group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeploymentGroupInfo">AWS
   * API Reference</a></p>
   */
  class DeploymentGroupInfo
  {
  public:
    AWS_CODEDEPLOY_API DeploymentGroupInfo();
    AWS_CODEDEPLOY_API DeploymentGroupInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API DeploymentGroupInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application name.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline DeploymentGroupInfo& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline DeploymentGroupInfo& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline DeploymentGroupInfo& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment group ID.</p>
     */
    inline const Aws::String& GetDeploymentGroupId() const{ return m_deploymentGroupId; }
    inline bool DeploymentGroupIdHasBeenSet() const { return m_deploymentGroupIdHasBeenSet; }
    inline void SetDeploymentGroupId(const Aws::String& value) { m_deploymentGroupIdHasBeenSet = true; m_deploymentGroupId = value; }
    inline void SetDeploymentGroupId(Aws::String&& value) { m_deploymentGroupIdHasBeenSet = true; m_deploymentGroupId = std::move(value); }
    inline void SetDeploymentGroupId(const char* value) { m_deploymentGroupIdHasBeenSet = true; m_deploymentGroupId.assign(value); }
    inline DeploymentGroupInfo& WithDeploymentGroupId(const Aws::String& value) { SetDeploymentGroupId(value); return *this;}
    inline DeploymentGroupInfo& WithDeploymentGroupId(Aws::String&& value) { SetDeploymentGroupId(std::move(value)); return *this;}
    inline DeploymentGroupInfo& WithDeploymentGroupId(const char* value) { SetDeploymentGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment group name.</p>
     */
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }
    inline bool DeploymentGroupNameHasBeenSet() const { return m_deploymentGroupNameHasBeenSet; }
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }
    inline void SetDeploymentGroupName(Aws::String&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = std::move(value); }
    inline void SetDeploymentGroupName(const char* value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName.assign(value); }
    inline DeploymentGroupInfo& WithDeploymentGroupName(const Aws::String& value) { SetDeploymentGroupName(value); return *this;}
    inline DeploymentGroupInfo& WithDeploymentGroupName(Aws::String&& value) { SetDeploymentGroupName(std::move(value)); return *this;}
    inline DeploymentGroupInfo& WithDeploymentGroupName(const char* value) { SetDeploymentGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment configuration name.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::move(value); }
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }
    inline DeploymentGroupInfo& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}
    inline DeploymentGroupInfo& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(std::move(value)); return *this;}
    inline DeploymentGroupInfo& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags.</p>
     */
    inline const Aws::Vector<EC2TagFilter>& GetEc2TagFilters() const{ return m_ec2TagFilters; }
    inline bool Ec2TagFiltersHasBeenSet() const { return m_ec2TagFiltersHasBeenSet; }
    inline void SetEc2TagFilters(const Aws::Vector<EC2TagFilter>& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters = value; }
    inline void SetEc2TagFilters(Aws::Vector<EC2TagFilter>&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters = std::move(value); }
    inline DeploymentGroupInfo& WithEc2TagFilters(const Aws::Vector<EC2TagFilter>& value) { SetEc2TagFilters(value); return *this;}
    inline DeploymentGroupInfo& WithEc2TagFilters(Aws::Vector<EC2TagFilter>&& value) { SetEc2TagFilters(std::move(value)); return *this;}
    inline DeploymentGroupInfo& AddEc2TagFilters(const EC2TagFilter& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.push_back(value); return *this; }
    inline DeploymentGroupInfo& AddEc2TagFilters(EC2TagFilter&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags.</p>
     */
    inline const Aws::Vector<TagFilter>& GetOnPremisesInstanceTagFilters() const{ return m_onPremisesInstanceTagFilters; }
    inline bool OnPremisesInstanceTagFiltersHasBeenSet() const { return m_onPremisesInstanceTagFiltersHasBeenSet; }
    inline void SetOnPremisesInstanceTagFilters(const Aws::Vector<TagFilter>& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters = value; }
    inline void SetOnPremisesInstanceTagFilters(Aws::Vector<TagFilter>&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters = std::move(value); }
    inline DeploymentGroupInfo& WithOnPremisesInstanceTagFilters(const Aws::Vector<TagFilter>& value) { SetOnPremisesInstanceTagFilters(value); return *this;}
    inline DeploymentGroupInfo& WithOnPremisesInstanceTagFilters(Aws::Vector<TagFilter>&& value) { SetOnPremisesInstanceTagFilters(std::move(value)); return *this;}
    inline DeploymentGroupInfo& AddOnPremisesInstanceTagFilters(const TagFilter& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.push_back(value); return *this; }
    inline DeploymentGroupInfo& AddOnPremisesInstanceTagFilters(TagFilter&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline const Aws::Vector<AutoScalingGroup>& GetAutoScalingGroups() const{ return m_autoScalingGroups; }
    inline bool AutoScalingGroupsHasBeenSet() const { return m_autoScalingGroupsHasBeenSet; }
    inline void SetAutoScalingGroups(const Aws::Vector<AutoScalingGroup>& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }
    inline void SetAutoScalingGroups(Aws::Vector<AutoScalingGroup>&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = std::move(value); }
    inline DeploymentGroupInfo& WithAutoScalingGroups(const Aws::Vector<AutoScalingGroup>& value) { SetAutoScalingGroups(value); return *this;}
    inline DeploymentGroupInfo& WithAutoScalingGroups(Aws::Vector<AutoScalingGroup>&& value) { SetAutoScalingGroups(std::move(value)); return *this;}
    inline DeploymentGroupInfo& AddAutoScalingGroups(const AutoScalingGroup& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }
    inline DeploymentGroupInfo& AddAutoScalingGroups(AutoScalingGroup&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A service role Amazon Resource Name (ARN) that grants CodeDeploy permission
     * to make calls to Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/getting-started-create-service-role.html">Create
     * a Service Role for CodeDeploy</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }
    inline DeploymentGroupInfo& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}
    inline DeploymentGroupInfo& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}
    inline DeploymentGroupInfo& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the deployment group's target revision, including type and
     * location.</p>
     */
    inline const RevisionLocation& GetTargetRevision() const{ return m_targetRevision; }
    inline bool TargetRevisionHasBeenSet() const { return m_targetRevisionHasBeenSet; }
    inline void SetTargetRevision(const RevisionLocation& value) { m_targetRevisionHasBeenSet = true; m_targetRevision = value; }
    inline void SetTargetRevision(RevisionLocation&& value) { m_targetRevisionHasBeenSet = true; m_targetRevision = std::move(value); }
    inline DeploymentGroupInfo& WithTargetRevision(const RevisionLocation& value) { SetTargetRevision(value); return *this;}
    inline DeploymentGroupInfo& WithTargetRevision(RevisionLocation&& value) { SetTargetRevision(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about triggers associated with the deployment group.</p>
     */
    inline const Aws::Vector<TriggerConfig>& GetTriggerConfigurations() const{ return m_triggerConfigurations; }
    inline bool TriggerConfigurationsHasBeenSet() const { return m_triggerConfigurationsHasBeenSet; }
    inline void SetTriggerConfigurations(const Aws::Vector<TriggerConfig>& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations = value; }
    inline void SetTriggerConfigurations(Aws::Vector<TriggerConfig>&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations = std::move(value); }
    inline DeploymentGroupInfo& WithTriggerConfigurations(const Aws::Vector<TriggerConfig>& value) { SetTriggerConfigurations(value); return *this;}
    inline DeploymentGroupInfo& WithTriggerConfigurations(Aws::Vector<TriggerConfig>&& value) { SetTriggerConfigurations(std::move(value)); return *this;}
    inline DeploymentGroupInfo& AddTriggerConfigurations(const TriggerConfig& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations.push_back(value); return *this; }
    inline DeploymentGroupInfo& AddTriggerConfigurations(TriggerConfig&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of alarms associated with the deployment group.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::move(value); }
    inline DeploymentGroupInfo& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}
    inline DeploymentGroupInfo& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment group.</p>
     */
    inline const AutoRollbackConfiguration& GetAutoRollbackConfiguration() const{ return m_autoRollbackConfiguration; }
    inline bool AutoRollbackConfigurationHasBeenSet() const { return m_autoRollbackConfigurationHasBeenSet; }
    inline void SetAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = value; }
    inline void SetAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = std::move(value); }
    inline DeploymentGroupInfo& WithAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { SetAutoRollbackConfiguration(value); return *this;}
    inline DeploymentGroupInfo& WithAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { SetAutoRollbackConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the type of deployment, either in-place or blue/green, you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline const DeploymentStyle& GetDeploymentStyle() const{ return m_deploymentStyle; }
    inline bool DeploymentStyleHasBeenSet() const { return m_deploymentStyleHasBeenSet; }
    inline void SetDeploymentStyle(const DeploymentStyle& value) { m_deploymentStyleHasBeenSet = true; m_deploymentStyle = value; }
    inline void SetDeploymentStyle(DeploymentStyle&& value) { m_deploymentStyleHasBeenSet = true; m_deploymentStyle = std::move(value); }
    inline DeploymentGroupInfo& WithDeploymentStyle(const DeploymentStyle& value) { SetDeploymentStyle(value); return *this;}
    inline DeploymentGroupInfo& WithDeploymentStyle(DeploymentStyle&& value) { SetDeploymentStyle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates what happens when new Amazon EC2 instances are launched
     * mid-deployment and do not receive the deployed application revision.</p> <p>If
     * this option is set to <code>UPDATE</code> or is unspecified, CodeDeploy
     * initiates one or more 'auto-update outdated instances' deployments to apply the
     * deployed application revision to the new Amazon EC2 instances.</p> <p>If this
     * option is set to <code>IGNORE</code>, CodeDeploy does not initiate a deployment
     * to update the new Amazon EC2 instances. This may result in instances having
     * different revisions.</p>
     */
    inline const OutdatedInstancesStrategy& GetOutdatedInstancesStrategy() const{ return m_outdatedInstancesStrategy; }
    inline bool OutdatedInstancesStrategyHasBeenSet() const { return m_outdatedInstancesStrategyHasBeenSet; }
    inline void SetOutdatedInstancesStrategy(const OutdatedInstancesStrategy& value) { m_outdatedInstancesStrategyHasBeenSet = true; m_outdatedInstancesStrategy = value; }
    inline void SetOutdatedInstancesStrategy(OutdatedInstancesStrategy&& value) { m_outdatedInstancesStrategyHasBeenSet = true; m_outdatedInstancesStrategy = std::move(value); }
    inline DeploymentGroupInfo& WithOutdatedInstancesStrategy(const OutdatedInstancesStrategy& value) { SetOutdatedInstancesStrategy(value); return *this;}
    inline DeploymentGroupInfo& WithOutdatedInstancesStrategy(OutdatedInstancesStrategy&& value) { SetOutdatedInstancesStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about blue/green deployment options for a deployment group.</p>
     */
    inline const BlueGreenDeploymentConfiguration& GetBlueGreenDeploymentConfiguration() const{ return m_blueGreenDeploymentConfiguration; }
    inline bool BlueGreenDeploymentConfigurationHasBeenSet() const { return m_blueGreenDeploymentConfigurationHasBeenSet; }
    inline void SetBlueGreenDeploymentConfiguration(const BlueGreenDeploymentConfiguration& value) { m_blueGreenDeploymentConfigurationHasBeenSet = true; m_blueGreenDeploymentConfiguration = value; }
    inline void SetBlueGreenDeploymentConfiguration(BlueGreenDeploymentConfiguration&& value) { m_blueGreenDeploymentConfigurationHasBeenSet = true; m_blueGreenDeploymentConfiguration = std::move(value); }
    inline DeploymentGroupInfo& WithBlueGreenDeploymentConfiguration(const BlueGreenDeploymentConfiguration& value) { SetBlueGreenDeploymentConfiguration(value); return *this;}
    inline DeploymentGroupInfo& WithBlueGreenDeploymentConfiguration(BlueGreenDeploymentConfiguration&& value) { SetBlueGreenDeploymentConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the load balancer to use in a deployment.</p>
     */
    inline const LoadBalancerInfo& GetLoadBalancerInfo() const{ return m_loadBalancerInfo; }
    inline bool LoadBalancerInfoHasBeenSet() const { return m_loadBalancerInfoHasBeenSet; }
    inline void SetLoadBalancerInfo(const LoadBalancerInfo& value) { m_loadBalancerInfoHasBeenSet = true; m_loadBalancerInfo = value; }
    inline void SetLoadBalancerInfo(LoadBalancerInfo&& value) { m_loadBalancerInfoHasBeenSet = true; m_loadBalancerInfo = std::move(value); }
    inline DeploymentGroupInfo& WithLoadBalancerInfo(const LoadBalancerInfo& value) { SetLoadBalancerInfo(value); return *this;}
    inline DeploymentGroupInfo& WithLoadBalancerInfo(LoadBalancerInfo&& value) { SetLoadBalancerInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the most recent successful deployment to the deployment
     * group.</p>
     */
    inline const LastDeploymentInfo& GetLastSuccessfulDeployment() const{ return m_lastSuccessfulDeployment; }
    inline bool LastSuccessfulDeploymentHasBeenSet() const { return m_lastSuccessfulDeploymentHasBeenSet; }
    inline void SetLastSuccessfulDeployment(const LastDeploymentInfo& value) { m_lastSuccessfulDeploymentHasBeenSet = true; m_lastSuccessfulDeployment = value; }
    inline void SetLastSuccessfulDeployment(LastDeploymentInfo&& value) { m_lastSuccessfulDeploymentHasBeenSet = true; m_lastSuccessfulDeployment = std::move(value); }
    inline DeploymentGroupInfo& WithLastSuccessfulDeployment(const LastDeploymentInfo& value) { SetLastSuccessfulDeployment(value); return *this;}
    inline DeploymentGroupInfo& WithLastSuccessfulDeployment(LastDeploymentInfo&& value) { SetLastSuccessfulDeployment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the most recent attempted deployment to the deployment
     * group.</p>
     */
    inline const LastDeploymentInfo& GetLastAttemptedDeployment() const{ return m_lastAttemptedDeployment; }
    inline bool LastAttemptedDeploymentHasBeenSet() const { return m_lastAttemptedDeploymentHasBeenSet; }
    inline void SetLastAttemptedDeployment(const LastDeploymentInfo& value) { m_lastAttemptedDeploymentHasBeenSet = true; m_lastAttemptedDeployment = value; }
    inline void SetLastAttemptedDeployment(LastDeploymentInfo&& value) { m_lastAttemptedDeploymentHasBeenSet = true; m_lastAttemptedDeployment = std::move(value); }
    inline DeploymentGroupInfo& WithLastAttemptedDeployment(const LastDeploymentInfo& value) { SetLastAttemptedDeployment(value); return *this;}
    inline DeploymentGroupInfo& WithLastAttemptedDeployment(LastDeploymentInfo&& value) { SetLastAttemptedDeployment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about groups of tags applied to an Amazon EC2 instance. The
     * deployment group includes only Amazon EC2 instances identified by all of the tag
     * groups. Cannot be used in the same call as ec2TagFilters.</p>
     */
    inline const EC2TagSet& GetEc2TagSet() const{ return m_ec2TagSet; }
    inline bool Ec2TagSetHasBeenSet() const { return m_ec2TagSetHasBeenSet; }
    inline void SetEc2TagSet(const EC2TagSet& value) { m_ec2TagSetHasBeenSet = true; m_ec2TagSet = value; }
    inline void SetEc2TagSet(EC2TagSet&& value) { m_ec2TagSetHasBeenSet = true; m_ec2TagSet = std::move(value); }
    inline DeploymentGroupInfo& WithEc2TagSet(const EC2TagSet& value) { SetEc2TagSet(value); return *this;}
    inline DeploymentGroupInfo& WithEc2TagSet(EC2TagSet&& value) { SetEc2TagSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about groups of tags applied to an on-premises instance. The
     * deployment group includes only on-premises instances identified by all the tag
     * groups. Cannot be used in the same call as onPremisesInstanceTagFilters.</p>
     */
    inline const OnPremisesTagSet& GetOnPremisesTagSet() const{ return m_onPremisesTagSet; }
    inline bool OnPremisesTagSetHasBeenSet() const { return m_onPremisesTagSetHasBeenSet; }
    inline void SetOnPremisesTagSet(const OnPremisesTagSet& value) { m_onPremisesTagSetHasBeenSet = true; m_onPremisesTagSet = value; }
    inline void SetOnPremisesTagSet(OnPremisesTagSet&& value) { m_onPremisesTagSetHasBeenSet = true; m_onPremisesTagSet = std::move(value); }
    inline DeploymentGroupInfo& WithOnPremisesTagSet(const OnPremisesTagSet& value) { SetOnPremisesTagSet(value); return *this;}
    inline DeploymentGroupInfo& WithOnPremisesTagSet(OnPremisesTagSet&& value) { SetOnPremisesTagSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline const ComputePlatform& GetComputePlatform() const{ return m_computePlatform; }
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }
    inline void SetComputePlatform(const ComputePlatform& value) { m_computePlatformHasBeenSet = true; m_computePlatform = value; }
    inline void SetComputePlatform(ComputePlatform&& value) { m_computePlatformHasBeenSet = true; m_computePlatform = std::move(value); }
    inline DeploymentGroupInfo& WithComputePlatform(const ComputePlatform& value) { SetComputePlatform(value); return *this;}
    inline DeploymentGroupInfo& WithComputePlatform(ComputePlatform&& value) { SetComputePlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The target Amazon ECS services in the deployment group. This applies only to
     * deployment groups that use the Amazon ECS compute platform. A target Amazon ECS
     * service is specified as an Amazon ECS cluster and service name pair using the
     * format <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. </p>
     */
    inline const Aws::Vector<ECSService>& GetEcsServices() const{ return m_ecsServices; }
    inline bool EcsServicesHasBeenSet() const { return m_ecsServicesHasBeenSet; }
    inline void SetEcsServices(const Aws::Vector<ECSService>& value) { m_ecsServicesHasBeenSet = true; m_ecsServices = value; }
    inline void SetEcsServices(Aws::Vector<ECSService>&& value) { m_ecsServicesHasBeenSet = true; m_ecsServices = std::move(value); }
    inline DeploymentGroupInfo& WithEcsServices(const Aws::Vector<ECSService>& value) { SetEcsServices(value); return *this;}
    inline DeploymentGroupInfo& WithEcsServices(Aws::Vector<ECSService>&& value) { SetEcsServices(std::move(value)); return *this;}
    inline DeploymentGroupInfo& AddEcsServices(const ECSService& value) { m_ecsServicesHasBeenSet = true; m_ecsServices.push_back(value); return *this; }
    inline DeploymentGroupInfo& AddEcsServices(ECSService&& value) { m_ecsServicesHasBeenSet = true; m_ecsServices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the deployment group was configured to have CodeDeploy
     * install a termination hook into an Auto Scaling group.</p> <p>For more
     * information about the termination hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors">How
     * Amazon EC2 Auto Scaling works with CodeDeploy</a> in the <i>CodeDeploy User
     * Guide</i>.</p>
     */
    inline bool GetTerminationHookEnabled() const{ return m_terminationHookEnabled; }
    inline bool TerminationHookEnabledHasBeenSet() const { return m_terminationHookEnabledHasBeenSet; }
    inline void SetTerminationHookEnabled(bool value) { m_terminationHookEnabledHasBeenSet = true; m_terminationHookEnabled = value; }
    inline DeploymentGroupInfo& WithTerminationHookEnabled(bool value) { SetTerminationHookEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_deploymentGroupId;
    bool m_deploymentGroupIdHasBeenSet = false;

    Aws::String m_deploymentGroupName;
    bool m_deploymentGroupNameHasBeenSet = false;

    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet = false;

    Aws::Vector<EC2TagFilter> m_ec2TagFilters;
    bool m_ec2TagFiltersHasBeenSet = false;

    Aws::Vector<TagFilter> m_onPremisesInstanceTagFilters;
    bool m_onPremisesInstanceTagFiltersHasBeenSet = false;

    Aws::Vector<AutoScalingGroup> m_autoScalingGroups;
    bool m_autoScalingGroupsHasBeenSet = false;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet = false;

    RevisionLocation m_targetRevision;
    bool m_targetRevisionHasBeenSet = false;

    Aws::Vector<TriggerConfig> m_triggerConfigurations;
    bool m_triggerConfigurationsHasBeenSet = false;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet = false;

    AutoRollbackConfiguration m_autoRollbackConfiguration;
    bool m_autoRollbackConfigurationHasBeenSet = false;

    DeploymentStyle m_deploymentStyle;
    bool m_deploymentStyleHasBeenSet = false;

    OutdatedInstancesStrategy m_outdatedInstancesStrategy;
    bool m_outdatedInstancesStrategyHasBeenSet = false;

    BlueGreenDeploymentConfiguration m_blueGreenDeploymentConfiguration;
    bool m_blueGreenDeploymentConfigurationHasBeenSet = false;

    LoadBalancerInfo m_loadBalancerInfo;
    bool m_loadBalancerInfoHasBeenSet = false;

    LastDeploymentInfo m_lastSuccessfulDeployment;
    bool m_lastSuccessfulDeploymentHasBeenSet = false;

    LastDeploymentInfo m_lastAttemptedDeployment;
    bool m_lastAttemptedDeploymentHasBeenSet = false;

    EC2TagSet m_ec2TagSet;
    bool m_ec2TagSetHasBeenSet = false;

    OnPremisesTagSet m_onPremisesTagSet;
    bool m_onPremisesTagSetHasBeenSet = false;

    ComputePlatform m_computePlatform;
    bool m_computePlatformHasBeenSet = false;

    Aws::Vector<ECSService> m_ecsServices;
    bool m_ecsServicesHasBeenSet = false;

    bool m_terminationHookEnabled;
    bool m_terminationHookEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
