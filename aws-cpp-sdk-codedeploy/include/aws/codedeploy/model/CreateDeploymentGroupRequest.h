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
#include <aws/codedeploy/model/DeploymentStyle.h>
#include <aws/codedeploy/model/BlueGreenDeploymentConfiguration.h>
#include <aws/codedeploy/model/LoadBalancerInfo.h>
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
   * <p>Represents the input of a create deployment group operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentGroupInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API CreateDeploymentGroupRequest : public CodeDeployRequest
  {
  public:
    CreateDeploymentGroupRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline CreateDeploymentGroupRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline CreateDeploymentGroupRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline CreateDeploymentGroupRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of a new deployment group for the specified application.</p>
     */
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }

    /**
     * <p>The name of a new deployment group for the specified application.</p>
     */
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /**
     * <p>The name of a new deployment group for the specified application.</p>
     */
    inline void SetDeploymentGroupName(Aws::String&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /**
     * <p>The name of a new deployment group for the specified application.</p>
     */
    inline void SetDeploymentGroupName(const char* value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName.assign(value); }

    /**
     * <p>The name of a new deployment group for the specified application.</p>
     */
    inline CreateDeploymentGroupRequest& WithDeploymentGroupName(const Aws::String& value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p>The name of a new deployment group for the specified application.</p>
     */
    inline CreateDeploymentGroupRequest& WithDeploymentGroupName(Aws::String&& value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p>The name of a new deployment group for the specified application.</p>
     */
    inline CreateDeploymentGroupRequest& WithDeploymentGroupName(const char* value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p>If specified, the deployment configuration name can be either one of the
     * predefined configurations provided with AWS CodeDeploy or a custom deployment
     * configuration that you create by calling the create deployment configuration
     * operation.</p> <p>CodeDeployDefault.OneAtATime is the default deployment
     * configuration. It is used if a configuration isn't specified for the deployment
     * or the deployment group.</p> <p>For more information about the predefined
     * deployment configurations in AWS CodeDeploy, see see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations.html">Working
     * with Deployment Groups in AWS CodeDeploy</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }

    /**
     * <p>If specified, the deployment configuration name can be either one of the
     * predefined configurations provided with AWS CodeDeploy or a custom deployment
     * configuration that you create by calling the create deployment configuration
     * operation.</p> <p>CodeDeployDefault.OneAtATime is the default deployment
     * configuration. It is used if a configuration isn't specified for the deployment
     * or the deployment group.</p> <p>For more information about the predefined
     * deployment configurations in AWS CodeDeploy, see see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations.html">Working
     * with Deployment Groups in AWS CodeDeploy</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>If specified, the deployment configuration name can be either one of the
     * predefined configurations provided with AWS CodeDeploy or a custom deployment
     * configuration that you create by calling the create deployment configuration
     * operation.</p> <p>CodeDeployDefault.OneAtATime is the default deployment
     * configuration. It is used if a configuration isn't specified for the deployment
     * or the deployment group.</p> <p>For more information about the predefined
     * deployment configurations in AWS CodeDeploy, see see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations.html">Working
     * with Deployment Groups in AWS CodeDeploy</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>If specified, the deployment configuration name can be either one of the
     * predefined configurations provided with AWS CodeDeploy or a custom deployment
     * configuration that you create by calling the create deployment configuration
     * operation.</p> <p>CodeDeployDefault.OneAtATime is the default deployment
     * configuration. It is used if a configuration isn't specified for the deployment
     * or the deployment group.</p> <p>For more information about the predefined
     * deployment configurations in AWS CodeDeploy, see see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations.html">Working
     * with Deployment Groups in AWS CodeDeploy</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    /**
     * <p>If specified, the deployment configuration name can be either one of the
     * predefined configurations provided with AWS CodeDeploy or a custom deployment
     * configuration that you create by calling the create deployment configuration
     * operation.</p> <p>CodeDeployDefault.OneAtATime is the default deployment
     * configuration. It is used if a configuration isn't specified for the deployment
     * or the deployment group.</p> <p>For more information about the predefined
     * deployment configurations in AWS CodeDeploy, see see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations.html">Working
     * with Deployment Groups in AWS CodeDeploy</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline CreateDeploymentGroupRequest& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>If specified, the deployment configuration name can be either one of the
     * predefined configurations provided with AWS CodeDeploy or a custom deployment
     * configuration that you create by calling the create deployment configuration
     * operation.</p> <p>CodeDeployDefault.OneAtATime is the default deployment
     * configuration. It is used if a configuration isn't specified for the deployment
     * or the deployment group.</p> <p>For more information about the predefined
     * deployment configurations in AWS CodeDeploy, see see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations.html">Working
     * with Deployment Groups in AWS CodeDeploy</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline CreateDeploymentGroupRequest& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>If specified, the deployment configuration name can be either one of the
     * predefined configurations provided with AWS CodeDeploy or a custom deployment
     * configuration that you create by calling the create deployment configuration
     * operation.</p> <p>CodeDeployDefault.OneAtATime is the default deployment
     * configuration. It is used if a configuration isn't specified for the deployment
     * or the deployment group.</p> <p>For more information about the predefined
     * deployment configurations in AWS CodeDeploy, see see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations.html">Working
     * with Deployment Groups in AWS CodeDeploy</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline CreateDeploymentGroupRequest& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}

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
    inline CreateDeploymentGroupRequest& WithEc2TagFilters(const Aws::Vector<EC2TagFilter>& value) { SetEc2TagFilters(value); return *this;}

    /**
     * <p>The Amazon EC2 tags on which to filter.</p>
     */
    inline CreateDeploymentGroupRequest& WithEc2TagFilters(Aws::Vector<EC2TagFilter>&& value) { SetEc2TagFilters(value); return *this;}

    /**
     * <p>The Amazon EC2 tags on which to filter.</p>
     */
    inline CreateDeploymentGroupRequest& AddEc2TagFilters(const EC2TagFilter& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 tags on which to filter.</p>
     */
    inline CreateDeploymentGroupRequest& AddEc2TagFilters(EC2TagFilter&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.push_back(value); return *this; }

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
    inline CreateDeploymentGroupRequest& WithOnPremisesInstanceTagFilters(const Aws::Vector<TagFilter>& value) { SetOnPremisesInstanceTagFilters(value); return *this;}

    /**
     * <p>The on-premises instance tags on which to filter.</p>
     */
    inline CreateDeploymentGroupRequest& WithOnPremisesInstanceTagFilters(Aws::Vector<TagFilter>&& value) { SetOnPremisesInstanceTagFilters(value); return *this;}

    /**
     * <p>The on-premises instance tags on which to filter.</p>
     */
    inline CreateDeploymentGroupRequest& AddOnPremisesInstanceTagFilters(const TagFilter& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.push_back(value); return *this; }

    /**
     * <p>The on-premises instance tags on which to filter.</p>
     */
    inline CreateDeploymentGroupRequest& AddOnPremisesInstanceTagFilters(TagFilter&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.push_back(value); return *this; }

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingGroups() const{ return m_autoScalingGroups; }

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline void SetAutoScalingGroups(const Aws::Vector<Aws::String>& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline void SetAutoScalingGroups(Aws::Vector<Aws::String>&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline CreateDeploymentGroupRequest& WithAutoScalingGroups(const Aws::Vector<Aws::String>& value) { SetAutoScalingGroups(value); return *this;}

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline CreateDeploymentGroupRequest& WithAutoScalingGroups(Aws::Vector<Aws::String>&& value) { SetAutoScalingGroups(value); return *this;}

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline CreateDeploymentGroupRequest& AddAutoScalingGroups(const Aws::String& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline CreateDeploymentGroupRequest& AddAutoScalingGroups(Aws::String&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    /**
     * <p>A list of associated Auto Scaling groups.</p>
     */
    inline CreateDeploymentGroupRequest& AddAutoScalingGroups(const char* value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    /**
     * <p>A service role ARN that allows AWS CodeDeploy to act on the user's behalf
     * when interacting with AWS services.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>A service role ARN that allows AWS CodeDeploy to act on the user's behalf
     * when interacting with AWS services.</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>A service role ARN that allows AWS CodeDeploy to act on the user's behalf
     * when interacting with AWS services.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>A service role ARN that allows AWS CodeDeploy to act on the user's behalf
     * when interacting with AWS services.</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>A service role ARN that allows AWS CodeDeploy to act on the user's behalf
     * when interacting with AWS services.</p>
     */
    inline CreateDeploymentGroupRequest& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>A service role ARN that allows AWS CodeDeploy to act on the user's behalf
     * when interacting with AWS services.</p>
     */
    inline CreateDeploymentGroupRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>A service role ARN that allows AWS CodeDeploy to act on the user's behalf
     * when interacting with AWS services.</p>
     */
    inline CreateDeploymentGroupRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>Information about triggers to create when the deployment group is created.
     * For examples, see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-sns.html">Create
     * a Trigger for an AWS CodeDeploy Event</a> in the AWS CodeDeploy User Guide.</p>
     */
    inline const Aws::Vector<TriggerConfig>& GetTriggerConfigurations() const{ return m_triggerConfigurations; }

    /**
     * <p>Information about triggers to create when the deployment group is created.
     * For examples, see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-sns.html">Create
     * a Trigger for an AWS CodeDeploy Event</a> in the AWS CodeDeploy User Guide.</p>
     */
    inline void SetTriggerConfigurations(const Aws::Vector<TriggerConfig>& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations = value; }

    /**
     * <p>Information about triggers to create when the deployment group is created.
     * For examples, see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-sns.html">Create
     * a Trigger for an AWS CodeDeploy Event</a> in the AWS CodeDeploy User Guide.</p>
     */
    inline void SetTriggerConfigurations(Aws::Vector<TriggerConfig>&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations = value; }

    /**
     * <p>Information about triggers to create when the deployment group is created.
     * For examples, see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-sns.html">Create
     * a Trigger for an AWS CodeDeploy Event</a> in the AWS CodeDeploy User Guide.</p>
     */
    inline CreateDeploymentGroupRequest& WithTriggerConfigurations(const Aws::Vector<TriggerConfig>& value) { SetTriggerConfigurations(value); return *this;}

    /**
     * <p>Information about triggers to create when the deployment group is created.
     * For examples, see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-sns.html">Create
     * a Trigger for an AWS CodeDeploy Event</a> in the AWS CodeDeploy User Guide.</p>
     */
    inline CreateDeploymentGroupRequest& WithTriggerConfigurations(Aws::Vector<TriggerConfig>&& value) { SetTriggerConfigurations(value); return *this;}

    /**
     * <p>Information about triggers to create when the deployment group is created.
     * For examples, see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-sns.html">Create
     * a Trigger for an AWS CodeDeploy Event</a> in the AWS CodeDeploy User Guide.</p>
     */
    inline CreateDeploymentGroupRequest& AddTriggerConfigurations(const TriggerConfig& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations.push_back(value); return *this; }

    /**
     * <p>Information about triggers to create when the deployment group is created.
     * For examples, see <a
     * href="http://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-sns.html">Create
     * a Trigger for an AWS CodeDeploy Event</a> in the AWS CodeDeploy User Guide.</p>
     */
    inline CreateDeploymentGroupRequest& AddTriggerConfigurations(TriggerConfig&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations.push_back(value); return *this; }

    /**
     * <p>Information to add about Amazon CloudWatch alarms when the deployment group
     * is created. </p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }

    /**
     * <p>Information to add about Amazon CloudWatch alarms when the deployment group
     * is created. </p>
     */
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }

    /**
     * <p>Information to add about Amazon CloudWatch alarms when the deployment group
     * is created. </p>
     */
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }

    /**
     * <p>Information to add about Amazon CloudWatch alarms when the deployment group
     * is created. </p>
     */
    inline CreateDeploymentGroupRequest& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}

    /**
     * <p>Information to add about Amazon CloudWatch alarms when the deployment group
     * is created. </p>
     */
    inline CreateDeploymentGroupRequest& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(value); return *this;}

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment group is created.</p>
     */
    inline const AutoRollbackConfiguration& GetAutoRollbackConfiguration() const{ return m_autoRollbackConfiguration; }

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment group is created.</p>
     */
    inline void SetAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = value; }

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment group is created.</p>
     */
    inline void SetAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = value; }

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment group is created.</p>
     */
    inline CreateDeploymentGroupRequest& WithAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { SetAutoRollbackConfiguration(value); return *this;}

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment group is created.</p>
     */
    inline CreateDeploymentGroupRequest& WithAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { SetAutoRollbackConfiguration(value); return *this;}

    /**
     * <p>Information about the type of deployment, standard or blue/green, that you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline const DeploymentStyle& GetDeploymentStyle() const{ return m_deploymentStyle; }

    /**
     * <p>Information about the type of deployment, standard or blue/green, that you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline void SetDeploymentStyle(const DeploymentStyle& value) { m_deploymentStyleHasBeenSet = true; m_deploymentStyle = value; }

    /**
     * <p>Information about the type of deployment, standard or blue/green, that you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline void SetDeploymentStyle(DeploymentStyle&& value) { m_deploymentStyleHasBeenSet = true; m_deploymentStyle = value; }

    /**
     * <p>Information about the type of deployment, standard or blue/green, that you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline CreateDeploymentGroupRequest& WithDeploymentStyle(const DeploymentStyle& value) { SetDeploymentStyle(value); return *this;}

    /**
     * <p>Information about the type of deployment, standard or blue/green, that you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline CreateDeploymentGroupRequest& WithDeploymentStyle(DeploymentStyle&& value) { SetDeploymentStyle(value); return *this;}

    /**
     * <p>Information about blue/green deployment options for a deployment group.</p>
     */
    inline const BlueGreenDeploymentConfiguration& GetBlueGreenDeploymentConfiguration() const{ return m_blueGreenDeploymentConfiguration; }

    /**
     * <p>Information about blue/green deployment options for a deployment group.</p>
     */
    inline void SetBlueGreenDeploymentConfiguration(const BlueGreenDeploymentConfiguration& value) { m_blueGreenDeploymentConfigurationHasBeenSet = true; m_blueGreenDeploymentConfiguration = value; }

    /**
     * <p>Information about blue/green deployment options for a deployment group.</p>
     */
    inline void SetBlueGreenDeploymentConfiguration(BlueGreenDeploymentConfiguration&& value) { m_blueGreenDeploymentConfigurationHasBeenSet = true; m_blueGreenDeploymentConfiguration = value; }

    /**
     * <p>Information about blue/green deployment options for a deployment group.</p>
     */
    inline CreateDeploymentGroupRequest& WithBlueGreenDeploymentConfiguration(const BlueGreenDeploymentConfiguration& value) { SetBlueGreenDeploymentConfiguration(value); return *this;}

    /**
     * <p>Information about blue/green deployment options for a deployment group.</p>
     */
    inline CreateDeploymentGroupRequest& WithBlueGreenDeploymentConfiguration(BlueGreenDeploymentConfiguration&& value) { SetBlueGreenDeploymentConfiguration(value); return *this;}

    /**
     * <p>Information about the load balancer used in a blue/green deployment.</p>
     */
    inline const LoadBalancerInfo& GetLoadBalancerInfo() const{ return m_loadBalancerInfo; }

    /**
     * <p>Information about the load balancer used in a blue/green deployment.</p>
     */
    inline void SetLoadBalancerInfo(const LoadBalancerInfo& value) { m_loadBalancerInfoHasBeenSet = true; m_loadBalancerInfo = value; }

    /**
     * <p>Information about the load balancer used in a blue/green deployment.</p>
     */
    inline void SetLoadBalancerInfo(LoadBalancerInfo&& value) { m_loadBalancerInfoHasBeenSet = true; m_loadBalancerInfo = value; }

    /**
     * <p>Information about the load balancer used in a blue/green deployment.</p>
     */
    inline CreateDeploymentGroupRequest& WithLoadBalancerInfo(const LoadBalancerInfo& value) { SetLoadBalancerInfo(value); return *this;}

    /**
     * <p>Information about the load balancer used in a blue/green deployment.</p>
     */
    inline CreateDeploymentGroupRequest& WithLoadBalancerInfo(LoadBalancerInfo&& value) { SetLoadBalancerInfo(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_deploymentGroupName;
    bool m_deploymentGroupNameHasBeenSet;
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
    DeploymentStyle m_deploymentStyle;
    bool m_deploymentStyleHasBeenSet;
    BlueGreenDeploymentConfiguration m_blueGreenDeploymentConfiguration;
    bool m_blueGreenDeploymentConfigurationHasBeenSet;
    LoadBalancerInfo m_loadBalancerInfo;
    bool m_loadBalancerInfoHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
