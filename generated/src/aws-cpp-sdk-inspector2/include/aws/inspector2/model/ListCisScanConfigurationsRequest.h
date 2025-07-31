/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/ListCisScanConfigurationsFilterCriteria.h>
#include <aws/inspector2/model/CisScanConfigurationsSortBy.h>
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
  class ListCisScanConfigurationsRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API ListCisScanConfigurationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCisScanConfigurations"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The CIS scan configuration filter criteria.</p>
     */
    inline const ListCisScanConfigurationsFilterCriteria& GetFilterCriteria() const { return m_filterCriteria; }
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }
    template<typename FilterCriteriaT = ListCisScanConfigurationsFilterCriteria>
    void SetFilterCriteria(FilterCriteriaT&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::forward<FilterCriteriaT>(value); }
    template<typename FilterCriteriaT = ListCisScanConfigurationsFilterCriteria>
    ListCisScanConfigurationsRequest& WithFilterCriteria(FilterCriteriaT&& value) { SetFilterCriteria(std::forward<FilterCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan configuration sort by order.</p>
     */
    inline CisScanConfigurationsSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(CisScanConfigurationsSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListCisScanConfigurationsRequest& WithSortBy(CisScanConfigurationsSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan configuration sort order order.</p>
     */
    inline CisSortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(CisSortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListCisScanConfigurationsRequest& WithSortOrder(CisSortOrder value) { SetSortOrder(value); return *this;}
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
    ListCisScanConfigurationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of CIS scan configurations to be returned in a single page
     * of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCisScanConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    ListCisScanConfigurationsFilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    CisScanConfigurationsSortBy m_sortBy{CisScanConfigurationsSortBy::NOT_SET};
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
