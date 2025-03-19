/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/DeploymentTarget.h>
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
  class BatchGetDeploymentTargetsResult
  {
  public:
    AWS_CODEDEPLOY_API BatchGetDeploymentTargetsResult() = default;
    AWS_CODEDEPLOY_API BatchGetDeploymentTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API BatchGetDeploymentTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of target objects for a deployment. Each target object contains
     * details about the target, such as its status and lifecycle events. The type of
     * the target objects depends on the deployment' compute platform. </p> <ul> <li>
     * <p> <b>EC2/On-premises</b>: Each target object is an Amazon EC2 or on-premises
     * instance. </p> </li> <li> <p> <b>Lambda</b>: The target object is a specific
     * version of an Lambda function. </p> </li> <li> <p> <b>Amazon ECS</b>: The target
     * object is an Amazon ECS service. </p> </li> <li> <p> <b>CloudFormation</b>: The
     * target object is an CloudFormation blue/green deployment. </p> </li> </ul>
     */
    inline const Aws::Vector<DeploymentTarget>& GetDeploymentTargets() const { return m_deploymentTargets; }
    template<typename DeploymentTargetsT = Aws::Vector<DeploymentTarget>>
    void SetDeploymentTargets(DeploymentTargetsT&& value) { m_deploymentTargetsHasBeenSet = true; m_deploymentTargets = std::forward<DeploymentTargetsT>(value); }
    template<typename DeploymentTargetsT = Aws::Vector<DeploymentTarget>>
    BatchGetDeploymentTargetsResult& WithDeploymentTargets(DeploymentTargetsT&& value) { SetDeploymentTargets(std::forward<DeploymentTargetsT>(value)); return *this;}
    template<typename DeploymentTargetsT = DeploymentTarget>
    BatchGetDeploymentTargetsResult& AddDeploymentTargets(DeploymentTargetsT&& value) { m_deploymentTargetsHasBeenSet = true; m_deploymentTargets.emplace_back(std::forward<DeploymentTargetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetDeploymentTargetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeploymentTarget> m_deploymentTargets;
    bool m_deploymentTargetsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
