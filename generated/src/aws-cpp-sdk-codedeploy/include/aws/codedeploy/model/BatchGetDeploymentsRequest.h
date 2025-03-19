/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p> Represents the input of a <code>BatchGetDeployments</code> operation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeploymentsInput">AWS
   * API Reference</a></p>
   */
  class BatchGetDeploymentsRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API BatchGetDeploymentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetDeployments"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> A list of deployment IDs, separated by spaces. The maximum number of
     * deployment IDs you can specify is 25.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeploymentIds() const { return m_deploymentIds; }
    inline bool DeploymentIdsHasBeenSet() const { return m_deploymentIdsHasBeenSet; }
    template<typename DeploymentIdsT = Aws::Vector<Aws::String>>
    void SetDeploymentIds(DeploymentIdsT&& value) { m_deploymentIdsHasBeenSet = true; m_deploymentIds = std::forward<DeploymentIdsT>(value); }
    template<typename DeploymentIdsT = Aws::Vector<Aws::String>>
    BatchGetDeploymentsRequest& WithDeploymentIds(DeploymentIdsT&& value) { SetDeploymentIds(std::forward<DeploymentIdsT>(value)); return *this;}
    template<typename DeploymentIdsT = Aws::String>
    BatchGetDeploymentsRequest& AddDeploymentIds(DeploymentIdsT&& value) { m_deploymentIdsHasBeenSet = true; m_deploymentIds.emplace_back(std::forward<DeploymentIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_deploymentIds;
    bool m_deploymentIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
