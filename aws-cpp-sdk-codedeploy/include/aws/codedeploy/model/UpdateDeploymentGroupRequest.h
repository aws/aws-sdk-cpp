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
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/AlarmConfiguration.h>
#include <aws/codedeploy/model/AutoRollbackConfiguration.h>
#include <aws/codedeploy/model/EC2TagFilter.h>
#include <aws/codedeploy/model/TagFilter.h>
#include <aws/codedeploy/model/TriggerConfig.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of an update deployment group operation.</p>
   */
  class AWS_CODEDEPLOY_API UpdateDeploymentGroupRequest : public CodeDeployRequest
  {
  public:
    UpdateDeploymentGroupRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The application name corresponding to the deployment group to update.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The application name corresponding to the deployment group to update.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The application name corresponding to the deployment group to update.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The application name corresponding to the deployment group to update.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The application name corresponding to the deployment group to update.</p>
     */
    inline UpdateDeploymentGroupRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The application name corresponding to the deployment group to update.</p>
     */
    inline UpdateDeploymentGroupRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The application name corresponding to the deployment group to update.</p>
     */
    inline UpdateDeploymentGroupRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The current name of the deployment group.</p>
     */
    inline const Aws::String& GetCurrentDeploymentGroupName() const{ return m_currentDeploymentGroupName; }

    /**
     * <p>The current name of the deployment group.</p>
     */
    inline void SetCurrentDeploymentGroupName(const Aws::String& value) { m_currentDeploymentGroupNameHasBeenSet = true; m_currentDeploymentGroupName = value; }

    /**
     * <p>The current name of the deployment group.</p>
     */
    inline void SetCurrentDeploymentGroupName(Aws::String&& value) { m_currentDeploymentGroupNameHasBeenSet = true; m_currentDeploymentGroupName = value; }

    /**
     * <p>The current name of the deployment group.</p>
     */
    inline void SetCurrentDeploymentGroupName(const char* value) { m_currentDeploymentGroupNameHasBeenSet = true; m_currentDeploymentGroupName.assign(value); }

    /**
     * <p>The current name of the deployment group.</p>
     */
    inline UpdateDeploymentGroupRequest& WithCurrentDeploymentGroupName(const Aws::String& value) { SetCurrentDeploymentGroupName(value); return *this;}

    /**
     * <p>The current name of the deployment group.</p>
     */
    inline UpdateDeploymentGroupRequest& WithCurrentDeploymentGroupName(Aws::String&& value) { SetCurrentDeploymentGroupName(value); return *this;}

    /**
     * <p>The current name of the deployment group.</p>
     */
    inline UpdateDeploymentGroupRequest& WithCurrentDeploymentGroupName(const char* value) { SetCurrentDeploymentGroupName(value); return *this;}

    /**
     * <p>The new name of the deployment group, if you want to change it.</p>
     */
    inline const Aws::String& GetNewDeploymentGroupName() const{ return m_newDeploymentGroupName; }

    /**
     * <p>The new name of the deployment group, if you want to change it.</p>
     */
    inline void SetNewDeploymentGroupName(const Aws::String& value) { m_newDeploymentGroupNameHasBeenSet = true; m_newDeploymentGroupName = value; }

    /**
     * <p>The new name of the deployment group, if you want to change it.</p>
     */
    inline void SetNewDeploymentGroupName(Aws::String&& value) { m_newDeploymentGroupNameHasBeenSet = true; m_newDeploymentGroupName = value; }

    /**
     * <p>The new name of the deployment group, if you want to change it.</p>
     */
    inline void SetNewDeploymentGroupName(const char* value) { m_newDeploymentGroupNameHasBeenSet = true; m_newDeploymentGroupName.assign(value); }

    /**
     * <p>The new name of the deployment group, if you want to change it.</p>
     */
    inline UpdateDeploymentGroupRequest& WithNewDeploymentGroupName(const Aws::String& value) { SetNewDeploymentGroupName(value); return *this;}

    /**
     * <p>The new name of the deployment group, if you want to change it.</p>
     */
    inline UpdateDeploymentGroupRequest& WithNewDeploymentGroupName(Aws::String&& value) { SetNewDeploymentGroupName(value); return *this;}

    /**
     * <p>The new name of the deployment group, if you want to change it.</p>
     */
    inline UpdateDeploymentGroupRequest& WithNewDeploymentGroupName(const char* value) { SetNewDeploymentGroupName(value); return *this;}

    /**
     * <p>The replacement deployment configuration name to use, if you want to change
     * it.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }

    /**
     * <p>The replacement deployment configuration name to use, if you want to change
     * it.</p>
     */
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>The replacement deployment configuration name to use, if you want to change
     * it.</p>
     */
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>The replacement deployment configuration name to use, if you want to change
     * it.</p>
     */
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    /**
     * <p>The replacement deployment configuration name to use, if you want to change
     * it.</p>
     */
    inline UpdateDeploymentGroupRequest& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The replacement deployment configuration name to use, if you want to change
     * it.</p>
     */
    inline UpdateDeploymentGroupRequest& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The replacement deployment configuration name to use, if you want to change
     * it.</p>
     */
    inline UpdateDeploymentGroupRequest& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The replacement set of Amazon EC2 tags on which to filter, if you want to
     * change them. To keep the existing tags, enter their names. To remove tags, do
     * not enter any tag names.</p>
     */
    inline const Aws::Vector<EC2TagFilter>& GetEc2TagFilters() const{ return m_ec2TagFilters; }

    /**
     * <p>The replacement set of Amazon EC2 tags on which to filter, if you want to
     * change them. To keep the existing tags, enter their names. To remove tags, do
     * not enter any tag names.</p>
     */
    inline void SetEc2TagFilters(const Aws::Vector<EC2TagFilter>& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters = value; }

    /**
     * <p>The replacement set of Amazon EC2 tags on which to filter, if you want to
     * change them. To keep the existing tags, enter their names. To remove tags, do
     * not enter any tag names.</p>
     */
    inline void SetEc2TagFilters(Aws::Vector<EC2TagFilter>&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters = value; }

    /**
     * <p>The replacement set of Amazon EC2 tags on which to filter, if you want to
     * change them. To keep the existing tags, enter their names. To remove tags, do
     * not enter any tag names.</p>
     */
    inline UpdateDeploymentGroupRequest& WithEc2TagFilters(const Aws::Vector<EC2TagFilter>& value) { SetEc2TagFilters(value); return *this;}

    /**
     * <p>The replacement set of Amazon EC2 tags on which to filter, if you want to
     * change them. To keep the existing tags, enter their names. To remove tags, do
     * not enter any tag names.</p>
     */
    inline UpdateDeploymentGroupRequest& WithEc2TagFilters(Aws::Vector<EC2TagFilter>&& value) { SetEc2TagFilters(value); return *this;}

    /**
     * <p>The replacement set of Amazon EC2 tags on which to filter, if you want to
     * change them. To keep the existing tags, enter their names. To remove tags, do
     * not enter any tag names.</p>
     */
    inline UpdateDeploymentGroupRequest& AddEc2TagFilters(const EC2TagFilter& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.push_back(value); return *this; }

    /**
     * <p>The replacement set of Amazon EC2 tags on which to filter, if you want to
     * change them. To keep the existing tags, enter their names. To remove tags, do
     * not enter any tag names.</p>
     */
    inline UpdateDeploymentGroupRequest& AddEc2TagFilters(EC2TagFilter&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.push_back(value); return *this; }

    /**
     * <p>The replacement set of on-premises instance tags on which to filter, if you
     * want to change them. To keep the existing tags, enter their names. To remove
     * tags, do not enter any tag names.</p>
     */
    inline const Aws::Vector<TagFilter>& GetOnPremisesInstanceTagFilters() const{ return m_onPremisesInstanceTagFilters; }

    /**
     * <p>The replacement set of on-premises instance tags on which to filter, if you
     * want to change them. To keep the existing tags, enter their names. To remove
     * tags, do not enter any tag names.</p>
     */
    inline void SetOnPremisesInstanceTagFilters(const Aws::Vector<TagFilter>& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters = value; }

    /**
     * <p>The replacement set of on-premises instance tags on which to filter, if you
     * want to change them. To keep the existing tags, enter their names. To remove
     * tags, do not enter any tag names.</p>
     */
    inline void SetOnPremisesInstanceTagFilters(Aws::Vector<TagFilter>&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters = value; }

    /**
     * <p>The replacement set of on-premises instance tags on which to filter, if you
     * want to change them. To keep the existing tags, enter their names. To remove
     * tags, do not enter any tag names.</p>
     */
    inline UpdateDeploymentGroupRequest& WithOnPremisesInstanceTagFilters(const Aws::Vector<TagFilter>& value) { SetOnPremisesInstanceTagFilters(value); return *this;}

    /**
     * <p>The replacement set of on-premises instance tags on which to filter, if you
     * want to change them. To keep the existing tags, enter their names. To remove
     * tags, do not enter any tag names.</p>
     */
    inline UpdateDeploymentGroupRequest& WithOnPremisesInstanceTagFilters(Aws::Vector<TagFilter>&& value) { SetOnPremisesInstanceTagFilters(value); return *this;}

    /**
     * <p>The replacement set of on-premises instance tags on which to filter, if you
     * want to change them. To keep the existing tags, enter their names. To remove
     * tags, do not enter any tag names.</p>
     */
    inline UpdateDeploymentGroupRequest& AddOnPremisesInstanceTagFilters(const TagFilter& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.push_back(value); return *this; }

    /**
     * <p>The replacement set of on-premises instance tags on which to filter, if you
     * want to change them. To keep the existing tags, enter their names. To remove
     * tags, do not enter any tag names.</p>
     */
    inline UpdateDeploymentGroupRequest& AddOnPremisesInstanceTagFilters(TagFilter&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.push_back(value); return *this; }

    /**
     * <p>The replacement list of Auto Scaling groups to be included in the deployment
     * group, if you want to change them. To keep the Auto Scaling groups, enter their
     * names. To remove Auto Scaling groups, do not enter any Auto Scaling group
     * names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingGroups() const{ return m_autoScalingGroups; }

    /**
     * <p>The replacement list of Auto Scaling groups to be included in the deployment
     * group, if you want to change them. To keep the Auto Scaling groups, enter their
     * names. To remove Auto Scaling groups, do not enter any Auto Scaling group
     * names.</p>
     */
    inline void SetAutoScalingGroups(const Aws::Vector<Aws::String>& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }

    /**
     * <p>The replacement list of Auto Scaling groups to be included in the deployment
     * group, if you want to change them. To keep the Auto Scaling groups, enter their
     * names. To remove Auto Scaling groups, do not enter any Auto Scaling group
     * names.</p>
     */
    inline void SetAutoScalingGroups(Aws::Vector<Aws::String>&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }

    /**
     * <p>The replacement list of Auto Scaling groups to be included in the deployment
     * group, if you want to change them. To keep the Auto Scaling groups, enter their
     * names. To remove Auto Scaling groups, do not enter any Auto Scaling group
     * names.</p>
     */
    inline UpdateDeploymentGroupRequest& WithAutoScalingGroups(const Aws::Vector<Aws::String>& value) { SetAutoScalingGroups(value); return *this;}

    /**
     * <p>The replacement list of Auto Scaling groups to be included in the deployment
     * group, if you want to change them. To keep the Auto Scaling groups, enter their
     * names. To remove Auto Scaling groups, do not enter any Auto Scaling group
     * names.</p>
     */
    inline UpdateDeploymentGroupRequest& WithAutoScalingGroups(Aws::Vector<Aws::String>&& value) { SetAutoScalingGroups(value); return *this;}

    /**
     * <p>The replacement list of Auto Scaling groups to be included in the deployment
     * group, if you want to change them. To keep the Auto Scaling groups, enter their
     * names. To remove Auto Scaling groups, do not enter any Auto Scaling group
     * names.</p>
     */
    inline UpdateDeploymentGroupRequest& AddAutoScalingGroups(const Aws::String& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    /**
     * <p>The replacement list of Auto Scaling groups to be included in the deployment
     * group, if you want to change them. To keep the Auto Scaling groups, enter their
     * names. To remove Auto Scaling groups, do not enter any Auto Scaling group
     * names.</p>
     */
    inline UpdateDeploymentGroupRequest& AddAutoScalingGroups(Aws::String&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    /**
     * <p>The replacement list of Auto Scaling groups to be included in the deployment
     * group, if you want to change them. To keep the Auto Scaling groups, enter their
     * names. To remove Auto Scaling groups, do not enter any Auto Scaling group
     * names.</p>
     */
    inline UpdateDeploymentGroupRequest& AddAutoScalingGroups(const char* value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    /**
     * <p>A replacement ARN for the service role, if you want to change it.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>A replacement ARN for the service role, if you want to change it.</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>A replacement ARN for the service role, if you want to change it.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>A replacement ARN for the service role, if you want to change it.</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>A replacement ARN for the service role, if you want to change it.</p>
     */
    inline UpdateDeploymentGroupRequest& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>A replacement ARN for the service role, if you want to change it.</p>
     */
    inline UpdateDeploymentGroupRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>A replacement ARN for the service role, if you want to change it.</p>
     */
    inline UpdateDeploymentGroupRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>Information about triggers to change when the deployment group is updated.
     * For examples, see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-edit.html">Modify
     * Triggers in an AWS CodeDeploy Deployment Group</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline const Aws::Vector<TriggerConfig>& GetTriggerConfigurations() const{ return m_triggerConfigurations; }

    /**
     * <p>Information about triggers to change when the deployment group is updated.
     * For examples, see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-edit.html">Modify
     * Triggers in an AWS CodeDeploy Deployment Group</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline void SetTriggerConfigurations(const Aws::Vector<TriggerConfig>& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations = value; }

    /**
     * <p>Information about triggers to change when the deployment group is updated.
     * For examples, see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-edit.html">Modify
     * Triggers in an AWS CodeDeploy Deployment Group</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline void SetTriggerConfigurations(Aws::Vector<TriggerConfig>&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations = value; }

    /**
     * <p>Information about triggers to change when the deployment group is updated.
     * For examples, see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-edit.html">Modify
     * Triggers in an AWS CodeDeploy Deployment Group</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline UpdateDeploymentGroupRequest& WithTriggerConfigurations(const Aws::Vector<TriggerConfig>& value) { SetTriggerConfigurations(value); return *this;}

    /**
     * <p>Information about triggers to change when the deployment group is updated.
     * For examples, see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-edit.html">Modify
     * Triggers in an AWS CodeDeploy Deployment Group</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline UpdateDeploymentGroupRequest& WithTriggerConfigurations(Aws::Vector<TriggerConfig>&& value) { SetTriggerConfigurations(value); return *this;}

    /**
     * <p>Information about triggers to change when the deployment group is updated.
     * For examples, see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-edit.html">Modify
     * Triggers in an AWS CodeDeploy Deployment Group</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline UpdateDeploymentGroupRequest& AddTriggerConfigurations(const TriggerConfig& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations.push_back(value); return *this; }

    /**
     * <p>Information about triggers to change when the deployment group is updated.
     * For examples, see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-edit.html">Modify
     * Triggers in an AWS CodeDeploy Deployment Group</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline UpdateDeploymentGroupRequest& AddTriggerConfigurations(TriggerConfig&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations.push_back(value); return *this; }

    /**
     * <p>Information to add or change about Amazon CloudWatch alarms when the
     * deployment group is updated. </p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }

    /**
     * <p>Information to add or change about Amazon CloudWatch alarms when the
     * deployment group is updated. </p>
     */
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }

    /**
     * <p>Information to add or change about Amazon CloudWatch alarms when the
     * deployment group is updated. </p>
     */
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }

    /**
     * <p>Information to add or change about Amazon CloudWatch alarms when the
     * deployment group is updated. </p>
     */
    inline UpdateDeploymentGroupRequest& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}

    /**
     * <p>Information to add or change about Amazon CloudWatch alarms when the
     * deployment group is updated. </p>
     */
    inline UpdateDeploymentGroupRequest& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(value); return *this;}

    /**
     * <p>Information for an automatic rollback configuration that is added or changed
     * when a deployment group is updated.</p>
     */
    inline const AutoRollbackConfiguration& GetAutoRollbackConfiguration() const{ return m_autoRollbackConfiguration; }

    /**
     * <p>Information for an automatic rollback configuration that is added or changed
     * when a deployment group is updated.</p>
     */
    inline void SetAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = value; }

    /**
     * <p>Information for an automatic rollback configuration that is added or changed
     * when a deployment group is updated.</p>
     */
    inline void SetAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = value; }

    /**
     * <p>Information for an automatic rollback configuration that is added or changed
     * when a deployment group is updated.</p>
     */
    inline UpdateDeploymentGroupRequest& WithAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { SetAutoRollbackConfiguration(value); return *this;}

    /**
     * <p>Information for an automatic rollback configuration that is added or changed
     * when a deployment group is updated.</p>
     */
    inline UpdateDeploymentGroupRequest& WithAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { SetAutoRollbackConfiguration(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_currentDeploymentGroupName;
    bool m_currentDeploymentGroupNameHasBeenSet;
    Aws::String m_newDeploymentGroupName;
    bool m_newDeploymentGroupNameHasBeenSet;
    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet;
    Aws::Vector<EC2TagFilter> m_ec2TagFilters;
    bool m_ec2TagFiltersHasBeenSet;
    Aws::Vector<TagFilter> m_onPremisesInstanceTagFilters;
    bool m_onPremisesInstanceTagFiltersHasBeenSet;
    Aws::Vector<Aws::String> m_autoScalingGroups;
    bool m_autoScalingGroupsHasBeenSet;
    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet;
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
