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
    AWS_CODEDEPLOY_API ListDeploymentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDeployments"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>  <p>If <code>applicationName</code> is
     * specified, then <code>deploymentGroupName</code> must be specified. If it is not
     * specified, then <code>deploymentGroupName</code> must not be specified. </p>
     * 
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>  <p>If <code>applicationName</code> is
     * specified, then <code>deploymentGroupName</code> must be specified. If it is not
     * specified, then <code>deploymentGroupName</code> must not be specified. </p>
     * 
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>  <p>If <code>applicationName</code> is
     * specified, then <code>deploymentGroupName</code> must be specified. If it is not
     * specified, then <code>deploymentGroupName</code> must not be specified. </p>
     * 
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>  <p>If <code>applicationName</code> is
     * specified, then <code>deploymentGroupName</code> must be specified. If it is not
     * specified, then <code>deploymentGroupName</code> must not be specified. </p>
     * 
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>  <p>If <code>applicationName</code> is
     * specified, then <code>deploymentGroupName</code> must be specified. If it is not
     * specified, then <code>deploymentGroupName</code> must not be specified. </p>
     * 
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>  <p>If <code>applicationName</code> is
     * specified, then <code>deploymentGroupName</code> must be specified. If it is not
     * specified, then <code>deploymentGroupName</code> must not be specified. </p>
     * 
     */
    inline ListDeploymentsRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>  <p>If <code>applicationName</code> is
     * specified, then <code>deploymentGroupName</code> must be specified. If it is not
     * specified, then <code>deploymentGroupName</code> must not be specified. </p>
     * 
     */
    inline ListDeploymentsRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>  <p>If <code>applicationName</code> is
     * specified, then <code>deploymentGroupName</code> must be specified. If it is not
     * specified, then <code>deploymentGroupName</code> must not be specified. </p>
     * 
     */
    inline ListDeploymentsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The name of a deployment group for the specified application.</p> 
     * <p>If <code>deploymentGroupName</code> is specified, then
     * <code>applicationName</code> must be specified. If it is not specified, then
     * <code>applicationName</code> must not be specified. </p> 
     */
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }

    /**
     * <p>The name of a deployment group for the specified application.</p> 
     * <p>If <code>deploymentGroupName</code> is specified, then
     * <code>applicationName</code> must be specified. If it is not specified, then
     * <code>applicationName</code> must not be specified. </p> 
     */
    inline bool DeploymentGroupNameHasBeenSet() const { return m_deploymentGroupNameHasBeenSet; }

    /**
     * <p>The name of a deployment group for the specified application.</p> 
     * <p>If <code>deploymentGroupName</code> is specified, then
     * <code>applicationName</code> must be specified. If it is not specified, then
     * <code>applicationName</code> must not be specified. </p> 
     */
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /**
     * <p>The name of a deployment group for the specified application.</p> 
     * <p>If <code>deploymentGroupName</code> is specified, then
     * <code>applicationName</code> must be specified. If it is not specified, then
     * <code>applicationName</code> must not be specified. </p> 
     */
    inline void SetDeploymentGroupName(Aws::String&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = std::move(value); }

    /**
     * <p>The name of a deployment group for the specified application.</p> 
     * <p>If <code>deploymentGroupName</code> is specified, then
     * <code>applicationName</code> must be specified. If it is not specified, then
     * <code>applicationName</code> must not be specified. </p> 
     */
    inline void SetDeploymentGroupName(const char* value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName.assign(value); }

    /**
     * <p>The name of a deployment group for the specified application.</p> 
     * <p>If <code>deploymentGroupName</code> is specified, then
     * <code>applicationName</code> must be specified. If it is not specified, then
     * <code>applicationName</code> must not be specified. </p> 
     */
    inline ListDeploymentsRequest& WithDeploymentGroupName(const Aws::String& value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p>The name of a deployment group for the specified application.</p> 
     * <p>If <code>deploymentGroupName</code> is specified, then
     * <code>applicationName</code> must be specified. If it is not specified, then
     * <code>applicationName</code> must not be specified. </p> 
     */
    inline ListDeploymentsRequest& WithDeploymentGroupName(Aws::String&& value) { SetDeploymentGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of a deployment group for the specified application.</p> 
     * <p>If <code>deploymentGroupName</code> is specified, then
     * <code>applicationName</code> must be specified. If it is not specified, then
     * <code>applicationName</code> must not be specified. </p> 
     */
    inline ListDeploymentsRequest& WithDeploymentGroupName(const char* value) { SetDeploymentGroupName(value); return *this;}


    /**
     * <p>The unique ID of an external resource for returning deployments linked to the
     * external resource.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The unique ID of an external resource for returning deployments linked to the
     * external resource.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The unique ID of an external resource for returning deployments linked to the
     * external resource.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The unique ID of an external resource for returning deployments linked to the
     * external resource.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The unique ID of an external resource for returning deployments linked to the
     * external resource.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>The unique ID of an external resource for returning deployments linked to the
     * external resource.</p>
     */
    inline ListDeploymentsRequest& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The unique ID of an external resource for returning deployments linked to the
     * external resource.</p>
     */
    inline ListDeploymentsRequest& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of an external resource for returning deployments linked to the
     * external resource.</p>
     */
    inline ListDeploymentsRequest& WithExternalId(const char* value) { SetExternalId(value); return *this;}


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
    inline const Aws::Vector<DeploymentStatus>& GetIncludeOnlyStatuses() const{ return m_includeOnlyStatuses; }

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
    inline bool IncludeOnlyStatusesHasBeenSet() const { return m_includeOnlyStatusesHasBeenSet; }

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
    inline void SetIncludeOnlyStatuses(const Aws::Vector<DeploymentStatus>& value) { m_includeOnlyStatusesHasBeenSet = true; m_includeOnlyStatuses = value; }

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
    inline void SetIncludeOnlyStatuses(Aws::Vector<DeploymentStatus>&& value) { m_includeOnlyStatusesHasBeenSet = true; m_includeOnlyStatuses = std::move(value); }

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
    inline ListDeploymentsRequest& WithIncludeOnlyStatuses(const Aws::Vector<DeploymentStatus>& value) { SetIncludeOnlyStatuses(value); return *this;}

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
    inline ListDeploymentsRequest& WithIncludeOnlyStatuses(Aws::Vector<DeploymentStatus>&& value) { SetIncludeOnlyStatuses(std::move(value)); return *this;}

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
    inline ListDeploymentsRequest& AddIncludeOnlyStatuses(const DeploymentStatus& value) { m_includeOnlyStatusesHasBeenSet = true; m_includeOnlyStatuses.push_back(value); return *this; }

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
    inline ListDeploymentsRequest& AddIncludeOnlyStatuses(DeploymentStatus&& value) { m_includeOnlyStatusesHasBeenSet = true; m_includeOnlyStatuses.push_back(std::move(value)); return *this; }


    /**
     * <p>A time range (start and end) for returning a subset of the list of
     * deployments.</p>
     */
    inline const TimeRange& GetCreateTimeRange() const{ return m_createTimeRange; }

    /**
     * <p>A time range (start and end) for returning a subset of the list of
     * deployments.</p>
     */
    inline bool CreateTimeRangeHasBeenSet() const { return m_createTimeRangeHasBeenSet; }

    /**
     * <p>A time range (start and end) for returning a subset of the list of
     * deployments.</p>
     */
    inline void SetCreateTimeRange(const TimeRange& value) { m_createTimeRangeHasBeenSet = true; m_createTimeRange = value; }

    /**
     * <p>A time range (start and end) for returning a subset of the list of
     * deployments.</p>
     */
    inline void SetCreateTimeRange(TimeRange&& value) { m_createTimeRangeHasBeenSet = true; m_createTimeRange = std::move(value); }

    /**
     * <p>A time range (start and end) for returning a subset of the list of
     * deployments.</p>
     */
    inline ListDeploymentsRequest& WithCreateTimeRange(const TimeRange& value) { SetCreateTimeRange(value); return *this;}

    /**
     * <p>A time range (start and end) for returning a subset of the list of
     * deployments.</p>
     */
    inline ListDeploymentsRequest& WithCreateTimeRange(TimeRange&& value) { SetCreateTimeRange(std::move(value)); return *this;}


    /**
     * <p>An identifier returned from the previous list deployments call. It can be
     * used to return the next set of deployments in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier returned from the previous list deployments call. It can be
     * used to return the next set of deployments in the list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An identifier returned from the previous list deployments call. It can be
     * used to return the next set of deployments in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier returned from the previous list deployments call. It can be
     * used to return the next set of deployments in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An identifier returned from the previous list deployments call. It can be
     * used to return the next set of deployments in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An identifier returned from the previous list deployments call. It can be
     * used to return the next set of deployments in the list.</p>
     */
    inline ListDeploymentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier returned from the previous list deployments call. It can be
     * used to return the next set of deployments in the list.</p>
     */
    inline ListDeploymentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier returned from the previous list deployments call. It can be
     * used to return the next set of deployments in the list.</p>
     */
    inline ListDeploymentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

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
