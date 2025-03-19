/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/codedeploy/model/TargetFilterName.h>
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
  class ListDeploymentTargetsRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API ListDeploymentTargetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDeploymentTargets"; }

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
    ListDeploymentTargetsRequest& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A token identifier returned from the previous
     * <code>ListDeploymentTargets</code> call. It can be used to return the next set
     * of deployment targets in the list. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDeploymentTargetsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A key used to filter the returned targets. The two valid values are:</p>
     * <ul> <li> <p> <code>TargetStatus</code> - A <code>TargetStatus</code> filter
     * string can be <code>Failed</code>, <code>InProgress</code>,
     * <code>Pending</code>, <code>Ready</code>, <code>Skipped</code>,
     * <code>Succeeded</code>, or <code>Unknown</code>. </p> </li> <li> <p>
     * <code>ServerInstanceLabel</code> - A <code>ServerInstanceLabel</code> filter
     * string can be <code>Blue</code> or <code>Green</code>. </p> </li> </ul>
     */
    inline const Aws::Map<TargetFilterName, Aws::Vector<Aws::String>>& GetTargetFilters() const { return m_targetFilters; }
    inline bool TargetFiltersHasBeenSet() const { return m_targetFiltersHasBeenSet; }
    template<typename TargetFiltersT = Aws::Map<TargetFilterName, Aws::Vector<Aws::String>>>
    void SetTargetFilters(TargetFiltersT&& value) { m_targetFiltersHasBeenSet = true; m_targetFilters = std::forward<TargetFiltersT>(value); }
    template<typename TargetFiltersT = Aws::Map<TargetFilterName, Aws::Vector<Aws::String>>>
    ListDeploymentTargetsRequest& WithTargetFilters(TargetFiltersT&& value) { SetTargetFilters(std::forward<TargetFiltersT>(value)); return *this;}
    inline ListDeploymentTargetsRequest& AddTargetFilters(TargetFilterName key, Aws::Vector<Aws::String> value) {
      m_targetFiltersHasBeenSet = true; m_targetFilters.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Map<TargetFilterName, Aws::Vector<Aws::String>> m_targetFilters;
    bool m_targetFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
