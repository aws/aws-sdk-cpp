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
  class AWS_SSM_API DescribeMaintenanceWindowExecutionTasksRequest : public SSMRequest
  {
  public:
    DescribeMaintenanceWindowExecutionTasksRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Maintenance Window execution whose task executions should be
     * retrieved.</p>
     */
    inline const Aws::String& GetWindowExecutionId() const{ return m_windowExecutionId; }

    /**
     * <p>The ID of the Maintenance Window execution whose task executions should be
     * retrieved.</p>
     */
    inline void SetWindowExecutionId(const Aws::String& value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId = value; }

    /**
     * <p>The ID of the Maintenance Window execution whose task executions should be
     * retrieved.</p>
     */
    inline void SetWindowExecutionId(Aws::String&& value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId = value; }

    /**
     * <p>The ID of the Maintenance Window execution whose task executions should be
     * retrieved.</p>
     */
    inline void SetWindowExecutionId(const char* value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId.assign(value); }

    /**
     * <p>The ID of the Maintenance Window execution whose task executions should be
     * retrieved.</p>
     */
    inline DescribeMaintenanceWindowExecutionTasksRequest& WithWindowExecutionId(const Aws::String& value) { SetWindowExecutionId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window execution whose task executions should be
     * retrieved.</p>
     */
    inline DescribeMaintenanceWindowExecutionTasksRequest& WithWindowExecutionId(Aws::String&& value) { SetWindowExecutionId(value); return *this;}

    /**
     * <p>The ID of the Maintenance Window execution whose task executions should be
     * retrieved.</p>
     */
    inline DescribeMaintenanceWindowExecutionTasksRequest& WithWindowExecutionId(const char* value) { SetWindowExecutionId(value); return *this;}

    /**
     * <p>Optional filters used to scope down the returned tasks. The supported filter
     * key is STATUS with the corresponding values PENDING, IN_PROGRESS, SUCCESS,
     * FAILED, TIMED_OUT, CANCELLING, and CANCELLED. </p>
     */
    inline const Aws::Vector<MaintenanceWindowFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Optional filters used to scope down the returned tasks. The supported filter
     * key is STATUS with the corresponding values PENDING, IN_PROGRESS, SUCCESS,
     * FAILED, TIMED_OUT, CANCELLING, and CANCELLED. </p>
     */
    inline void SetFilters(const Aws::Vector<MaintenanceWindowFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Optional filters used to scope down the returned tasks. The supported filter
     * key is STATUS with the corresponding values PENDING, IN_PROGRESS, SUCCESS,
     * FAILED, TIMED_OUT, CANCELLING, and CANCELLED. </p>
     */
    inline void SetFilters(Aws::Vector<MaintenanceWindowFilter>&& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Optional filters used to scope down the returned tasks. The supported filter
     * key is STATUS with the corresponding values PENDING, IN_PROGRESS, SUCCESS,
     * FAILED, TIMED_OUT, CANCELLING, and CANCELLED. </p>
     */
    inline DescribeMaintenanceWindowExecutionTasksRequest& WithFilters(const Aws::Vector<MaintenanceWindowFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Optional filters used to scope down the returned tasks. The supported filter
     * key is STATUS with the corresponding values PENDING, IN_PROGRESS, SUCCESS,
     * FAILED, TIMED_OUT, CANCELLING, and CANCELLED. </p>
     */
    inline DescribeMaintenanceWindowExecutionTasksRequest& WithFilters(Aws::Vector<MaintenanceWindowFilter>&& value) { SetFilters(value); return *this;}

    /**
     * <p>Optional filters used to scope down the returned tasks. The supported filter
     * key is STATUS with the corresponding values PENDING, IN_PROGRESS, SUCCESS,
     * FAILED, TIMED_OUT, CANCELLING, and CANCELLED. </p>
     */
    inline DescribeMaintenanceWindowExecutionTasksRequest& AddFilters(const MaintenanceWindowFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Optional filters used to scope down the returned tasks. The supported filter
     * key is STATUS with the corresponding values PENDING, IN_PROGRESS, SUCCESS,
     * FAILED, TIMED_OUT, CANCELLING, and CANCELLED. </p>
     */
    inline DescribeMaintenanceWindowExecutionTasksRequest& AddFilters(MaintenanceWindowFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

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
    inline DescribeMaintenanceWindowExecutionTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

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
    inline DescribeMaintenanceWindowExecutionTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeMaintenanceWindowExecutionTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeMaintenanceWindowExecutionTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_windowExecutionId;
    bool m_windowExecutionIdHasBeenSet;
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
