/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/CisScanResultsAggregatedByTargetResourceFilterCriteria.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisScanResultsAggregatedByTargetResourceSortBy.h>
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
  class ListCisScanResultsAggregatedByTargetResourceRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API ListCisScanResultsAggregatedByTargetResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCisScanResultsAggregatedByTargetResource"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>The filter criteria.</p>
     */
    inline const CisScanResultsAggregatedByTargetResourceFilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }

    /**
     * <p>The filter criteria.</p>
     */
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }

    /**
     * <p>The filter criteria.</p>
     */
    inline void SetFilterCriteria(const CisScanResultsAggregatedByTargetResourceFilterCriteria& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = value; }

    /**
     * <p>The filter criteria.</p>
     */
    inline void SetFilterCriteria(CisScanResultsAggregatedByTargetResourceFilterCriteria&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::move(value); }

    /**
     * <p>The filter criteria.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceRequest& WithFilterCriteria(const CisScanResultsAggregatedByTargetResourceFilterCriteria& value) { SetFilterCriteria(value); return *this;}

    /**
     * <p>The filter criteria.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceRequest& WithFilterCriteria(CisScanResultsAggregatedByTargetResourceFilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}


    /**
     * <p>The maximum number of scan results aggregated by a target resource to be
     * returned in a single page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of scan results aggregated by a target resource to be
     * returned in a single page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of scan results aggregated by a target resource to be
     * returned in a single page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of scan results aggregated by a target resource to be
     * returned in a single page of results.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListCisScanResultsAggregatedByTargetResourceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The scan ARN.</p>
     */
    inline const Aws::String& GetScanArn() const{ return m_scanArn; }

    /**
     * <p>The scan ARN.</p>
     */
    inline bool ScanArnHasBeenSet() const { return m_scanArnHasBeenSet; }

    /**
     * <p>The scan ARN.</p>
     */
    inline void SetScanArn(const Aws::String& value) { m_scanArnHasBeenSet = true; m_scanArn = value; }

    /**
     * <p>The scan ARN.</p>
     */
    inline void SetScanArn(Aws::String&& value) { m_scanArnHasBeenSet = true; m_scanArn = std::move(value); }

    /**
     * <p>The scan ARN.</p>
     */
    inline void SetScanArn(const char* value) { m_scanArnHasBeenSet = true; m_scanArn.assign(value); }

    /**
     * <p>The scan ARN.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceRequest& WithScanArn(const Aws::String& value) { SetScanArn(value); return *this;}

    /**
     * <p>The scan ARN.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceRequest& WithScanArn(Aws::String&& value) { SetScanArn(std::move(value)); return *this;}

    /**
     * <p>The scan ARN.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceRequest& WithScanArn(const char* value) { SetScanArn(value); return *this;}


    /**
     * <p>The sort by order.</p>
     */
    inline const CisScanResultsAggregatedByTargetResourceSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The sort by order.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The sort by order.</p>
     */
    inline void SetSortBy(const CisScanResultsAggregatedByTargetResourceSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The sort by order.</p>
     */
    inline void SetSortBy(CisScanResultsAggregatedByTargetResourceSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The sort by order.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceRequest& WithSortBy(const CisScanResultsAggregatedByTargetResourceSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The sort by order.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceRequest& WithSortBy(CisScanResultsAggregatedByTargetResourceSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order.</p>
     */
    inline const CisSortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order.</p>
     */
    inline void SetSortOrder(const CisSortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order.</p>
     */
    inline void SetSortOrder(CisSortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceRequest& WithSortOrder(const CisSortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceRequest& WithSortOrder(CisSortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    CisScanResultsAggregatedByTargetResourceFilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_scanArn;
    bool m_scanArnHasBeenSet = false;

    CisScanResultsAggregatedByTargetResourceSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    CisSortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
