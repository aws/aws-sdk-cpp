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
    AWS_DEADLINE_API SearchTasksRequest();

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
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline SearchTasksRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline SearchTasksRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline SearchTasksRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue IDs to include in the search.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueueIds() const{ return m_queueIds; }
    inline bool QueueIdsHasBeenSet() const { return m_queueIdsHasBeenSet; }
    inline void SetQueueIds(const Aws::Vector<Aws::String>& value) { m_queueIdsHasBeenSet = true; m_queueIds = value; }
    inline void SetQueueIds(Aws::Vector<Aws::String>&& value) { m_queueIdsHasBeenSet = true; m_queueIds = std::move(value); }
    inline SearchTasksRequest& WithQueueIds(const Aws::Vector<Aws::String>& value) { SetQueueIds(value); return *this;}
    inline SearchTasksRequest& WithQueueIds(Aws::Vector<Aws::String>&& value) { SetQueueIds(std::move(value)); return *this;}
    inline SearchTasksRequest& AddQueueIds(const Aws::String& value) { m_queueIdsHasBeenSet = true; m_queueIds.push_back(value); return *this; }
    inline SearchTasksRequest& AddQueueIds(Aws::String&& value) { m_queueIdsHasBeenSet = true; m_queueIds.push_back(std::move(value)); return *this; }
    inline SearchTasksRequest& AddQueueIds(const char* value) { m_queueIdsHasBeenSet = true; m_queueIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The job ID for the task search.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline SearchTasksRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline SearchTasksRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline SearchTasksRequest& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter expression, <code>AND</code> or <code>OR</code>, to use when
     * searching among a group of search strings in a resource. <p>You can use two
     * groupings per search each within parenthesis <code>()</code>.</p></p>
     */
    inline const SearchGroupedFilterExpressions& GetFilterExpressions() const{ return m_filterExpressions; }
    inline bool FilterExpressionsHasBeenSet() const { return m_filterExpressionsHasBeenSet; }
    inline void SetFilterExpressions(const SearchGroupedFilterExpressions& value) { m_filterExpressionsHasBeenSet = true; m_filterExpressions = value; }
    inline void SetFilterExpressions(SearchGroupedFilterExpressions&& value) { m_filterExpressionsHasBeenSet = true; m_filterExpressions = std::move(value); }
    inline SearchTasksRequest& WithFilterExpressions(const SearchGroupedFilterExpressions& value) { SetFilterExpressions(value); return *this;}
    inline SearchTasksRequest& WithFilterExpressions(SearchGroupedFilterExpressions&& value) { SetFilterExpressions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search terms for a resource.</p>
     */
    inline const Aws::Vector<SearchSortExpression>& GetSortExpressions() const{ return m_sortExpressions; }
    inline bool SortExpressionsHasBeenSet() const { return m_sortExpressionsHasBeenSet; }
    inline void SetSortExpressions(const Aws::Vector<SearchSortExpression>& value) { m_sortExpressionsHasBeenSet = true; m_sortExpressions = value; }
    inline void SetSortExpressions(Aws::Vector<SearchSortExpression>&& value) { m_sortExpressionsHasBeenSet = true; m_sortExpressions = std::move(value); }
    inline SearchTasksRequest& WithSortExpressions(const Aws::Vector<SearchSortExpression>& value) { SetSortExpressions(value); return *this;}
    inline SearchTasksRequest& WithSortExpressions(Aws::Vector<SearchSortExpression>&& value) { SetSortExpressions(std::move(value)); return *this;}
    inline SearchTasksRequest& AddSortExpressions(const SearchSortExpression& value) { m_sortExpressionsHasBeenSet = true; m_sortExpressions.push_back(value); return *this; }
    inline SearchTasksRequest& AddSortExpressions(SearchSortExpression&& value) { m_sortExpressionsHasBeenSet = true; m_sortExpressions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines how far into the scrollable list to start the return of results.</p>
     */
    inline int GetItemOffset() const{ return m_itemOffset; }
    inline bool ItemOffsetHasBeenSet() const { return m_itemOffsetHasBeenSet; }
    inline void SetItemOffset(int value) { m_itemOffsetHasBeenSet = true; m_itemOffset = value; }
    inline SearchTasksRequest& WithItemOffset(int value) { SetItemOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of items per page for the resource.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }
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

    int m_itemOffset;
    bool m_itemOffsetHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
