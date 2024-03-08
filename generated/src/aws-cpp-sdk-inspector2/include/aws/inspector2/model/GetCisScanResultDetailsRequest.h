/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisScanResultDetailsFilterCriteria.h>
#include <aws/inspector2/model/CisScanResultDetailsSortBy.h>
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
  class GetCisScanResultDetailsRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API GetCisScanResultDetailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCisScanResultDetails"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>The account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID.</p>
     */
    inline GetCisScanResultDetailsRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID.</p>
     */
    inline GetCisScanResultDetailsRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID.</p>
     */
    inline GetCisScanResultDetailsRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The filter criteria.</p>
     */
    inline const CisScanResultDetailsFilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }

    /**
     * <p>The filter criteria.</p>
     */
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }

    /**
     * <p>The filter criteria.</p>
     */
    inline void SetFilterCriteria(const CisScanResultDetailsFilterCriteria& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = value; }

    /**
     * <p>The filter criteria.</p>
     */
    inline void SetFilterCriteria(CisScanResultDetailsFilterCriteria&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::move(value); }

    /**
     * <p>The filter criteria.</p>
     */
    inline GetCisScanResultDetailsRequest& WithFilterCriteria(const CisScanResultDetailsFilterCriteria& value) { SetFilterCriteria(value); return *this;}

    /**
     * <p>The filter criteria.</p>
     */
    inline GetCisScanResultDetailsRequest& WithFilterCriteria(CisScanResultDetailsFilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}


    /**
     * <p>The maximum number of CIS scan result details to be returned in a single page
     * of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of CIS scan result details to be returned in a single page
     * of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of CIS scan result details to be returned in a single page
     * of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of CIS scan result details to be returned in a single page
     * of results.</p>
     */
    inline GetCisScanResultDetailsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline GetCisScanResultDetailsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline GetCisScanResultDetailsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline GetCisScanResultDetailsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline GetCisScanResultDetailsRequest& WithScanArn(const Aws::String& value) { SetScanArn(value); return *this;}

    /**
     * <p>The scan ARN.</p>
     */
    inline GetCisScanResultDetailsRequest& WithScanArn(Aws::String&& value) { SetScanArn(std::move(value)); return *this;}

    /**
     * <p>The scan ARN.</p>
     */
    inline GetCisScanResultDetailsRequest& WithScanArn(const char* value) { SetScanArn(value); return *this;}


    /**
     * <p>The sort by order.</p>
     */
    inline const CisScanResultDetailsSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The sort by order.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The sort by order.</p>
     */
    inline void SetSortBy(const CisScanResultDetailsSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The sort by order.</p>
     */
    inline void SetSortBy(CisScanResultDetailsSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The sort by order.</p>
     */
    inline GetCisScanResultDetailsRequest& WithSortBy(const CisScanResultDetailsSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The sort by order.</p>
     */
    inline GetCisScanResultDetailsRequest& WithSortBy(CisScanResultDetailsSortBy&& value) { SetSortBy(std::move(value)); return *this;}


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
    inline GetCisScanResultDetailsRequest& WithSortOrder(const CisSortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order.</p>
     */
    inline GetCisScanResultDetailsRequest& WithSortOrder(CisSortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>The target resource ID.</p>
     */
    inline const Aws::String& GetTargetResourceId() const{ return m_targetResourceId; }

    /**
     * <p>The target resource ID.</p>
     */
    inline bool TargetResourceIdHasBeenSet() const { return m_targetResourceIdHasBeenSet; }

    /**
     * <p>The target resource ID.</p>
     */
    inline void SetTargetResourceId(const Aws::String& value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId = value; }

    /**
     * <p>The target resource ID.</p>
     */
    inline void SetTargetResourceId(Aws::String&& value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId = std::move(value); }

    /**
     * <p>The target resource ID.</p>
     */
    inline void SetTargetResourceId(const char* value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId.assign(value); }

    /**
     * <p>The target resource ID.</p>
     */
    inline GetCisScanResultDetailsRequest& WithTargetResourceId(const Aws::String& value) { SetTargetResourceId(value); return *this;}

    /**
     * <p>The target resource ID.</p>
     */
    inline GetCisScanResultDetailsRequest& WithTargetResourceId(Aws::String&& value) { SetTargetResourceId(std::move(value)); return *this;}

    /**
     * <p>The target resource ID.</p>
     */
    inline GetCisScanResultDetailsRequest& WithTargetResourceId(const char* value) { SetTargetResourceId(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    CisScanResultDetailsFilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_scanArn;
    bool m_scanArnHasBeenSet = false;

    CisScanResultDetailsSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    CisSortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_targetResourceId;
    bool m_targetResourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
