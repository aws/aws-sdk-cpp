/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/DateInterval.h>
#include <aws/ce/model/Expression.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/SortDefinition.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class GetCostCategoriesRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetCostCategoriesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCostCategories"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The value that you want to search the filter values for.</p> <p>If you don't
     * specify a <code>CostCategoryName</code>, <code>SearchString</code> is used to
     * filter Cost Category names that match the <code>SearchString</code> pattern. If
     * you specify a <code>CostCategoryName</code>, <code>SearchString</code> is used
     * to filter Cost Category values that match the <code>SearchString</code>
     * pattern.</p>
     */
    inline const Aws::String& GetSearchString() const { return m_searchString; }
    inline bool SearchStringHasBeenSet() const { return m_searchStringHasBeenSet; }
    template<typename SearchStringT = Aws::String>
    void SetSearchString(SearchStringT&& value) { m_searchStringHasBeenSet = true; m_searchString = std::forward<SearchStringT>(value); }
    template<typename SearchStringT = Aws::String>
    GetCostCategoriesRequest& WithSearchString(SearchStringT&& value) { SetSearchString(std::forward<SearchStringT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DateInterval& GetTimePeriod() const { return m_timePeriod; }
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
    template<typename TimePeriodT = DateInterval>
    void SetTimePeriod(TimePeriodT&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::forward<TimePeriodT>(value); }
    template<typename TimePeriodT = DateInterval>
    GetCostCategoriesRequest& WithTimePeriod(TimePeriodT&& value) { SetTimePeriod(std::forward<TimePeriodT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetCostCategoryName() const { return m_costCategoryName; }
    inline bool CostCategoryNameHasBeenSet() const { return m_costCategoryNameHasBeenSet; }
    template<typename CostCategoryNameT = Aws::String>
    void SetCostCategoryName(CostCategoryNameT&& value) { m_costCategoryNameHasBeenSet = true; m_costCategoryName = std::forward<CostCategoryNameT>(value); }
    template<typename CostCategoryNameT = Aws::String>
    GetCostCategoriesRequest& WithCostCategoryName(CostCategoryNameT&& value) { SetCostCategoryName(std::forward<CostCategoryNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Expression& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Expression>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Expression>
    GetCostCategoriesRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you sort the data by.</p> <p>The key represents the cost and
     * usage metrics. The following values are supported:</p> <ul> <li> <p>
     * <code>BlendedCost</code> </p> </li> <li> <p> <code>UnblendedCost</code> </p>
     * </li> <li> <p> <code>AmortizedCost</code> </p> </li> <li> <p>
     * <code>NetAmortizedCost</code> </p> </li> <li> <p> <code>NetUnblendedCost</code>
     * </p> </li> <li> <p> <code>UsageQuantity</code> </p> </li> <li> <p>
     * <code>NormalizedUsageAmount</code> </p> </li> </ul> <p>The supported key values
     * for the <code>SortOrder</code> value are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p> <p>When you use the <code>SortBy</code> value, the
     * <code>NextPageToken</code> and <code>SearchString</code> key values aren't
     * supported.</p>
     */
    inline const Aws::Vector<SortDefinition>& GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    template<typename SortByT = Aws::Vector<SortDefinition>>
    void SetSortBy(SortByT&& value) { m_sortByHasBeenSet = true; m_sortBy = std::forward<SortByT>(value); }
    template<typename SortByT = Aws::Vector<SortDefinition>>
    GetCostCategoriesRequest& WithSortBy(SortByT&& value) { SetSortBy(std::forward<SortByT>(value)); return *this;}
    template<typename SortByT = SortDefinition>
    GetCostCategoriesRequest& AddSortBy(SortByT&& value) { m_sortByHasBeenSet = true; m_sortBy.emplace_back(std::forward<SortByT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies a specific billing
     * view. The ARN is used to specify which particular billing view you want to
     * interact with or retrieve information from when making API calls related to
     * Amazon Web Services Billing and Cost Management features. The BillingViewArn can
     * be retrieved by calling the ListBillingViews API.</p>
     */
    inline const Aws::String& GetBillingViewArn() const { return m_billingViewArn; }
    inline bool BillingViewArnHasBeenSet() const { return m_billingViewArnHasBeenSet; }
    template<typename BillingViewArnT = Aws::String>
    void SetBillingViewArn(BillingViewArnT&& value) { m_billingViewArnHasBeenSet = true; m_billingViewArn = std::forward<BillingViewArnT>(value); }
    template<typename BillingViewArnT = Aws::String>
    GetCostCategoriesRequest& WithBillingViewArn(BillingViewArnT&& value) { SetBillingViewArn(std::forward<BillingViewArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is only used when the <code>SortBy</code> value is provided in the
     * request.</p> <p>The maximum number of objects that are returned for this
     * request. If <code>MaxResults</code> isn't specified with the <code>SortBy</code>
     * value, the request returns 1000 results as the default value for this
     * parameter.</p> <p>For <code>GetCostCategories</code>, MaxResults has an upper
     * quota of 1000.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetCostCategoriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the number of objects that are still available for retrieval exceeds the
     * quota, Amazon Web Services returns a NextPageToken value in the response. To
     * retrieve the next batch of objects, provide the NextPageToken from the previous
     * call in your next request.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetCostCategoriesRequest& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_searchString;
    bool m_searchStringHasBeenSet = false;

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    Aws::String m_costCategoryName;
    bool m_costCategoryNameHasBeenSet = false;

    Expression m_filter;
    bool m_filterHasBeenSet = false;

    Aws::Vector<SortDefinition> m_sortBy;
    bool m_sortByHasBeenSet = false;

    Aws::String m_billingViewArn;
    bool m_billingViewArnHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
