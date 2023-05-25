/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>DeleteDeploymentGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteDeploymentGroupInput">AWS
   * API Reference</a></p>
   */
  class DeleteDeploymentGroupRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API DeleteDeploymentGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDeploymentGroup"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline DeleteDeploymentGroupRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline DeleteDeploymentGroupRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline DeleteDeploymentGroupRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The name of a deployment group for the specified application.</p>
     */
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }

    /**
     * <p>The name of a deployment group for the specified application.</p>
     */
    inline bool DeploymentGroupNameHasBeenSet() const { return m_deploymentGroupNameHasBeenSet; }

    /**
     * <p>The name of a deployment group for the specified application.</p>
     */
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /**
     * <p>The name of a deployment group for the specified application.</p>
     */
    inline void SetDeploymentGroupName(Aws::String&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = std::move(value); }

    /**
     * <p>The name of a deployment group for the specified application.</p>
     */
    inline void SetDeploymentGroupName(const char* value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName.assign(value); }

    /**
     * <p>The name of a deployment group for the specified application.</p>
     */
    inline DeleteDeploymentGroupRequest& WithDeploymentGroupName(const Aws::String& value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p>The name of a deployment group for the specified application.</p>
     */
    inline DeleteDeploymentGroupRequest& WithDeploymentGroupName(Aws::String&& value) { SetDeploymentGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of a deployment group for the specified application.</p>
     */
    inline DeleteDeploymentGroupRequest& WithDeploymentGroupName(const char* value) { SetDeploymentGroupName(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_deploymentGroupName;
    bool m_deploymentGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
