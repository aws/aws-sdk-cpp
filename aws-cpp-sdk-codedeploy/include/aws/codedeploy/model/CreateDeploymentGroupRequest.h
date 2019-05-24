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
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/AlarmConfiguration.h>
#include <aws/codedeploy/model/AutoRollbackConfiguration.h>
#include <aws/codedeploy/model/DeploymentStyle.h>
#include <aws/codedeploy/model/BlueGreenDeploymentConfiguration.h>
#include <aws/codedeploy/model/LoadBalancerInfo.h>
#include <aws/codedeploy/model/EC2TagSet.h>
#include <aws/codedeploy/model/OnPremisesTagSet.h>
#include <aws/codedeploy/model/EC2TagFilter.h>
#include <aws/codedeploy/model/TagFilter.h>
#include <aws/codedeploy/model/TriggerConfig.h>
#include <aws/codedeploy/model/ECSService.h>
#include <aws/codedeploy/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a CreateDeploymentGroup operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentGroupInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API CreateDeploymentGroupRequest : public CodeDeployRequest
  {
  public:
    CreateDeploymentGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeploymentGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline CreateDeploymentGroupRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline CreateDeploymentGroupRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline CreateDeploymentGroupRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The name of a new deployment group for the specified application.</p>
     */
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }

    /**
     * <p>The name of a new deployment group for the specified application.</p>
     */
    inline bool DeploymentGroupNameHasBeenSet() const { return m_deploymentGroupNameHasBeenSet; }

    /**
     * <p>The name of a new deployment group for the specified application.</p>
     */
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /**
     * <p>The name of a new deployment group for the specified application.</p>
     */
    inline void SetDeploymentGroupName(Aws::String&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = std::move(value); }

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
    inline CreateDeploymentGroupRequest& WithDeploymentGroupName(Aws::String&& value) { SetDeploymentGroupName(std::move(value)); return *this;}

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
     * or deployment group.</p> <p>For more information about the predefined deployment
     * configurations in AWS CodeDeploy, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations.html">Working
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
     * or deployment group.</p> <p>For more information about the predefined deployment
     * configurations in AWS CodeDeploy, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations.html">Working
     * with Deployment Groups in AWS CodeDeploy</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }

    /**
     * <p>If specified, the deployment configuration name can be either one of the
     * predefined configurations provided with AWS CodeDeploy or a custom deployment
     * configuration that you create by calling the create deployment configuration
     * operation.</p> <p>CodeDeployDefault.OneAtATime is the default deployment
     * configuration. It is used if a configuration isn't specified for the deployment
     * or deployment group.</p> <p>For more information about the predefined deployment
     * configurations in AWS CodeDeploy, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations.html">Working
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
     * or deployment group.</p> <p>For more information about the predefined deployment
     * configurations in AWS CodeDeploy, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations.html">Working
     * with Deployment Groups in AWS CodeDeploy</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::move(value); }

    /**
     * <p>If specified, the deployment configuration name can be either one of the
     * predefined configurations provided with AWS CodeDeploy or a custom deployment
     * configuration that you create by calling the create deployment configuration
     * operation.</p> <p>CodeDeployDefault.OneAtATime is the default deployment
     * configuration. It is used if a configuration isn't specified for the deployment
     * or deployment group.</p> <p>For more information about the predefined deployment
     * configurations in AWS CodeDeploy, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations.html">Working
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
     * or deployment group.</p> <p>For more information about the predefined deployment
     * configurations in AWS CodeDeploy, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations.html">Working
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
     * or deployment group.</p> <p>For more information about the predefined deployment
     * configurations in AWS CodeDeploy, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations.html">Working
     * with Deployment Groups in AWS CodeDeploy</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline CreateDeploymentGroupRequest& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(std::move(value)); return *this;}

    /**
     * <p>If specified, the deployment configuration name can be either one of the
     * predefined configurations provided with AWS CodeDeploy or a custom deployment
     * configuration that you create by calling the create deployment configuration
     * operation.</p> <p>CodeDeployDefault.OneAtATime is the default deployment
     * configuration. It is used if a configuration isn't specified for the deployment
     * or deployment group.</p> <p>For more information about the predefined deployment
     * configurations in AWS CodeDeploy, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/deployment-configurations.html">Working
     * with Deployment Groups in AWS CodeDeploy</a> in the AWS CodeDeploy User
     * Guide.</p>
     */
    inline CreateDeploymentGroupRequest& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}


    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags. Cannot be used in the same call as
     * ec2TagSet.</p>
     */
    inline const Aws::Vector<EC2TagFilter>& GetEc2TagFilters() const{ return m_ec2TagFilters; }

    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags. Cannot be used in the same call as
     * ec2TagSet.</p>
     */
    inline bool Ec2TagFiltersHasBeenSet() const { return m_ec2TagFiltersHasBeenSet; }

    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags. Cannot be used in the same call as
     * ec2TagSet.</p>
     */
    inline void SetEc2TagFilters(const Aws::Vector<EC2TagFilter>& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters = value; }

    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags. Cannot be used in the same call as
     * ec2TagSet.</p>
     */
    inline void SetEc2TagFilters(Aws::Vector<EC2TagFilter>&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters = std::move(value); }

    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags. Cannot be used in the same call as
     * ec2TagSet.</p>
     */
    inline CreateDeploymentGroupRequest& WithEc2TagFilters(const Aws::Vector<EC2TagFilter>& value) { SetEc2TagFilters(value); return *this;}

    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags. Cannot be used in the same call as
     * ec2TagSet.</p>
     */
    inline CreateDeploymentGroupRequest& WithEc2TagFilters(Aws::Vector<EC2TagFilter>&& value) { SetEc2TagFilters(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags. Cannot be used in the same call as
     * ec2TagSet.</p>
     */
    inline CreateDeploymentGroupRequest& AddEc2TagFilters(const EC2TagFilter& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 tags on which to filter. The deployment group includes EC2
     * instances with any of the specified tags. Cannot be used in the same call as
     * ec2TagSet.</p>
     */
    inline CreateDeploymentGroupRequest& AddEc2TagFilters(EC2TagFilter&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags. Cannot be used in
     * the same call as OnPremisesTagSet.</p>
     */
    inline const Aws::Vector<TagFilter>& GetOnPremisesInstanceTagFilters() const{ return m_onPremisesInstanceTagFilters; }

    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags. Cannot be used in
     * the same call as OnPremisesTagSet.</p>
     */
    inline bool OnPremisesInstanceTagFiltersHasBeenSet() const { return m_onPremisesInstanceTagFiltersHasBeenSet; }

    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags. Cannot be used in
     * the same call as OnPremisesTagSet.</p>
     */
    inline void SetOnPremisesInstanceTagFilters(const Aws::Vector<TagFilter>& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters = value; }

    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags. Cannot be used in
     * the same call as OnPremisesTagSet.</p>
     */
    inline void SetOnPremisesInstanceTagFilters(Aws::Vector<TagFilter>&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters = std::move(value); }

    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags. Cannot be used in
     * the same call as OnPremisesTagSet.</p>
     */
    inline CreateDeploymentGroupRequest& WithOnPremisesInstanceTagFilters(const Aws::Vector<TagFilter>& value) { SetOnPremisesInstanceTagFilters(value); return *this;}

    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags. Cannot be used in
     * the same call as OnPremisesTagSet.</p>
     */
    inline CreateDeploymentGroupRequest& WithOnPremisesInstanceTagFilters(Aws::Vector<TagFilter>&& value) { SetOnPremisesInstanceTagFilters(std::move(value)); return *this;}

    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags. Cannot be used in
     * the same call as OnPremisesTagSet.</p>
     */
    inline CreateDeploymentGroupRequest& AddOnPremisesInstanceTagFilters(const TagFilter& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.push_back(value); return *this; }

    /**
     * <p>The on-premises instance tags on which to filter. The deployment group
     * includes on-premises instances with any of the specified tags. Cannot be used in
     * the same call as OnPremisesTagSet.</p>
     */
    inline CreateDeploymentGroupRequest& AddOnPremisesInstanceTagFilters(TagFilter&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of associated Amazon EC2 Auto Scaling groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingGroups() const{ return m_autoScalingGroups; }

    /**
     * <p>A list of associated Amazon EC2 Auto Scaling groups.</p>
     */
    inline bool AutoScalingGroupsHasBeenSet() const { return m_autoScalingGroupsHasBeenSet; }

    /**
     * <p>A list of associated Amazon EC2 Auto Scaling groups.</p>
     */
    inline void SetAutoScalingGroups(const Aws::Vector<Aws::String>& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }

    /**
     * <p>A list of associated Amazon EC2 Auto Scaling groups.</p>
     */
    inline void SetAutoScalingGroups(Aws::Vector<Aws::String>&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = std::move(value); }

    /**
     * <p>A list of associated Amazon EC2 Auto Scaling groups.</p>
     */
    inline CreateDeploymentGroupRequest& WithAutoScalingGroups(const Aws::Vector<Aws::String>& value) { SetAutoScalingGroups(value); return *this;}

    /**
     * <p>A list of associated Amazon EC2 Auto Scaling groups.</p>
     */
    inline CreateDeploymentGroupRequest& WithAutoScalingGroups(Aws::Vector<Aws::String>&& value) { SetAutoScalingGroups(std::move(value)); return *this;}

    /**
     * <p>A list of associated Amazon EC2 Auto Scaling groups.</p>
     */
    inline CreateDeploymentGroupRequest& AddAutoScalingGroups(const Aws::String& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    /**
     * <p>A list of associated Amazon EC2 Auto Scaling groups.</p>
     */
    inline CreateDeploymentGroupRequest& AddAutoScalingGroups(Aws::String&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of associated Amazon EC2 Auto Scaling groups.</p>
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
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }

    /**
     * <p>A service role ARN that allows AWS CodeDeploy to act on the user's behalf
     * when interacting with AWS services.</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>A service role ARN that allows AWS CodeDeploy to act on the user's behalf
     * when interacting with AWS services.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }

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
    inline CreateDeploymentGroupRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>A service role ARN that allows AWS CodeDeploy to act on the user's behalf
     * when interacting with AWS services.</p>
     */
    inline CreateDeploymentGroupRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p>Information about triggers to create when the deployment group is created.
     * For examples, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-sns.html">Create
     * a Trigger for an AWS CodeDeploy Event</a> in the AWS CodeDeploy User Guide.</p>
     */
    inline const Aws::Vector<TriggerConfig>& GetTriggerConfigurations() const{ return m_triggerConfigurations; }

    /**
     * <p>Information about triggers to create when the deployment group is created.
     * For examples, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-sns.html">Create
     * a Trigger for an AWS CodeDeploy Event</a> in the AWS CodeDeploy User Guide.</p>
     */
    inline bool TriggerConfigurationsHasBeenSet() const { return m_triggerConfigurationsHasBeenSet; }

    /**
     * <p>Information about triggers to create when the deployment group is created.
     * For examples, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-sns.html">Create
     * a Trigger for an AWS CodeDeploy Event</a> in the AWS CodeDeploy User Guide.</p>
     */
    inline void SetTriggerConfigurations(const Aws::Vector<TriggerConfig>& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations = value; }

    /**
     * <p>Information about triggers to create when the deployment group is created.
     * For examples, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-sns.html">Create
     * a Trigger for an AWS CodeDeploy Event</a> in the AWS CodeDeploy User Guide.</p>
     */
    inline void SetTriggerConfigurations(Aws::Vector<TriggerConfig>&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations = std::move(value); }

    /**
     * <p>Information about triggers to create when the deployment group is created.
     * For examples, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-sns.html">Create
     * a Trigger for an AWS CodeDeploy Event</a> in the AWS CodeDeploy User Guide.</p>
     */
    inline CreateDeploymentGroupRequest& WithTriggerConfigurations(const Aws::Vector<TriggerConfig>& value) { SetTriggerConfigurations(value); return *this;}

    /**
     * <p>Information about triggers to create when the deployment group is created.
     * For examples, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-sns.html">Create
     * a Trigger for an AWS CodeDeploy Event</a> in the AWS CodeDeploy User Guide.</p>
     */
    inline CreateDeploymentGroupRequest& WithTriggerConfigurations(Aws::Vector<TriggerConfig>&& value) { SetTriggerConfigurations(std::move(value)); return *this;}

    /**
     * <p>Information about triggers to create when the deployment group is created.
     * For examples, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-sns.html">Create
     * a Trigger for an AWS CodeDeploy Event</a> in the AWS CodeDeploy User Guide.</p>
     */
    inline CreateDeploymentGroupRequest& AddTriggerConfigurations(const TriggerConfig& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations.push_back(value); return *this; }

    /**
     * <p>Information about triggers to create when the deployment group is created.
     * For examples, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/how-to-notify-sns.html">Create
     * a Trigger for an AWS CodeDeploy Event</a> in the AWS CodeDeploy User Guide.</p>
     */
    inline CreateDeploymentGroupRequest& AddTriggerConfigurations(TriggerConfig&& value) { m_triggerConfigurationsHasBeenSet = true; m_triggerConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Information to add about Amazon CloudWatch alarms when the deployment group
     * is created.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }

    /**
     * <p>Information to add about Amazon CloudWatch alarms when the deployment group
     * is created.</p>
     */
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }

    /**
     * <p>Information to add about Amazon CloudWatch alarms when the deployment group
     * is created.</p>
     */
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }

    /**
     * <p>Information to add about Amazon CloudWatch alarms when the deployment group
     * is created.</p>
     */
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::move(value); }

    /**
     * <p>Information to add about Amazon CloudWatch alarms when the deployment group
     * is created.</p>
     */
    inline CreateDeploymentGroupRequest& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}

    /**
     * <p>Information to add about Amazon CloudWatch alarms when the deployment group
     * is created.</p>
     */
    inline CreateDeploymentGroupRequest& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(std::move(value)); return *this;}


    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment group is created.</p>
     */
    inline const AutoRollbackConfiguration& GetAutoRollbackConfiguration() const{ return m_autoRollbackConfiguration; }

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment group is created.</p>
     */
    inline bool AutoRollbackConfigurationHasBeenSet() const { return m_autoRollbackConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment group is created.</p>
     */
    inline void SetAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = value; }

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment group is created.</p>
     */
    inline void SetAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = std::move(value); }

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment group is created.</p>
     */
    inline CreateDeploymentGroupRequest& WithAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { SetAutoRollbackConfiguration(value); return *this;}

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment group is created.</p>
     */
    inline CreateDeploymentGroupRequest& WithAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { SetAutoRollbackConfiguration(std::move(value)); return *this;}


    /**
     * <p>Information about the type of deployment, in-place or blue/green, that you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline const DeploymentStyle& GetDeploymentStyle() const{ return m_deploymentStyle; }

    /**
     * <p>Information about the type of deployment, in-place or blue/green, that you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline bool DeploymentStyleHasBeenSet() const { return m_deploymentStyleHasBeenSet; }

    /**
     * <p>Information about the type of deployment, in-place or blue/green, that you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline void SetDeploymentStyle(const DeploymentStyle& value) { m_deploymentStyleHasBeenSet = true; m_deploymentStyle = value; }

    /**
     * <p>Information about the type of deployment, in-place or blue/green, that you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline void SetDeploymentStyle(DeploymentStyle&& value) { m_deploymentStyleHasBeenSet = true; m_deploymentStyle = std::move(value); }

    /**
     * <p>Information about the type of deployment, in-place or blue/green, that you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline CreateDeploymentGroupRequest& WithDeploymentStyle(const DeploymentStyle& value) { SetDeploymentStyle(value); return *this;}

    /**
     * <p>Information about the type of deployment, in-place or blue/green, that you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline CreateDeploymentGroupRequest& WithDeploymentStyle(DeploymentStyle&& value) { SetDeploymentStyle(std::move(value)); return *this;}


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
    inline CreateDeploymentGroupRequest& WithBlueGreenDeploymentConfiguration(const BlueGreenDeploymentConfiguration& value) { SetBlueGreenDeploymentConfiguration(value); return *this;}

    /**
     * <p>Information about blue/green deployment options for a deployment group.</p>
     */
    inline CreateDeploymentGroupRequest& WithBlueGreenDeploymentConfiguration(BlueGreenDeploymentConfiguration&& value) { SetBlueGreenDeploymentConfiguration(std::move(value)); return *this;}


    /**
     * <p>Information about the load balancer used in a deployment.</p>
     */
    inline const LoadBalancerInfo& GetLoadBalancerInfo() const{ return m_loadBalancerInfo; }

    /**
     * <p>Information about the load balancer used in a deployment.</p>
     */
    inline bool LoadBalancerInfoHasBeenSet() const { return m_loadBalancerInfoHasBeenSet; }

    /**
     * <p>Information about the load balancer used in a deployment.</p>
     */
    inline void SetLoadBalancerInfo(const LoadBalancerInfo& value) { m_loadBalancerInfoHasBeenSet = true; m_loadBalancerInfo = value; }

    /**
     * <p>Information about the load balancer used in a deployment.</p>
     */
    inline void SetLoadBalancerInfo(LoadBalancerInfo&& value) { m_loadBalancerInfoHasBeenSet = true; m_loadBalancerInfo = std::move(value); }

    /**
     * <p>Information about the load balancer used in a deployment.</p>
     */
    inline CreateDeploymentGroupRequest& WithLoadBalancerInfo(const LoadBalancerInfo& value) { SetLoadBalancerInfo(value); return *this;}

    /**
     * <p>Information about the load balancer used in a deployment.</p>
     */
    inline CreateDeploymentGroupRequest& WithLoadBalancerInfo(LoadBalancerInfo&& value) { SetLoadBalancerInfo(std::move(value)); return *this;}


    /**
     * <p>Information about groups of tags applied to EC2 instances. The deployment
     * group includes only EC2 instances identified by all the tag groups. Cannot be
     * used in the same call as ec2TagFilters.</p>
     */
    inline const EC2TagSet& GetEc2TagSet() const{ return m_ec2TagSet; }

    /**
     * <p>Information about groups of tags applied to EC2 instances. The deployment
     * group includes only EC2 instances identified by all the tag groups. Cannot be
     * used in the same call as ec2TagFilters.</p>
     */
    inline bool Ec2TagSetHasBeenSet() const { return m_ec2TagSetHasBeenSet; }

    /**
     * <p>Information about groups of tags applied to EC2 instances. The deployment
     * group includes only EC2 instances identified by all the tag groups. Cannot be
     * used in the same call as ec2TagFilters.</p>
     */
    inline void SetEc2TagSet(const EC2TagSet& value) { m_ec2TagSetHasBeenSet = true; m_ec2TagSet = value; }

    /**
     * <p>Information about groups of tags applied to EC2 instances. The deployment
     * group includes only EC2 instances identified by all the tag groups. Cannot be
     * used in the same call as ec2TagFilters.</p>
     */
    inline void SetEc2TagSet(EC2TagSet&& value) { m_ec2TagSetHasBeenSet = true; m_ec2TagSet = std::move(value); }

    /**
     * <p>Information about groups of tags applied to EC2 instances. The deployment
     * group includes only EC2 instances identified by all the tag groups. Cannot be
     * used in the same call as ec2TagFilters.</p>
     */
    inline CreateDeploymentGroupRequest& WithEc2TagSet(const EC2TagSet& value) { SetEc2TagSet(value); return *this;}

    /**
     * <p>Information about groups of tags applied to EC2 instances. The deployment
     * group includes only EC2 instances identified by all the tag groups. Cannot be
     * used in the same call as ec2TagFilters.</p>
     */
    inline CreateDeploymentGroupRequest& WithEc2TagSet(EC2TagSet&& value) { SetEc2TagSet(std::move(value)); return *this;}


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
    inline CreateDeploymentGroupRequest& WithEcsServices(const Aws::Vector<ECSService>& value) { SetEcsServices(value); return *this;}

    /**
     * <p> The target Amazon ECS services in the deployment group. This applies only to
     * deployment groups that use the Amazon ECS compute platform. A target Amazon ECS
     * service is specified as an Amazon ECS cluster and service name pair using the
     * format <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. </p>
     */
    inline CreateDeploymentGroupRequest& WithEcsServices(Aws::Vector<ECSService>&& value) { SetEcsServices(std::move(value)); return *this;}

    /**
     * <p> The target Amazon ECS services in the deployment group. This applies only to
     * deployment groups that use the Amazon ECS compute platform. A target Amazon ECS
     * service is specified as an Amazon ECS cluster and service name pair using the
     * format <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. </p>
     */
    inline CreateDeploymentGroupRequest& AddEcsServices(const ECSService& value) { m_ecsServicesHasBeenSet = true; m_ecsServices.push_back(value); return *this; }

    /**
     * <p> The target Amazon ECS services in the deployment group. This applies only to
     * deployment groups that use the Amazon ECS compute platform. A target Amazon ECS
     * service is specified as an Amazon ECS cluster and service name pair using the
     * format <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. </p>
     */
    inline CreateDeploymentGroupRequest& AddEcsServices(ECSService&& value) { m_ecsServicesHasBeenSet = true; m_ecsServices.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about groups of tags applied to on-premises instances. The
     * deployment group includes only on-premises instances identified by all of the
     * tag groups. Cannot be used in the same call as onPremisesInstanceTagFilters.</p>
     */
    inline const OnPremisesTagSet& GetOnPremisesTagSet() const{ return m_onPremisesTagSet; }

    /**
     * <p>Information about groups of tags applied to on-premises instances. The
     * deployment group includes only on-premises instances identified by all of the
     * tag groups. Cannot be used in the same call as onPremisesInstanceTagFilters.</p>
     */
    inline bool OnPremisesTagSetHasBeenSet() const { return m_onPremisesTagSetHasBeenSet; }

    /**
     * <p>Information about groups of tags applied to on-premises instances. The
     * deployment group includes only on-premises instances identified by all of the
     * tag groups. Cannot be used in the same call as onPremisesInstanceTagFilters.</p>
     */
    inline void SetOnPremisesTagSet(const OnPremisesTagSet& value) { m_onPremisesTagSetHasBeenSet = true; m_onPremisesTagSet = value; }

    /**
     * <p>Information about groups of tags applied to on-premises instances. The
     * deployment group includes only on-premises instances identified by all of the
     * tag groups. Cannot be used in the same call as onPremisesInstanceTagFilters.</p>
     */
    inline void SetOnPremisesTagSet(OnPremisesTagSet&& value) { m_onPremisesTagSetHasBeenSet = true; m_onPremisesTagSet = std::move(value); }

    /**
     * <p>Information about groups of tags applied to on-premises instances. The
     * deployment group includes only on-premises instances identified by all of the
     * tag groups. Cannot be used in the same call as onPremisesInstanceTagFilters.</p>
     */
    inline CreateDeploymentGroupRequest& WithOnPremisesTagSet(const OnPremisesTagSet& value) { SetOnPremisesTagSet(value); return *this;}

    /**
     * <p>Information about groups of tags applied to on-premises instances. The
     * deployment group includes only on-premises instances identified by all of the
     * tag groups. Cannot be used in the same call as onPremisesInstanceTagFilters.</p>
     */
    inline CreateDeploymentGroupRequest& WithOnPremisesTagSet(OnPremisesTagSet&& value) { SetOnPremisesTagSet(std::move(value)); return *this;}


    /**
     * <p> The metadata that you apply to CodeDeploy deployment groups to help you
     * organize and categorize them. Each tag consists of a key and an optional value,
     * both of which you define. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> The metadata that you apply to CodeDeploy deployment groups to help you
     * organize and categorize them. Each tag consists of a key and an optional value,
     * both of which you define. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> The metadata that you apply to CodeDeploy deployment groups to help you
     * organize and categorize them. Each tag consists of a key and an optional value,
     * both of which you define. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> The metadata that you apply to CodeDeploy deployment groups to help you
     * organize and categorize them. Each tag consists of a key and an optional value,
     * both of which you define. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> The metadata that you apply to CodeDeploy deployment groups to help you
     * organize and categorize them. Each tag consists of a key and an optional value,
     * both of which you define. </p>
     */
    inline CreateDeploymentGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> The metadata that you apply to CodeDeploy deployment groups to help you
     * organize and categorize them. Each tag consists of a key and an optional value,
     * both of which you define. </p>
     */
    inline CreateDeploymentGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The metadata that you apply to CodeDeploy deployment groups to help you
     * organize and categorize them. Each tag consists of a key and an optional value,
     * both of which you define. </p>
     */
    inline CreateDeploymentGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> The metadata that you apply to CodeDeploy deployment groups to help you
     * organize and categorize them. Each tag consists of a key and an optional value,
     * both of which you define. </p>
     */
    inline CreateDeploymentGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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

    EC2TagSet m_ec2TagSet;
    bool m_ec2TagSetHasBeenSet;

    Aws::Vector<ECSService> m_ecsServices;
    bool m_ecsServicesHasBeenSet;

    OnPremisesTagSet m_onPremisesTagSet;
    bool m_onPremisesTagSetHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
