/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/ListCisScansFilterCriteria.h>
#include <aws/inspector2/model/ListCisScansDetailLevel.h>
#include <aws/inspector2/model/ListCisScansSortBy.h>
#include <aws/inspector2/model/CisSortOrder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class ListCisScansRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API ListCisScansRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCisScans"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The CIS scan filter criteria.</p>
     */
    inline const ListCisScansFilterCriteria& GetFilterCriteria() const { return m_filterCriteria; }
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }
    template<typename FilterCriteriaT = ListCisScansFilterCriteria>
    void SetFilterCriteria(FilterCriteriaT&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::forward<FilterCriteriaT>(value); }
    template<typename FilterCriteriaT = ListCisScansFilterCriteria>
    ListCisScansRequest& WithFilterCriteria(FilterCriteriaT&& value) { SetFilterCriteria(std::forward<FilterCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detail applied to the CIS scan.</p>
     */
    inline ListCisScansDetailLevel GetDetailLevel() const { return m_detailLevel; }
    inline bool DetailLevelHasBeenSet() const { return m_detailLevelHasBeenSet; }
    inline void SetDetailLevel(ListCisScansDetailLevel value) { m_detailLevelHasBeenSet = true; m_detailLevel = value; }
    inline ListCisScansRequest& WithDetailLevel(ListCisScansDetailLevel value) { SetDetailLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scans sort by order.</p>
     */
    inline ListCisScansSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ListCisScansSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListCisScansRequest& WithSortBy(ListCisScansSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scans sort order.</p>
     */
    inline CisSortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(CisSortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListCisScansRequest& WithSortOrder(CisSortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCisScansRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCisScansRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    ListCisScansFilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    ListCisScansDetailLevel m_detailLevel{ListCisScansDetailLevel::NOT_SET};
    bool m_detailLevelHasBeenSet = false;

    ListCisScansSortBy m_sortBy{ListCisScansSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    CisSortOrder m_sortOrder{CisSortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
