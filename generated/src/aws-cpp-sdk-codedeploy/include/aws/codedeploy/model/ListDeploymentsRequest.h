/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/TimeRange.h>
#include <aws/codedeploy/model/DeploymentStatus.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>ListDeployments</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentsInput">AWS
   * API Reference</a></p>
   */
  class ListDeploymentsRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API ListDeploymentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDeployments"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of an CodeDeploy application associated with the user or Amazon Web
     * Services account.</p>  <p>If <code>applicationName</code> is specified,
     * then <code>deploymentGroupName</code> must be specified. If it is not specified,
     * then <code>deploymentGroupName</code> must not be specified. </p> 
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    ListDeploymentsRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a deployment group for the specified application.</p> 
     * <p>If <code>deploymentGroupName</code> is specified, then
     * <code>applicationName</code> must be specified. If it is not specified, then
     * <code>applicationName</code> must not be specified. </p> 
     */
    inline const Aws::String& GetDeploymentGroupName() const { return m_deploymentGroupName; }
    inline bool DeploymentGroupNameHasBeenSet() const { return m_deploymentGroupNameHasBeenSet; }
    template<typename DeploymentGroupNameT = Aws::String>
    void SetDeploymentGroupName(DeploymentGroupNameT&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = std::forward<DeploymentGroupNameT>(value); }
    template<typename DeploymentGroupNameT = Aws::String>
    ListDeploymentsRequest& WithDeploymentGroupName(DeploymentGroupNameT&& value) { SetDeploymentGroupName(std::forward<DeploymentGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of an external resource for returning deployments linked to the
     * external resource.</p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    ListDeploymentsRequest& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subset of deployments to list by status:</p> <ul> <li> <p>
     * <code>Created</code>: Include created deployments in the resulting list.</p>
     * </li> <li> <p> <code>Queued</code>: Include queued deployments in the resulting
     * list.</p> </li> <li> <p> <code>In Progress</code>: Include in-progress
     * deployments in the resulting list.</p> </li> <li> <p> <code>Succeeded</code>:
     * Include successful deployments in the resulting list.</p> </li> <li> <p>
     * <code>Failed</code>: Include failed deployments in the resulting list.</p> </li>
     * <li> <p> <code>Stopped</code>: Include stopped deployments in the resulting
     * list.</p> </li> </ul>
     */
    inline const Aws::Vector<DeploymentStatus>& GetIncludeOnlyStatuses() const { return m_includeOnlyStatuses; }
    inline bool IncludeOnlyStatusesHasBeenSet() const { return m_includeOnlyStatusesHasBeenSet; }
    template<typename IncludeOnlyStatusesT = Aws::Vector<DeploymentStatus>>
    void SetIncludeOnlyStatuses(IncludeOnlyStatusesT&& value) { m_includeOnlyStatusesHasBeenSet = true; m_includeOnlyStatuses = std::forward<IncludeOnlyStatusesT>(value); }
    template<typename IncludeOnlyStatusesT = Aws::Vector<DeploymentStatus>>
    ListDeploymentsRequest& WithIncludeOnlyStatuses(IncludeOnlyStatusesT&& value) { SetIncludeOnlyStatuses(std::forward<IncludeOnlyStatusesT>(value)); return *this;}
    inline ListDeploymentsRequest& AddIncludeOnlyStatuses(DeploymentStatus value) { m_includeOnlyStatusesHasBeenSet = true; m_includeOnlyStatuses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A time range (start and end) for returning a subset of the list of
     * deployments.</p>
     */
    inline const TimeRange& GetCreateTimeRange() const { return m_createTimeRange; }
    inline bool CreateTimeRangeHasBeenSet() const { return m_createTimeRangeHasBeenSet; }
    template<typename CreateTimeRangeT = TimeRange>
    void SetCreateTimeRange(CreateTimeRangeT&& value) { m_createTimeRangeHasBeenSet = true; m_createTimeRange = std::forward<CreateTimeRangeT>(value); }
    template<typename CreateTimeRangeT = TimeRange>
    ListDeploymentsRequest& WithCreateTimeRange(CreateTimeRangeT&& value) { SetCreateTimeRange(std::forward<CreateTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier returned from the previous list deployments call. It can be
     * used to return the next set of deployments in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDeploymentsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_deploymentGroupName;
    bool m_deploymentGroupNameHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::Vector<DeploymentStatus> m_includeOnlyStatuses;
    bool m_includeOnlyStatusesHasBeenSet = false;

    TimeRange m_createTimeRange;
    bool m_createTimeRangeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
