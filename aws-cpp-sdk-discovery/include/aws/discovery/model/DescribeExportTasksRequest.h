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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/ExportFilter.h>
#include <utility>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API DescribeExportTasksRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    DescribeExportTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeExportTasks"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>One or more unique identifiers used to query the status of an export
     * request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportIds() const{ return m_exportIds; }

    /**
     * <p>One or more unique identifiers used to query the status of an export
     * request.</p>
     */
    inline bool ExportIdsHasBeenSet() const { return m_exportIdsHasBeenSet; }

    /**
     * <p>One or more unique identifiers used to query the status of an export
     * request.</p>
     */
    inline void SetExportIds(const Aws::Vector<Aws::String>& value) { m_exportIdsHasBeenSet = true; m_exportIds = value; }

    /**
     * <p>One or more unique identifiers used to query the status of an export
     * request.</p>
     */
    inline void SetExportIds(Aws::Vector<Aws::String>&& value) { m_exportIdsHasBeenSet = true; m_exportIds = std::move(value); }

    /**
     * <p>One or more unique identifiers used to query the status of an export
     * request.</p>
     */
    inline DescribeExportTasksRequest& WithExportIds(const Aws::Vector<Aws::String>& value) { SetExportIds(value); return *this;}

    /**
     * <p>One or more unique identifiers used to query the status of an export
     * request.</p>
     */
    inline DescribeExportTasksRequest& WithExportIds(Aws::Vector<Aws::String>&& value) { SetExportIds(std::move(value)); return *this;}

    /**
     * <p>One or more unique identifiers used to query the status of an export
     * request.</p>
     */
    inline DescribeExportTasksRequest& AddExportIds(const Aws::String& value) { m_exportIdsHasBeenSet = true; m_exportIds.push_back(value); return *this; }

    /**
     * <p>One or more unique identifiers used to query the status of an export
     * request.</p>
     */
    inline DescribeExportTasksRequest& AddExportIds(Aws::String&& value) { m_exportIdsHasBeenSet = true; m_exportIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more unique identifiers used to query the status of an export
     * request.</p>
     */
    inline DescribeExportTasksRequest& AddExportIds(const char* value) { m_exportIdsHasBeenSet = true; m_exportIds.push_back(value); return *this; }


    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>AgentId</code> - ID of the agent
     * whose collected data will be exported</p> </li> </ul>
     */
    inline const Aws::Vector<ExportFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>AgentId</code> - ID of the agent
     * whose collected data will be exported</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>AgentId</code> - ID of the agent
     * whose collected data will be exported</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<ExportFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>AgentId</code> - ID of the agent
     * whose collected data will be exported</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<ExportFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>AgentId</code> - ID of the agent
     * whose collected data will be exported</p> </li> </ul>
     */
    inline DescribeExportTasksRequest& WithFilters(const Aws::Vector<ExportFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>AgentId</code> - ID of the agent
     * whose collected data will be exported</p> </li> </ul>
     */
    inline DescribeExportTasksRequest& WithFilters(Aws::Vector<ExportFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>AgentId</code> - ID of the agent
     * whose collected data will be exported</p> </li> </ul>
     */
    inline DescribeExportTasksRequest& AddFilters(const ExportFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>AgentId</code> - ID of the agent
     * whose collected data will be exported</p> </li> </ul>
     */
    inline DescribeExportTasksRequest& AddFilters(ExportFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of volume results returned by
     * <code>DescribeExportTasks</code> in paginated output. When this parameter is
     * used, <code>DescribeExportTasks</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response
     * element.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of volume results returned by
     * <code>DescribeExportTasks</code> in paginated output. When this parameter is
     * used, <code>DescribeExportTasks</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response
     * element.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of volume results returned by
     * <code>DescribeExportTasks</code> in paginated output. When this parameter is
     * used, <code>DescribeExportTasks</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response
     * element.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of volume results returned by
     * <code>DescribeExportTasks</code> in paginated output. When this parameter is
     * used, <code>DescribeExportTasks</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response
     * element.</p>
     */
    inline DescribeExportTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeExportTasks</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * This value is null when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeExportTasks</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * This value is null when there are no more results to return.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeExportTasks</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * This value is null when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeExportTasks</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * This value is null when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeExportTasks</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * This value is null when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeExportTasks</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * This value is null when there are no more results to return.</p>
     */
    inline DescribeExportTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeExportTasks</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * This value is null when there are no more results to return.</p>
     */
    inline DescribeExportTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeExportTasks</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * This value is null when there are no more results to return.</p>
     */
    inline DescribeExportTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_exportIds;
    bool m_exportIdsHasBeenSet;

    Aws::Vector<ExportFilter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
