/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/model/TimeRange.h>
#include <aws/codedeploy/model/DeploymentStatus.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a list deployments operation.</p>
   */
  class AWS_CODEDEPLOY_API ListDeploymentsRequest : public CodeDeployRequest
  {
  public:
    ListDeploymentsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline ListDeploymentsRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline ListDeploymentsRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline ListDeploymentsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an existing deployment group for the specified application.</p>
     */
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }

    /**
     * <p>The name of an existing deployment group for the specified application.</p>
     */
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /**
     * <p>The name of an existing deployment group for the specified application.</p>
     */
    inline void SetDeploymentGroupName(Aws::String&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /**
     * <p>The name of an existing deployment group for the specified application.</p>
     */
    inline void SetDeploymentGroupName(const char* value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName.assign(value); }

    /**
     * <p>The name of an existing deployment group for the specified application.</p>
     */
    inline ListDeploymentsRequest& WithDeploymentGroupName(const Aws::String& value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p>The name of an existing deployment group for the specified application.</p>
     */
    inline ListDeploymentsRequest& WithDeploymentGroupName(Aws::String&& value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p>The name of an existing deployment group for the specified application.</p>
     */
    inline ListDeploymentsRequest& WithDeploymentGroupName(const char* value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p>A subset of deployments to list by status:</p> <ul> <li> <p>Created: Include
     * created deployments in the resulting list.</p> </li> <li> <p>Queued: Include
     * queued deployments in the resulting list.</p> </li> <li> <p>In Progress: Include
     * in-progress deployments in the resulting list.</p> </li> <li> <p>Succeeded:
     * Include successful deployments in the resulting list.</p> </li> <li> <p>Failed:
     * Include failed deployments in the resulting list.</p> </li> <li> <p>Stopped:
     * Include stopped deployments in the resulting list.</p> </li> </ul>
     */
    inline const Aws::Vector<DeploymentStatus>& GetIncludeOnlyStatuses() const{ return m_includeOnlyStatuses; }

    /**
     * <p>A subset of deployments to list by status:</p> <ul> <li> <p>Created: Include
     * created deployments in the resulting list.</p> </li> <li> <p>Queued: Include
     * queued deployments in the resulting list.</p> </li> <li> <p>In Progress: Include
     * in-progress deployments in the resulting list.</p> </li> <li> <p>Succeeded:
     * Include successful deployments in the resulting list.</p> </li> <li> <p>Failed:
     * Include failed deployments in the resulting list.</p> </li> <li> <p>Stopped:
     * Include stopped deployments in the resulting list.</p> </li> </ul>
     */
    inline void SetIncludeOnlyStatuses(const Aws::Vector<DeploymentStatus>& value) { m_includeOnlyStatusesHasBeenSet = true; m_includeOnlyStatuses = value; }

    /**
     * <p>A subset of deployments to list by status:</p> <ul> <li> <p>Created: Include
     * created deployments in the resulting list.</p> </li> <li> <p>Queued: Include
     * queued deployments in the resulting list.</p> </li> <li> <p>In Progress: Include
     * in-progress deployments in the resulting list.</p> </li> <li> <p>Succeeded:
     * Include successful deployments in the resulting list.</p> </li> <li> <p>Failed:
     * Include failed deployments in the resulting list.</p> </li> <li> <p>Stopped:
     * Include stopped deployments in the resulting list.</p> </li> </ul>
     */
    inline void SetIncludeOnlyStatuses(Aws::Vector<DeploymentStatus>&& value) { m_includeOnlyStatusesHasBeenSet = true; m_includeOnlyStatuses = value; }

    /**
     * <p>A subset of deployments to list by status:</p> <ul> <li> <p>Created: Include
     * created deployments in the resulting list.</p> </li> <li> <p>Queued: Include
     * queued deployments in the resulting list.</p> </li> <li> <p>In Progress: Include
     * in-progress deployments in the resulting list.</p> </li> <li> <p>Succeeded:
     * Include successful deployments in the resulting list.</p> </li> <li> <p>Failed:
     * Include failed deployments in the resulting list.</p> </li> <li> <p>Stopped:
     * Include stopped deployments in the resulting list.</p> </li> </ul>
     */
    inline ListDeploymentsRequest& WithIncludeOnlyStatuses(const Aws::Vector<DeploymentStatus>& value) { SetIncludeOnlyStatuses(value); return *this;}

    /**
     * <p>A subset of deployments to list by status:</p> <ul> <li> <p>Created: Include
     * created deployments in the resulting list.</p> </li> <li> <p>Queued: Include
     * queued deployments in the resulting list.</p> </li> <li> <p>In Progress: Include
     * in-progress deployments in the resulting list.</p> </li> <li> <p>Succeeded:
     * Include successful deployments in the resulting list.</p> </li> <li> <p>Failed:
     * Include failed deployments in the resulting list.</p> </li> <li> <p>Stopped:
     * Include stopped deployments in the resulting list.</p> </li> </ul>
     */
    inline ListDeploymentsRequest& WithIncludeOnlyStatuses(Aws::Vector<DeploymentStatus>&& value) { SetIncludeOnlyStatuses(value); return *this;}

    /**
     * <p>A subset of deployments to list by status:</p> <ul> <li> <p>Created: Include
     * created deployments in the resulting list.</p> </li> <li> <p>Queued: Include
     * queued deployments in the resulting list.</p> </li> <li> <p>In Progress: Include
     * in-progress deployments in the resulting list.</p> </li> <li> <p>Succeeded:
     * Include successful deployments in the resulting list.</p> </li> <li> <p>Failed:
     * Include failed deployments in the resulting list.</p> </li> <li> <p>Stopped:
     * Include stopped deployments in the resulting list.</p> </li> </ul>
     */
    inline ListDeploymentsRequest& AddIncludeOnlyStatuses(const DeploymentStatus& value) { m_includeOnlyStatusesHasBeenSet = true; m_includeOnlyStatuses.push_back(value); return *this; }

    /**
     * <p>A subset of deployments to list by status:</p> <ul> <li> <p>Created: Include
     * created deployments in the resulting list.</p> </li> <li> <p>Queued: Include
     * queued deployments in the resulting list.</p> </li> <li> <p>In Progress: Include
     * in-progress deployments in the resulting list.</p> </li> <li> <p>Succeeded:
     * Include successful deployments in the resulting list.</p> </li> <li> <p>Failed:
     * Include failed deployments in the resulting list.</p> </li> <li> <p>Stopped:
     * Include stopped deployments in the resulting list.</p> </li> </ul>
     */
    inline ListDeploymentsRequest& AddIncludeOnlyStatuses(DeploymentStatus&& value) { m_includeOnlyStatusesHasBeenSet = true; m_includeOnlyStatuses.push_back(value); return *this; }

    /**
     * <p>A time range (start and end) for returning a subset of the list of
     * deployments.</p>
     */
    inline const TimeRange& GetCreateTimeRange() const{ return m_createTimeRange; }

    /**
     * <p>A time range (start and end) for returning a subset of the list of
     * deployments.</p>
     */
    inline void SetCreateTimeRange(const TimeRange& value) { m_createTimeRangeHasBeenSet = true; m_createTimeRange = value; }

    /**
     * <p>A time range (start and end) for returning a subset of the list of
     * deployments.</p>
     */
    inline void SetCreateTimeRange(TimeRange&& value) { m_createTimeRangeHasBeenSet = true; m_createTimeRange = value; }

    /**
     * <p>A time range (start and end) for returning a subset of the list of
     * deployments.</p>
     */
    inline ListDeploymentsRequest& WithCreateTimeRange(const TimeRange& value) { SetCreateTimeRange(value); return *this;}

    /**
     * <p>A time range (start and end) for returning a subset of the list of
     * deployments.</p>
     */
    inline ListDeploymentsRequest& WithCreateTimeRange(TimeRange&& value) { SetCreateTimeRange(value); return *this;}

    /**
     * <p>An identifier returned from the previous list deployments call. It can be
     * used to return the next set of deployments in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier returned from the previous list deployments call. It can be
     * used to return the next set of deployments in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier returned from the previous list deployments call. It can be
     * used to return the next set of deployments in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

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
    inline ListDeploymentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier returned from the previous list deployments call. It can be
     * used to return the next set of deployments in the list.</p>
     */
    inline ListDeploymentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_deploymentGroupName;
    bool m_deploymentGroupNameHasBeenSet;
    Aws::Vector<DeploymentStatus> m_includeOnlyStatuses;
    bool m_includeOnlyStatusesHasBeenSet;
    TimeRange m_createTimeRange;
    bool m_createTimeRangeHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
