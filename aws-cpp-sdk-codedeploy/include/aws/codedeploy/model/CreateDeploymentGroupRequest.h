/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/model/EC2TagFilter.h>
#include <aws/codedeploy/model/TagFilter.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /*
    <p>Represents the input of a create deployment group operation.</p>
  */
  class AWS_CODEDEPLOY_API CreateDeploymentGroupRequest : public CodeDeployRequest
  {
  public:
    CreateDeploymentGroupRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>The name of an existing AWS CodeDeploy application associated with the applicable IAM user or AWS account.</p>
    */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /*
     <p>The name of an existing AWS CodeDeploy application associated with the applicable IAM user or AWS account.</p>
    */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /*
     <p>The name of an existing AWS CodeDeploy application associated with the applicable IAM user or AWS account.</p>
    */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /*
     <p>The name of an existing AWS CodeDeploy application associated with the applicable IAM user or AWS account.</p>
    */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /*
     <p>The name of an existing AWS CodeDeploy application associated with the applicable IAM user or AWS account.</p>
    */
    inline CreateDeploymentGroupRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /*
     <p>The name of an existing AWS CodeDeploy application associated with the applicable IAM user or AWS account.</p>
    */
    inline CreateDeploymentGroupRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /*
     <p>The name of an existing AWS CodeDeploy application associated with the applicable IAM user or AWS account.</p>
    */
    inline CreateDeploymentGroupRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /*
     <p>The name of an existing deployment group for the specified application.</p>
    */
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }

    /*
     <p>The name of an existing deployment group for the specified application.</p>
    */
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /*
     <p>The name of an existing deployment group for the specified application.</p>
    */
    inline void SetDeploymentGroupName(Aws::String&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /*
     <p>The name of an existing deployment group for the specified application.</p>
    */
    inline void SetDeploymentGroupName(const char* value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName.assign(value); }

    /*
     <p>The name of an existing deployment group for the specified application.</p>
    */
    inline CreateDeploymentGroupRequest& WithDeploymentGroupName(const Aws::String& value) { SetDeploymentGroupName(value); return *this;}

    /*
     <p>The name of an existing deployment group for the specified application.</p>
    */
    inline CreateDeploymentGroupRequest& WithDeploymentGroupName(Aws::String&& value) { SetDeploymentGroupName(value); return *this;}

    /*
     <p>The name of an existing deployment group for the specified application.</p>
    */
    inline CreateDeploymentGroupRequest& WithDeploymentGroupName(const char* value) { SetDeploymentGroupName(value); return *this;}

    /*
     <p>If specified, the deployment configuration name must be one of the predefined values, or it can be a custom deployment configuration:</p> <ul> <li>CodeDeployDefault.AllAtOnce deploys an application revision to up to all of the instances at once. The overall deployment succeeds if the application revision deploys to at least one of the instances. The overall deployment fails after the application revision fails to deploy to all of the instances. For example, for 9 instances, deploy to up to all 9 instances at once. The overall deployment succeeds if any of the 9 instances is successfully deployed to, and it fails if all 9 instances fail to be deployed to.</li> <li>CodeDeployDefault.HalfAtATime deploys to up to half of the instances at a time (with fractions rounded down). The overall deployment succeeds if the application revision deploys to at least half of the instances (with fractions rounded up); otherwise, the deployment fails. For example, for 9 instances, deploy to up to 4 instances at a time. The overall deployment succeeds if 5 or more instances are successfully deployed to; otherwise, the deployment fails. Note that the deployment may successfully deploy to some instances, even if the overall deployment fails.</li> <li>CodeDeployDefault.OneAtATime deploys the application revision to only one of the instances at a time. The overall deployment succeeds if the application revision deploys to all of the instances. The overall deployment fails after the application revision first fails to deploy to any one instances. For example, for 9 instances, deploy to one instance at a time. The overall deployment succeeds if all 9 instances are successfully deployed to, and it fails if any of one of the 9 instances fail to be deployed to. Note that the deployment may successfully deploy to some instances, even if the overall deployment fails. This is the default deployment configuration if a configuration isn't specified for either the deployment or the deployment group.</li> </ul> <p>To create a custom deployment configuration, call the create deployment configuration operation.</p>
    */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }

    /*
     <p>If specified, the deployment configuration name must be one of the predefined values, or it can be a custom deployment configuration:</p> <ul> <li>CodeDeployDefault.AllAtOnce deploys an application revision to up to all of the instances at once. The overall deployment succeeds if the application revision deploys to at least one of the instances. The overall deployment fails after the application revision fails to deploy to all of the instances. For example, for 9 instances, deploy to up to all 9 instances at once. The overall deployment succeeds if any of the 9 instances is successfully deployed to, and it fails if all 9 instances fail to be deployed to.</li> <li>CodeDeployDefault.HalfAtATime deploys to up to half of the instances at a time (with fractions rounded down). The overall deployment succeeds if the application revision deploys to at least half of the instances (with fractions rounded up); otherwise, the deployment fails. For example, for 9 instances, deploy to up to 4 instances at a time. The overall deployment succeeds if 5 or more instances are successfully deployed to; otherwise, the deployment fails. Note that the deployment may successfully deploy to some instances, even if the overall deployment fails.</li> <li>CodeDeployDefault.OneAtATime deploys the application revision to only one of the instances at a time. The overall deployment succeeds if the application revision deploys to all of the instances. The overall deployment fails after the application revision first fails to deploy to any one instances. For example, for 9 instances, deploy to one instance at a time. The overall deployment succeeds if all 9 instances are successfully deployed to, and it fails if any of one of the 9 instances fail to be deployed to. Note that the deployment may successfully deploy to some instances, even if the overall deployment fails. This is the default deployment configuration if a configuration isn't specified for either the deployment or the deployment group.</li> </ul> <p>To create a custom deployment configuration, call the create deployment configuration operation.</p>
    */
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /*
     <p>If specified, the deployment configuration name must be one of the predefined values, or it can be a custom deployment configuration:</p> <ul> <li>CodeDeployDefault.AllAtOnce deploys an application revision to up to all of the instances at once. The overall deployment succeeds if the application revision deploys to at least one of the instances. The overall deployment fails after the application revision fails to deploy to all of the instances. For example, for 9 instances, deploy to up to all 9 instances at once. The overall deployment succeeds if any of the 9 instances is successfully deployed to, and it fails if all 9 instances fail to be deployed to.</li> <li>CodeDeployDefault.HalfAtATime deploys to up to half of the instances at a time (with fractions rounded down). The overall deployment succeeds if the application revision deploys to at least half of the instances (with fractions rounded up); otherwise, the deployment fails. For example, for 9 instances, deploy to up to 4 instances at a time. The overall deployment succeeds if 5 or more instances are successfully deployed to; otherwise, the deployment fails. Note that the deployment may successfully deploy to some instances, even if the overall deployment fails.</li> <li>CodeDeployDefault.OneAtATime deploys the application revision to only one of the instances at a time. The overall deployment succeeds if the application revision deploys to all of the instances. The overall deployment fails after the application revision first fails to deploy to any one instances. For example, for 9 instances, deploy to one instance at a time. The overall deployment succeeds if all 9 instances are successfully deployed to, and it fails if any of one of the 9 instances fail to be deployed to. Note that the deployment may successfully deploy to some instances, even if the overall deployment fails. This is the default deployment configuration if a configuration isn't specified for either the deployment or the deployment group.</li> </ul> <p>To create a custom deployment configuration, call the create deployment configuration operation.</p>
    */
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /*
     <p>If specified, the deployment configuration name must be one of the predefined values, or it can be a custom deployment configuration:</p> <ul> <li>CodeDeployDefault.AllAtOnce deploys an application revision to up to all of the instances at once. The overall deployment succeeds if the application revision deploys to at least one of the instances. The overall deployment fails after the application revision fails to deploy to all of the instances. For example, for 9 instances, deploy to up to all 9 instances at once. The overall deployment succeeds if any of the 9 instances is successfully deployed to, and it fails if all 9 instances fail to be deployed to.</li> <li>CodeDeployDefault.HalfAtATime deploys to up to half of the instances at a time (with fractions rounded down). The overall deployment succeeds if the application revision deploys to at least half of the instances (with fractions rounded up); otherwise, the deployment fails. For example, for 9 instances, deploy to up to 4 instances at a time. The overall deployment succeeds if 5 or more instances are successfully deployed to; otherwise, the deployment fails. Note that the deployment may successfully deploy to some instances, even if the overall deployment fails.</li> <li>CodeDeployDefault.OneAtATime deploys the application revision to only one of the instances at a time. The overall deployment succeeds if the application revision deploys to all of the instances. The overall deployment fails after the application revision first fails to deploy to any one instances. For example, for 9 instances, deploy to one instance at a time. The overall deployment succeeds if all 9 instances are successfully deployed to, and it fails if any of one of the 9 instances fail to be deployed to. Note that the deployment may successfully deploy to some instances, even if the overall deployment fails. This is the default deployment configuration if a configuration isn't specified for either the deployment or the deployment group.</li> </ul> <p>To create a custom deployment configuration, call the create deployment configuration operation.</p>
    */
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    /*
     <p>If specified, the deployment configuration name must be one of the predefined values, or it can be a custom deployment configuration:</p> <ul> <li>CodeDeployDefault.AllAtOnce deploys an application revision to up to all of the instances at once. The overall deployment succeeds if the application revision deploys to at least one of the instances. The overall deployment fails after the application revision fails to deploy to all of the instances. For example, for 9 instances, deploy to up to all 9 instances at once. The overall deployment succeeds if any of the 9 instances is successfully deployed to, and it fails if all 9 instances fail to be deployed to.</li> <li>CodeDeployDefault.HalfAtATime deploys to up to half of the instances at a time (with fractions rounded down). The overall deployment succeeds if the application revision deploys to at least half of the instances (with fractions rounded up); otherwise, the deployment fails. For example, for 9 instances, deploy to up to 4 instances at a time. The overall deployment succeeds if 5 or more instances are successfully deployed to; otherwise, the deployment fails. Note that the deployment may successfully deploy to some instances, even if the overall deployment fails.</li> <li>CodeDeployDefault.OneAtATime deploys the application revision to only one of the instances at a time. The overall deployment succeeds if the application revision deploys to all of the instances. The overall deployment fails after the application revision first fails to deploy to any one instances. For example, for 9 instances, deploy to one instance at a time. The overall deployment succeeds if all 9 instances are successfully deployed to, and it fails if any of one of the 9 instances fail to be deployed to. Note that the deployment may successfully deploy to some instances, even if the overall deployment fails. This is the default deployment configuration if a configuration isn't specified for either the deployment or the deployment group.</li> </ul> <p>To create a custom deployment configuration, call the create deployment configuration operation.</p>
    */
    inline CreateDeploymentGroupRequest& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    /*
     <p>If specified, the deployment configuration name must be one of the predefined values, or it can be a custom deployment configuration:</p> <ul> <li>CodeDeployDefault.AllAtOnce deploys an application revision to up to all of the instances at once. The overall deployment succeeds if the application revision deploys to at least one of the instances. The overall deployment fails after the application revision fails to deploy to all of the instances. For example, for 9 instances, deploy to up to all 9 instances at once. The overall deployment succeeds if any of the 9 instances is successfully deployed to, and it fails if all 9 instances fail to be deployed to.</li> <li>CodeDeployDefault.HalfAtATime deploys to up to half of the instances at a time (with fractions rounded down). The overall deployment succeeds if the application revision deploys to at least half of the instances (with fractions rounded up); otherwise, the deployment fails. For example, for 9 instances, deploy to up to 4 instances at a time. The overall deployment succeeds if 5 or more instances are successfully deployed to; otherwise, the deployment fails. Note that the deployment may successfully deploy to some instances, even if the overall deployment fails.</li> <li>CodeDeployDefault.OneAtATime deploys the application revision to only one of the instances at a time. The overall deployment succeeds if the application revision deploys to all of the instances. The overall deployment fails after the application revision first fails to deploy to any one instances. For example, for 9 instances, deploy to one instance at a time. The overall deployment succeeds if all 9 instances are successfully deployed to, and it fails if any of one of the 9 instances fail to be deployed to. Note that the deployment may successfully deploy to some instances, even if the overall deployment fails. This is the default deployment configuration if a configuration isn't specified for either the deployment or the deployment group.</li> </ul> <p>To create a custom deployment configuration, call the create deployment configuration operation.</p>
    */
    inline CreateDeploymentGroupRequest& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(value); return *this;}

    /*
     <p>If specified, the deployment configuration name must be one of the predefined values, or it can be a custom deployment configuration:</p> <ul> <li>CodeDeployDefault.AllAtOnce deploys an application revision to up to all of the instances at once. The overall deployment succeeds if the application revision deploys to at least one of the instances. The overall deployment fails after the application revision fails to deploy to all of the instances. For example, for 9 instances, deploy to up to all 9 instances at once. The overall deployment succeeds if any of the 9 instances is successfully deployed to, and it fails if all 9 instances fail to be deployed to.</li> <li>CodeDeployDefault.HalfAtATime deploys to up to half of the instances at a time (with fractions rounded down). The overall deployment succeeds if the application revision deploys to at least half of the instances (with fractions rounded up); otherwise, the deployment fails. For example, for 9 instances, deploy to up to 4 instances at a time. The overall deployment succeeds if 5 or more instances are successfully deployed to; otherwise, the deployment fails. Note that the deployment may successfully deploy to some instances, even if the overall deployment fails.</li> <li>CodeDeployDefault.OneAtATime deploys the application revision to only one of the instances at a time. The overall deployment succeeds if the application revision deploys to all of the instances. The overall deployment fails after the application revision first fails to deploy to any one instances. For example, for 9 instances, deploy to one instance at a time. The overall deployment succeeds if all 9 instances are successfully deployed to, and it fails if any of one of the 9 instances fail to be deployed to. Note that the deployment may successfully deploy to some instances, even if the overall deployment fails. This is the default deployment configuration if a configuration isn't specified for either the deployment or the deployment group.</li> </ul> <p>To create a custom deployment configuration, call the create deployment configuration operation.</p>
    */
    inline CreateDeploymentGroupRequest& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}

    /*
     <p>The Amazon EC2 tags to filter on.</p>
    */
    inline const Aws::Vector<EC2TagFilter>& GetEc2TagFilters() const{ return m_ec2TagFilters; }

    /*
     <p>The Amazon EC2 tags to filter on.</p>
    */
    inline void SetEc2TagFilters(const Aws::Vector<EC2TagFilter>& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters = value; }

    /*
     <p>The Amazon EC2 tags to filter on.</p>
    */
    inline void SetEc2TagFilters(Aws::Vector<EC2TagFilter>&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters = value; }

    /*
     <p>The Amazon EC2 tags to filter on.</p>
    */
    inline CreateDeploymentGroupRequest& WithEc2TagFilters(const Aws::Vector<EC2TagFilter>& value) { SetEc2TagFilters(value); return *this;}

    /*
     <p>The Amazon EC2 tags to filter on.</p>
    */
    inline CreateDeploymentGroupRequest& WithEc2TagFilters(Aws::Vector<EC2TagFilter>&& value) { SetEc2TagFilters(value); return *this;}

    /*
     <p>The Amazon EC2 tags to filter on.</p>
    */
    inline CreateDeploymentGroupRequest& AddEc2TagFilters(const EC2TagFilter& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.push_back(value); return *this; }

    /*
     <p>The Amazon EC2 tags to filter on.</p>
    */
    inline CreateDeploymentGroupRequest& AddEc2TagFilters(EC2TagFilter&& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.push_back(value); return *this; }

    /*
     <p>The on-premises instance tags to filter on.</p>
    */
    inline const Aws::Vector<TagFilter>& GetOnPremisesInstanceTagFilters() const{ return m_onPremisesInstanceTagFilters; }

    /*
     <p>The on-premises instance tags to filter on.</p>
    */
    inline void SetOnPremisesInstanceTagFilters(const Aws::Vector<TagFilter>& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters = value; }

    /*
     <p>The on-premises instance tags to filter on.</p>
    */
    inline void SetOnPremisesInstanceTagFilters(Aws::Vector<TagFilter>&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters = value; }

    /*
     <p>The on-premises instance tags to filter on.</p>
    */
    inline CreateDeploymentGroupRequest& WithOnPremisesInstanceTagFilters(const Aws::Vector<TagFilter>& value) { SetOnPremisesInstanceTagFilters(value); return *this;}

    /*
     <p>The on-premises instance tags to filter on.</p>
    */
    inline CreateDeploymentGroupRequest& WithOnPremisesInstanceTagFilters(Aws::Vector<TagFilter>&& value) { SetOnPremisesInstanceTagFilters(value); return *this;}

    /*
     <p>The on-premises instance tags to filter on.</p>
    */
    inline CreateDeploymentGroupRequest& AddOnPremisesInstanceTagFilters(const TagFilter& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.push_back(value); return *this; }

    /*
     <p>The on-premises instance tags to filter on.</p>
    */
    inline CreateDeploymentGroupRequest& AddOnPremisesInstanceTagFilters(TagFilter&& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.push_back(value); return *this; }

    /*
     <p>A list of associated Auto Scaling groups.</p>
    */
    inline const Aws::Vector<Aws::String>& GetAutoScalingGroups() const{ return m_autoScalingGroups; }

    /*
     <p>A list of associated Auto Scaling groups.</p>
    */
    inline void SetAutoScalingGroups(const Aws::Vector<Aws::String>& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }

    /*
     <p>A list of associated Auto Scaling groups.</p>
    */
    inline void SetAutoScalingGroups(Aws::Vector<Aws::String>&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }

    /*
     <p>A list of associated Auto Scaling groups.</p>
    */
    inline CreateDeploymentGroupRequest& WithAutoScalingGroups(const Aws::Vector<Aws::String>& value) { SetAutoScalingGroups(value); return *this;}

    /*
     <p>A list of associated Auto Scaling groups.</p>
    */
    inline CreateDeploymentGroupRequest& WithAutoScalingGroups(Aws::Vector<Aws::String>&& value) { SetAutoScalingGroups(value); return *this;}

    /*
     <p>A list of associated Auto Scaling groups.</p>
    */
    inline CreateDeploymentGroupRequest& AddAutoScalingGroups(const Aws::String& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    /*
     <p>A list of associated Auto Scaling groups.</p>
    */
    inline CreateDeploymentGroupRequest& AddAutoScalingGroups(Aws::String&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    /*
     <p>A list of associated Auto Scaling groups.</p>
    */
    inline CreateDeploymentGroupRequest& AddAutoScalingGroups(const char* value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    /*
     <p>A service role ARN that allows AWS CodeDeploy to act on the user's behalf when interacting with AWS services.</p>
    */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /*
     <p>A service role ARN that allows AWS CodeDeploy to act on the user's behalf when interacting with AWS services.</p>
    */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /*
     <p>A service role ARN that allows AWS CodeDeploy to act on the user's behalf when interacting with AWS services.</p>
    */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /*
     <p>A service role ARN that allows AWS CodeDeploy to act on the user's behalf when interacting with AWS services.</p>
    */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /*
     <p>A service role ARN that allows AWS CodeDeploy to act on the user's behalf when interacting with AWS services.</p>
    */
    inline CreateDeploymentGroupRequest& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /*
     <p>A service role ARN that allows AWS CodeDeploy to act on the user's behalf when interacting with AWS services.</p>
    */
    inline CreateDeploymentGroupRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(value); return *this;}

    /*
     <p>A service role ARN that allows AWS CodeDeploy to act on the user's behalf when interacting with AWS services.</p>
    */
    inline CreateDeploymentGroupRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}

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
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
