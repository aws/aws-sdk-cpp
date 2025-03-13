/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/LifecycleEventStatus.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   */
  class PutLifecycleEventHookExecutionStatusRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API PutLifecycleEventHookExecutionStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLifecycleEventHookExecutionStatus"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The unique ID of a deployment. Pass this ID to a Lambda function that
     * validates a deployment lifecycle event. </p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    PutLifecycleEventHookExecutionStatusRequest& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The execution ID of a deployment's lifecycle hook. A deployment lifecycle
     * hook is specified in the <code>hooks</code> section of the AppSpec file. </p>
     */
    inline const Aws::String& GetLifecycleEventHookExecutionId() const { return m_lifecycleEventHookExecutionId; }
    inline bool LifecycleEventHookExecutionIdHasBeenSet() const { return m_lifecycleEventHookExecutionIdHasBeenSet; }
    template<typename LifecycleEventHookExecutionIdT = Aws::String>
    void SetLifecycleEventHookExecutionId(LifecycleEventHookExecutionIdT&& value) { m_lifecycleEventHookExecutionIdHasBeenSet = true; m_lifecycleEventHookExecutionId = std::forward<LifecycleEventHookExecutionIdT>(value); }
    template<typename LifecycleEventHookExecutionIdT = Aws::String>
    PutLifecycleEventHookExecutionStatusRequest& WithLifecycleEventHookExecutionId(LifecycleEventHookExecutionIdT&& value) { SetLifecycleEventHookExecutionId(std::forward<LifecycleEventHookExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of a Lambda function that validates a deployment lifecycle event.
     * The values listed in <b>Valid Values</b> are valid for lifecycle statuses in
     * general; however, only <code>Succeeded</code> and <code>Failed</code> can be
     * passed successfully in your API call.</p>
     */
    inline LifecycleEventStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LifecycleEventStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PutLifecycleEventHookExecutionStatusRequest& WithStatus(LifecycleEventStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_lifecycleEventHookExecutionId;
    bool m_lifecycleEventHookExecutionIdHasBeenSet = false;

    LifecycleEventStatus m_status{LifecycleEventStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
