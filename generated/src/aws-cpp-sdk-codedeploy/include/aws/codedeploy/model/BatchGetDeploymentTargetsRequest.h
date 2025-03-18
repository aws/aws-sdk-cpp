/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BatchGetDeploymentTargetsRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API BatchGetDeploymentTargetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetDeploymentTargets"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    BatchGetDeploymentTargetsRequest& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique IDs of the deployment targets. The compute platform of the
     * deployment determines the type of the targets and their formats. The maximum
     * number of deployment target IDs you can specify is 25.</p> <ul> <li> <p> For
     * deployments that use the EC2/On-premises compute platform, the target IDs are
     * Amazon EC2 or on-premises instances IDs, and their target type is
     * <code>instanceTarget</code>. </p> </li> <li> <p> For deployments that use the
     * Lambda compute platform, the target IDs are the names of Lambda functions, and
     * their target type is <code>instanceTarget</code>. </p> </li> <li> <p> For
     * deployments that use the Amazon ECS compute platform, the target IDs are pairs
     * of Amazon ECS clusters and services specified using the format
     * <code>&lt;clustername&gt;:&lt;servicename&gt;</code>. Their target type is
     * <code>ecsTarget</code>. </p> </li> <li> <p> For deployments that are deployed
     * with CloudFormation, the target IDs are CloudFormation stack IDs. Their target
     * type is <code>cloudFormationTarget</code>. </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetTargetIds() const { return m_targetIds; }
    inline bool TargetIdsHasBeenSet() const { return m_targetIdsHasBeenSet; }
    template<typename TargetIdsT = Aws::Vector<Aws::String>>
    void SetTargetIds(TargetIdsT&& value) { m_targetIdsHasBeenSet = true; m_targetIds = std::forward<TargetIdsT>(value); }
    template<typename TargetIdsT = Aws::Vector<Aws::String>>
    BatchGetDeploymentTargetsRequest& WithTargetIds(TargetIdsT&& value) { SetTargetIds(std::forward<TargetIdsT>(value)); return *this;}
    template<typename TargetIdsT = Aws::String>
    BatchGetDeploymentTargetsRequest& AddTargetIds(TargetIdsT&& value) { m_targetIdsHasBeenSet = true; m_targetIds.emplace_back(std::forward<TargetIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetIds;
    bool m_targetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
