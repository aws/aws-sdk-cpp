/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/SearchGroupedFilterExpressions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class SearchJobsRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API SearchJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchJobs"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    /**
     * <p>The farm ID of the job.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID of the job.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The farm ID of the job.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The farm ID of the job.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The farm ID of the job.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The farm ID of the job.</p>
     */
    inline SearchJobsRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID of the job.</p>
     */
    inline SearchJobsRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID of the job.</p>
     */
    inline SearchJobsRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The filter expression, <code>AND</code> or <code>OR</code>, to use when
     * searching among a group of search strings in a resource. <p>You can use two
     * groupings per search each within parenthesis <code>()</code>.</p></p>
     */
    inline const SearchGroupedFilterExpressions& GetFilterExpressions() const{ return m_filterExpressions; }

    /**
     * <p>The filter expression, <code>AND</code> or <code>OR</code>, to use when
     * searching among a group of search strings in a resource. <p>You can use two
     * groupings per search each within parenthesis <code>()</code>.</p></p>
     */
    inline bool FilterExpressionsHasBeenSet() const { return m_filterExpressionsHasBeenSet; }

    /**
     * <p>The filter expression, <code>AND</code> or <code>OR</code>, to use when
     * searching among a group of search strings in a resource. <p>You can use two
     * groupings per search each within parenthesis <code>()</code>.</p></p>
     */
    inline void SetFilterExpressions(const SearchGroupedFilterExpressions& value) { m_filterExpressionsHasBeenSet = true; m_filterExpressions = value; }

    /**
     * <p>The filter expression, <code>AND</code> or <code>OR</code>, to use when
     * searching among a group of search strings in a resource. <p>You can use two
     * groupings per search each within parenthesis <code>()</code>.</p></p>
     */
    inline void SetFilterExpressions(SearchGroupedFilterExpressions&& value) { m_filterExpressionsHasBeenSet = true; m_filterExpressions = std::move(value); }

    /**
     * <p>The filter expression, <code>AND</code> or <code>OR</code>, to use when
     * searching among a group of search strings in a resource. <p>You can use two
     * groupings per search each within parenthesis <code>()</code>.</p></p>
     */
    inline SearchJobsRequest& WithFilterExpressions(const SearchGroupedFilterExpressions& value) { SetFilterExpressions(value); return *this;}

    /**
     * <p>The filter expression, <code>AND</code> or <code>OR</code>, to use when
     * searching among a group of search strings in a resource. <p>You can use two
     * groupings per search each within parenthesis <code>()</code>.</p></p>
     */
    inline SearchJobsRequest& WithFilterExpressions(SearchGroupedFilterExpressions&& value) { SetFilterExpressions(std::move(value)); return *this;}


    /**
     * <p>Defines how far into the scrollable list to start the return of results.</p>
     */
    inline int GetItemOffset() const{ return m_itemOffset; }

    /**
     * <p>Defines how far into the scrollable list to start the return of results.</p>
     */
    inline bool ItemOffsetHasBeenSet() const { return m_itemOffsetHasBeenSet; }

    /**
     * <p>Defines how far into the scrollable list to start the return of results.</p>
     */
    inline void SetItemOffset(int value) { m_itemOffsetHasBeenSet = true; m_itemOffset = value; }

    /**
     * <p>Defines how far into the scrollable list to start the return of results.</p>
     */
    inline SearchJobsRequest& WithItemOffset(int value) { SetItemOffset(value); return *this;}


    /**
     * <p>Specifies the number of items per page for the resource.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>Specifies the number of items per page for the resource.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>Specifies the number of items per page for the resource.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>Specifies the number of items per page for the resource.</p>
     */
    inline SearchJobsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


    /**
     * <p>The queue ID to use in the job search.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueueIds() const{ return m_queueIds; }

    /**
     * <p>The queue ID to use in the job search.</p>
     */
    inline bool QueueIdsHasBeenSet() const { return m_queueIdsHasBeenSet; }

    /**
     * <p>The queue ID to use in the job search.</p>
     */
    inline void SetQueueIds(const Aws::Vector<Aws::String>& value) { m_queueIdsHasBeenSet = true; m_queueIds = value; }

    /**
     * <p>The queue ID to use in the job search.</p>
     */
    inline void SetQueueIds(Aws::Vector<Aws::String>&& value) { m_queueIdsHasBeenSet = true; m_queueIds = std::move(value); }

    /**
     * <p>The queue ID to use in the job search.</p>
     */
    inline SearchJobsRequest& WithQueueIds(const Aws::Vector<Aws::String>& value) { SetQueueIds(value); return *this;}

    /**
     * <p>The queue ID to use in the job search.</p>
     */
    inline SearchJobsRequest& WithQueueIds(Aws::Vector<Aws::String>&& value) { SetQueueIds(std::move(value)); return *this;}

    /**
     * <p>The queue ID to use in the job search.</p>
     */
    inline SearchJobsRequest& AddQueueIds(const Aws::String& value) { m_queueIdsHasBeenSet = true; m_queueIds.push_back(value); return *this; }

    /**
     * <p>The queue ID to use in the job search.</p>
     */
    inline SearchJobsRequest& AddQueueIds(Aws::String&& value) { m_queueIdsHasBeenSet = true; m_queueIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The queue ID to use in the job search.</p>
     */
    inline SearchJobsRequest& AddQueueIds(const char* value) { m_queueIdsHasBeenSet = true; m_queueIds.push_back(value); return *this; }


    /**
     * <p>The search terms for a resource.</p>
     */
    inline const Aws::Vector<SearchSortExpression>& GetSortExpressions() const{ return m_sortExpressions; }

    /**
     * <p>The search terms for a resource.</p>
     */
    inline bool SortExpressionsHasBeenSet() const { return m_sortExpressionsHasBeenSet; }

    /**
     * <p>The search terms for a resource.</p>
     */
    inline void SetSortExpressions(const Aws::Vector<SearchSortExpression>& value) { m_sortExpressionsHasBeenSet = true; m_sortExpressions = value; }

    /**
     * <p>The search terms for a resource.</p>
     */
    inline void SetSortExpressions(Aws::Vector<SearchSortExpression>&& value) { m_sortExpressionsHasBeenSet = true; m_sortExpressions = std::move(value); }

    /**
     * <p>The search terms for a resource.</p>
     */
    inline SearchJobsRequest& WithSortExpressions(const Aws::Vector<SearchSortExpression>& value) { SetSortExpressions(value); return *this;}

    /**
     * <p>The search terms for a resource.</p>
     */
    inline SearchJobsRequest& WithSortExpressions(Aws::Vector<SearchSortExpression>&& value) { SetSortExpressions(std::move(value)); return *this;}

    /**
     * <p>The search terms for a resource.</p>
     */
    inline SearchJobsRequest& AddSortExpressions(const SearchSortExpression& value) { m_sortExpressionsHasBeenSet = true; m_sortExpressions.push_back(value); return *this; }

    /**
     * <p>The search terms for a resource.</p>
     */
    inline SearchJobsRequest& AddSortExpressions(SearchSortExpression&& value) { m_sortExpressionsHasBeenSet = true; m_sortExpressions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    SearchGroupedFilterExpressions m_filterExpressions;
    bool m_filterExpressionsHasBeenSet = false;

    int m_itemOffset;
    bool m_itemOffsetHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::Vector<Aws::String> m_queueIds;
    bool m_queueIdsHasBeenSet = false;

    Aws::Vector<SearchSortExpression> m_sortExpressions;
    bool m_sortExpressionsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
