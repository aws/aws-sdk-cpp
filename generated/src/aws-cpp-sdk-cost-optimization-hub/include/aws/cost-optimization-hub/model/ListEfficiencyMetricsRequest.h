/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cost-optimization-hub/CostOptimizationHubRequest.h>
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/GranularityType.h>
#include <aws/cost-optimization-hub/model/OrderBy.h>
#include <aws/cost-optimization-hub/model/TimePeriod.h>

#include <utility>

namespace Aws {
namespace CostOptimizationHub {
namespace Model {

/**
 */
class ListEfficiencyMetricsRequest : public CostOptimizationHubRequest {
 public:
  AWS_COSTOPTIMIZATIONHUB_API ListEfficiencyMetricsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListEfficiencyMetrics"; }

  AWS_COSTOPTIMIZATIONHUB_API Aws::String SerializePayload() const override;

  AWS_COSTOPTIMIZATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The dimension by which to group the cost efficiency metrics. Valid values
   * include account ID, Amazon Web Services Region. When no grouping is specified,
   * metrics are aggregated across all resources in the specified time period.</p>
   */
  inline const Aws::String& GetGroupBy() const { return m_groupBy; }
  inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
  template <typename GroupByT = Aws::String>
  void SetGroupBy(GroupByT&& value) {
    m_groupByHasBeenSet = true;
    m_groupBy = std::forward<GroupByT>(value);
  }
  template <typename GroupByT = Aws::String>
  ListEfficiencyMetricsRequest& WithGroupBy(GroupByT&& value) {
    SetGroupBy(std::forward<GroupByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time granularity for the cost efficiency metrics. Specify
   * <code>Daily</code> for metrics aggregated by day, or <code>Monthly</code> for
   * metrics aggregated by month.</p>
   */
  inline GranularityType GetGranularity() const { return m_granularity; }
  inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
  inline void SetGranularity(GranularityType value) {
    m_granularityHasBeenSet = true;
    m_granularity = value;
  }
  inline ListEfficiencyMetricsRequest& WithGranularity(GranularityType value) {
    SetGranularity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time period for which to retrieve the cost efficiency metrics. The start
   * date is inclusive and the end date is exclusive. Dates can be specified in
   * either YYYY-MM-DD format or YYYY-MM format depending on the desired
   * granularity.</p>
   */
  inline const TimePeriod& GetTimePeriod() const { return m_timePeriod; }
  inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
  template <typename TimePeriodT = TimePeriod>
  void SetTimePeriod(TimePeriodT&& value) {
    m_timePeriodHasBeenSet = true;
    m_timePeriod = std::forward<TimePeriodT>(value);
  }
  template <typename TimePeriodT = TimePeriod>
  ListEfficiencyMetricsRequest& WithTimePeriod(TimePeriodT&& value) {
    SetTimePeriod(std::forward<TimePeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of groups to return in the response. Valid values range
   * from 0 to 1000. Use in conjunction with <code>nextToken</code> to paginate
   * through results when the total number of groups exceeds this limit.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListEfficiencyMetricsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ordering specification for the results. Defines which dimension to sort
   * by and whether to sort in ascending or descending order.</p>
   */
  inline const OrderBy& GetOrderBy() const { return m_orderBy; }
  inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }
  template <typename OrderByT = OrderBy>
  void SetOrderBy(OrderByT&& value) {
    m_orderByHasBeenSet = true;
    m_orderBy = std::forward<OrderByT>(value);
  }
  template <typename OrderByT = OrderBy>
  ListEfficiencyMetricsRequest& WithOrderBy(OrderByT&& value) {
    SetOrderBy(std::forward<OrderByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to retrieve the next page of results. This value is returned in the
   * response when the number of groups exceeds the specified <code>maxResults</code>
   * value.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEfficiencyMetricsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_groupBy;
  bool m_groupByHasBeenSet = false;

  GranularityType m_granularity{GranularityType::NOT_SET};
  bool m_granularityHasBeenSet = false;

  TimePeriod m_timePeriod;
  bool m_timePeriodHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  OrderBy m_orderBy;
  bool m_orderByHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace CostOptimizationHub
}  // namespace Aws
