/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/DateTimeRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-dashboards/model/Granularity.h>
#include <aws/bcm-dashboards/model/Expression.h>
#include <aws/bcm-dashboards/model/MetricName.h>
#include <aws/bcm-dashboards/model/GroupDefinition.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BCMDashboards
{
namespace Model
{

  /**
   * <p>Defines the parameters for querying Savings Plans coverage data, including
   * metrics, grouping options, and time granularity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/SavingsPlansCoverageQuery">AWS
   * API Reference</a></p>
   */
  class SavingsPlansCoverageQuery
  {
  public:
    AWS_BCMDASHBOARDS_API SavingsPlansCoverageQuery() = default;
    AWS_BCMDASHBOARDS_API SavingsPlansCoverageQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API SavingsPlansCoverageQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const DateTimeRange& GetTimeRange() const { return m_timeRange; }
    inline bool TimeRangeHasBeenSet() const { return m_timeRangeHasBeenSet; }
    template<typename TimeRangeT = DateTimeRange>
    void SetTimeRange(TimeRangeT&& value) { m_timeRangeHasBeenSet = true; m_timeRange = std::forward<TimeRangeT>(value); }
    template<typename TimeRangeT = DateTimeRange>
    SavingsPlansCoverageQuery& WithTimeRange(TimeRangeT&& value) { SetTimeRange(std::forward<TimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The coverage metrics to include in the results.</p>  <p>Valid value for
     * SavingsPlansCoverageQuery metrics is
     * <code>SpendCoveredBySavingsPlans</code>.</p> 
     */
    inline const Aws::Vector<MetricName>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Vector<MetricName>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Vector<MetricName>>
    SavingsPlansCoverageQuery& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    inline SavingsPlansCoverageQuery& AddMetrics(MetricName value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time granularity of the retrieved data: <code>HOURLY</code>,
     * <code>DAILY</code>, or <code>MONTHLY</code>.</p>
     */
    inline Granularity GetGranularity() const { return m_granularity; }
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
    inline void SetGranularity(Granularity value) { m_granularityHasBeenSet = true; m_granularity = value; }
    inline SavingsPlansCoverageQuery& WithGranularity(Granularity value) { SetGranularity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how to group the Savings Plans coverage data, such as by service or
     * instance family.</p>
     */
    inline const Aws::Vector<GroupDefinition>& GetGroupBy() const { return m_groupBy; }
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
    template<typename GroupByT = Aws::Vector<GroupDefinition>>
    void SetGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy = std::forward<GroupByT>(value); }
    template<typename GroupByT = Aws::Vector<GroupDefinition>>
    SavingsPlansCoverageQuery& WithGroupBy(GroupByT&& value) { SetGroupBy(std::forward<GroupByT>(value)); return *this;}
    template<typename GroupByT = GroupDefinition>
    SavingsPlansCoverageQuery& AddGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy.emplace_back(std::forward<GroupByT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Expression& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Expression>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Expression>
    SavingsPlansCoverageQuery& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}
  private:

    DateTimeRange m_timeRange;
    bool m_timeRangeHasBeenSet = false;

    Aws::Vector<MetricName> m_metrics;
    bool m_metricsHasBeenSet = false;

    Granularity m_granularity{Granularity::NOT_SET};
    bool m_granularityHasBeenSet = false;

    Aws::Vector<GroupDefinition> m_groupBy;
    bool m_groupByHasBeenSet = false;

    Expression m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
