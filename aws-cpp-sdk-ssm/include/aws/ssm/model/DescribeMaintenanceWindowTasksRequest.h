﻿/*
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/MaintenanceWindowFilter.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API DescribeMaintenanceWindowTasksRequest : public SSMRequest
  {
  public:
    DescribeMaintenanceWindowTasksRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the Maintenance Window whose tasks should be retrieved.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the Maintenance Window whose tasks should be retrieved.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the Maintenance Window whose tasks should be retrieved.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the Maintenance Window whose tasks should be retrieved.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The ID of the Maintenance Window whose tasks should be retrieved.</p>
     */
    inline DescribeMaintenanceWindowTasksRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window whose tasks should be retrieved.</p>
     */
    inline DescribeMaintenanceWindowTasksRequest& WithWindowId(Aws::String&& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window whose tasks should be retrieved.</p>
     */
    inline DescribeMaintenanceWindowTasksRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}

    /**
     * <p>Optional filters used to narrow down the scope of the returned tasks. The
     * supported filter keys are <code>WindowTaskId</code>, <code>TaskArn</code>,
     * <code>Priority</code>, and <code>TaskType</code>.</p>
     */
    inline const Aws::Vector<MaintenanceWindowFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Optional filters used to narrow down the scope of the returned tasks. The
     * supported filter keys are <code>WindowTaskId</code>, <code>TaskArn</code>,
     * <code>Priority</code>, and <code>TaskType</code>.</p>
     */
    inline void SetFilters(const Aws::Vector<MaintenanceWindowFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Optional filters used to narrow down the scope of the returned tasks. The
     * supported filter keys are <code>WindowTaskId</code>, <code>TaskArn</code>,
     * <code>Priority</code>, and <code>TaskType</code>.</p>
     */
    inline void SetFilters(Aws::Vector<MaintenanceWindowFilter>&& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Optional filters used to narrow down the scope of the returned tasks. The
     * supported filter keys are <code>WindowTaskId</code>, <code>TaskArn</code>,
     * <code>Priority</code>, and <code>TaskType</code>.</p>
     */
    inline DescribeMaintenanceWindowTasksRequest& WithFilters(const Aws::Vector<MaintenanceWindowFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Optional filters used to narrow down the scope of the returned tasks. The
     * supported filter keys are <code>WindowTaskId</code>, <code>TaskArn</code>,
     * <code>Priority</code>, and <code>TaskType</code>.</p>
     */
    inline DescribeMaintenanceWindowTasksRequest& WithFilters(Aws::Vector<MaintenanceWindowFilter>&& value) { SetFilters(value); return *this;}

    /**
     * <p>Optional filters used to narrow down the scope of the returned tasks. The
     * supported filter keys are <code>WindowTaskId</code>, <code>TaskArn</code>,
     * <code>Priority</code>, and <code>TaskType</code>.</p>
     */
    inline DescribeMaintenanceWindowTasksRequest& AddFilters(const MaintenanceWindowFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Optional filters used to narrow down the scope of the returned tasks. The
     * supported filter keys are <code>WindowTaskId</code>, <code>TaskArn</code>,
     * <code>Priority</code>, and <code>TaskType</code>.</p>
     */
    inline DescribeMaintenanceWindowTasksRequest& AddFilters(MaintenanceWindowFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline DescribeMaintenanceWindowTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeMaintenanceWindowTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeMaintenanceWindowTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeMaintenanceWindowTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_windowId;
    bool m_windowIdHasBeenSet;
    Aws::Vector<MaintenanceWindowFilter> m_filters;
    bool m_filtersHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
