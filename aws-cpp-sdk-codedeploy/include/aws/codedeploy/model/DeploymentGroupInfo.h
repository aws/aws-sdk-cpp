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
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/RevisionLocation.h>
#include <aws/codedeploy/model/EC2TagFilter.h>
#include <aws/codedeploy/model/TagFilter.h>
#include <aws/codedeploy/model/AutoScalingGroup.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace codedeploy
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_CODEDEPLOY_API DeploymentGroupInfo
  {
  public:
    DeploymentGroupInfo();
    DeploymentGroupInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    DeploymentGroupInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    
    inline DeploymentGroupInfo&  WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    
    inline DeploymentGroupInfo& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    
    inline const Aws::String& GetDeploymentGroupId() const{ return m_deploymentGroupId; }
    
    inline void SetDeploymentGroupId(const Aws::String& value) { m_deploymentGroupIdHasBeenSet = true; m_deploymentGroupId = value; }

    
    inline void SetDeploymentGroupId(const char* value) { m_deploymentGroupIdHasBeenSet = true; m_deploymentGroupId.assign(value); }

    
    inline DeploymentGroupInfo&  WithDeploymentGroupId(const Aws::String& value) { SetDeploymentGroupId(value); return *this;}

    
    inline DeploymentGroupInfo& WithDeploymentGroupId(const char* value) { SetDeploymentGroupId(value); return *this;}

    
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }
    
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    
    inline void SetDeploymentGroupName(const char* value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName.assign(value); }

    
    inline DeploymentGroupInfo&  WithDeploymentGroupName(const Aws::String& value) { SetDeploymentGroupName(value); return *this;}

    
    inline DeploymentGroupInfo& WithDeploymentGroupName(const char* value) { SetDeploymentGroupName(value); return *this;}

    
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }
    
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    
    inline DeploymentGroupInfo&  WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    
    inline DeploymentGroupInfo& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}

    
    inline const Aws::Vector<EC2TagFilter>& GetEc2TagFilters() const{ return m_ec2TagFilters; }
    
    inline void SetEc2TagFilters(const Aws::Vector<EC2TagFilter>& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters = value; }

    
    inline DeploymentGroupInfo&  WithEc2TagFilters(const Aws::Vector<EC2TagFilter>& value) { SetEc2TagFilters(value); return *this;}

    
    inline DeploymentGroupInfo& AddEc2TagFilters(const EC2TagFilter& value) { m_ec2TagFiltersHasBeenSet = true; m_ec2TagFilters.push_back(value); return *this; }

    
    inline const Aws::Vector<TagFilter>& GetOnPremisesInstanceTagFilters() const{ return m_onPremisesInstanceTagFilters; }
    
    inline void SetOnPremisesInstanceTagFilters(const Aws::Vector<TagFilter>& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters = value; }

    
    inline DeploymentGroupInfo&  WithOnPremisesInstanceTagFilters(const Aws::Vector<TagFilter>& value) { SetOnPremisesInstanceTagFilters(value); return *this;}

    
    inline DeploymentGroupInfo& AddOnPremisesInstanceTagFilters(const TagFilter& value) { m_onPremisesInstanceTagFiltersHasBeenSet = true; m_onPremisesInstanceTagFilters.push_back(value); return *this; }

    
    inline const Aws::Vector<AutoScalingGroup>& GetAutoScalingGroups() const{ return m_autoScalingGroups; }
    
    inline void SetAutoScalingGroups(const Aws::Vector<AutoScalingGroup>& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }

    
    inline DeploymentGroupInfo&  WithAutoScalingGroups(const Aws::Vector<AutoScalingGroup>& value) { SetAutoScalingGroups(value); return *this;}

    
    inline DeploymentGroupInfo& AddAutoScalingGroups(const AutoScalingGroup& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }
    
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    
    inline DeploymentGroupInfo&  WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    
    inline DeploymentGroupInfo& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}

    
    inline const RevisionLocation& GetTargetRevision() const{ return m_targetRevision; }
    
    inline void SetTargetRevision(const RevisionLocation& value) { m_targetRevisionHasBeenSet = true; m_targetRevision = value; }

    
    inline DeploymentGroupInfo&  WithTargetRevision(const RevisionLocation& value) { SetTargetRevision(value); return *this;}

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
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
