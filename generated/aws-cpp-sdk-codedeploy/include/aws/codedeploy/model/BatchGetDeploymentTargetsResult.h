﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_CODEDEPLOY_API BatchGetDeploymentTargetsResult
  {
  public:
    BatchGetDeploymentTargetsResult();
    BatchGetDeploymentTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetDeploymentTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of target objects for a deployment. Each target object contains
     * details about the target, such as its status and lifecycle events. The type of
     * the target objects depends on the deployment' compute platform. </p> <ul> <li>
     * <p> <b>EC2/On-premises</b>: Each target object is an EC2 or on-premises
     * instance. </p> </li> <li> <p> <b>AWS Lambda</b>: The target object is a specific
     * version of an AWS Lambda function. </p> </li> <li> <p> <b>Amazon ECS</b>: The
     * target object is an Amazon ECS service. </p> </li> <li> <p>
     * <b>CloudFormation</b>: The target object is an AWS CloudFormation blue/green
     * deployment. </p> </li> </ul>
     */
    inline const Aws::Vector<DeploymentTarget>& GetDeploymentTargets() const{ return m_deploymentTargets; }

    /**
     * <p> A list of target objects for a deployment. Each target object contains
     * details about the target, such as its status and lifecycle events. The type of
     * the target objects depends on the deployment' compute platform. </p> <ul> <li>
     * <p> <b>EC2/On-premises</b>: Each target object is an EC2 or on-premises
     * instance. </p> </li> <li> <p> <b>AWS Lambda</b>: The target object is a specific
     * version of an AWS Lambda function. </p> </li> <li> <p> <b>Amazon ECS</b>: The
     * target object is an Amazon ECS service. </p> </li> <li> <p>
     * <b>CloudFormation</b>: The target object is an AWS CloudFormation blue/green
     * deployment. </p> </li> </ul>
     */
    inline void SetDeploymentTargets(const Aws::Vector<DeploymentTarget>& value) { m_deploymentTargets = value; }

    /**
     * <p> A list of target objects for a deployment. Each target object contains
     * details about the target, such as its status and lifecycle events. The type of
     * the target objects depends on the deployment' compute platform. </p> <ul> <li>
     * <p> <b>EC2/On-premises</b>: Each target object is an EC2 or on-premises
     * instance. </p> </li> <li> <p> <b>AWS Lambda</b>: The target object is a specific
     * version of an AWS Lambda function. </p> </li> <li> <p> <b>Amazon ECS</b>: The
     * target object is an Amazon ECS service. </p> </li> <li> <p>
     * <b>CloudFormation</b>: The target object is an AWS CloudFormation blue/green
     * deployment. </p> </li> </ul>
     */
    inline void SetDeploymentTargets(Aws::Vector<DeploymentTarget>&& value) { m_deploymentTargets = std::move(value); }

    /**
     * <p> A list of target objects for a deployment. Each target object contains
     * details about the target, such as its status and lifecycle events. The type of
     * the target objects depends on the deployment' compute platform. </p> <ul> <li>
     * <p> <b>EC2/On-premises</b>: Each target object is an EC2 or on-premises
     * instance. </p> </li> <li> <p> <b>AWS Lambda</b>: The target object is a specific
     * version of an AWS Lambda function. </p> </li> <li> <p> <b>Amazon ECS</b>: The
     * target object is an Amazon ECS service. </p> </li> <li> <p>
     * <b>CloudFormation</b>: The target object is an AWS CloudFormation blue/green
     * deployment. </p> </li> </ul>
     */
    inline BatchGetDeploymentTargetsResult& WithDeploymentTargets(const Aws::Vector<DeploymentTarget>& value) { SetDeploymentTargets(value); return *this;}

    /**
     * <p> A list of target objects for a deployment. Each target object contains
     * details about the target, such as its status and lifecycle events. The type of
     * the target objects depends on the deployment' compute platform. </p> <ul> <li>
     * <p> <b>EC2/On-premises</b>: Each target object is an EC2 or on-premises
     * instance. </p> </li> <li> <p> <b>AWS Lambda</b>: The target object is a specific
     * version of an AWS Lambda function. </p> </li> <li> <p> <b>Amazon ECS</b>: The
     * target object is an Amazon ECS service. </p> </li> <li> <p>
     * <b>CloudFormation</b>: The target object is an AWS CloudFormation blue/green
     * deployment. </p> </li> </ul>
     */
    inline BatchGetDeploymentTargetsResult& WithDeploymentTargets(Aws::Vector<DeploymentTarget>&& value) { SetDeploymentTargets(std::move(value)); return *this;}

    /**
     * <p> A list of target objects for a deployment. Each target object contains
     * details about the target, such as its status and lifecycle events. The type of
     * the target objects depends on the deployment' compute platform. </p> <ul> <li>
     * <p> <b>EC2/On-premises</b>: Each target object is an EC2 or on-premises
     * instance. </p> </li> <li> <p> <b>AWS Lambda</b>: The target object is a specific
     * version of an AWS Lambda function. </p> </li> <li> <p> <b>Amazon ECS</b>: The
     * target object is an Amazon ECS service. </p> </li> <li> <p>
     * <b>CloudFormation</b>: The target object is an AWS CloudFormation blue/green
     * deployment. </p> </li> </ul>
     */
    inline BatchGetDeploymentTargetsResult& AddDeploymentTargets(const DeploymentTarget& value) { m_deploymentTargets.push_back(value); return *this; }

    /**
     * <p> A list of target objects for a deployment. Each target object contains
     * details about the target, such as its status and lifecycle events. The type of
     * the target objects depends on the deployment' compute platform. </p> <ul> <li>
     * <p> <b>EC2/On-premises</b>: Each target object is an EC2 or on-premises
     * instance. </p> </li> <li> <p> <b>AWS Lambda</b>: The target object is a specific
     * version of an AWS Lambda function. </p> </li> <li> <p> <b>Amazon ECS</b>: The
     * target object is an Amazon ECS service. </p> </li> <li> <p>
     * <b>CloudFormation</b>: The target object is an AWS CloudFormation blue/green
     * deployment. </p> </li> </ul>
     */
    inline BatchGetDeploymentTargetsResult& AddDeploymentTargets(DeploymentTarget&& value) { m_deploymentTargets.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DeploymentTarget> m_deploymentTargets;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
