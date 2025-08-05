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
    AWS_INSPECTOR2_API GetCisScanResultDetailsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCisScanResultDetails"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The scan ARN.</p>
     */
    inline const Aws::String& GetScanArn() const { return m_scanArn; }
    inline bool ScanArnHasBeenSet() const { return m_scanArnHasBeenSet; }
    template<typename ScanArnT = Aws::String>
    void SetScanArn(ScanArnT&& value) { m_scanArnHasBeenSet = true; m_scanArn = std::forward<ScanArnT>(value); }
    template<typename ScanArnT = Aws::String>
    GetCisScanResultDetailsRequest& WithScanArn(ScanArnT&& value) { SetScanArn(std::forward<ScanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target resource ID.</p>
     */
    inline const Aws::String& GetTargetResourceId() const { return m_targetResourceId; }
    inline bool TargetResourceIdHasBeenSet() const { return m_targetResourceIdHasBeenSet; }
    template<typename TargetResourceIdT = Aws::String>
    void SetTargetResourceId(TargetResourceIdT&& value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId = std::forward<TargetResourceIdT>(value); }
    template<typename TargetResourceIdT = Aws::String>
    GetCisScanResultDetailsRequest& WithTargetResourceId(TargetResourceIdT&& value) { SetTargetResourceId(std::forward<TargetResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    GetCisScanResultDetailsRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter criteria.</p>
     */
    inline const CisScanResultDetailsFilterCriteria& GetFilterCriteria() const { return m_filterCriteria; }
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }
    template<typename FilterCriteriaT = CisScanResultDetailsFilterCriteria>
    void SetFilterCriteria(FilterCriteriaT&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::forward<FilterCriteriaT>(value); }
    template<typename FilterCriteriaT = CisScanResultDetailsFilterCriteria>
    GetCisScanResultDetailsRequest& WithFilterCriteria(FilterCriteriaT&& value) { SetFilterCriteria(std::forward<FilterCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort by order.</p>
     */
    inline CisScanResultDetailsSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(CisScanResultDetailsSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline GetCisScanResultDetailsRequest& WithSortBy(CisScanResultDetailsSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order.</p>
     */
    inline CisSortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(CisSortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline GetCisScanResultDetailsRequest& WithSortOrder(CisSortOrder value) { SetSortOrder(value); return *this;}
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
    GetCisScanResultDetailsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of CIS scan result details to be returned in a single page
     * of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetCisScanResultDetailsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_scanArn;
    bool m_scanArnHasBeenSet = false;

    Aws::String m_targetResourceId;
    bool m_targetResourceIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    CisScanResultDetailsFilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    CisScanResultDetailsSortBy m_sortBy{CisScanResultDetailsSortBy::NOT_SET};
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
