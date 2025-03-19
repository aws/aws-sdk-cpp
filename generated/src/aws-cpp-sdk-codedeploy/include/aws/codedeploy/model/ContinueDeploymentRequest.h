/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/DeploymentWaitType.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   */
  class ContinueDeploymentRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API ContinueDeploymentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ContinueDeployment"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The unique ID of a blue/green deployment for which you want to start
     * rerouting traffic to the replacement environment. </p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    ContinueDeploymentRequest& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the deployment's waiting period. <code>READY_WAIT</code>
     * indicates that the deployment is ready to start shifting traffic.
     * <code>TERMINATION_WAIT</code> indicates that the traffic is shifted, but the
     * original target is not terminated. </p>
     */
    inline DeploymentWaitType GetDeploymentWaitType() const { return m_deploymentWaitType; }
    inline bool DeploymentWaitTypeHasBeenSet() const { return m_deploymentWaitTypeHasBeenSet; }
    inline void SetDeploymentWaitType(DeploymentWaitType value) { m_deploymentWaitTypeHasBeenSet = true; m_deploymentWaitType = value; }
    inline ContinueDeploymentRequest& WithDeploymentWaitType(DeploymentWaitType value) { SetDeploymentWaitType(value); return *this;}
    ///@}
  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    DeploymentWaitType m_deploymentWaitType{DeploymentWaitType::NOT_SET};
    bool m_deploymentWaitTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
