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
  class SearchWorkersRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API SearchWorkersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchWorkers"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The farm ID in the workers search.</p>
     */
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    SearchWorkersRequest& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet ID of the workers to search for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFleetIds() const { return m_fleetIds; }
    inline bool FleetIdsHasBeenSet() const { return m_fleetIdsHasBeenSet; }
    template<typename FleetIdsT = Aws::Vector<Aws::String>>
    void SetFleetIds(FleetIdsT&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds = std::forward<FleetIdsT>(value); }
    template<typename FleetIdsT = Aws::Vector<Aws::String>>
    SearchWorkersRequest& WithFleetIds(FleetIdsT&& value) { SetFleetIds(std::forward<FleetIdsT>(value)); return *this;}
    template<typename FleetIdsT = Aws::String>
    SearchWorkersRequest& AddFleetIds(FleetIdsT&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds.emplace_back(std::forward<FleetIdsT>(value)); return *this; }
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
    SearchWorkersRequest& WithFilterExpressions(FilterExpressionsT&& value) { SetFilterExpressions(std::forward<FilterExpressionsT>(value)); return *this;}
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
    SearchWorkersRequest& WithSortExpressions(SortExpressionsT&& value) { SetSortExpressions(std::forward<SortExpressionsT>(value)); return *this;}
    template<typename SortExpressionsT = SearchSortExpression>
    SearchWorkersRequest& AddSortExpressions(SortExpressionsT&& value) { m_sortExpressionsHasBeenSet = true; m_sortExpressions.emplace_back(std::forward<SortExpressionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines how far into the scrollable list to start the return of results.</p>
     */
    inline int GetItemOffset() const { return m_itemOffset; }
    inline bool ItemOffsetHasBeenSet() const { return m_itemOffsetHasBeenSet; }
    inline void SetItemOffset(int value) { m_itemOffsetHasBeenSet = true; m_itemOffset = value; }
    inline SearchWorkersRequest& WithItemOffset(int value) { SetItemOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of items per page for the resource.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline SearchWorkersRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_fleetIds;
    bool m_fleetIdsHasBeenSet = false;

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
