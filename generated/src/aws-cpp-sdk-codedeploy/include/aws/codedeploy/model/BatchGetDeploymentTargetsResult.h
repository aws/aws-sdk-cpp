﻿/**
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
    AWS_CODEDEPLOY_API BatchGetDeploymentTargetsResult();
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
    inline const Aws::Vector<DeploymentTarget>& GetDeploymentTargets() const{ return m_deploymentTargets; }
    inline void SetDeploymentTargets(const Aws::Vector<DeploymentTarget>& value) { m_deploymentTargets = value; }
    inline void SetDeploymentTargets(Aws::Vector<DeploymentTarget>&& value) { m_deploymentTargets = std::move(value); }
    inline BatchGetDeploymentTargetsResult& WithDeploymentTargets(const Aws::Vector<DeploymentTarget>& value) { SetDeploymentTargets(value); return *this;}
    inline BatchGetDeploymentTargetsResult& WithDeploymentTargets(Aws::Vector<DeploymentTarget>&& value) { SetDeploymentTargets(std::move(value)); return *this;}
    inline BatchGetDeploymentTargetsResult& AddDeploymentTargets(const DeploymentTarget& value) { m_deploymentTargets.push_back(value); return *this; }
    inline BatchGetDeploymentTargetsResult& AddDeploymentTargets(DeploymentTarget&& value) { m_deploymentTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetDeploymentTargetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetDeploymentTargetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetDeploymentTargetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DeploymentTarget> m_deploymentTargets;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
