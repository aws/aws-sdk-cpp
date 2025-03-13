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
    AWS_FSX_API DescribeDataRepositoryTasksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDataRepositoryTasks"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>(Optional) IDs of the tasks whose descriptions you want to retrieve
     * (String).</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskIds() const { return m_taskIds; }
    inline bool TaskIdsHasBeenSet() const { return m_taskIdsHasBeenSet; }
    template<typename TaskIdsT = Aws::Vector<Aws::String>>
    void SetTaskIds(TaskIdsT&& value) { m_taskIdsHasBeenSet = true; m_taskIds = std::forward<TaskIdsT>(value); }
    template<typename TaskIdsT = Aws::Vector<Aws::String>>
    DescribeDataRepositoryTasksRequest& WithTaskIds(TaskIdsT&& value) { SetTaskIds(std::forward<TaskIdsT>(value)); return *this;}
    template<typename TaskIdsT = Aws::String>
    DescribeDataRepositoryTasksRequest& AddTaskIds(TaskIdsT&& value) { m_taskIdsHasBeenSet = true; m_taskIds.emplace_back(std::forward<TaskIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Optional) You can use filters to narrow the
     * <code>DescribeDataRepositoryTasks</code> response to include just tasks for
     * specific file systems, or tasks in a specific lifecycle state.</p>
     */
    inline const Aws::Vector<DataRepositoryTaskFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<DataRepositoryTaskFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<DataRepositoryTaskFilter>>
    DescribeDataRepositoryTasksRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = DataRepositoryTaskFilter>
    DescribeDataRepositoryTasksRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeDataRepositoryTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDataRepositoryTasksRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_taskIds;
    bool m_taskIdsHasBeenSet = false;

    Aws::Vector<DataRepositoryTaskFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
