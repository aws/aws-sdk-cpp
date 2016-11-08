/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/model/EC2TagFilter.h>
#include <aws/codedeploy/model/TagFilter.h>
#include <aws/codedeploy/model/AutoScalingGroup.h>
#include <aws/codedeploy/model/TriggerConfig.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about a deployment group.</p>
   */
  class AWS_CODEDEPLOY_API DeploymentGroupInfo
  {
  public:
    DeploymentGroupInfo();
    DeploymentGroupInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    DeploymentGroupInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The application name.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

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
    inline DeploymentGroupInfo& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

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
    inline void SetDeploymentGroupId(const Aws::String& value) { m_deploymentGroupIdHasBeenSet = true; m_deploymentGroupId = value; }

    /**
     * <p>The deployment group ID.</p>
     */
    inline void SetDeploymentGroupId(Aws::String&& value) { m_deploymentGroupIdHasBeenSet = true; m_deploymentGroupId = value; }

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
    inline DeploymentGroupInfo& WithDeploymentGroupId(Aws::String&& value) { SetDeploymentGroupId(value); return *this;}

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
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /**
     * <p>The deployment group name.</p>
     */
    inline void SetDeploymentGroupName(Aws::String&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

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
    inline DeploymentGroupInfo& WithDeploymentGroupName(Aws::String&& value) { SetDeploymentGroupName(value); return *this;}

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
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

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
    inline DeploymentGroupInfo& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The deployment configuration name.</p>
     */
    inline DeploymentGroupInfo& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The Amazon EC2 tags on which to filter.</p>
     */
    inline const Aws::Vector<EC2TagFilter>& GetEc2TagFilters() const{ return m_ec2TagFilters; }

    /**
     * <p>The Amazon EC2 tags on which to filter.</p>
     */
    inline void SetEc2TagFilters(const Aws::Vector<EC2TagFilter>& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters = value; }

    /**
     * <p>The Amazon EC2 tags on which to filter.</p>
     */
    inline void SetEc2TagFilters(Aws::Vector<EC2TagFilter>&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters = value; }

    /**
     * <p>The Amazon EC2 tags on which to filter.</p>
     */
    inline DeploymentGroupInfo& WithEc2TagFilters(const Aws::Vector<EC2TagFilter>& value) { SetEc2TagFilters(value); return *this;}

    /**
     * <p>The Amazon EC2 tags on which to filter.</p>
     */
    inline DeploymentGroupInfo& WithEc2TagFilters(Aws::Vector<EC2TagFilter>&& value) { SetEc2TagFilters(value); return *this;}

    /**
     * <p>The Amazon EC2 tags on which to filter.</p>
     */
    inline DeploymentGroupInfo& AddEc2TagFilters(const EC2TagFilter& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 tags on which to filter.</p>
     */
    inline DeploymentGroupInfo& AddEc2TagFilters(EC2TagFilter&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.push_back(value); return *this; }

    /**
     * <p>The on-premises instance tags on which to filter.</p>
     */
    inline const Aws::Vector<TagFilter>& GetOnPremisesInstanceTagFilters() const{ return m_onPremisesInstanceTagFilters; }

    /**
     * <p>The on-premises instance tags on which to filter.</p>
     */
    inline void SetOnPremisesInstanceTagFilters(const Aws::Vector<TagFilter>& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters = value; }

    /**
     * <p>The on-premises instance tags on which to filter.</p>
     */
    inline void SetOnPremisesInstanceTagFilters(Aws::Vector<TagFilter>&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters = value; }

    /**
     * <p>The on-premises instance tags on which to filter.</p>
     */
    inline DeploymentGroupInfo& WithOnPremisesInstanceTagFilters(const Aws::Vector<TagFilter>& value) { SetOnPremisesInstanceTagFilters(value); return *this;}

    /**
     * <p>The on-premises instance tags on which to filter.</p>
     */
    inline DeploymentGroupInfo& WithOnPremisesInstanceTagFilters(Aws::Vector<TagFilter>&& value) { SetOnPremisesInstanceTagFilters(value); return *this;}

    /**
     * <p>The on-premises instance tags on which to filter.</p>
     */
    inline DeploymentGroupInfo& AddOnPremisesInstanceTagFilters(const TagFilter& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.push_back(value); return *this; }

    /**
     * <p>The on-premises instance tags on which to filter.</p>
     */
    inline DeploymentGroupInfo& AddOnPremisesInstanceTagFilters(TagFilter&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.push_back(value); return *this; }

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline const Aws::Vector<AutoScalingGroup>& GetAutoScalingGroups() const{ return m_autoScalingGroups; }

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline void SetAutoScalingGroups(const Aws::Vector<AutoScalingGroup>& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline void SetAutoScalingGroups(Aws::Vector<AutoScalingGroup>&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline DeploymentGroupInfo& WithAutoScalingGroups(const Aws::Vector<AutoScalingGroup>& value) { SetAutoScalingGroups(value); return *this;}

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline DeploymentGroupInfo& WithAutoScalingGroups(Aws::Vector<AutoScalingGroup>&& value) { SetAutoScalingGroups(value); return *this;}

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline DeploymentGroupInfo& AddAutoScalingGroups(const AutoScalingGroup& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline DeploymentGroupInfo& AddAutoScalingGroups(AutoScalingGroup&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    /**
     * <p>A service role ARN.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>A service role ARN.</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>A service role ARN.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>A service role ARN.</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>A service role ARN.</p>
     */
    inline DeploymentGroupInfo& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>A service role ARN.</p>
     */
    inline DeploymentGroupInfo& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>A service role ARN.</p>
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
    inline void SetTargetRevision(const RevisionLocation& value) { m_targetRevisionHasBeenSet = true; m_targetRevision = value; }

    /**
     * <p>Information about the deployment group's target revision, including type and
     * location.</p>
     */
    inline void SetTargetRevision(RevisionLocation&& value) { m_targetRevisionHasBeenSet = true; m_targetRevision = value; }

    /**
     * <p>Information about the deployment group's target revision, including type and
     * location.</p>
     */
    inline DeploymentGroupInfo& WithTargetRevision(const RevisionLocation& value) { SetTargetRevision(value); return *this;}

    /**
     * <p>Information about the deployment group's target revision, including type and
     * location.</p>
     */
    inline DeploymentGroupInfo& WithTargetRevision(RevisionLocation&& value) { SetTargetRevision(value); return *this;}

    /**
     * <p>Information about triggers associated with the deployment group.</p>
     */
    inline const Aws::Vector<TriggerConfig>& GetTriggerConfigurations() const{ return m_triggerConfigurations; }

    /**
     * <p>Information about triggers associated with the deployment group.</p>
     */
    inline void SetTriggerConfigurations(const Aws::Vector<TriggerConfig>& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations = value; }

    /**
     * <p>Information about triggers associated with the deployment group.</p>
     */
    inline void SetTriggerConfigurations(Aws::Vector<TriggerConfig>&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations = value; }

    /**
     * <p>Information about triggers associated with the deployment group.</p>
     */
    inline DeploymentGroupInfo& WithTriggerConfigurations(const Aws::Vector<TriggerConfig>& value) { SetTriggerConfigurations(value); return *this;}

    /**
     * <p>Information about triggers associated with the deployment group.</p>
     */
    inline DeploymentGroupInfo& WithTriggerConfigurations(Aws::Vector<TriggerConfig>&& value) { SetTriggerConfigurations(value); return *this;}

    /**
     * <p>Information about triggers associated with the deployment group.</p>
     */
    inline DeploymentGroupInfo& AddTriggerConfigurations(const TriggerConfig& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations.push_back(value); return *this; }

    /**
     * <p>Information about triggers associated with the deployment group.</p>
     */
    inline DeploymentGroupInfo& AddTriggerConfigurations(TriggerConfig&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations.push_back(value); return *this; }

    /**
     * <p>A list of alarms associated with the deployment group.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }

    /**
     * <p>A list of alarms associated with the deployment group.</p>
     */
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }

    /**
     * <p>A list of alarms associated with the deployment group.</p>
     */
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }

    /**
     * <p>A list of alarms associated with the deployment group.</p>
     */
    inline DeploymentGroupInfo& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}

    /**
     * <p>A list of alarms associated with the deployment group.</p>
     */
    inline DeploymentGroupInfo& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(value); return *this;}

    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment group.</p>
     */
    inline const AutoRollbackConfiguration& GetAutoRollbackConfiguration() const{ return m_autoRollbackConfiguration; }

    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment group.</p>
     */
    inline void SetAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = value; }

    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment group.</p>
     */
    inline void SetAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = value; }

    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment group.</p>
     */
    inline DeploymentGroupInfo& WithAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { SetAutoRollbackConfiguration(value); return *this;}

    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment group.</p>
     */
    inline DeploymentGroupInfo& WithAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { SetAutoRollbackConfiguration(value); return *this;}

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
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
