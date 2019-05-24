/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   */
  class AWS_CODEDEPLOY_API BatchGetDeploymentTargetsRequest : public CodeDeployRequest
  {
  public:
    BatchGetDeploymentTargetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetDeploymentTargets"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline BatchGetDeploymentTargetsRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline BatchGetDeploymentTargetsRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline BatchGetDeploymentTargetsRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p> The unique IDs of the deployment targets. The compute platform of the
     * deployment determines the type of the targets and their formats. The maximum
     * number of deployment target IDs you can specify is 25.</p> <ul> <li> <p> For
     * deployments that use the EC2/On-premises compute platform, the target IDs are
     * EC2 or on-premises instances IDs, and their target type is
     * <code>instanceTarget</code>. </p> </li> <li> <p> For deployments that use the
     * AWS Lambda compute platform, the target IDs are the names of Lambda functions,
     * and their target type is <code>instanceTarget</code>. </p> </li> <li> <p> For
     * deployments that use the Amazon ECS compute platform, the target IDs are pairs
     * of Amazon ECS clusters and services specified using the format
     * <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. Their target type is
     * <code>ecsTarget</code>. </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetTargetIds() const{ return m_targetIds; }

    /**
     * <p> The unique IDs of the deployment targets. The compute platform of the
     * deployment determines the type of the targets and their formats. The maximum
     * number of deployment target IDs you can specify is 25.</p> <ul> <li> <p> For
     * deployments that use the EC2/On-premises compute platform, the target IDs are
     * EC2 or on-premises instances IDs, and their target type is
     * <code>instanceTarget</code>. </p> </li> <li> <p> For deployments that use the
     * AWS Lambda compute platform, the target IDs are the names of Lambda functions,
     * and their target type is <code>instanceTarget</code>. </p> </li> <li> <p> For
     * deployments that use the Amazon ECS compute platform, the target IDs are pairs
     * of Amazon ECS clusters and services specified using the format
     * <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. Their target type is
     * <code>ecsTarget</code>. </p> </li> </ul>
     */
    inline bool TargetIdsHasBeenSet() const { return m_targetIdsHasBeenSet; }

    /**
     * <p> The unique IDs of the deployment targets. The compute platform of the
     * deployment determines the type of the targets and their formats. The maximum
     * number of deployment target IDs you can specify is 25.</p> <ul> <li> <p> For
     * deployments that use the EC2/On-premises compute platform, the target IDs are
     * EC2 or on-premises instances IDs, and their target type is
     * <code>instanceTarget</code>. </p> </li> <li> <p> For deployments that use the
     * AWS Lambda compute platform, the target IDs are the names of Lambda functions,
     * and their target type is <code>instanceTarget</code>. </p> </li> <li> <p> For
     * deployments that use the Amazon ECS compute platform, the target IDs are pairs
     * of Amazon ECS clusters and services specified using the format
     * <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. Their target type is
     * <code>ecsTarget</code>. </p> </li> </ul>
     */
    inline void SetTargetIds(const Aws::Vector<Aws::String>& value) { m_targetIdsHasBeenSet = true; m_targetIds = value; }

    /**
     * <p> The unique IDs of the deployment targets. The compute platform of the
     * deployment determines the type of the targets and their formats. The maximum
     * number of deployment target IDs you can specify is 25.</p> <ul> <li> <p> For
     * deployments that use the EC2/On-premises compute platform, the target IDs are
     * EC2 or on-premises instances IDs, and their target type is
     * <code>instanceTarget</code>. </p> </li> <li> <p> For deployments that use the
     * AWS Lambda compute platform, the target IDs are the names of Lambda functions,
     * and their target type is <code>instanceTarget</code>. </p> </li> <li> <p> For
     * deployments that use the Amazon ECS compute platform, the target IDs are pairs
     * of Amazon ECS clusters and services specified using the format
     * <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. Their target type is
     * <code>ecsTarget</code>. </p> </li> </ul>
     */
    inline void SetTargetIds(Aws::Vector<Aws::String>&& value) { m_targetIdsHasBeenSet = true; m_targetIds = std::move(value); }

    /**
     * <p> The unique IDs of the deployment targets. The compute platform of the
     * deployment determines the type of the targets and their formats. The maximum
     * number of deployment target IDs you can specify is 25.</p> <ul> <li> <p> For
     * deployments that use the EC2/On-premises compute platform, the target IDs are
     * EC2 or on-premises instances IDs, and their target type is
     * <code>instanceTarget</code>. </p> </li> <li> <p> For deployments that use the
     * AWS Lambda compute platform, the target IDs are the names of Lambda functions,
     * and their target type is <code>instanceTarget</code>. </p> </li> <li> <p> For
     * deployments that use the Amazon ECS compute platform, the target IDs are pairs
     * of Amazon ECS clusters and services specified using the format
     * <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. Their target type is
     * <code>ecsTarget</code>. </p> </li> </ul>
     */
    inline BatchGetDeploymentTargetsRequest& WithTargetIds(const Aws::Vector<Aws::String>& value) { SetTargetIds(value); return *this;}

    /**
     * <p> The unique IDs of the deployment targets. The compute platform of the
     * deployment determines the type of the targets and their formats. The maximum
     * number of deployment target IDs you can specify is 25.</p> <ul> <li> <p> For
     * deployments that use the EC2/On-premises compute platform, the target IDs are
     * EC2 or on-premises instances IDs, and their target type is
     * <code>instanceTarget</code>. </p> </li> <li> <p> For deployments that use the
     * AWS Lambda compute platform, the target IDs are the names of Lambda functions,
     * and their target type is <code>instanceTarget</code>. </p> </li> <li> <p> For
     * deployments that use the Amazon ECS compute platform, the target IDs are pairs
     * of Amazon ECS clusters and services specified using the format
     * <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. Their target type is
     * <code>ecsTarget</code>. </p> </li> </ul>
     */
    inline BatchGetDeploymentTargetsRequest& WithTargetIds(Aws::Vector<Aws::String>&& value) { SetTargetIds(std::move(value)); return *this;}

    /**
     * <p> The unique IDs of the deployment targets. The compute platform of the
     * deployment determines the type of the targets and their formats. The maximum
     * number of deployment target IDs you can specify is 25.</p> <ul> <li> <p> For
     * deployments that use the EC2/On-premises compute platform, the target IDs are
     * EC2 or on-premises instances IDs, and their target type is
     * <code>instanceTarget</code>. </p> </li> <li> <p> For deployments that use the
     * AWS Lambda compute platform, the target IDs are the names of Lambda functions,
     * and their target type is <code>instanceTarget</code>. </p> </li> <li> <p> For
     * deployments that use the Amazon ECS compute platform, the target IDs are pairs
     * of Amazon ECS clusters and services specified using the format
     * <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. Their target type is
     * <code>ecsTarget</code>. </p> </li> </ul>
     */
    inline BatchGetDeploymentTargetsRequest& AddTargetIds(const Aws::String& value) { m_targetIdsHasBeenSet = true; m_targetIds.push_back(value); return *this; }

    /**
     * <p> The unique IDs of the deployment targets. The compute platform of the
     * deployment determines the type of the targets and their formats. The maximum
     * number of deployment target IDs you can specify is 25.</p> <ul> <li> <p> For
     * deployments that use the EC2/On-premises compute platform, the target IDs are
     * EC2 or on-premises instances IDs, and their target type is
     * <code>instanceTarget</code>. </p> </li> <li> <p> For deployments that use the
     * AWS Lambda compute platform, the target IDs are the names of Lambda functions,
     * and their target type is <code>instanceTarget</code>. </p> </li> <li> <p> For
     * deployments that use the Amazon ECS compute platform, the target IDs are pairs
     * of Amazon ECS clusters and services specified using the format
     * <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. Their target type is
     * <code>ecsTarget</code>. </p> </li> </ul>
     */
    inline BatchGetDeploymentTargetsRequest& AddTargetIds(Aws::String&& value) { m_targetIdsHasBeenSet = true; m_targetIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The unique IDs of the deployment targets. The compute platform of the
     * deployment determines the type of the targets and their formats. The maximum
     * number of deployment target IDs you can specify is 25.</p> <ul> <li> <p> For
     * deployments that use the EC2/On-premises compute platform, the target IDs are
     * EC2 or on-premises instances IDs, and their target type is
     * <code>instanceTarget</code>. </p> </li> <li> <p> For deployments that use the
     * AWS Lambda compute platform, the target IDs are the names of Lambda functions,
     * and their target type is <code>instanceTarget</code>. </p> </li> <li> <p> For
     * deployments that use the Amazon ECS compute platform, the target IDs are pairs
     * of Amazon ECS clusters and services specified using the format
     * <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. Their target type is
     * <code>ecsTarget</code>. </p> </li> </ul>
     */
    inline BatchGetDeploymentTargetsRequest& AddTargetIds(const char* value) { m_targetIdsHasBeenSet = true; m_targetIds.push_back(value); return *this; }

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    Aws::Vector<Aws::String> m_targetIds;
    bool m_targetIdsHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
