/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/DataRepositoryTaskFilter.h>
#include <utility>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class DescribeDataRepositoryTasksRequest : public FSxRequest
  {
  public:
    AWS_FSX_API DescribeDataRepositoryTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDataRepositoryTasks"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>(Optional) IDs of the tasks whose descriptions you want to retrieve
     * (String).</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskIds() const{ return m_taskIds; }

    /**
     * <p>(Optional) IDs of the tasks whose descriptions you want to retrieve
     * (String).</p>
     */
    inline bool TaskIdsHasBeenSet() const { return m_taskIdsHasBeenSet; }

    /**
     * <p>(Optional) IDs of the tasks whose descriptions you want to retrieve
     * (String).</p>
     */
    inline void SetTaskIds(const Aws::Vector<Aws::String>& value) { m_taskIdsHasBeenSet = true; m_taskIds = value; }

    /**
     * <p>(Optional) IDs of the tasks whose descriptions you want to retrieve
     * (String).</p>
     */
    inline void SetTaskIds(Aws::Vector<Aws::String>&& value) { m_taskIdsHasBeenSet = true; m_taskIds = std::move(value); }

    /**
     * <p>(Optional) IDs of the tasks whose descriptions you want to retrieve
     * (String).</p>
     */
    inline DescribeDataRepositoryTasksRequest& WithTaskIds(const Aws::Vector<Aws::String>& value) { SetTaskIds(value); return *this;}

    /**
     * <p>(Optional) IDs of the tasks whose descriptions you want to retrieve
     * (String).</p>
     */
    inline DescribeDataRepositoryTasksRequest& WithTaskIds(Aws::Vector<Aws::String>&& value) { SetTaskIds(std::move(value)); return *this;}

    /**
     * <p>(Optional) IDs of the tasks whose descriptions you want to retrieve
     * (String).</p>
     */
    inline DescribeDataRepositoryTasksRequest& AddTaskIds(const Aws::String& value) { m_taskIdsHasBeenSet = true; m_taskIds.push_back(value); return *this; }

    /**
     * <p>(Optional) IDs of the tasks whose descriptions you want to retrieve
     * (String).</p>
     */
    inline DescribeDataRepositoryTasksRequest& AddTaskIds(Aws::String&& value) { m_taskIdsHasBeenSet = true; m_taskIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Optional) IDs of the tasks whose descriptions you want to retrieve
     * (String).</p>
     */
    inline DescribeDataRepositoryTasksRequest& AddTaskIds(const char* value) { m_taskIdsHasBeenSet = true; m_taskIds.push_back(value); return *this; }


    /**
     * <p>(Optional) You can use filters to narrow the
     * <code>DescribeDataRepositoryTasks</code> response to include just tasks for
     * specific file systems, or tasks in a specific lifecycle state.</p>
     */
    inline const Aws::Vector<DataRepositoryTaskFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>(Optional) You can use filters to narrow the
     * <code>DescribeDataRepositoryTasks</code> response to include just tasks for
     * specific file systems, or tasks in a specific lifecycle state.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>(Optional) You can use filters to narrow the
     * <code>DescribeDataRepositoryTasks</code> response to include just tasks for
     * specific file systems, or tasks in a specific lifecycle state.</p>
     */
    inline void SetFilters(const Aws::Vector<DataRepositoryTaskFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>(Optional) You can use filters to narrow the
     * <code>DescribeDataRepositoryTasks</code> response to include just tasks for
     * specific file systems, or tasks in a specific lifecycle state.</p>
     */
    inline void SetFilters(Aws::Vector<DataRepositoryTaskFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>(Optional) You can use filters to narrow the
     * <code>DescribeDataRepositoryTasks</code> response to include just tasks for
     * specific file systems, or tasks in a specific lifecycle state.</p>
     */
    inline DescribeDataRepositoryTasksRequest& WithFilters(const Aws::Vector<DataRepositoryTaskFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>(Optional) You can use filters to narrow the
     * <code>DescribeDataRepositoryTasks</code> response to include just tasks for
     * specific file systems, or tasks in a specific lifecycle state.</p>
     */
    inline DescribeDataRepositoryTasksRequest& WithFilters(Aws::Vector<DataRepositoryTaskFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>(Optional) You can use filters to narrow the
     * <code>DescribeDataRepositoryTasks</code> response to include just tasks for
     * specific file systems, or tasks in a specific lifecycle state.</p>
     */
    inline DescribeDataRepositoryTasksRequest& AddFilters(const DataRepositoryTaskFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>(Optional) You can use filters to narrow the
     * <code>DescribeDataRepositoryTasks</code> response to include just tasks for
     * specific file systems, or tasks in a specific lifecycle state.</p>
     */
    inline DescribeDataRepositoryTasksRequest& AddFilters(DataRepositoryTaskFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline DescribeDataRepositoryTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline DescribeDataRepositoryTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeDataRepositoryTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeDataRepositoryTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_taskIds;
    bool m_taskIdsHasBeenSet = false;

    Aws::Vector<DataRepositoryTaskFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
