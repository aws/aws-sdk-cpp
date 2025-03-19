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
    AWS_CODEDEPLOY_API DeploymentGroupInfo() = default;
    AWS_CODEDEPLOY_API DeploymentGroupInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API DeploymentGroupInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application name.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    DeploymentGroupInfo& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment group ID.</p>
     */
    inline const Aws::String& GetDeploymentGroupId() const { return m_deploymentGroupId; }
    inline bool DeploymentGroupIdHasBeenSet() const { return m_deploymentGroupIdHasBeenSet; }
    template<typename DeploymentGroupIdT = Aws::String>
    void SetDeploymentGroupId(DeploymentGroupIdT&& value) { m_deploymentGroupIdHasBeenSet = true; m_deploymentGroupId = std::forward<DeploymentGroupIdT>(value); }
    template<typename DeploymentGroupIdT = Aws::String>
    DeploymentGroupInfo& WithDeploymentGroupId(DeploymentGroupIdT&& value) { SetDeploymentGroupId(std::forward<DeploymentGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment group name.</p>
     */
    inline const Aws::String& GetDeploymentGroupName() const { return m_deploymentGroupName; }
    inline bool DeploymentGroupNameHasBeenSet() const { return m_deploymentGroupNameHasBeenSet; }
    template<typename DeploymentGroupNameT = Aws::String>
    void SetDeploymentGroupName(DeploymentGroupNameT&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = std::forward<DeploymentGroupNameT>(value); }
    template<typename DeploymentGroupNameT = Aws::String>
    DeploymentGroupInfo& WithDeploymentGroupName(DeploymentGroupNameT&& value) { SetDeploymentGroupName(std::forward<DeploymentGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment configuration name.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const { return m_deploymentConfigName; }
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }
    template<typename DeploymentConfigNameT = Aws::String>
    void SetDeploymentConfigName(DeploymentConfigNameT&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::forward<DeploymentConfigNameT>(value); }
    template<typename DeploymentConfigNameT = Aws::String>
    DeploymentGroupInfo& WithDeploymentConfigName(DeploymentConfigNameT&& value) { SetDeploymentConfigName(std::forward<DeploymentConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags.</p>
     */
    inline const Aws::Vector<EC2TagFilter>& GetEc2TagFilters() const { return m_ec2TagFilters; }
    inline bool Ec2TagFiltersHasBeenSet() const { return m_ec2TagFiltersHasBeenSet; }
    template<typename Ec2TagFiltersT = Aws::Vector<EC2TagFilter>>
    void SetEc2TagFilters(Ec2TagFiltersT&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters = std::forward<Ec2TagFiltersT>(value); }
    template<typename Ec2TagFiltersT = Aws::Vector<EC2TagFilter>>
    DeploymentGroupInfo& WithEc2TagFilters(Ec2TagFiltersT&& value) { SetEc2TagFilters(std::forward<Ec2TagFiltersT>(value)); return *this;}
    template<typename Ec2TagFiltersT = EC2TagFilter>
    DeploymentGroupInfo& AddEc2TagFilters(Ec2TagFiltersT&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.emplace_back(std::forward<Ec2TagFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags.</p>
     */
    inline const Aws::Vector<TagFilter>& GetOnPremisesInstanceTagFilters() const { return m_onPremisesInstanceTagFilters; }
    inline bool OnPremisesInstanceTagFiltersHasBeenSet() const { return m_onPremisesInstanceTagFiltersHasBeenSet; }
    template<typename OnPremisesInstanceTagFiltersT = Aws::Vector<TagFilter>>
    void SetOnPremisesInstanceTagFilters(OnPremisesInstanceTagFiltersT&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters = std::forward<OnPremisesInstanceTagFiltersT>(value); }
    template<typename OnPremisesInstanceTagFiltersT = Aws::Vector<TagFilter>>
    DeploymentGroupInfo& WithOnPremisesInstanceTagFilters(OnPremisesInstanceTagFiltersT&& value) { SetOnPremisesInstanceTagFilters(std::forward<OnPremisesInstanceTagFiltersT>(value)); return *this;}
    template<typename OnPremisesInstanceTagFiltersT = TagFilter>
    DeploymentGroupInfo& AddOnPremisesInstanceTagFilters(OnPremisesInstanceTagFiltersT&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.emplace_back(std::forward<OnPremisesInstanceTagFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline const Aws::Vector<AutoScalingGroup>& GetAutoScalingGroups() const { return m_autoScalingGroups; }
    inline bool AutoScalingGroupsHasBeenSet() const { return m_autoScalingGroupsHasBeenSet; }
    template<typename AutoScalingGroupsT = Aws::Vector<AutoScalingGroup>>
    void SetAutoScalingGroups(AutoScalingGroupsT&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = std::forward<AutoScalingGroupsT>(value); }
    template<typename AutoScalingGroupsT = Aws::Vector<AutoScalingGroup>>
    DeploymentGroupInfo& WithAutoScalingGroups(AutoScalingGroupsT&& value) { SetAutoScalingGroups(std::forward<AutoScalingGroupsT>(value)); return *this;}
    template<typename AutoScalingGroupsT = AutoScalingGroup>
    DeploymentGroupInfo& AddAutoScalingGroups(AutoScalingGroupsT&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.emplace_back(std::forward<AutoScalingGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A service role Amazon Resource Name (ARN) that grants CodeDeploy permission
     * to make calls to Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/getting-started-create-service-role.html">Create
     * a Service Role for CodeDeploy</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const { return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    template<typename ServiceRoleArnT = Aws::String>
    void SetServiceRoleArn(ServiceRoleArnT&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::forward<ServiceRoleArnT>(value); }
    template<typename ServiceRoleArnT = Aws::String>
    DeploymentGroupInfo& WithServiceRoleArn(ServiceRoleArnT&& value) { SetServiceRoleArn(std::forward<ServiceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the deployment group's target revision, including type and
     * location.</p>
     */
    inline const RevisionLocation& GetTargetRevision() const { return m_targetRevision; }
    inline bool TargetRevisionHasBeenSet() const { return m_targetRevisionHasBeenSet; }
    template<typename TargetRevisionT = RevisionLocation>
    void SetTargetRevision(TargetRevisionT&& value) { m_targetRevisionHasBeenSet = true; m_targetRevision = std::forward<TargetRevisionT>(value); }
    template<typename TargetRevisionT = RevisionLocation>
    DeploymentGroupInfo& WithTargetRevision(TargetRevisionT&& value) { SetTargetRevision(std::forward<TargetRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about triggers associated with the deployment group.</p>
     */
    inline const Aws::Vector<TriggerConfig>& GetTriggerConfigurations() const { return m_triggerConfigurations; }
    inline bool TriggerConfigurationsHasBeenSet() const { return m_triggerConfigurationsHasBeenSet; }
    template<typename TriggerConfigurationsT = Aws::Vector<TriggerConfig>>
    void SetTriggerConfigurations(TriggerConfigurationsT&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations = std::forward<TriggerConfigurationsT>(value); }
    template<typename TriggerConfigurationsT = Aws::Vector<TriggerConfig>>
    DeploymentGroupInfo& WithTriggerConfigurations(TriggerConfigurationsT&& value) { SetTriggerConfigurations(std::forward<TriggerConfigurationsT>(value)); return *this;}
    template<typename TriggerConfigurationsT = TriggerConfig>
    DeploymentGroupInfo& AddTriggerConfigurations(TriggerConfigurationsT&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations.emplace_back(std::forward<TriggerConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of alarms associated with the deployment group.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const { return m_alarmConfiguration; }
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    void SetAlarmConfiguration(AlarmConfigurationT&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::forward<AlarmConfigurationT>(value); }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    DeploymentGroupInfo& WithAlarmConfiguration(AlarmConfigurationT&& value) { SetAlarmConfiguration(std::forward<AlarmConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment group.</p>
     */
    inline const AutoRollbackConfiguration& GetAutoRollbackConfiguration() const { return m_autoRollbackConfiguration; }
    inline bool AutoRollbackConfigurationHasBeenSet() const { return m_autoRollbackConfigurationHasBeenSet; }
    template<typename AutoRollbackConfigurationT = AutoRollbackConfiguration>
    void SetAutoRollbackConfiguration(AutoRollbackConfigurationT&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = std::forward<AutoRollbackConfigurationT>(value); }
    template<typename AutoRollbackConfigurationT = AutoRollbackConfiguration>
    DeploymentGroupInfo& WithAutoRollbackConfiguration(AutoRollbackConfigurationT&& value) { SetAutoRollbackConfiguration(std::forward<AutoRollbackConfigurationT>(value)); return *this;}
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
    DeploymentGroupInfo& WithDeploymentStyle(DeploymentStyleT&& value) { SetDeploymentStyle(std::forward<DeploymentStyleT>(value)); return *this;}
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
    inline DeploymentGroupInfo& WithOutdatedInstancesStrategy(OutdatedInstancesStrategy value) { SetOutdatedInstancesStrategy(value); return *this;}
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
    DeploymentGroupInfo& WithBlueGreenDeploymentConfiguration(BlueGreenDeploymentConfigurationT&& value) { SetBlueGreenDeploymentConfiguration(std::forward<BlueGreenDeploymentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the load balancer to use in a deployment.</p>
     */
    inline const LoadBalancerInfo& GetLoadBalancerInfo() const { return m_loadBalancerInfo; }
    inline bool LoadBalancerInfoHasBeenSet() const { return m_loadBalancerInfoHasBeenSet; }
    template<typename LoadBalancerInfoT = LoadBalancerInfo>
    void SetLoadBalancerInfo(LoadBalancerInfoT&& value) { m_loadBalancerInfoHasBeenSet = true; m_loadBalancerInfo = std::forward<LoadBalancerInfoT>(value); }
    template<typename LoadBalancerInfoT = LoadBalancerInfo>
    DeploymentGroupInfo& WithLoadBalancerInfo(LoadBalancerInfoT&& value) { SetLoadBalancerInfo(std::forward<LoadBalancerInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the most recent successful deployment to the deployment
     * group.</p>
     */
    inline const LastDeploymentInfo& GetLastSuccessfulDeployment() const { return m_lastSuccessfulDeployment; }
    inline bool LastSuccessfulDeploymentHasBeenSet() const { return m_lastSuccessfulDeploymentHasBeenSet; }
    template<typename LastSuccessfulDeploymentT = LastDeploymentInfo>
    void SetLastSuccessfulDeployment(LastSuccessfulDeploymentT&& value) { m_lastSuccessfulDeploymentHasBeenSet = true; m_lastSuccessfulDeployment = std::forward<LastSuccessfulDeploymentT>(value); }
    template<typename LastSuccessfulDeploymentT = LastDeploymentInfo>
    DeploymentGroupInfo& WithLastSuccessfulDeployment(LastSuccessfulDeploymentT&& value) { SetLastSuccessfulDeployment(std::forward<LastSuccessfulDeploymentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the most recent attempted deployment to the deployment
     * group.</p>
     */
    inline const LastDeploymentInfo& GetLastAttemptedDeployment() const { return m_lastAttemptedDeployment; }
    inline bool LastAttemptedDeploymentHasBeenSet() const { return m_lastAttemptedDeploymentHasBeenSet; }
    template<typename LastAttemptedDeploymentT = LastDeploymentInfo>
    void SetLastAttemptedDeployment(LastAttemptedDeploymentT&& value) { m_lastAttemptedDeploymentHasBeenSet = true; m_lastAttemptedDeployment = std::forward<LastAttemptedDeploymentT>(value); }
    template<typename LastAttemptedDeploymentT = LastDeploymentInfo>
    DeploymentGroupInfo& WithLastAttemptedDeployment(LastAttemptedDeploymentT&& value) { SetLastAttemptedDeployment(std::forward<LastAttemptedDeploymentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about groups of tags applied to an Amazon EC2 instance. The
     * deployment group includes only Amazon EC2 instances identified by all of the tag
     * groups. Cannot be used in the same call as ec2TagFilters.</p>
     */
    inline const EC2TagSet& GetEc2TagSet() const { return m_ec2TagSet; }
    inline bool Ec2TagSetHasBeenSet() const { return m_ec2TagSetHasBeenSet; }
    template<typename Ec2TagSetT = EC2TagSet>
    void SetEc2TagSet(Ec2TagSetT&& value) { m_ec2TagSetHasBeenSet = true; m_ec2TagSet = std::forward<Ec2TagSetT>(value); }
    template<typename Ec2TagSetT = EC2TagSet>
    DeploymentGroupInfo& WithEc2TagSet(Ec2TagSetT&& value) { SetEc2TagSet(std::forward<Ec2TagSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about groups of tags applied to an on-premises instance. The
     * deployment group includes only on-premises instances identified by all the tag
     * groups. Cannot be used in the same call as onPremisesInstanceTagFilters.</p>
     */
    inline const OnPremisesTagSet& GetOnPremisesTagSet() const { return m_onPremisesTagSet; }
    inline bool OnPremisesTagSetHasBeenSet() const { return m_onPremisesTagSetHasBeenSet; }
    template<typename OnPremisesTagSetT = OnPremisesTagSet>
    void SetOnPremisesTagSet(OnPremisesTagSetT&& value) { m_onPremisesTagSetHasBeenSet = true; m_onPremisesTagSet = std::forward<OnPremisesTagSetT>(value); }
    template<typename OnPremisesTagSetT = OnPremisesTagSet>
    DeploymentGroupInfo& WithOnPremisesTagSet(OnPremisesTagSetT&& value) { SetOnPremisesTagSet(std::forward<OnPremisesTagSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline ComputePlatform GetComputePlatform() const { return m_computePlatform; }
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }
    inline void SetComputePlatform(ComputePlatform value) { m_computePlatformHasBeenSet = true; m_computePlatform = value; }
    inline DeploymentGroupInfo& WithComputePlatform(ComputePlatform value) { SetComputePlatform(value); return *this;}
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
    DeploymentGroupInfo& WithEcsServices(EcsServicesT&& value) { SetEcsServices(std::forward<EcsServicesT>(value)); return *this;}
    template<typename EcsServicesT = ECSService>
    DeploymentGroupInfo& AddEcsServices(EcsServicesT&& value) { m_ecsServicesHasBeenSet = true; m_ecsServices.emplace_back(std::forward<EcsServicesT>(value)); return *this; }
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
    inline bool GetTerminationHookEnabled() const { return m_terminationHookEnabled; }
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

    OutdatedInstancesStrategy m_outdatedInstancesStrategy{OutdatedInstancesStrategy::NOT_SET};
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

    ComputePlatform m_computePlatform{ComputePlatform::NOT_SET};
    bool m_computePlatformHasBeenSet = false;

    Aws::Vector<ECSService> m_ecsServices;
    bool m_ecsServicesHasBeenSet = false;

    bool m_terminationHookEnabled{false};
    bool m_terminationHookEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
