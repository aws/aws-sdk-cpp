/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/MaintenanceWindowFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DescribeMaintenanceWindowExecutionsRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DescribeMaintenanceWindowExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMaintenanceWindowExecutions"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the maintenance window whose executions should be retrieved.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the maintenance window whose executions should be retrieved.</p>
     */
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }

    /**
     * <p>The ID of the maintenance window whose executions should be retrieved.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the maintenance window whose executions should be retrieved.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }

    /**
     * <p>The ID of the maintenance window whose executions should be retrieved.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The ID of the maintenance window whose executions should be retrieved.</p>
     */
    inline DescribeMaintenanceWindowExecutionsRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the maintenance window whose executions should be retrieved.</p>
     */
    inline DescribeMaintenanceWindowExecutionsRequest& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window whose executions should be retrieved.</p>
     */
    inline DescribeMaintenanceWindowExecutionsRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    /**
     * <p>Each entry in the array is a structure containing:</p> <ul> <li> <p>Key. A
     * string between 1 and 128 characters. Supported keys include
     * <code>ExecutedBefore</code> and <code>ExecutedAfter</code>.</p> </li> <li>
     * <p>Values. An array of strings, each between 1 and 256 characters. Supported
     * values are date/time strings in a valid ISO 8601 date/time format, such as
     * <code>2021-11-04T05:00:00Z</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<MaintenanceWindowFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <ul> <li> <p>Key. A
     * string between 1 and 128 characters. Supported keys include
     * <code>ExecutedBefore</code> and <code>ExecutedAfter</code>.</p> </li> <li>
     * <p>Values. An array of strings, each between 1 and 256 characters. Supported
     * values are date/time strings in a valid ISO 8601 date/time format, such as
     * <code>2021-11-04T05:00:00Z</code>.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <ul> <li> <p>Key. A
     * string between 1 and 128 characters. Supported keys include
     * <code>ExecutedBefore</code> and <code>ExecutedAfter</code>.</p> </li> <li>
     * <p>Values. An array of strings, each between 1 and 256 characters. Supported
     * values are date/time strings in a valid ISO 8601 date/time format, such as
     * <code>2021-11-04T05:00:00Z</code>.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<MaintenanceWindowFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <ul> <li> <p>Key. A
     * string between 1 and 128 characters. Supported keys include
     * <code>ExecutedBefore</code> and <code>ExecutedAfter</code>.</p> </li> <li>
     * <p>Values. An array of strings, each between 1 and 256 characters. Supported
     * values are date/time strings in a valid ISO 8601 date/time format, such as
     * <code>2021-11-04T05:00:00Z</code>.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<MaintenanceWindowFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Each entry in the array is a structure containing:</p> <ul> <li> <p>Key. A
     * string between 1 and 128 characters. Supported keys include
     * <code>ExecutedBefore</code> and <code>ExecutedAfter</code>.</p> </li> <li>
     * <p>Values. An array of strings, each between 1 and 256 characters. Supported
     * values are date/time strings in a valid ISO 8601 date/time format, such as
     * <code>2021-11-04T05:00:00Z</code>.</p> </li> </ul>
     */
    inline DescribeMaintenanceWindowExecutionsRequest& WithFilters(const Aws::Vector<MaintenanceWindowFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Each entry in the array is a structure containing:</p> <ul> <li> <p>Key. A
     * string between 1 and 128 characters. Supported keys include
     * <code>ExecutedBefore</code> and <code>ExecutedAfter</code>.</p> </li> <li>
     * <p>Values. An array of strings, each between 1 and 256 characters. Supported
     * values are date/time strings in a valid ISO 8601 date/time format, such as
     * <code>2021-11-04T05:00:00Z</code>.</p> </li> </ul>
     */
    inline DescribeMaintenanceWindowExecutionsRequest& WithFilters(Aws::Vector<MaintenanceWindowFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Each entry in the array is a structure containing:</p> <ul> <li> <p>Key. A
     * string between 1 and 128 characters. Supported keys include
     * <code>ExecutedBefore</code> and <code>ExecutedAfter</code>.</p> </li> <li>
     * <p>Values. An array of strings, each between 1 and 256 characters. Supported
     * values are date/time strings in a valid ISO 8601 date/time format, such as
     * <code>2021-11-04T05:00:00Z</code>.</p> </li> </ul>
     */
    inline DescribeMaintenanceWindowExecutionsRequest& AddFilters(const MaintenanceWindowFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <ul> <li> <p>Key. A
     * string between 1 and 128 characters. Supported keys include
     * <code>ExecutedBefore</code> and <code>ExecutedAfter</code>.</p> </li> <li>
     * <p>Values. An array of strings, each between 1 and 256 characters. Supported
     * values are date/time strings in a valid ISO 8601 date/time format, such as
     * <code>2021-11-04T05:00:00Z</code>.</p> </li> </ul>
     */
    inline DescribeMaintenanceWindowExecutionsRequest& AddFilters(MaintenanceWindowFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

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
    inline DescribeMaintenanceWindowExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeMaintenanceWindowExecutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeMaintenanceWindowExecutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeMaintenanceWindowExecutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    Aws::Vector<MaintenanceWindowFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
