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

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a batch get deployment groups operation.</p>
   */
  class AWS_CODEDEPLOY_API BatchGetDeploymentGroupsRequest : public CodeDeployRequest
  {
  public:
    BatchGetDeploymentGroupsRequest();
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
    inline BatchGetDeploymentGroupsRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline BatchGetDeploymentGroupsRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline BatchGetDeploymentGroupsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The deployment groups' names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeploymentGroupNames() const{ return m_deploymentGroupNames; }

    /**
     * <p>The deployment groups' names.</p>
     */
    inline void SetDeploymentGroupNames(const Aws::Vector<Aws::String>& value) { m_deploymentGroupNamesHasBeenSet = true; m_deploymentGroupNames = value; }

    /**
     * <p>The deployment groups' names.</p>
     */
    inline void SetDeploymentGroupNames(Aws::Vector<Aws::String>&& value) { m_deploymentGroupNamesHasBeenSet = true; m_deploymentGroupNames = value; }

    /**
     * <p>The deployment groups' names.</p>
     */
    inline BatchGetDeploymentGroupsRequest& WithDeploymentGroupNames(const Aws::Vector<Aws::String>& value) { SetDeploymentGroupNames(value); return *this;}

    /**
     * <p>The deployment groups' names.</p>
     */
    inline BatchGetDeploymentGroupsRequest& WithDeploymentGroupNames(Aws::Vector<Aws::String>&& value) { SetDeploymentGroupNames(value); return *this;}

    /**
     * <p>The deployment groups' names.</p>
     */
    inline BatchGetDeploymentGroupsRequest& AddDeploymentGroupNames(const Aws::String& value) { m_deploymentGroupNamesHasBeenSet = true; m_deploymentGroupNames.push_back(value); return *this; }

    /**
     * <p>The deployment groups' names.</p>
     */
    inline BatchGetDeploymentGroupsRequest& AddDeploymentGroupNames(Aws::String&& value) { m_deploymentGroupNamesHasBeenSet = true; m_deploymentGroupNames.push_back(value); return *this; }

    /**
     * <p>The deployment groups' names.</p>
     */
    inline BatchGetDeploymentGroupsRequest& AddDeploymentGroupNames(const char* value) { m_deploymentGroupNamesHasBeenSet = true; m_deploymentGroupNames.push_back(value); return *this; }

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::Vector<Aws::String> m_deploymentGroupNames;
    bool m_deploymentGroupNamesHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
