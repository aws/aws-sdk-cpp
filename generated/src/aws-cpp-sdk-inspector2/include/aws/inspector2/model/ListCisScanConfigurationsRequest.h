/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/ListCisScanConfigurationsFilterCriteria.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisScanConfigurationsSortBy.h>
#include <aws/inspector2/model/CisSortOrder.h>
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
    AWS_INSPECTOR2_API ListCisScanConfigurationsRequest();

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
    inline const ListCisScanConfigurationsFilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }
    inline void SetFilterCriteria(const ListCisScanConfigurationsFilterCriteria& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = value; }
    inline void SetFilterCriteria(ListCisScanConfigurationsFilterCriteria&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::move(value); }
    inline ListCisScanConfigurationsRequest& WithFilterCriteria(const ListCisScanConfigurationsFilterCriteria& value) { SetFilterCriteria(value); return *this;}
    inline ListCisScanConfigurationsRequest& WithFilterCriteria(ListCisScanConfigurationsFilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of CIS scan configurations to be returned in a single page
     * of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCisScanConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListCisScanConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCisScanConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCisScanConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan configuration sort by order.</p>
     */
    inline const CisScanConfigurationsSortBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const CisScanConfigurationsSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(CisScanConfigurationsSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListCisScanConfigurationsRequest& WithSortBy(const CisScanConfigurationsSortBy& value) { SetSortBy(value); return *this;}
    inline ListCisScanConfigurationsRequest& WithSortBy(CisScanConfigurationsSortBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan configuration sort order order.</p>
     */
    inline const CisSortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const CisSortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(CisSortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListCisScanConfigurationsRequest& WithSortOrder(const CisSortOrder& value) { SetSortOrder(value); return *this;}
    inline ListCisScanConfigurationsRequest& WithSortOrder(CisSortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}
  private:

    ListCisScanConfigurationsFilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    CisScanConfigurationsSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    CisSortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
