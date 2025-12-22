/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityManagerCondition.h>
#include <aws/ec2/model/GroupBy.h>
#include <aws/ec2/model/Metric.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class GetCapacityManagerMetricDimensionsRequest : public EC2Request {
 public:
  AWS_EC2_API GetCapacityManagerMetricDimensionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetCapacityManagerMetricDimensions"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p> The dimensions to group by when retrieving available dimension values. This
   * determines which dimension combinations are returned. Required parameter. </p>
   */
  inline const Aws::Vector<GroupBy>& GetGroupBy() const { return m_groupBy; }
  inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
  template <typename GroupByT = Aws::Vector<GroupBy>>
  void SetGroupBy(GroupByT&& value) {
    m_groupByHasBeenSet = true;
    m_groupBy = std::forward<GroupByT>(value);
  }
  template <typename GroupByT = Aws::Vector<GroupBy>>
  GetCapacityManagerMetricDimensionsRequest& WithGroupBy(GroupByT&& value) {
    SetGroupBy(std::forward<GroupByT>(value));
    return *this;
  }
  inline GetCapacityManagerMetricDimensionsRequest& AddGroupBy(GroupBy value) {
    m_groupByHasBeenSet = true;
    m_groupBy.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Conditions to filter which dimension values are returned. Each filter
   * specifies a dimension, comparison operator, and values to match against. </p>
   */
  inline const Aws::Vector<CapacityManagerCondition>& GetFilterBy() const { return m_filterBy; }
  inline bool FilterByHasBeenSet() const { return m_filterByHasBeenSet; }
  template <typename FilterByT = Aws::Vector<CapacityManagerCondition>>
  void SetFilterBy(FilterByT&& value) {
    m_filterByHasBeenSet = true;
    m_filterBy = std::forward<FilterByT>(value);
  }
  template <typename FilterByT = Aws::Vector<CapacityManagerCondition>>
  GetCapacityManagerMetricDimensionsRequest& WithFilterBy(FilterByT&& value) {
    SetFilterBy(std::forward<FilterByT>(value));
    return *this;
  }
  template <typename FilterByT = CapacityManagerCondition>
  GetCapacityManagerMetricDimensionsRequest& AddFilterBy(FilterByT&& value) {
    m_filterByHasBeenSet = true;
    m_filterBy.emplace_back(std::forward<FilterByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The start time for the dimension query, in ISO 8601 format. Only dimensions
   * with data in this time range will be returned. </p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  GetCapacityManagerMetricDimensionsRequest& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The end time for the dimension query, in ISO 8601 format. Only dimensions
   * with data in this time range will be returned. </p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  GetCapacityManagerMetricDimensionsRequest& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The metric names to use as an additional filter when retrieving dimensions.
   * Only dimensions that have data for these metrics will be returned. Required
   * parameter with maximum size of 1 for v1. </p>
   */
  inline const Aws::Vector<Metric>& GetMetricNames() const { return m_metricNames; }
  inline bool MetricNamesHasBeenSet() const { return m_metricNamesHasBeenSet; }
  template <typename MetricNamesT = Aws::Vector<Metric>>
  void SetMetricNames(MetricNamesT&& value) {
    m_metricNamesHasBeenSet = true;
    m_metricNames = std::forward<MetricNamesT>(value);
  }
  template <typename MetricNamesT = Aws::Vector<Metric>>
  GetCapacityManagerMetricDimensionsRequest& WithMetricNames(MetricNamesT&& value) {
    SetMetricNames(std::forward<MetricNamesT>(value));
    return *this;
  }
  inline GetCapacityManagerMetricDimensionsRequest& AddMetricNames(Metric value) {
    m_metricNamesHasBeenSet = true;
    m_metricNames.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The maximum number of dimension combinations to return. Valid range is 1 to
   * 1000. Use with NextToken for pagination. </p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetCapacityManagerMetricDimensionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The token for the next page of results. Use this value in a subsequent call
   * to retrieve additional dimension values. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetCapacityManagerMetricDimensionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>. </p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline GetCapacityManagerMetricDimensionsRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<GroupBy> m_groupBy;

  Aws::Vector<CapacityManagerCondition> m_filterBy;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::Vector<Metric> m_metricNames;

  int m_maxResults{0};

  Aws::String m_nextToken;

  bool m_dryRun{false};
  bool m_groupByHasBeenSet = false;
  bool m_filterByHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_metricNamesHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
