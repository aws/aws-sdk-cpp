﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/PerformanceInsightsMetricDimensionGroup.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>A single query to be processed. Use these parameters to query the Performance
   * Insights <code>GetResourceMetrics</code> API to retrieve the metrics for an
   * anomaly. For more information, see <code> <a
   * href="https://docs.aws.amazon.com/performance-insights/latest/APIReference/API_GetResourceMetrics.html">GetResourceMetrics</a>
   * </code> in the <i>Amazon RDS Performance Insights API Reference</i>.</p>
   * <p>Amazon RDS Performance Insights enables you to monitor and explore different
   * dimensions of database load based on data captured from a running DB instance.
   * DB load is measured as average active sessions. Performance Insights provides
   * the data to API consumers as a two-dimensional time-series dataset. The time
   * dimension provides DB load data for each time point in the queried time range.
   * Each time point decomposes overall load in relation to the requested dimensions,
   * measured at that time point. Examples include SQL, Wait event, User, and Host.
   * </p> <ul> <li> <p>To learn more about Performance Insights and Amazon Aurora DB
   * instances, go to the <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights.html">
   * Amazon Aurora User Guide</a>. </p> </li> <li> <p>To learn more about Performance
   * Insights and Amazon RDS DB instances, go to the <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">
   * Amazon RDS User Guide</a>. </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/PerformanceInsightsMetricQuery">AWS
   * API Reference</a></p>
   */
  class PerformanceInsightsMetricQuery
  {
  public:
    AWS_DEVOPSGURU_API PerformanceInsightsMetricQuery() = default;
    AWS_DEVOPSGURU_API PerformanceInsightsMetricQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API PerformanceInsightsMetricQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the meteric used used when querying an Performance Insights
     * <code>GetResourceMetrics</code> API for anomaly metrics.</p> <p>Valid values for
     * <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a scaled
     * representation of the number of active sessions for the database engine.</p>
     * </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of active
     * sessions for the database engine.</p> </li> </ul> <p>If the number of active
     * sessions is less than an internal Performance Insights threshold,
     * <code>db.load.avg</code> and <code>db.sampledload.avg</code> are the same value.
     * If the number of active sessions is greater than the internal threshold,
     * Performance Insights samples the active sessions, with <code>db.load.avg</code>
     * showing the scaled values, <code>db.sampledload.avg</code> showing the raw
     * values, and <code>db.sampledload.avg</code> less than <code>db.load.avg</code>.
     * For most use cases, you can query <code>db.load.avg</code> only. </p>
     */
    inline const Aws::String& GetMetric() const { return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    template<typename MetricT = Aws::String>
    void SetMetric(MetricT&& value) { m_metricHasBeenSet = true; m_metric = std::forward<MetricT>(value); }
    template<typename MetricT = Aws::String>
    PerformanceInsightsMetricQuery& WithMetric(MetricT&& value) { SetMetric(std::forward<MetricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specification for how to aggregate the data points from a Performance
     * Insights <code>GetResourceMetrics</code> API query. The Performance Insights
     * query returns all of the dimensions within that group, unless you provide the
     * names of specific dimensions within that group. You can also request that
     * Performance Insights return a limited number of values for a dimension.</p>
     */
    inline const PerformanceInsightsMetricDimensionGroup& GetGroupBy() const { return m_groupBy; }
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
    template<typename GroupByT = PerformanceInsightsMetricDimensionGroup>
    void SetGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy = std::forward<GroupByT>(value); }
    template<typename GroupByT = PerformanceInsightsMetricDimensionGroup>
    PerformanceInsightsMetricQuery& WithGroupBy(GroupByT&& value) { SetGroupBy(std::forward<GroupByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters to apply to a Performance Insights
     * <code>GetResourceMetrics</code> API query. Restrictions:</p> <ul> <li> <p>Any
     * number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> parameter.</p> </li> <li> <p>A single filter for any other
     * dimension in this dimension group.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Aws::Map<Aws::String, Aws::String>>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Aws::Map<Aws::String, Aws::String>>
    PerformanceInsightsMetricQuery& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    template<typename FilterKeyT = Aws::String, typename FilterValueT = Aws::String>
    PerformanceInsightsMetricQuery& AddFilter(FilterKeyT&& key, FilterValueT&& value) {
      m_filterHasBeenSet = true; m_filter.emplace(std::forward<FilterKeyT>(key), std::forward<FilterValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_metric;
    bool m_metricHasBeenSet = false;

    PerformanceInsightsMetricDimensionGroup m_groupBy;
    bool m_groupByHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
