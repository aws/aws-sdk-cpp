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
    AWS_CODEDEPLOY_API UpdateDeploymentGroupRequest() = default;

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
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    UpdateDeploymentGroupRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current name of the deployment group.</p>
     */
    inline const Aws::String& GetCurrentDeploymentGroupName() const { return m_currentDeploymentGroupName; }
    inline bool CurrentDeploymentGroupNameHasBeenSet() const { return m_currentDeploymentGroupNameHasBeenSet; }
    template<typename CurrentDeploymentGroupNameT = Aws::String>
    void SetCurrentDeploymentGroupName(CurrentDeploymentGroupNameT&& value) { m_currentDeploymentGroupNameHasBeenSet = true; m_currentDeploymentGroupName = std::forward<CurrentDeploymentGroupNameT>(value); }
    template<typename CurrentDeploymentGroupNameT = Aws::String>
    UpdateDeploymentGroupRequest& WithCurrentDeploymentGroupName(CurrentDeploymentGroupNameT&& value) { SetCurrentDeploymentGroupName(std::forward<CurrentDeploymentGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name of the deployment group, if you want to change it.</p>
     */
    inline const Aws::String& GetNewDeploymentGroupName() const { return m_newDeploymentGroupName; }
    inline bool NewDeploymentGroupNameHasBeenSet() const { return m_newDeploymentGroupNameHasBeenSet; }
    template<typename NewDeploymentGroupNameT = Aws::String>
    void SetNewDeploymentGroupName(NewDeploymentGroupNameT&& value) { m_newDeploymentGroupNameHasBeenSet = true; m_newDeploymentGroupName = std::forward<NewDeploymentGroupNameT>(value); }
    template<typename NewDeploymentGroupNameT = Aws::String>
    UpdateDeploymentGroupRequest& WithNewDeploymentGroupName(NewDeploymentGroupNameT&& value) { SetNewDeploymentGroupName(std::forward<NewDeploymentGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replacement deployment configuration name to use, if you want to change
     * it.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const { return m_deploymentConfigName; }
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }
    template<typename DeploymentConfigNameT = Aws::String>
    void SetDeploymentConfigName(DeploymentConfigNameT&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::forward<DeploymentConfigNameT>(value); }
    template<typename DeploymentConfigNameT = Aws::String>
    UpdateDeploymentGroupRequest& WithDeploymentConfigName(DeploymentConfigNameT&& value) { SetDeploymentConfigName(std::forward<DeploymentConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replacement set of Amazon EC2 tags on which to filter, if you want to
     * change them. To keep the existing tags, enter their names. To remove tags, do
     * not enter any tag names.</p>
     */
    inline const Aws::Vector<EC2TagFilter>& GetEc2TagFilters() const { return m_ec2TagFilters; }
    inline bool Ec2TagFiltersHasBeenSet() const { return m_ec2TagFiltersHasBeenSet; }
    template<typename Ec2TagFiltersT = Aws::Vector<EC2TagFilter>>
    void SetEc2TagFilters(Ec2TagFiltersT&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters = std::forward<Ec2TagFiltersT>(value); }
    template<typename Ec2TagFiltersT = Aws::Vector<EC2TagFilter>>
    UpdateDeploymentGroupRequest& WithEc2TagFilters(Ec2TagFiltersT&& value) { SetEc2TagFilters(std::forward<Ec2TagFiltersT>(value)); return *this;}
    template<typename Ec2TagFiltersT = EC2TagFilter>
    UpdateDeploymentGroupRequest& AddEc2TagFilters(Ec2TagFiltersT&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.emplace_back(std::forward<Ec2TagFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The replacement set of on-premises instance tags on which to filter, if you
     * want to change them. To keep the existing tags, enter their names. To remove
     * tags, do not enter any tag names.</p>
     */
    inline const Aws::Vector<TagFilter>& GetOnPremisesInstanceTagFilters() const { return m_onPremisesInstanceTagFilters; }
    inline bool OnPremisesInstanceTagFiltersHasBeenSet() const { return m_onPremisesInstanceTagFiltersHasBeenSet; }
    template<typename OnPremisesInstanceTagFiltersT = Aws::Vector<TagFilter>>
    void SetOnPremisesInstanceTagFilters(OnPremisesInstanceTagFiltersT&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters = std::forward<OnPremisesInstanceTagFiltersT>(value); }
    template<typename OnPremisesInstanceTagFiltersT = Aws::Vector<TagFilter>>
    UpdateDeploymentGroupRequest& WithOnPremisesInstanceTagFilters(OnPremisesInstanceTagFiltersT&& value) { SetOnPremisesInstanceTagFilters(std::forward<OnPremisesInstanceTagFiltersT>(value)); return *this;}
    template<typename OnPremisesInstanceTagFiltersT = TagFilter>
    UpdateDeploymentGroupRequest& AddOnPremisesInstanceTagFilters(OnPremisesInstanceTagFiltersT&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.emplace_back(std::forward<OnPremisesInstanceTagFiltersT>(value)); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetAutoScalingGroups() const { return m_autoScalingGroups; }
    inline bool AutoScalingGroupsHasBeenSet() const { return m_autoScalingGroupsHasBeenSet; }
    template<typename AutoScalingGroupsT = Aws::Vector<Aws::String>>
    void SetAutoScalingGroups(AutoScalingGroupsT&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = std::forward<AutoScalingGroupsT>(value); }
    template<typename AutoScalingGroupsT = Aws::Vector<Aws::String>>
    UpdateDeploymentGroupRequest& WithAutoScalingGroups(AutoScalingGroupsT&& value) { SetAutoScalingGroups(std::forward<AutoScalingGroupsT>(value)); return *this;}
    template<typename AutoScalingGroupsT = Aws::String>
    UpdateDeploymentGroupRequest& AddAutoScalingGroups(AutoScalingGroupsT&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.emplace_back(std::forward<AutoScalingGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A replacement ARN for the service role, if you want to change it.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const { return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    template<typename ServiceRoleArnT = Aws::String>
    void SetServiceRoleArn(ServiceRoleArnT&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::forward<ServiceRoleArnT>(value); }
    template<typename ServiceRoleArnT = Aws::String>
    UpdateDeploymentGroupRequest& WithServiceRoleArn(ServiceRoleArnT&& value) { SetServiceRoleArn(std::forward<ServiceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about triggers to change when the deployment group is updated.
     * For examples, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-edit.html">Edit
     * a Trigger in a CodeDeploy Deployment Group</a> in the <i>CodeDeploy User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<TriggerConfig>& GetTriggerConfigurations() const { return m_triggerConfigurations; }
    inline bool TriggerConfigurationsHasBeenSet() const { return m_triggerConfigurationsHasBeenSet; }
    template<typename TriggerConfigurationsT = Aws::Vector<TriggerConfig>>
    void SetTriggerConfigurations(TriggerConfigurationsT&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations = std::forward<TriggerConfigurationsT>(value); }
    template<typename TriggerConfigurationsT = Aws::Vector<TriggerConfig>>
    UpdateDeploymentGroupRequest& WithTriggerConfigurations(TriggerConfigurationsT&& value) { SetTriggerConfigurations(std::forward<TriggerConfigurationsT>(value)); return *this;}
    template<typename TriggerConfigurationsT = TriggerConfig>
    UpdateDeploymentGroupRequest& AddTriggerConfigurations(TriggerConfigurationsT&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations.emplace_back(std::forward<TriggerConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information to add or change about Amazon CloudWatch alarms when the
     * deployment group is updated.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const { return m_alarmConfiguration; }
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    void SetAlarmConfiguration(AlarmConfigurationT&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::forward<AlarmConfigurationT>(value); }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    UpdateDeploymentGroupRequest& WithAlarmConfiguration(AlarmConfigurationT&& value) { SetAlarmConfiguration(std::forward<AlarmConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information for an automatic rollback configuration that is added or changed
     * when a deployment group is updated.</p>
     */
    inline const AutoRollbackConfiguration& GetAutoRollbackConfiguration() const { return m_autoRollbackConfiguration; }
    inline bool AutoRollbackConfigurationHasBeenSet() const { return m_autoRollbackConfigurationHasBeenSet; }
    template<typename AutoRollbackConfigurationT = AutoRollbackConfiguration>
    void SetAutoRollbackConfiguration(AutoRollbackConfigurationT&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = std::forward<AutoRollbackConfigurationT>(value); }
    template<typename AutoRollbackConfigurationT = AutoRollbackConfiguration>
    UpdateDeploymentGroupRequest& WithAutoRollbackConfiguration(AutoRollbackConfigurationT&& value) { SetAutoRollbackConfiguration(std::forward<AutoRollbackConfigurationT>(value)); return *this;}
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
    inline OutdatedInstancesStrategy GetOutdatedInstancesStrategy() const { return m_outdatedInstancesStrategy; }
    inline bool OutdatedInstancesStrategyHasBeenSet() const { return m_outdatedInstancesStrategyHasBeenSet; }
    inline void SetOutdatedInstancesStrategy(OutdatedInstancesStrategy value) { m_outdatedInstancesStrategyHasBeenSet = true; m_outdatedInstancesStrategy = value; }
    inline UpdateDeploymentGroupRequest& WithOutdatedInstancesStrategy(OutdatedInstancesStrategy value) { SetOutdatedInstancesStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the type of deployment, either in-place or blue/green, you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline const DeploymentStyle& GetDeploymentStyle() const { return m_deploymentStyle; }
    inline bool DeploymentStyleHasBeenSet() const { return m_deploymentStyleHasBeenSet; }
    template<typename DeploymentStyleT = DeploymentStyle>
    void SetDeploymentStyle(DeploymentStyleT&& value) { m_deploymentStyleHasBeenSet = true; m_deploymentStyle = std::forward<DeploymentStyleT>(value); }
    template<typename DeploymentStyleT = DeploymentStyle>
    UpdateDeploymentGroupRequest& WithDeploymentStyle(DeploymentStyleT&& value) { SetDeploymentStyle(std::forward<DeploymentStyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about blue/green deployment options for a deployment group.</p>
     */
    inline const BlueGreenDeploymentConfiguration& GetBlueGreenDeploymentConfiguration() const { return m_blueGreenDeploymentConfiguration; }
    inline bool BlueGreenDeploymentConfigurationHasBeenSet() const { return m_blueGreenDeploymentConfigurationHasBeenSet; }
    template<typename BlueGreenDeploymentConfigurationT = BlueGreenDeploymentConfiguration>
    void SetBlueGreenDeploymentConfiguration(BlueGreenDeploymentConfigurationT&& value) { m_blueGreenDeploymentConfigurationHasBeenSet = true; m_blueGreenDeploymentConfiguration = std::forward<BlueGreenDeploymentConfigurationT>(value); }
    template<typename BlueGreenDeploymentConfigurationT = BlueGreenDeploymentConfiguration>
    UpdateDeploymentGroupRequest& WithBlueGreenDeploymentConfiguration(BlueGreenDeploymentConfigurationT&& value) { SetBlueGreenDeploymentConfiguration(std::forward<BlueGreenDeploymentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the load balancer used in a deployment.</p>
     */
    inline const LoadBalancerInfo& GetLoadBalancerInfo() const { return m_loadBalancerInfo; }
    inline bool LoadBalancerInfoHasBeenSet() const { return m_loadBalancerInfoHasBeenSet; }
    template<typename LoadBalancerInfoT = LoadBalancerInfo>
    void SetLoadBalancerInfo(LoadBalancerInfoT&& value) { m_loadBalancerInfoHasBeenSet = true; m_loadBalancerInfo = std::forward<LoadBalancerInfoT>(value); }
    template<typename LoadBalancerInfoT = LoadBalancerInfo>
    UpdateDeploymentGroupRequest& WithLoadBalancerInfo(LoadBalancerInfoT&& value) { SetLoadBalancerInfo(std::forward<LoadBalancerInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about groups of tags applied to on-premises instances. The
     * deployment group includes only Amazon EC2 instances identified by all the tag
     * groups.</p>
     */
    inline const EC2TagSet& GetEc2TagSet() const { return m_ec2TagSet; }
    inline bool Ec2TagSetHasBeenSet() const { return m_ec2TagSetHasBeenSet; }
    template<typename Ec2TagSetT = EC2TagSet>
    void SetEc2TagSet(Ec2TagSetT&& value) { m_ec2TagSetHasBeenSet = true; m_ec2TagSet = std::forward<Ec2TagSetT>(value); }
    template<typename Ec2TagSetT = EC2TagSet>
    UpdateDeploymentGroupRequest& WithEc2TagSet(Ec2TagSetT&& value) { SetEc2TagSet(std::forward<Ec2TagSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The target Amazon ECS services in the deployment group. This applies only to
     * deployment groups that use the Amazon ECS compute platform. A target Amazon ECS
     * service is specified as an Amazon ECS cluster and service name pair using the
     * format <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. </p>
     */
    inline const Aws::Vector<ECSService>& GetEcsServices() const { return m_ecsServices; }
    inline bool EcsServicesHasBeenSet() const { return m_ecsServicesHasBeenSet; }
    template<typename EcsServicesT = Aws::Vector<ECSService>>
    void SetEcsServices(EcsServicesT&& value) { m_ecsServicesHasBeenSet = true; m_ecsServices = std::forward<EcsServicesT>(value); }
    template<typename EcsServicesT = Aws::Vector<ECSService>>
    UpdateDeploymentGroupRequest& WithEcsServices(EcsServicesT&& value) { SetEcsServices(std::forward<EcsServicesT>(value)); return *this;}
    template<typename EcsServicesT = ECSService>
    UpdateDeploymentGroupRequest& AddEcsServices(EcsServicesT&& value) { m_ecsServicesHasBeenSet = true; m_ecsServices.emplace_back(std::forward<EcsServicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about an on-premises instance tag set. The deployment group
     * includes only on-premises instances identified by all the tag groups.</p>
     */
    inline const OnPremisesTagSet& GetOnPremisesTagSet() const { return m_onPremisesTagSet; }
    inline bool OnPremisesTagSetHasBeenSet() const { return m_onPremisesTagSetHasBeenSet; }
    template<typename OnPremisesTagSetT = OnPremisesTagSet>
    void SetOnPremisesTagSet(OnPremisesTagSetT&& value) { m_onPremisesTagSetHasBeenSet = true; m_onPremisesTagSet = std::forward<OnPremisesTagSetT>(value); }
    template<typename OnPremisesTagSetT = OnPremisesTagSet>
    UpdateDeploymentGroupRequest& WithOnPremisesTagSet(OnPremisesTagSetT&& value) { SetOnPremisesTagSet(std::forward<OnPremisesTagSetT>(value)); return *this;}
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
    inline bool GetTerminationHookEnabled() const { return m_terminationHookEnabled; }
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

    OutdatedInstancesStrategy m_outdatedInstancesStrategy{OutdatedInstancesStrategy::NOT_SET};
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

    bool m_terminationHookEnabled{false};
    bool m_terminationHookEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
