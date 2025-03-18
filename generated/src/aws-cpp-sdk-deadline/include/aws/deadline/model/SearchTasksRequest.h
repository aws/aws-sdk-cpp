/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/SearchGroupedFilterExpressions.h>
#include <aws/deadline/model/SearchSortExpression.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class SearchTasksRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API SearchTasksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchTasks"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The farm ID of the task.</p>
     */
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    SearchTasksRequest& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue IDs to include in the search.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueueIds() const { return m_queueIds; }
    inline bool QueueIdsHasBeenSet() const { return m_queueIdsHasBeenSet; }
    template<typename QueueIdsT = Aws::Vector<Aws::String>>
    void SetQueueIds(QueueIdsT&& value) { m_queueIdsHasBeenSet = true; m_queueIds = std::forward<QueueIdsT>(value); }
    template<typename QueueIdsT = Aws::Vector<Aws::String>>
    SearchTasksRequest& WithQueueIds(QueueIdsT&& value) { SetQueueIds(std::forward<QueueIdsT>(value)); return *this;}
    template<typename QueueIdsT = Aws::String>
    SearchTasksRequest& AddQueueIds(QueueIdsT&& value) { m_queueIdsHasBeenSet = true; m_queueIds.emplace_back(std::forward<QueueIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The job ID for the task search.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    SearchTasksRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter expression, <code>AND</code> or <code>OR</code>, to use when
     * searching among a group of search strings in a resource. <p>You can use two
     * groupings per search each within parenthesis <code>()</code>.</p></p>
     */
    inline const SearchGroupedFilterExpressions& GetFilterExpressions() const { return m_filterExpressions; }
    inline bool FilterExpressionsHasBeenSet() const { return m_filterExpressionsHasBeenSet; }
    template<typename FilterExpressionsT = SearchGroupedFilterExpressions>
    void SetFilterExpressions(FilterExpressionsT&& value) { m_filterExpressionsHasBeenSet = true; m_filterExpressions = std::forward<FilterExpressionsT>(value); }
    template<typename FilterExpressionsT = SearchGroupedFilterExpressions>
    SearchTasksRequest& WithFilterExpressions(FilterExpressionsT&& value) { SetFilterExpressions(std::forward<FilterExpressionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search terms for a resource.</p>
     */
    inline const Aws::Vector<SearchSortExpression>& GetSortExpressions() const { return m_sortExpressions; }
    inline bool SortExpressionsHasBeenSet() const { return m_sortExpressionsHasBeenSet; }
    template<typename SortExpressionsT = Aws::Vector<SearchSortExpression>>
    void SetSortExpressions(SortExpressionsT&& value) { m_sortExpressionsHasBeenSet = true; m_sortExpressions = std::forward<SortExpressionsT>(value); }
    template<typename SortExpressionsT = Aws::Vector<SearchSortExpression>>
    SearchTasksRequest& WithSortExpressions(SortExpressionsT&& value) { SetSortExpressions(std::forward<SortExpressionsT>(value)); return *this;}
    template<typename SortExpressionsT = SearchSortExpression>
    SearchTasksRequest& AddSortExpressions(SortExpressionsT&& value) { m_sortExpressionsHasBeenSet = true; m_sortExpressions.emplace_back(std::forward<SortExpressionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines how far into the scrollable list to start the return of results.</p>
     */
    inline int GetItemOffset() const { return m_itemOffset; }
    inline bool ItemOffsetHasBeenSet() const { return m_itemOffsetHasBeenSet; }
    inline void SetItemOffset(int value) { m_itemOffsetHasBeenSet = true; m_itemOffset = value; }
    inline SearchTasksRequest& WithItemOffset(int value) { SetItemOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of items per page for the resource.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline SearchTasksRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_queueIds;
    bool m_queueIdsHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    SearchGroupedFilterExpressions m_filterExpressions;
    bool m_filterExpressionsHasBeenSet = false;

    Aws::Vector<SearchSortExpression> m_sortExpressions;
    bool m_sortExpressionsHasBeenSet = false;

    int m_itemOffset{0};
    bool m_itemOffsetHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
