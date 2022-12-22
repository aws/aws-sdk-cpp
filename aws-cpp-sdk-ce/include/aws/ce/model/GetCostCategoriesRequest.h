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
    AWS_COSTEXPLORER_API GetCostCategoriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCostCategories"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The value that you want to search the filter values for.</p> <p>If you don't
     * specify a <code>CostCategoryName</code>, <code>SearchString</code> is used to
     * filter Cost Category names that match the <code>SearchString</code> pattern. If
     * you specify a <code>CostCategoryName</code>, <code>SearchString</code> is used
     * to filter Cost Category values that match the <code>SearchString</code>
     * pattern.</p>
     */
    inline const Aws::String& GetSearchString() const{ return m_searchString; }

    /**
     * <p>The value that you want to search the filter values for.</p> <p>If you don't
     * specify a <code>CostCategoryName</code>, <code>SearchString</code> is used to
     * filter Cost Category names that match the <code>SearchString</code> pattern. If
     * you specify a <code>CostCategoryName</code>, <code>SearchString</code> is used
     * to filter Cost Category values that match the <code>SearchString</code>
     * pattern.</p>
     */
    inline bool SearchStringHasBeenSet() const { return m_searchStringHasBeenSet; }

    /**
     * <p>The value that you want to search the filter values for.</p> <p>If you don't
     * specify a <code>CostCategoryName</code>, <code>SearchString</code> is used to
     * filter Cost Category names that match the <code>SearchString</code> pattern. If
     * you specify a <code>CostCategoryName</code>, <code>SearchString</code> is used
     * to filter Cost Category values that match the <code>SearchString</code>
     * pattern.</p>
     */
    inline void SetSearchString(const Aws::String& value) { m_searchStringHasBeenSet = true; m_searchString = value; }

    /**
     * <p>The value that you want to search the filter values for.</p> <p>If you don't
     * specify a <code>CostCategoryName</code>, <code>SearchString</code> is used to
     * filter Cost Category names that match the <code>SearchString</code> pattern. If
     * you specify a <code>CostCategoryName</code>, <code>SearchString</code> is used
     * to filter Cost Category values that match the <code>SearchString</code>
     * pattern.</p>
     */
    inline void SetSearchString(Aws::String&& value) { m_searchStringHasBeenSet = true; m_searchString = std::move(value); }

    /**
     * <p>The value that you want to search the filter values for.</p> <p>If you don't
     * specify a <code>CostCategoryName</code>, <code>SearchString</code> is used to
     * filter Cost Category names that match the <code>SearchString</code> pattern. If
     * you specify a <code>CostCategoryName</code>, <code>SearchString</code> is used
     * to filter Cost Category values that match the <code>SearchString</code>
     * pattern.</p>
     */
    inline void SetSearchString(const char* value) { m_searchStringHasBeenSet = true; m_searchString.assign(value); }

    /**
     * <p>The value that you want to search the filter values for.</p> <p>If you don't
     * specify a <code>CostCategoryName</code>, <code>SearchString</code> is used to
     * filter Cost Category names that match the <code>SearchString</code> pattern. If
     * you specify a <code>CostCategoryName</code>, <code>SearchString</code> is used
     * to filter Cost Category values that match the <code>SearchString</code>
     * pattern.</p>
     */
    inline GetCostCategoriesRequest& WithSearchString(const Aws::String& value) { SetSearchString(value); return *this;}

    /**
     * <p>The value that you want to search the filter values for.</p> <p>If you don't
     * specify a <code>CostCategoryName</code>, <code>SearchString</code> is used to
     * filter Cost Category names that match the <code>SearchString</code> pattern. If
     * you specify a <code>CostCategoryName</code>, <code>SearchString</code> is used
     * to filter Cost Category values that match the <code>SearchString</code>
     * pattern.</p>
     */
    inline GetCostCategoriesRequest& WithSearchString(Aws::String&& value) { SetSearchString(std::move(value)); return *this;}

    /**
     * <p>The value that you want to search the filter values for.</p> <p>If you don't
     * specify a <code>CostCategoryName</code>, <code>SearchString</code> is used to
     * filter Cost Category names that match the <code>SearchString</code> pattern. If
     * you specify a <code>CostCategoryName</code>, <code>SearchString</code> is used
     * to filter Cost Category values that match the <code>SearchString</code>
     * pattern.</p>
     */
    inline GetCostCategoriesRequest& WithSearchString(const char* value) { SetSearchString(value); return *this;}


    
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    
    inline GetCostCategoriesRequest& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    
    inline GetCostCategoriesRequest& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    
    inline const Aws::String& GetCostCategoryName() const{ return m_costCategoryName; }

    
    inline bool CostCategoryNameHasBeenSet() const { return m_costCategoryNameHasBeenSet; }

    
    inline void SetCostCategoryName(const Aws::String& value) { m_costCategoryNameHasBeenSet = true; m_costCategoryName = value; }

    
    inline void SetCostCategoryName(Aws::String&& value) { m_costCategoryNameHasBeenSet = true; m_costCategoryName = std::move(value); }

    
    inline void SetCostCategoryName(const char* value) { m_costCategoryNameHasBeenSet = true; m_costCategoryName.assign(value); }

    
    inline GetCostCategoriesRequest& WithCostCategoryName(const Aws::String& value) { SetCostCategoryName(value); return *this;}

    
    inline GetCostCategoriesRequest& WithCostCategoryName(Aws::String&& value) { SetCostCategoryName(std::move(value)); return *this;}

    
    inline GetCostCategoriesRequest& WithCostCategoryName(const char* value) { SetCostCategoryName(value); return *this;}


    
    inline const Expression& GetFilter() const{ return m_filter; }

    
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    
    inline void SetFilter(const Expression& value) { m_filterHasBeenSet = true; m_filter = value; }

    
    inline void SetFilter(Expression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    
    inline GetCostCategoriesRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}

    
    inline GetCostCategoriesRequest& WithFilter(Expression&& value) { SetFilter(std::move(value)); return *this;}


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
    inline const Aws::Vector<SortDefinition>& GetSortBy() const{ return m_sortBy; }

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
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

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
    inline void SetSortBy(const Aws::Vector<SortDefinition>& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

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
    inline void SetSortBy(Aws::Vector<SortDefinition>&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

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
    inline GetCostCategoriesRequest& WithSortBy(const Aws::Vector<SortDefinition>& value) { SetSortBy(value); return *this;}

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
    inline GetCostCategoriesRequest& WithSortBy(Aws::Vector<SortDefinition>&& value) { SetSortBy(std::move(value)); return *this;}

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
    inline GetCostCategoriesRequest& AddSortBy(const SortDefinition& value) { m_sortByHasBeenSet = true; m_sortBy.push_back(value); return *this; }

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
    inline GetCostCategoriesRequest& AddSortBy(SortDefinition&& value) { m_sortByHasBeenSet = true; m_sortBy.push_back(std::move(value)); return *this; }


    /**
     * <p>This field is only used when the <code>SortBy</code> value is provided in the
     * request.</p> <p>The maximum number of objects that are returned for this
     * request. If <code>MaxResults</code> isn't specified with the <code>SortBy</code>
     * value, the request returns 1000 results as the default value for this
     * parameter.</p> <p>For <code>GetCostCategories</code>, MaxResults has an upper
     * quota of 1000.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>This field is only used when the <code>SortBy</code> value is provided in the
     * request.</p> <p>The maximum number of objects that are returned for this
     * request. If <code>MaxResults</code> isn't specified with the <code>SortBy</code>
     * value, the request returns 1000 results as the default value for this
     * parameter.</p> <p>For <code>GetCostCategories</code>, MaxResults has an upper
     * quota of 1000.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>This field is only used when the <code>SortBy</code> value is provided in the
     * request.</p> <p>The maximum number of objects that are returned for this
     * request. If <code>MaxResults</code> isn't specified with the <code>SortBy</code>
     * value, the request returns 1000 results as the default value for this
     * parameter.</p> <p>For <code>GetCostCategories</code>, MaxResults has an upper
     * quota of 1000.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>This field is only used when the <code>SortBy</code> value is provided in the
     * request.</p> <p>The maximum number of objects that are returned for this
     * request. If <code>MaxResults</code> isn't specified with the <code>SortBy</code>
     * value, the request returns 1000 results as the default value for this
     * parameter.</p> <p>For <code>GetCostCategories</code>, MaxResults has an upper
     * quota of 1000.</p>
     */
    inline GetCostCategoriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the number of objects that are still available for retrieval exceeds the
     * quota, Amazon Web Services returns a NextPageToken value in the response. To
     * retrieve the next batch of objects, provide the NextPageToken from the previous
     * call in your next request.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>If the number of objects that are still available for retrieval exceeds the
     * quota, Amazon Web Services returns a NextPageToken value in the response. To
     * retrieve the next batch of objects, provide the NextPageToken from the previous
     * call in your next request.</p>
     */
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }

    /**
     * <p>If the number of objects that are still available for retrieval exceeds the
     * quota, Amazon Web Services returns a NextPageToken value in the response. To
     * retrieve the next batch of objects, provide the NextPageToken from the previous
     * call in your next request.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>If the number of objects that are still available for retrieval exceeds the
     * quota, Amazon Web Services returns a NextPageToken value in the response. To
     * retrieve the next batch of objects, provide the NextPageToken from the previous
     * call in your next request.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }

    /**
     * <p>If the number of objects that are still available for retrieval exceeds the
     * quota, Amazon Web Services returns a NextPageToken value in the response. To
     * retrieve the next batch of objects, provide the NextPageToken from the previous
     * call in your next request.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }

    /**
     * <p>If the number of objects that are still available for retrieval exceeds the
     * quota, Amazon Web Services returns a NextPageToken value in the response. To
     * retrieve the next batch of objects, provide the NextPageToken from the previous
     * call in your next request.</p>
     */
    inline GetCostCategoriesRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>If the number of objects that are still available for retrieval exceeds the
     * quota, Amazon Web Services returns a NextPageToken value in the response. To
     * retrieve the next batch of objects, provide the NextPageToken from the previous
     * call in your next request.</p>
     */
    inline GetCostCategoriesRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>If the number of objects that are still available for retrieval exceeds the
     * quota, Amazon Web Services returns a NextPageToken value in the response. To
     * retrieve the next batch of objects, provide the NextPageToken from the previous
     * call in your next request.</p>
     */
    inline GetCostCategoriesRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

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

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
