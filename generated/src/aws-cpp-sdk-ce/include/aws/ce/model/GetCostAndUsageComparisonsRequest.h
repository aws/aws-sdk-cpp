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
#include <aws/ce/model/GroupDefinition.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class GetCostAndUsageComparisonsRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetCostAndUsageComparisonsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCostAndUsageComparisons"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    GetCostAndUsageComparisonsRequest& WithBillingViewArn(BillingViewArnT&& value) { SetBillingViewArn(std::forward<BillingViewArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference time period for comparison. This time period serves as the
     * baseline against which other cost and usage data will be compared. The interval
     * must start and end on the first day of a month, with a duration of exactly one
     * month.</p>
     */
    inline const DateInterval& GetBaselineTimePeriod() const { return m_baselineTimePeriod; }
    inline bool BaselineTimePeriodHasBeenSet() const { return m_baselineTimePeriodHasBeenSet; }
    template<typename BaselineTimePeriodT = DateInterval>
    void SetBaselineTimePeriod(BaselineTimePeriodT&& value) { m_baselineTimePeriodHasBeenSet = true; m_baselineTimePeriod = std::forward<BaselineTimePeriodT>(value); }
    template<typename BaselineTimePeriodT = DateInterval>
    GetCostAndUsageComparisonsRequest& WithBaselineTimePeriod(BaselineTimePeriodT&& value) { SetBaselineTimePeriod(std::forward<BaselineTimePeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comparison time period for analysis. This time period's cost and usage
     * data will be compared against the baseline time period. The interval must start
     * and end on the first day of a month, with a duration of exactly one month.</p>
     */
    inline const DateInterval& GetComparisonTimePeriod() const { return m_comparisonTimePeriod; }
    inline bool ComparisonTimePeriodHasBeenSet() const { return m_comparisonTimePeriodHasBeenSet; }
    template<typename ComparisonTimePeriodT = DateInterval>
    void SetComparisonTimePeriod(ComparisonTimePeriodT&& value) { m_comparisonTimePeriodHasBeenSet = true; m_comparisonTimePeriod = std::forward<ComparisonTimePeriodT>(value); }
    template<typename ComparisonTimePeriodT = DateInterval>
    GetCostAndUsageComparisonsRequest& WithComparisonTimePeriod(ComparisonTimePeriodT&& value) { SetComparisonTimePeriod(std::forward<ComparisonTimePeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost and usage metric to compare. Valid values are
     * <code>AmortizedCost</code>, <code>BlendedCost</code>,
     * <code>NetAmortizedCost</code>, <code>NetUnblendedCost</code>,
     * <code>NormalizedUsageAmount</code>, <code>UnblendedCost</code>, and
     * <code>UsageQuantity</code>.</p>
     */
    inline const Aws::String& GetMetricForComparison() const { return m_metricForComparison; }
    inline bool MetricForComparisonHasBeenSet() const { return m_metricForComparisonHasBeenSet; }
    template<typename MetricForComparisonT = Aws::String>
    void SetMetricForComparison(MetricForComparisonT&& value) { m_metricForComparisonHasBeenSet = true; m_metricForComparison = std::forward<MetricForComparisonT>(value); }
    template<typename MetricForComparisonT = Aws::String>
    GetCostAndUsageComparisonsRequest& WithMetricForComparison(MetricForComparisonT&& value) { SetMetricForComparison(std::forward<MetricForComparisonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Expression& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Expression>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Expression>
    GetCostAndUsageComparisonsRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can group results using the attributes <code>DIMENSION</code>,
     * <code>TAG</code>, and <code>COST_CATEGORY</code>. </p>
     */
    inline const Aws::Vector<GroupDefinition>& GetGroupBy() const { return m_groupBy; }
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
    template<typename GroupByT = Aws::Vector<GroupDefinition>>
    void SetGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy = std::forward<GroupByT>(value); }
    template<typename GroupByT = Aws::Vector<GroupDefinition>>
    GetCostAndUsageComparisonsRequest& WithGroupBy(GroupByT&& value) { SetGroupBy(std::forward<GroupByT>(value)); return *this;}
    template<typename GroupByT = GroupDefinition>
    GetCostAndUsageComparisonsRequest& AddGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy.emplace_back(std::forward<GroupByT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results that are returned for the request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetCostAndUsageComparisonsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetCostAndUsageComparisonsRequest& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_billingViewArn;
    bool m_billingViewArnHasBeenSet = false;

    DateInterval m_baselineTimePeriod;
    bool m_baselineTimePeriodHasBeenSet = false;

    DateInterval m_comparisonTimePeriod;
    bool m_comparisonTimePeriodHasBeenSet = false;

    Aws::String m_metricForComparison;
    bool m_metricForComparisonHasBeenSet = false;

    Expression m_filter;
    bool m_filterHasBeenSet = false;

    Aws::Vector<GroupDefinition> m_groupBy;
    bool m_groupByHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
