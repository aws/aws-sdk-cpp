/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/ListCisScansDetailLevel.h>
#include <aws/inspector2/model/ListCisScansFilterCriteria.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/ListCisScansSortBy.h>
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
  class ListCisScansRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API ListCisScansRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCisScans"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>The detail applied to the CIS scan.</p>
     */
    inline const ListCisScansDetailLevel& GetDetailLevel() const{ return m_detailLevel; }

    /**
     * <p>The detail applied to the CIS scan.</p>
     */
    inline bool DetailLevelHasBeenSet() const { return m_detailLevelHasBeenSet; }

    /**
     * <p>The detail applied to the CIS scan.</p>
     */
    inline void SetDetailLevel(const ListCisScansDetailLevel& value) { m_detailLevelHasBeenSet = true; m_detailLevel = value; }

    /**
     * <p>The detail applied to the CIS scan.</p>
     */
    inline void SetDetailLevel(ListCisScansDetailLevel&& value) { m_detailLevelHasBeenSet = true; m_detailLevel = std::move(value); }

    /**
     * <p>The detail applied to the CIS scan.</p>
     */
    inline ListCisScansRequest& WithDetailLevel(const ListCisScansDetailLevel& value) { SetDetailLevel(value); return *this;}

    /**
     * <p>The detail applied to the CIS scan.</p>
     */
    inline ListCisScansRequest& WithDetailLevel(ListCisScansDetailLevel&& value) { SetDetailLevel(std::move(value)); return *this;}


    /**
     * <p>The CIS scan filter criteria.</p>
     */
    inline const ListCisScansFilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }

    /**
     * <p>The CIS scan filter criteria.</p>
     */
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }

    /**
     * <p>The CIS scan filter criteria.</p>
     */
    inline void SetFilterCriteria(const ListCisScansFilterCriteria& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = value; }

    /**
     * <p>The CIS scan filter criteria.</p>
     */
    inline void SetFilterCriteria(ListCisScansFilterCriteria&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::move(value); }

    /**
     * <p>The CIS scan filter criteria.</p>
     */
    inline ListCisScansRequest& WithFilterCriteria(const ListCisScansFilterCriteria& value) { SetFilterCriteria(value); return *this;}

    /**
     * <p>The CIS scan filter criteria.</p>
     */
    inline ListCisScansRequest& WithFilterCriteria(ListCisScansFilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to be returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to be returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to be returned.</p>
     */
    inline ListCisScansRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline ListCisScansRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline ListCisScansRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline ListCisScansRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The CIS scans sort by order.</p>
     */
    inline const ListCisScansSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The CIS scans sort by order.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The CIS scans sort by order.</p>
     */
    inline void SetSortBy(const ListCisScansSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The CIS scans sort by order.</p>
     */
    inline void SetSortBy(ListCisScansSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The CIS scans sort by order.</p>
     */
    inline ListCisScansRequest& WithSortBy(const ListCisScansSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The CIS scans sort by order.</p>
     */
    inline ListCisScansRequest& WithSortBy(ListCisScansSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The CIS scans sort order.</p>
     */
    inline const CisSortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The CIS scans sort order.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The CIS scans sort order.</p>
     */
    inline void SetSortOrder(const CisSortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The CIS scans sort order.</p>
     */
    inline void SetSortOrder(CisSortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The CIS scans sort order.</p>
     */
    inline ListCisScansRequest& WithSortOrder(const CisSortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The CIS scans sort order.</p>
     */
    inline ListCisScansRequest& WithSortOrder(CisSortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    ListCisScansDetailLevel m_detailLevel;
    bool m_detailLevelHasBeenSet = false;

    ListCisScansFilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ListCisScansSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    CisSortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
