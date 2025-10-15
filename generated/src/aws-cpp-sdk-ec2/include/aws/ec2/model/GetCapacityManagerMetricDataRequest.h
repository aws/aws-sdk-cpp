/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Metric.h>
#include <aws/ec2/model/GroupBy.h>
#include <aws/ec2/model/CapacityManagerCondition.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class GetCapacityManagerMetricDataRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetCapacityManagerMetricDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCapacityManagerMetricData"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p> The names of the metrics to retrieve. Maximum of 10 metrics per request.
     * </p>
     */
    inline const Aws::Vector<Metric>& GetMetricNames() const { return m_metricNames; }
    inline bool MetricNamesHasBeenSet() const { return m_metricNamesHasBeenSet; }
    template<typename MetricNamesT = Aws::Vector<Metric>>
    void SetMetricNames(MetricNamesT&& value) { m_metricNamesHasBeenSet = true; m_metricNames = std::forward<MetricNamesT>(value); }
    template<typename MetricNamesT = Aws::Vector<Metric>>
    GetCapacityManagerMetricDataRequest& WithMetricNames(MetricNamesT&& value) { SetMetricNames(std::forward<MetricNamesT>(value)); return *this;}
    inline GetCapacityManagerMetricDataRequest& AddMetricNames(Metric value) { m_metricNamesHasBeenSet = true; m_metricNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The start time for the metric data query, in ISO 8601 format. The time range
     * (end time - start time) must be a multiple of the specified period. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetCapacityManagerMetricDataRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The end time for the metric data query, in ISO 8601 format. If the end time
     * is beyond the latest ingested data, it will be automatically adjusted to the
     * latest available data point. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetCapacityManagerMetricDataRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The granularity, in seconds, of the returned data points. </p>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline GetCapacityManagerMetricDataRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The dimensions by which to group the metric data. This determines how the
     * data is aggregated and returned. </p>
     */
    inline const Aws::Vector<GroupBy>& GetGroupBy() const { return m_groupBy; }
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
    template<typename GroupByT = Aws::Vector<GroupBy>>
    void SetGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy = std::forward<GroupByT>(value); }
    template<typename GroupByT = Aws::Vector<GroupBy>>
    GetCapacityManagerMetricDataRequest& WithGroupBy(GroupByT&& value) { SetGroupBy(std::forward<GroupByT>(value)); return *this;}
    inline GetCapacityManagerMetricDataRequest& AddGroupBy(GroupBy value) { m_groupByHasBeenSet = true; m_groupBy.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Conditions to filter the metric data. Each filter specifies a dimension,
     * comparison operator ('equals', 'in'), and values to match against. </p>
     */
    inline const Aws::Vector<CapacityManagerCondition>& GetFilterBy() const { return m_filterBy; }
    inline bool FilterByHasBeenSet() const { return m_filterByHasBeenSet; }
    template<typename FilterByT = Aws::Vector<CapacityManagerCondition>>
    void SetFilterBy(FilterByT&& value) { m_filterByHasBeenSet = true; m_filterBy = std::forward<FilterByT>(value); }
    template<typename FilterByT = Aws::Vector<CapacityManagerCondition>>
    GetCapacityManagerMetricDataRequest& WithFilterBy(FilterByT&& value) { SetFilterBy(std::forward<FilterByT>(value)); return *this;}
    template<typename FilterByT = CapacityManagerCondition>
    GetCapacityManagerMetricDataRequest& AddFilterBy(FilterByT&& value) { m_filterByHasBeenSet = true; m_filterBy.emplace_back(std::forward<FilterByT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The maximum number of data points to return. Valid range is 1 to 100,000.
     * Use with NextToken for pagination of large result sets. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetCapacityManagerMetricDataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The token for the next page of results. Use this value in a subsequent call
     * to retrieve additional data points. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCapacityManagerMetricDataRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline GetCapacityManagerMetricDataRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Metric> m_metricNames;
    bool m_metricNamesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    Aws::Vector<GroupBy> m_groupBy;
    bool m_groupByHasBeenSet = false;

    Aws::Vector<CapacityManagerCondition> m_filterBy;
    bool m_filterByHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
