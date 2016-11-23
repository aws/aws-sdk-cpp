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

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a get deployment group operation.</p>
   */
  class AWS_CODEDEPLOY_API GetDeploymentGroupRequest : public CodeDeployRequest
  {
  public:
    GetDeploymentGroupRequest();
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
    inline GetDeploymentGroupRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline GetDeploymentGroupRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline GetDeploymentGroupRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an existing deployment group for the specified application.</p>
     */
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }

    /**
     * <p>The name of an existing deployment group for the specified application.</p>
     */
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /**
     * <p>The name of an existing deployment group for the specified application.</p>
     */
    inline void SetDeploymentGroupName(Aws::String&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /**
     * <p>The name of an existing deployment group for the specified application.</p>
     */
    inline void SetDeploymentGroupName(const char* value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName.assign(value); }

    /**
     * <p>The name of an existing deployment group for the specified application.</p>
     */
    inline GetDeploymentGroupRequest& WithDeploymentGroupName(const Aws::String& value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p>The name of an existing deployment group for the specified application.</p>
     */
    inline GetDeploymentGroupRequest& WithDeploymentGroupName(Aws::String&& value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p>The name of an existing deployment group for the specified application.</p>
     */
    inline GetDeploymentGroupRequest& WithDeploymentGroupName(const char* value) { SetDeploymentGroupName(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_deploymentGroupName;
    bool m_deploymentGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
