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
   * <p> Represents the input of a <code>StopDeployment</code> operation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/StopDeploymentInput">AWS
   * API Reference</a></p>
   */
  class StopDeploymentRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API StopDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopDeployment"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline StopDeploymentRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline StopDeploymentRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline StopDeploymentRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p> Indicates, when a deployment is stopped, whether instances that have been
     * updated should be rolled back to the previous version of the application
     * revision. </p>
     */
    inline bool GetAutoRollbackEnabled() const{ return m_autoRollbackEnabled; }

    /**
     * <p> Indicates, when a deployment is stopped, whether instances that have been
     * updated should be rolled back to the previous version of the application
     * revision. </p>
     */
    inline bool AutoRollbackEnabledHasBeenSet() const { return m_autoRollbackEnabledHasBeenSet; }

    /**
     * <p> Indicates, when a deployment is stopped, whether instances that have been
     * updated should be rolled back to the previous version of the application
     * revision. </p>
     */
    inline void SetAutoRollbackEnabled(bool value) { m_autoRollbackEnabledHasBeenSet = true; m_autoRollbackEnabled = value; }

    /**
     * <p> Indicates, when a deployment is stopped, whether instances that have been
     * updated should be rolled back to the previous version of the application
     * revision. </p>
     */
    inline StopDeploymentRequest& WithAutoRollbackEnabled(bool value) { SetAutoRollbackEnabled(value); return *this;}

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    bool m_autoRollbackEnabled;
    bool m_autoRollbackEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
