/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/RevisionLocation.h>
#include <aws/codedeploy/model/AlarmConfiguration.h>
#include <aws/codedeploy/model/AutoRollbackConfiguration.h>
#include <aws/codedeploy/model/DeploymentStyle.h>
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
  class AWS_CODEDEPLOY_API DeploymentGroupInfo
  {
  public:
    DeploymentGroupInfo();
    DeploymentGroupInfo(Aws::Utils::Json::JsonView jsonValue);
    DeploymentGroupInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The application name.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The application name.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The application name.</p>
     */
    inline DeploymentGroupInfo& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The application name.</p>
     */
    inline DeploymentGroupInfo& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The application name.</p>
     */
    inline DeploymentGroupInfo& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The deployment group ID.</p>
     */
    inline const Aws::String& GetDeploymentGroupId() const{ return m_deploymentGroupId; }

    /**
     * <p>The deployment group ID.</p>
     */
    inline bool DeploymentGroupIdHasBeenSet() const { return m_deploymentGroupIdHasBeenSet; }

    /**
     * <p>The deployment group ID.</p>
     */
    inline void SetDeploymentGroupId(const Aws::String& value) { m_deploymentGroupIdHasBeenSet = true; m_deploymentGroupId = value; }

    /**
     * <p>The deployment group ID.</p>
     */
    inline void SetDeploymentGroupId(Aws::String&& value) { m_deploymentGroupIdHasBeenSet = true; m_deploymentGroupId = std::move(value); }

    /**
     * <p>The deployment group ID.</p>
     */
    inline void SetDeploymentGroupId(const char* value) { m_deploymentGroupIdHasBeenSet = true; m_deploymentGroupId.assign(value); }

    /**
     * <p>The deployment group ID.</p>
     */
    inline DeploymentGroupInfo& WithDeploymentGroupId(const Aws::String& value) { SetDeploymentGroupId(value); return *this;}

    /**
     * <p>The deployment group ID.</p>
     */
    inline DeploymentGroupInfo& WithDeploymentGroupId(Aws::String&& value) { SetDeploymentGroupId(std::move(value)); return *this;}

    /**
     * <p>The deployment group ID.</p>
     */
    inline DeploymentGroupInfo& WithDeploymentGroupId(const char* value) { SetDeploymentGroupId(value); return *this;}


    /**
     * <p>The deployment group name.</p>
     */
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }

    /**
     * <p>The deployment group name.</p>
     */
    inline bool DeploymentGroupNameHasBeenSet() const { return m_deploymentGroupNameHasBeenSet; }

    /**
     * <p>The deployment group name.</p>
     */
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /**
     * <p>The deployment group name.</p>
     */
    inline void SetDeploymentGroupName(Aws::String&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = std::move(value); }

    /**
     * <p>The deployment group name.</p>
     */
    inline void SetDeploymentGroupName(const char* value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName.assign(value); }

    /**
     * <p>The deployment group name.</p>
     */
    inline DeploymentGroupInfo& WithDeploymentGroupName(const Aws::String& value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p>The deployment group name.</p>
     */
    inline DeploymentGroupInfo& WithDeploymentGroupName(Aws::String&& value) { SetDeploymentGroupName(std::move(value)); return *this;}

    /**
     * <p>The deployment group name.</p>
     */
    inline DeploymentGroupInfo& WithDeploymentGroupName(const char* value) { SetDeploymentGroupName(value); return *this;}


    /**
     * <p>The deployment configuration name.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::move(value); }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline DeploymentGroupInfo& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The deployment configuration name.</p>
     */
    inline DeploymentGroupInfo& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(std::move(value)); return *this;}

    /**
     * <p>The deployment configuration name.</p>
     */
    inline DeploymentGroupInfo& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}


    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags.</p>
     */
    inline const Aws::Vector<EC2TagFilter>& GetEc2TagFilters() const{ return m_ec2TagFilters; }

    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags.</p>
     */
    inline bool Ec2TagFiltersHasBeenSet() const { return m_ec2TagFiltersHasBeenSet; }

    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags.</p>
     */
    inline void SetEc2TagFilters(const Aws::Vector<EC2TagFilter>& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters = value; }

    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags.</p>
     */
    inline void SetEc2TagFilters(Aws::Vector<EC2TagFilter>&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters = std::move(value); }

    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags.</p>
     */
    inline DeploymentGroupInfo& WithEc2TagFilters(const Aws::Vector<EC2TagFilter>& value) { SetEc2TagFilters(value); return *this;}

    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags.</p>
     */
    inline DeploymentGroupInfo& WithEc2TagFilters(Aws::Vector<EC2TagFilter>&& value) { SetEc2TagFilters(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags.</p>
     */
    inline DeploymentGroupInfo& AddEc2TagFilters(const EC2TagFilter& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags.</p>
     */
    inline DeploymentGroupInfo& AddEc2TagFilters(EC2TagFilter&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags.</p>
     */
    inline const Aws::Vector<TagFilter>& GetOnPremisesInstanceTagFilters() const{ return m_onPremisesInstanceTagFilters; }

    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags.</p>
     */
    inline bool OnPremisesInstanceTagFiltersHasBeenSet() const { return m_onPremisesInstanceTagFiltersHasBeenSet; }

    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags.</p>
     */
    inline void SetOnPremisesInstanceTagFilters(const Aws::Vector<TagFilter>& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters = value; }

    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags.</p>
     */
    inline void SetOnPremisesInstanceTagFilters(Aws::Vector<TagFilter>&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters = std::move(value); }

    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags.</p>
     */
    inline DeploymentGroupInfo& WithOnPremisesInstanceTagFilters(const Aws::Vector<TagFilter>& value) { SetOnPremisesInstanceTagFilters(value); return *this;}

    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags.</p>
     */
    inline DeploymentGroupInfo& WithOnPremisesInstanceTagFilters(Aws::Vector<TagFilter>&& value) { SetOnPremisesInstanceTagFilters(std::move(value)); return *this;}

    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags.</p>
     */
    inline DeploymentGroupInfo& AddOnPremisesInstanceTagFilters(const TagFilter& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.push_back(value); return *this; }

    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags.</p>
     */
    inline DeploymentGroupInfo& AddOnPremisesInstanceTagFilters(TagFilter&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline const Aws::Vector<AutoScalingGroup>& GetAutoScalingGroups() const{ return m_autoScalingGroups; }

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline bool AutoScalingGroupsHasBeenSet() const { return m_autoScalingGroupsHasBeenSet; }

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline void SetAutoScalingGroups(const Aws::Vector<AutoScalingGroup>& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline void SetAutoScalingGroups(Aws::Vector<AutoScalingGroup>&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = std::move(value); }

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline DeploymentGroupInfo& WithAutoScalingGroups(const Aws::Vector<AutoScalingGroup>& value) { SetAutoScalingGroups(value); return *this;}

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline DeploymentGroupInfo& WithAutoScalingGroups(Aws::Vector<AutoScalingGroup>&& value) { SetAutoScalingGroups(std::move(value)); return *this;}

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline DeploymentGroupInfo& AddAutoScalingGroups(const AutoScalingGroup& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline DeploymentGroupInfo& AddAutoScalingGroups(AutoScalingGroup&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>A service role Amazon Resource Name (ARN) that grants CodeDeploy permission
     * to make calls to AWS services on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/getting-started-create-service-role.html">Create
     * a Service Role for AWS CodeDeploy</a> in the <i>AWS CodeDeploy User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>A service role Amazon Resource Name (ARN) that grants CodeDeploy permission
     * to make calls to AWS services on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/getting-started-create-service-role.html">Create
     * a Service Role for AWS CodeDeploy</a> in the <i>AWS CodeDeploy User
     * Guide</i>.</p>
     */
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }

    /**
     * <p>A service role Amazon Resource Name (ARN) that grants CodeDeploy permission
     * to make calls to AWS services on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/getting-started-create-service-role.html">Create
     * a Service Role for AWS CodeDeploy</a> in the <i>AWS CodeDeploy User
     * Guide</i>.</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>A service role Amazon Resource Name (ARN) that grants CodeDeploy permission
     * to make calls to AWS services on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/getting-started-create-service-role.html">Create
     * a Service Role for AWS CodeDeploy</a> in the <i>AWS CodeDeploy User
     * Guide</i>.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }

    /**
     * <p>A service role Amazon Resource Name (ARN) that grants CodeDeploy permission
     * to make calls to AWS services on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/getting-started-create-service-role.html">Create
     * a Service Role for AWS CodeDeploy</a> in the <i>AWS CodeDeploy User
     * Guide</i>.</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>A service role Amazon Resource Name (ARN) that grants CodeDeploy permission
     * to make calls to AWS services on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/getting-started-create-service-role.html">Create
     * a Service Role for AWS CodeDeploy</a> in the <i>AWS CodeDeploy User
     * Guide</i>.</p>
     */
    inline DeploymentGroupInfo& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>A service role Amazon Resource Name (ARN) that grants CodeDeploy permission
     * to make calls to AWS services on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/getting-started-create-service-role.html">Create
     * a Service Role for AWS CodeDeploy</a> in the <i>AWS CodeDeploy User
     * Guide</i>.</p>
     */
    inline DeploymentGroupInfo& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>A service role Amazon Resource Name (ARN) that grants CodeDeploy permission
     * to make calls to AWS services on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/getting-started-create-service-role.html">Create
     * a Service Role for AWS CodeDeploy</a> in the <i>AWS CodeDeploy User
     * Guide</i>.</p>
     */
    inline DeploymentGroupInfo& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p>Information about the deployment group's target revision, including type and
     * location.</p>
     */
    inline const RevisionLocation& GetTargetRevision() const{ return m_targetRevision; }

    /**
     * <p>Information about the deployment group's target revision, including type and
     * location.</p>
     */
    inline bool TargetRevisionHasBeenSet() const { return m_targetRevisionHasBeenSet; }

    /**
     * <p>Information about the deployment group's target revision, including type and
     * location.</p>
     */
    inline void SetTargetRevision(const RevisionLocation& value) { m_targetRevisionHasBeenSet = true; m_targetRevision = value; }

    /**
     * <p>Information about the deployment group's target revision, including type and
     * location.</p>
     */
    inline void SetTargetRevision(RevisionLocation&& value) { m_targetRevisionHasBeenSet = true; m_targetRevision = std::move(value); }

    /**
     * <p>Information about the deployment group's target revision, including type and
     * location.</p>
     */
    inline DeploymentGroupInfo& WithTargetRevision(const RevisionLocation& value) { SetTargetRevision(value); return *this;}

    /**
     * <p>Information about the deployment group's target revision, including type and
     * location.</p>
     */
    inline DeploymentGroupInfo& WithTargetRevision(RevisionLocation&& value) { SetTargetRevision(std::move(value)); return *this;}


    /**
     * <p>Information about triggers associated with the deployment group.</p>
     */
    inline const Aws::Vector<TriggerConfig>& GetTriggerConfigurations() const{ return m_triggerConfigurations; }

    /**
     * <p>Information about triggers associated with the deployment group.</p>
     */
    inline bool TriggerConfigurationsHasBeenSet() const { return m_triggerConfigurationsHasBeenSet; }

    /**
     * <p>Information about triggers associated with the deployment group.</p>
     */
    inline void SetTriggerConfigurations(const Aws::Vector<TriggerConfig>& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations = value; }

    /**
     * <p>Information about triggers associated with the deployment group.</p>
     */
    inline void SetTriggerConfigurations(Aws::Vector<TriggerConfig>&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations = std::move(value); }

    /**
     * <p>Information about triggers associated with the deployment group.</p>
     */
    inline DeploymentGroupInfo& WithTriggerConfigurations(const Aws::Vector<TriggerConfig>& value) { SetTriggerConfigurations(value); return *this;}

    /**
     * <p>Information about triggers associated with the deployment group.</p>
     */
    inline DeploymentGroupInfo& WithTriggerConfigurations(Aws::Vector<TriggerConfig>&& value) { SetTriggerConfigurations(std::move(value)); return *this;}

    /**
     * <p>Information about triggers associated with the deployment group.</p>
     */
    inline DeploymentGroupInfo& AddTriggerConfigurations(const TriggerConfig& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations.push_back(value); return *this; }

    /**
     * <p>Information about triggers associated with the deployment group.</p>
     */
    inline DeploymentGroupInfo& AddTriggerConfigurations(TriggerConfig&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of alarms associated with the deployment group.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }

    /**
     * <p>A list of alarms associated with the deployment group.</p>
     */
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }

    /**
     * <p>A list of alarms associated with the deployment group.</p>
     */
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }

    /**
     * <p>A list of alarms associated with the deployment group.</p>
     */
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::move(value); }

    /**
     * <p>A list of alarms associated with the deployment group.</p>
     */
    inline DeploymentGroupInfo& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}

    /**
     * <p>A list of alarms associated with the deployment group.</p>
     */
    inline DeploymentGroupInfo& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(std::move(value)); return *this;}


    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment group.</p>
     */
    inline const AutoRollbackConfiguration& GetAutoRollbackConfiguration() const{ return m_autoRollbackConfiguration; }

    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment group.</p>
     */
    inline bool AutoRollbackConfigurationHasBeenSet() const { return m_autoRollbackConfigurationHasBeenSet; }

    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment group.</p>
     */
    inline void SetAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = value; }

    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment group.</p>
     */
    inline void SetAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = std::move(value); }

    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment group.</p>
     */
    inline DeploymentGroupInfo& WithAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { SetAutoRollbackConfiguration(value); return *this;}

    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment group.</p>
     */
    inline DeploymentGroupInfo& WithAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { SetAutoRollbackConfiguration(std::move(value)); return *this;}


    /**
     * <p>Information about the type of deployment, either in-place or blue/green, you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline const DeploymentStyle& GetDeploymentStyle() const{ return m_deploymentStyle; }

    /**
     * <p>Information about the type of deployment, either in-place or blue/green, you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline bool DeploymentStyleHasBeenSet() const { return m_deploymentStyleHasBeenSet; }

    /**
     * <p>Information about the type of deployment, either in-place or blue/green, you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline void SetDeploymentStyle(const DeploymentStyle& value) { m_deploymentStyleHasBeenSet = true; m_deploymentStyle = value; }

    /**
     * <p>Information about the type of deployment, either in-place or blue/green, you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline void SetDeploymentStyle(DeploymentStyle&& value) { m_deploymentStyleHasBeenSet = true; m_deploymentStyle = std::move(value); }

    /**
     * <p>Information about the type of deployment, either in-place or blue/green, you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline DeploymentGroupInfo& WithDeploymentStyle(const DeploymentStyle& value) { SetDeploymentStyle(value); return *this;}

    /**
     * <p>Information about the type of deployment, either in-place or blue/green, you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline DeploymentGroupInfo& WithDeploymentStyle(DeploymentStyle&& value) { SetDeploymentStyle(std::move(value)); return *this;}


    /**
     * <p>Information about blue/green deployment options for a deployment group.</p>
     */
    inline const BlueGreenDeploymentConfiguration& GetBlueGreenDeploymentConfiguration() const{ return m_blueGreenDeploymentConfiguration; }

    /**
     * <p>Information about blue/green deployment options for a deployment group.</p>
     */
    inline bool BlueGreenDeploymentConfigurationHasBeenSet() const { return m_blueGreenDeploymentConfigurationHasBeenSet; }

    /**
     * <p>Information about blue/green deployment options for a deployment group.</p>
     */
    inline void SetBlueGreenDeploymentConfiguration(const BlueGreenDeploymentConfiguration& value) { m_blueGreenDeploymentConfigurationHasBeenSet = true; m_blueGreenDeploymentConfiguration = value; }

    /**
     * <p>Information about blue/green deployment options for a deployment group.</p>
     */
    inline void SetBlueGreenDeploymentConfiguration(BlueGreenDeploymentConfiguration&& value) { m_blueGreenDeploymentConfigurationHasBeenSet = true; m_blueGreenDeploymentConfiguration = std::move(value); }

    /**
     * <p>Information about blue/green deployment options for a deployment group.</p>
     */
    inline DeploymentGroupInfo& WithBlueGreenDeploymentConfiguration(const BlueGreenDeploymentConfiguration& value) { SetBlueGreenDeploymentConfiguration(value); return *this;}

    /**
     * <p>Information about blue/green deployment options for a deployment group.</p>
     */
    inline DeploymentGroupInfo& WithBlueGreenDeploymentConfiguration(BlueGreenDeploymentConfiguration&& value) { SetBlueGreenDeploymentConfiguration(std::move(value)); return *this;}


    /**
     * <p>Information about the load balancer to use in a deployment.</p>
     */
    inline const LoadBalancerInfo& GetLoadBalancerInfo() const{ return m_loadBalancerInfo; }

    /**
     * <p>Information about the load balancer to use in a deployment.</p>
     */
    inline bool LoadBalancerInfoHasBeenSet() const { return m_loadBalancerInfoHasBeenSet; }

    /**
     * <p>Information about the load balancer to use in a deployment.</p>
     */
    inline void SetLoadBalancerInfo(const LoadBalancerInfo& value) { m_loadBalancerInfoHasBeenSet = true; m_loadBalancerInfo = value; }

    /**
     * <p>Information about the load balancer to use in a deployment.</p>
     */
    inline void SetLoadBalancerInfo(LoadBalancerInfo&& value) { m_loadBalancerInfoHasBeenSet = true; m_loadBalancerInfo = std::move(value); }

    /**
     * <p>Information about the load balancer to use in a deployment.</p>
     */
    inline DeploymentGroupInfo& WithLoadBalancerInfo(const LoadBalancerInfo& value) { SetLoadBalancerInfo(value); return *this;}

    /**
     * <p>Information about the load balancer to use in a deployment.</p>
     */
    inline DeploymentGroupInfo& WithLoadBalancerInfo(LoadBalancerInfo&& value) { SetLoadBalancerInfo(std::move(value)); return *this;}


    /**
     * <p>Information about the most recent successful deployment to the deployment
     * group.</p>
     */
    inline const LastDeploymentInfo& GetLastSuccessfulDeployment() const{ return m_lastSuccessfulDeployment; }

    /**
     * <p>Information about the most recent successful deployment to the deployment
     * group.</p>
     */
    inline bool LastSuccessfulDeploymentHasBeenSet() const { return m_lastSuccessfulDeploymentHasBeenSet; }

    /**
     * <p>Information about the most recent successful deployment to the deployment
     * group.</p>
     */
    inline void SetLastSuccessfulDeployment(const LastDeploymentInfo& value) { m_lastSuccessfulDeploymentHasBeenSet = true; m_lastSuccessfulDeployment = value; }

    /**
     * <p>Information about the most recent successful deployment to the deployment
     * group.</p>
     */
    inline void SetLastSuccessfulDeployment(LastDeploymentInfo&& value) { m_lastSuccessfulDeploymentHasBeenSet = true; m_lastSuccessfulDeployment = std::move(value); }

    /**
     * <p>Information about the most recent successful deployment to the deployment
     * group.</p>
     */
    inline DeploymentGroupInfo& WithLastSuccessfulDeployment(const LastDeploymentInfo& value) { SetLastSuccessfulDeployment(value); return *this;}

    /**
     * <p>Information about the most recent successful deployment to the deployment
     * group.</p>
     */
    inline DeploymentGroupInfo& WithLastSuccessfulDeployment(LastDeploymentInfo&& value) { SetLastSuccessfulDeployment(std::move(value)); return *this;}


    /**
     * <p>Information about the most recent attempted deployment to the deployment
     * group.</p>
     */
    inline const LastDeploymentInfo& GetLastAttemptedDeployment() const{ return m_lastAttemptedDeployment; }

    /**
     * <p>Information about the most recent attempted deployment to the deployment
     * group.</p>
     */
    inline bool LastAttemptedDeploymentHasBeenSet() const { return m_lastAttemptedDeploymentHasBeenSet; }

    /**
     * <p>Information about the most recent attempted deployment to the deployment
     * group.</p>
     */
    inline void SetLastAttemptedDeployment(const LastDeploymentInfo& value) { m_lastAttemptedDeploymentHasBeenSet = true; m_lastAttemptedDeployment = value; }

    /**
     * <p>Information about the most recent attempted deployment to the deployment
     * group.</p>
     */
    inline void SetLastAttemptedDeployment(LastDeploymentInfo&& value) { m_lastAttemptedDeploymentHasBeenSet = true; m_lastAttemptedDeployment = std::move(value); }

    /**
     * <p>Information about the most recent attempted deployment to the deployment
     * group.</p>
     */
    inline DeploymentGroupInfo& WithLastAttemptedDeployment(const LastDeploymentInfo& value) { SetLastAttemptedDeployment(value); return *this;}

    /**
     * <p>Information about the most recent attempted deployment to the deployment
     * group.</p>
     */
    inline DeploymentGroupInfo& WithLastAttemptedDeployment(LastDeploymentInfo&& value) { SetLastAttemptedDeployment(std::move(value)); return *this;}


    /**
     * <p>Information about groups of tags applied to an EC2 instance. The deployment
     * group includes only EC2 instances identified by all of the tag groups. Cannot be
     * used in the same call as ec2TagFilters.</p>
     */
    inline const EC2TagSet& GetEc2TagSet() const{ return m_ec2TagSet; }

    /**
     * <p>Information about groups of tags applied to an EC2 instance. The deployment
     * group includes only EC2 instances identified by all of the tag groups. Cannot be
     * used in the same call as ec2TagFilters.</p>
     */
    inline bool Ec2TagSetHasBeenSet() const { return m_ec2TagSetHasBeenSet; }

    /**
     * <p>Information about groups of tags applied to an EC2 instance. The deployment
     * group includes only EC2 instances identified by all of the tag groups. Cannot be
     * used in the same call as ec2TagFilters.</p>
     */
    inline void SetEc2TagSet(const EC2TagSet& value) { m_ec2TagSetHasBeenSet = true; m_ec2TagSet = value; }

    /**
     * <p>Information about groups of tags applied to an EC2 instance. The deployment
     * group includes only EC2 instances identified by all of the tag groups. Cannot be
     * used in the same call as ec2TagFilters.</p>
     */
    inline void SetEc2TagSet(EC2TagSet&& value) { m_ec2TagSetHasBeenSet = true; m_ec2TagSet = std::move(value); }

    /**
     * <p>Information about groups of tags applied to an EC2 instance. The deployment
     * group includes only EC2 instances identified by all of the tag groups. Cannot be
     * used in the same call as ec2TagFilters.</p>
     */
    inline DeploymentGroupInfo& WithEc2TagSet(const EC2TagSet& value) { SetEc2TagSet(value); return *this;}

    /**
     * <p>Information about groups of tags applied to an EC2 instance. The deployment
     * group includes only EC2 instances identified by all of the tag groups. Cannot be
     * used in the same call as ec2TagFilters.</p>
     */
    inline DeploymentGroupInfo& WithEc2TagSet(EC2TagSet&& value) { SetEc2TagSet(std::move(value)); return *this;}


    /**
     * <p>Information about groups of tags applied to an on-premises instance. The
     * deployment group includes only on-premises instances identified by all the tag
     * groups. Cannot be used in the same call as onPremisesInstanceTagFilters.</p>
     */
    inline const OnPremisesTagSet& GetOnPremisesTagSet() const{ return m_onPremisesTagSet; }

    /**
     * <p>Information about groups of tags applied to an on-premises instance. The
     * deployment group includes only on-premises instances identified by all the tag
     * groups. Cannot be used in the same call as onPremisesInstanceTagFilters.</p>
     */
    inline bool OnPremisesTagSetHasBeenSet() const { return m_onPremisesTagSetHasBeenSet; }

    /**
     * <p>Information about groups of tags applied to an on-premises instance. The
     * deployment group includes only on-premises instances identified by all the tag
     * groups. Cannot be used in the same call as onPremisesInstanceTagFilters.</p>
     */
    inline void SetOnPremisesTagSet(const OnPremisesTagSet& value) { m_onPremisesTagSetHasBeenSet = true; m_onPremisesTagSet = value; }

    /**
     * <p>Information about groups of tags applied to an on-premises instance. The
     * deployment group includes only on-premises instances identified by all the tag
     * groups. Cannot be used in the same call as onPremisesInstanceTagFilters.</p>
     */
    inline void SetOnPremisesTagSet(OnPremisesTagSet&& value) { m_onPremisesTagSetHasBeenSet = true; m_onPremisesTagSet = std::move(value); }

    /**
     * <p>Information about groups of tags applied to an on-premises instance. The
     * deployment group includes only on-premises instances identified by all the tag
     * groups. Cannot be used in the same call as onPremisesInstanceTagFilters.</p>
     */
    inline DeploymentGroupInfo& WithOnPremisesTagSet(const OnPremisesTagSet& value) { SetOnPremisesTagSet(value); return *this;}

    /**
     * <p>Information about groups of tags applied to an on-premises instance. The
     * deployment group includes only on-premises instances identified by all the tag
     * groups. Cannot be used in the same call as onPremisesInstanceTagFilters.</p>
     */
    inline DeploymentGroupInfo& WithOnPremisesTagSet(OnPremisesTagSet&& value) { SetOnPremisesTagSet(std::move(value)); return *this;}


    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline const ComputePlatform& GetComputePlatform() const{ return m_computePlatform; }

    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }

    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline void SetComputePlatform(const ComputePlatform& value) { m_computePlatformHasBeenSet = true; m_computePlatform = value; }

    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline void SetComputePlatform(ComputePlatform&& value) { m_computePlatformHasBeenSet = true; m_computePlatform = std::move(value); }

    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline DeploymentGroupInfo& WithComputePlatform(const ComputePlatform& value) { SetComputePlatform(value); return *this;}

    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline DeploymentGroupInfo& WithComputePlatform(ComputePlatform&& value) { SetComputePlatform(std::move(value)); return *this;}


    /**
     * <p> The target Amazon ECS services in the deployment group. This applies only to
     * deployment groups that use the Amazon ECS compute platform. A target Amazon ECS
     * service is specified as an Amazon ECS cluster and service name pair using the
     * format <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. </p>
     */
    inline const Aws::Vector<ECSService>& GetEcsServices() const{ return m_ecsServices; }

    /**
     * <p> The target Amazon ECS services in the deployment group. This applies only to
     * deployment groups that use the Amazon ECS compute platform. A target Amazon ECS
     * service is specified as an Amazon ECS cluster and service name pair using the
     * format <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. </p>
     */
    inline bool EcsServicesHasBeenSet() const { return m_ecsServicesHasBeenSet; }

    /**
     * <p> The target Amazon ECS services in the deployment group. This applies only to
     * deployment groups that use the Amazon ECS compute platform. A target Amazon ECS
     * service is specified as an Amazon ECS cluster and service name pair using the
     * format <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. </p>
     */
    inline void SetEcsServices(const Aws::Vector<ECSService>& value) { m_ecsServicesHasBeenSet = true; m_ecsServices = value; }

    /**
     * <p> The target Amazon ECS services in the deployment group. This applies only to
     * deployment groups that use the Amazon ECS compute platform. A target Amazon ECS
     * service is specified as an Amazon ECS cluster and service name pair using the
     * format <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. </p>
     */
    inline void SetEcsServices(Aws::Vector<ECSService>&& value) { m_ecsServicesHasBeenSet = true; m_ecsServices = std::move(value); }

    /**
     * <p> The target Amazon ECS services in the deployment group. This applies only to
     * deployment groups that use the Amazon ECS compute platform. A target Amazon ECS
     * service is specified as an Amazon ECS cluster and service name pair using the
     * format <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. </p>
     */
    inline DeploymentGroupInfo& WithEcsServices(const Aws::Vector<ECSService>& value) { SetEcsServices(value); return *this;}

    /**
     * <p> The target Amazon ECS services in the deployment group. This applies only to
     * deployment groups that use the Amazon ECS compute platform. A target Amazon ECS
     * service is specified as an Amazon ECS cluster and service name pair using the
     * format <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. </p>
     */
    inline DeploymentGroupInfo& WithEcsServices(Aws::Vector<ECSService>&& value) { SetEcsServices(std::move(value)); return *this;}

    /**
     * <p> The target Amazon ECS services in the deployment group. This applies only to
     * deployment groups that use the Amazon ECS compute platform. A target Amazon ECS
     * service is specified as an Amazon ECS cluster and service name pair using the
     * format <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. </p>
     */
    inline DeploymentGroupInfo& AddEcsServices(const ECSService& value) { m_ecsServicesHasBeenSet = true; m_ecsServices.push_back(value); return *this; }

    /**
     * <p> The target Amazon ECS services in the deployment group. This applies only to
     * deployment groups that use the Amazon ECS compute platform. A target Amazon ECS
     * service is specified as an Amazon ECS cluster and service name pair using the
     * format <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. </p>
     */
    inline DeploymentGroupInfo& AddEcsServices(ECSService&& value) { m_ecsServicesHasBeenSet = true; m_ecsServices.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_deploymentGroupId;
    bool m_deploymentGroupIdHasBeenSet;

    Aws::String m_deploymentGroupName;
    bool m_deploymentGroupNameHasBeenSet;

    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet;

    Aws::Vector<EC2TagFilter> m_ec2TagFilters;
    bool m_ec2TagFiltersHasBeenSet;

    Aws::Vector<TagFilter> m_onPremisesInstanceTagFilters;
    bool m_onPremisesInstanceTagFiltersHasBeenSet;

    Aws::Vector<AutoScalingGroup> m_autoScalingGroups;
    bool m_autoScalingGroupsHasBeenSet;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet;

    RevisionLocation m_targetRevision;
    bool m_targetRevisionHasBeenSet;

    Aws::Vector<TriggerConfig> m_triggerConfigurations;
    bool m_triggerConfigurationsHasBeenSet;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet;

    AutoRollbackConfiguration m_autoRollbackConfiguration;
    bool m_autoRollbackConfigurationHasBeenSet;

    DeploymentStyle m_deploymentStyle;
    bool m_deploymentStyleHasBeenSet;

    BlueGreenDeploymentConfiguration m_blueGreenDeploymentConfiguration;
    bool m_blueGreenDeploymentConfigurationHasBeenSet;

    LoadBalancerInfo m_loadBalancerInfo;
    bool m_loadBalancerInfoHasBeenSet;

    LastDeploymentInfo m_lastSuccessfulDeployment;
    bool m_lastSuccessfulDeploymentHasBeenSet;

    LastDeploymentInfo m_lastAttemptedDeployment;
    bool m_lastAttemptedDeploymentHasBeenSet;

    EC2TagSet m_ec2TagSet;
    bool m_ec2TagSetHasBeenSet;

    OnPremisesTagSet m_onPremisesTagSet;
    bool m_onPremisesTagSetHasBeenSet;

    ComputePlatform m_computePlatform;
    bool m_computePlatformHasBeenSet;

    Aws::Vector<ECSService> m_ecsServices;
    bool m_ecsServicesHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
