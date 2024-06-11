/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/AlarmConfiguration.h>
#include <aws/codedeploy/model/AutoRollbackConfiguration.h>
#include <aws/codedeploy/model/OutdatedInstancesStrategy.h>
#include <aws/codedeploy/model/DeploymentStyle.h>
#include <aws/codedeploy/model/BlueGreenDeploymentConfiguration.h>
#include <aws/codedeploy/model/LoadBalancerInfo.h>
#include <aws/codedeploy/model/EC2TagSet.h>
#include <aws/codedeploy/model/OnPremisesTagSet.h>
#include <aws/codedeploy/model/EC2TagFilter.h>
#include <aws/codedeploy/model/TagFilter.h>
#include <aws/codedeploy/model/TriggerConfig.h>
#include <aws/codedeploy/model/ECSService.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of an <code>UpdateDeploymentGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/UpdateDeploymentGroupInput">AWS
   * API Reference</a></p>
   */
  class UpdateDeploymentGroupRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API UpdateDeploymentGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDeploymentGroup"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The application name that corresponds to the deployment group to update.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline UpdateDeploymentGroupRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline UpdateDeploymentGroupRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current name of the deployment group.</p>
     */
    inline const Aws::String& GetCurrentDeploymentGroupName() const{ return m_currentDeploymentGroupName; }
    inline bool CurrentDeploymentGroupNameHasBeenSet() const { return m_currentDeploymentGroupNameHasBeenSet; }
    inline void SetCurrentDeploymentGroupName(const Aws::String& value) { m_currentDeploymentGroupNameHasBeenSet = true; m_currentDeploymentGroupName = value; }
    inline void SetCurrentDeploymentGroupName(Aws::String&& value) { m_currentDeploymentGroupNameHasBeenSet = true; m_currentDeploymentGroupName = std::move(value); }
    inline void SetCurrentDeploymentGroupName(const char* value) { m_currentDeploymentGroupNameHasBeenSet = true; m_currentDeploymentGroupName.assign(value); }
    inline UpdateDeploymentGroupRequest& WithCurrentDeploymentGroupName(const Aws::String& value) { SetCurrentDeploymentGroupName(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithCurrentDeploymentGroupName(Aws::String&& value) { SetCurrentDeploymentGroupName(std::move(value)); return *this;}
    inline UpdateDeploymentGroupRequest& WithCurrentDeploymentGroupName(const char* value) { SetCurrentDeploymentGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name of the deployment group, if you want to change it.</p>
     */
    inline const Aws::String& GetNewDeploymentGroupName() const{ return m_newDeploymentGroupName; }
    inline bool NewDeploymentGroupNameHasBeenSet() const { return m_newDeploymentGroupNameHasBeenSet; }
    inline void SetNewDeploymentGroupName(const Aws::String& value) { m_newDeploymentGroupNameHasBeenSet = true; m_newDeploymentGroupName = value; }
    inline void SetNewDeploymentGroupName(Aws::String&& value) { m_newDeploymentGroupNameHasBeenSet = true; m_newDeploymentGroupName = std::move(value); }
    inline void SetNewDeploymentGroupName(const char* value) { m_newDeploymentGroupNameHasBeenSet = true; m_newDeploymentGroupName.assign(value); }
    inline UpdateDeploymentGroupRequest& WithNewDeploymentGroupName(const Aws::String& value) { SetNewDeploymentGroupName(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithNewDeploymentGroupName(Aws::String&& value) { SetNewDeploymentGroupName(std::move(value)); return *this;}
    inline UpdateDeploymentGroupRequest& WithNewDeploymentGroupName(const char* value) { SetNewDeploymentGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replacement deployment configuration name to use, if you want to change
     * it.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::move(value); }
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }
    inline UpdateDeploymentGroupRequest& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(std::move(value)); return *this;}
    inline UpdateDeploymentGroupRequest& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replacement set of Amazon EC2 tags on which to filter, if you want to
     * change them. To keep the existing tags, enter their names. To remove tags, do
     * not enter any tag names.</p>
     */
    inline const Aws::Vector<EC2TagFilter>& GetEc2TagFilters() const{ return m_ec2TagFilters; }
    inline bool Ec2TagFiltersHasBeenSet() const { return m_ec2TagFiltersHasBeenSet; }
    inline void SetEc2TagFilters(const Aws::Vector<EC2TagFilter>& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters = value; }
    inline void SetEc2TagFilters(Aws::Vector<EC2TagFilter>&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters = std::move(value); }
    inline UpdateDeploymentGroupRequest& WithEc2TagFilters(const Aws::Vector<EC2TagFilter>& value) { SetEc2TagFilters(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithEc2TagFilters(Aws::Vector<EC2TagFilter>&& value) { SetEc2TagFilters(std::move(value)); return *this;}
    inline UpdateDeploymentGroupRequest& AddEc2TagFilters(const EC2TagFilter& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.push_back(value); return *this; }
    inline UpdateDeploymentGroupRequest& AddEc2TagFilters(EC2TagFilter&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The replacement set of on-premises instance tags on which to filter, if you
     * want to change them. To keep the existing tags, enter their names. To remove
     * tags, do not enter any tag names.</p>
     */
    inline const Aws::Vector<TagFilter>& GetOnPremisesInstanceTagFilters() const{ return m_onPremisesInstanceTagFilters; }
    inline bool OnPremisesInstanceTagFiltersHasBeenSet() const { return m_onPremisesInstanceTagFiltersHasBeenSet; }
    inline void SetOnPremisesInstanceTagFilters(const Aws::Vector<TagFilter>& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters = value; }
    inline void SetOnPremisesInstanceTagFilters(Aws::Vector<TagFilter>&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters = std::move(value); }
    inline UpdateDeploymentGroupRequest& WithOnPremisesInstanceTagFilters(const Aws::Vector<TagFilter>& value) { SetOnPremisesInstanceTagFilters(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithOnPremisesInstanceTagFilters(Aws::Vector<TagFilter>&& value) { SetOnPremisesInstanceTagFilters(std::move(value)); return *this;}
    inline UpdateDeploymentGroupRequest& AddOnPremisesInstanceTagFilters(const TagFilter& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.push_back(value); return *this; }
    inline UpdateDeploymentGroupRequest& AddOnPremisesInstanceTagFilters(TagFilter&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The replacement list of Auto Scaling groups to be included in the deployment
     * group, if you want to change them.</p> <ul> <li> <p>To keep the Auto Scaling
     * groups, enter their names or do not specify this parameter. </p> </li> <li>
     * <p>To remove Auto Scaling groups, specify a non-null empty list of Auto Scaling
     * group names to detach all CodeDeploy-managed Auto Scaling lifecycle hooks. For
     * examples, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/troubleshooting-auto-scaling.html#troubleshooting-auto-scaling-heartbeat">Amazon
     * EC2 instances in an Amazon EC2 Auto Scaling group fail to launch and receive the
     * error "Heartbeat Timeout"</a> in the <i>CodeDeploy User Guide</i>.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingGroups() const{ return m_autoScalingGroups; }
    inline bool AutoScalingGroupsHasBeenSet() const { return m_autoScalingGroupsHasBeenSet; }
    inline void SetAutoScalingGroups(const Aws::Vector<Aws::String>& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }
    inline void SetAutoScalingGroups(Aws::Vector<Aws::String>&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = std::move(value); }
    inline UpdateDeploymentGroupRequest& WithAutoScalingGroups(const Aws::Vector<Aws::String>& value) { SetAutoScalingGroups(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithAutoScalingGroups(Aws::Vector<Aws::String>&& value) { SetAutoScalingGroups(std::move(value)); return *this;}
    inline UpdateDeploymentGroupRequest& AddAutoScalingGroups(const Aws::String& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }
    inline UpdateDeploymentGroupRequest& AddAutoScalingGroups(Aws::String&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(std::move(value)); return *this; }
    inline UpdateDeploymentGroupRequest& AddAutoScalingGroups(const char* value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A replacement ARN for the service role, if you want to change it.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }
    inline UpdateDeploymentGroupRequest& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}
    inline UpdateDeploymentGroupRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about triggers to change when the deployment group is updated.
     * For examples, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-edit.html">Edit
     * a Trigger in a CodeDeploy Deployment Group</a> in the <i>CodeDeploy User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<TriggerConfig>& GetTriggerConfigurations() const{ return m_triggerConfigurations; }
    inline bool TriggerConfigurationsHasBeenSet() const { return m_triggerConfigurationsHasBeenSet; }
    inline void SetTriggerConfigurations(const Aws::Vector<TriggerConfig>& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations = value; }
    inline void SetTriggerConfigurations(Aws::Vector<TriggerConfig>&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations = std::move(value); }
    inline UpdateDeploymentGroupRequest& WithTriggerConfigurations(const Aws::Vector<TriggerConfig>& value) { SetTriggerConfigurations(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithTriggerConfigurations(Aws::Vector<TriggerConfig>&& value) { SetTriggerConfigurations(std::move(value)); return *this;}
    inline UpdateDeploymentGroupRequest& AddTriggerConfigurations(const TriggerConfig& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations.push_back(value); return *this; }
    inline UpdateDeploymentGroupRequest& AddTriggerConfigurations(TriggerConfig&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information to add or change about Amazon CloudWatch alarms when the
     * deployment group is updated.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::move(value); }
    inline UpdateDeploymentGroupRequest& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information for an automatic rollback configuration that is added or changed
     * when a deployment group is updated.</p>
     */
    inline const AutoRollbackConfiguration& GetAutoRollbackConfiguration() const{ return m_autoRollbackConfiguration; }
    inline bool AutoRollbackConfigurationHasBeenSet() const { return m_autoRollbackConfigurationHasBeenSet; }
    inline void SetAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = value; }
    inline void SetAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = std::move(value); }
    inline UpdateDeploymentGroupRequest& WithAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { SetAutoRollbackConfiguration(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { SetAutoRollbackConfiguration(std::move(value)); return *this;}
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
    inline UpdateDeploymentGroupRequest& WithOutdatedInstancesStrategy(const OutdatedInstancesStrategy& value) { SetOutdatedInstancesStrategy(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithOutdatedInstancesStrategy(OutdatedInstancesStrategy&& value) { SetOutdatedInstancesStrategy(std::move(value)); return *this;}
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
    inline UpdateDeploymentGroupRequest& WithDeploymentStyle(const DeploymentStyle& value) { SetDeploymentStyle(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithDeploymentStyle(DeploymentStyle&& value) { SetDeploymentStyle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about blue/green deployment options for a deployment group.</p>
     */
    inline const BlueGreenDeploymentConfiguration& GetBlueGreenDeploymentConfiguration() const{ return m_blueGreenDeploymentConfiguration; }
    inline bool BlueGreenDeploymentConfigurationHasBeenSet() const { return m_blueGreenDeploymentConfigurationHasBeenSet; }
    inline void SetBlueGreenDeploymentConfiguration(const BlueGreenDeploymentConfiguration& value) { m_blueGreenDeploymentConfigurationHasBeenSet = true; m_blueGreenDeploymentConfiguration = value; }
    inline void SetBlueGreenDeploymentConfiguration(BlueGreenDeploymentConfiguration&& value) { m_blueGreenDeploymentConfigurationHasBeenSet = true; m_blueGreenDeploymentConfiguration = std::move(value); }
    inline UpdateDeploymentGroupRequest& WithBlueGreenDeploymentConfiguration(const BlueGreenDeploymentConfiguration& value) { SetBlueGreenDeploymentConfiguration(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithBlueGreenDeploymentConfiguration(BlueGreenDeploymentConfiguration&& value) { SetBlueGreenDeploymentConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the load balancer used in a deployment.</p>
     */
    inline const LoadBalancerInfo& GetLoadBalancerInfo() const{ return m_loadBalancerInfo; }
    inline bool LoadBalancerInfoHasBeenSet() const { return m_loadBalancerInfoHasBeenSet; }
    inline void SetLoadBalancerInfo(const LoadBalancerInfo& value) { m_loadBalancerInfoHasBeenSet = true; m_loadBalancerInfo = value; }
    inline void SetLoadBalancerInfo(LoadBalancerInfo&& value) { m_loadBalancerInfoHasBeenSet = true; m_loadBalancerInfo = std::move(value); }
    inline UpdateDeploymentGroupRequest& WithLoadBalancerInfo(const LoadBalancerInfo& value) { SetLoadBalancerInfo(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithLoadBalancerInfo(LoadBalancerInfo&& value) { SetLoadBalancerInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about groups of tags applied to on-premises instances. The
     * deployment group includes only Amazon EC2 instances identified by all the tag
     * groups.</p>
     */
    inline const EC2TagSet& GetEc2TagSet() const{ return m_ec2TagSet; }
    inline bool Ec2TagSetHasBeenSet() const { return m_ec2TagSetHasBeenSet; }
    inline void SetEc2TagSet(const EC2TagSet& value) { m_ec2TagSetHasBeenSet = true; m_ec2TagSet = value; }
    inline void SetEc2TagSet(EC2TagSet&& value) { m_ec2TagSetHasBeenSet = true; m_ec2TagSet = std::move(value); }
    inline UpdateDeploymentGroupRequest& WithEc2TagSet(const EC2TagSet& value) { SetEc2TagSet(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithEc2TagSet(EC2TagSet&& value) { SetEc2TagSet(std::move(value)); return *this;}
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
    inline UpdateDeploymentGroupRequest& WithEcsServices(const Aws::Vector<ECSService>& value) { SetEcsServices(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithEcsServices(Aws::Vector<ECSService>&& value) { SetEcsServices(std::move(value)); return *this;}
    inline UpdateDeploymentGroupRequest& AddEcsServices(const ECSService& value) { m_ecsServicesHasBeenSet = true; m_ecsServices.push_back(value); return *this; }
    inline UpdateDeploymentGroupRequest& AddEcsServices(ECSService&& value) { m_ecsServicesHasBeenSet = true; m_ecsServices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about an on-premises instance tag set. The deployment group
     * includes only on-premises instances identified by all the tag groups.</p>
     */
    inline const OnPremisesTagSet& GetOnPremisesTagSet() const{ return m_onPremisesTagSet; }
    inline bool OnPremisesTagSetHasBeenSet() const { return m_onPremisesTagSetHasBeenSet; }
    inline void SetOnPremisesTagSet(const OnPremisesTagSet& value) { m_onPremisesTagSetHasBeenSet = true; m_onPremisesTagSet = value; }
    inline void SetOnPremisesTagSet(OnPremisesTagSet&& value) { m_onPremisesTagSetHasBeenSet = true; m_onPremisesTagSet = std::move(value); }
    inline UpdateDeploymentGroupRequest& WithOnPremisesTagSet(const OnPremisesTagSet& value) { SetOnPremisesTagSet(value); return *this;}
    inline UpdateDeploymentGroupRequest& WithOnPremisesTagSet(OnPremisesTagSet&& value) { SetOnPremisesTagSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter only applies if you are using CodeDeploy with Amazon EC2 Auto
     * Scaling. For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html">Integrating
     * CodeDeploy with Amazon EC2 Auto Scaling</a> in the <i>CodeDeploy User
     * Guide</i>.</p> <p>Set <code>terminationHookEnabled</code> to <code>true</code>
     * to have CodeDeploy install a termination hook into your Auto Scaling group when
     * you update a deployment group. When this hook is installed, CodeDeploy will
     * perform termination deployments.</p> <p>For information about termination
     * deployments, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors-hook-enable">Enabling
     * termination deployments during Auto Scaling scale-in events</a> in the
     * <i>CodeDeploy User Guide</i>.</p> <p>For more information about Auto Scaling
     * scale-in events, see the <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-lifecycle.html#as-lifecycle-scale-in">Scale
     * in</a> topic in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline bool GetTerminationHookEnabled() const{ return m_terminationHookEnabled; }
    inline bool TerminationHookEnabledHasBeenSet() const { return m_terminationHookEnabledHasBeenSet; }
    inline void SetTerminationHookEnabled(bool value) { m_terminationHookEnabledHasBeenSet = true; m_terminationHookEnabled = value; }
    inline UpdateDeploymentGroupRequest& WithTerminationHookEnabled(bool value) { SetTerminationHookEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_currentDeploymentGroupName;
    bool m_currentDeploymentGroupNameHasBeenSet = false;

    Aws::String m_newDeploymentGroupName;
    bool m_newDeploymentGroupNameHasBeenSet = false;

    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet = false;

    Aws::Vector<EC2TagFilter> m_ec2TagFilters;
    bool m_ec2TagFiltersHasBeenSet = false;

    Aws::Vector<TagFilter> m_onPremisesInstanceTagFilters;
    bool m_onPremisesInstanceTagFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_autoScalingGroups;
    bool m_autoScalingGroupsHasBeenSet = false;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet = false;

    Aws::Vector<TriggerConfig> m_triggerConfigurations;
    bool m_triggerConfigurationsHasBeenSet = false;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet = false;

    AutoRollbackConfiguration m_autoRollbackConfiguration;
    bool m_autoRollbackConfigurationHasBeenSet = false;

    OutdatedInstancesStrategy m_outdatedInstancesStrategy;
    bool m_outdatedInstancesStrategyHasBeenSet = false;

    DeploymentStyle m_deploymentStyle;
    bool m_deploymentStyleHasBeenSet = false;

    BlueGreenDeploymentConfiguration m_blueGreenDeploymentConfiguration;
    bool m_blueGreenDeploymentConfigurationHasBeenSet = false;

    LoadBalancerInfo m_loadBalancerInfo;
    bool m_loadBalancerInfoHasBeenSet = false;

    EC2TagSet m_ec2TagSet;
    bool m_ec2TagSetHasBeenSet = false;

    Aws::Vector<ECSService> m_ecsServices;
    bool m_ecsServicesHasBeenSet = false;

    OnPremisesTagSet m_onPremisesTagSet;
    bool m_onPremisesTagSetHasBeenSet = false;

    bool m_terminationHookEnabled;
    bool m_terminationHookEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
