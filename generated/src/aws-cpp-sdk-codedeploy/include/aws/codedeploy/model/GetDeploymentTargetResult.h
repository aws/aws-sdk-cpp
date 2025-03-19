/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/DeploymentTarget.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{
  class GetDeploymentTargetResult
  {
  public:
    AWS_CODEDEPLOY_API GetDeploymentTargetResult() = default;
    AWS_CODEDEPLOY_API GetDeploymentTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API GetDeploymentTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A deployment target that contains information about a deployment such as its
     * status, lifecycle events, and when it was last updated. It also contains
     * metadata about the deployment target. The deployment target metadata depends on
     * the deployment target's type (<code>instanceTarget</code>,
     * <code>lambdaTarget</code>, or <code>ecsTarget</code>). </p>
     */
    inline const DeploymentTarget& GetDeploymentTarget() const { return m_deploymentTarget; }
    template<typename DeploymentTargetT = DeploymentTarget>
    void SetDeploymentTarget(DeploymentTargetT&& value) { m_deploymentTargetHasBeenSet = true; m_deploymentTarget = std::forward<DeploymentTargetT>(value); }
    template<typename DeploymentTargetT = DeploymentTarget>
    GetDeploymentTargetResult& WithDeploymentTarget(DeploymentTargetT&& value) { SetDeploymentTarget(std::forward<DeploymentTargetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeploymentTargetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DeploymentTarget m_deploymentTarget;
    bool m_deploymentTargetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
