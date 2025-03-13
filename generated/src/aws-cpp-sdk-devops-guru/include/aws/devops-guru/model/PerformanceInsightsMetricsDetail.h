/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/PerformanceInsightsMetricQuery.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/PerformanceInsightsReferenceData.h>
#include <aws/devops-guru/model/PerformanceInsightsStat.h>
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
   * <p>Details about Performance Insights metrics.</p> <p>Amazon RDS Performance
   * Insights enables you to monitor and explore different dimensions of database
   * load based on data captured from a running DB instance. DB load is measured as
   * average active sessions. Performance Insights provides the data to API consumers
   * as a two-dimensional time-series dataset. The time dimension provides DB load
   * data for each time point in the queried time range. Each time point decomposes
   * overall load in relation to the requested dimensions, measured at that time
   * point. Examples include SQL, Wait event, User, and Host. </p> <ul> <li> <p>To
   * learn more about Performance Insights and Amazon Aurora DB instances, go to the
   * <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights.html">
   * Amazon Aurora User Guide</a>. </p> </li> <li> <p>To learn more about Performance
   * Insights and Amazon RDS DB instances, go to the <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">
   * Amazon RDS User Guide</a>. </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/PerformanceInsightsMetricsDetail">AWS
   * API Reference</a></p>
   */
  class PerformanceInsightsMetricsDetail
  {
  public:
    AWS_DEVOPSGURU_API PerformanceInsightsMetricsDetail() = default;
    AWS_DEVOPSGURU_API PerformanceInsightsMetricsDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API PerformanceInsightsMetricsDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name used for a specific Performance Insights metric.</p>
     */
    inline const Aws::String& GetMetricDisplayName() const { return m_metricDisplayName; }
    inline bool MetricDisplayNameHasBeenSet() const { return m_metricDisplayNameHasBeenSet; }
    template<typename MetricDisplayNameT = Aws::String>
    void SetMetricDisplayName(MetricDisplayNameT&& value) { m_metricDisplayNameHasBeenSet = true; m_metricDisplayName = std::forward<MetricDisplayNameT>(value); }
    template<typename MetricDisplayNameT = Aws::String>
    PerformanceInsightsMetricsDetail& WithMetricDisplayName(MetricDisplayNameT&& value) { SetMetricDisplayName(std::forward<MetricDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of measure for a metric. For example, a session or a process.</p>
     */
    inline const Aws::String& GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    template<typename UnitT = Aws::String>
    void SetUnit(UnitT&& value) { m_unitHasBeenSet = true; m_unit = std::forward<UnitT>(value); }
    template<typename UnitT = Aws::String>
    PerformanceInsightsMetricsDetail& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A single query to be processed for the metric. For more information, see
     * <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsMetricQuery.html">PerformanceInsightsMetricQuery</a>
     * </code>.</p>
     */
    inline const PerformanceInsightsMetricQuery& GetMetricQuery() const { return m_metricQuery; }
    inline bool MetricQueryHasBeenSet() const { return m_metricQueryHasBeenSet; }
    template<typename MetricQueryT = PerformanceInsightsMetricQuery>
    void SetMetricQuery(MetricQueryT&& value) { m_metricQueryHasBeenSet = true; m_metricQuery = std::forward<MetricQueryT>(value); }
    template<typename MetricQueryT = PerformanceInsightsMetricQuery>
    PerformanceInsightsMetricsDetail& WithMetricQuery(MetricQueryT&& value) { SetMetricQuery(std::forward<MetricQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> For more information, see <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsReferenceData.html">PerformanceInsightsReferenceData</a>
     * </code>. </p>
     */
    inline const Aws::Vector<PerformanceInsightsReferenceData>& GetReferenceData() const { return m_referenceData; }
    inline bool ReferenceDataHasBeenSet() const { return m_referenceDataHasBeenSet; }
    template<typename ReferenceDataT = Aws::Vector<PerformanceInsightsReferenceData>>
    void SetReferenceData(ReferenceDataT&& value) { m_referenceDataHasBeenSet = true; m_referenceData = std::forward<ReferenceDataT>(value); }
    template<typename ReferenceDataT = Aws::Vector<PerformanceInsightsReferenceData>>
    PerformanceInsightsMetricsDetail& WithReferenceData(ReferenceDataT&& value) { SetReferenceData(std::forward<ReferenceDataT>(value)); return *this;}
    template<typename ReferenceDataT = PerformanceInsightsReferenceData>
    PerformanceInsightsMetricsDetail& AddReferenceData(ReferenceDataT&& value) { m_referenceDataHasBeenSet = true; m_referenceData.emplace_back(std::forward<ReferenceDataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metric statistics during the anomalous period detected by DevOps
     * Guru;</p>
     */
    inline const Aws::Vector<PerformanceInsightsStat>& GetStatsAtAnomaly() const { return m_statsAtAnomaly; }
    inline bool StatsAtAnomalyHasBeenSet() const { return m_statsAtAnomalyHasBeenSet; }
    template<typename StatsAtAnomalyT = Aws::Vector<PerformanceInsightsStat>>
    void SetStatsAtAnomaly(StatsAtAnomalyT&& value) { m_statsAtAnomalyHasBeenSet = true; m_statsAtAnomaly = std::forward<StatsAtAnomalyT>(value); }
    template<typename StatsAtAnomalyT = Aws::Vector<PerformanceInsightsStat>>
    PerformanceInsightsMetricsDetail& WithStatsAtAnomaly(StatsAtAnomalyT&& value) { SetStatsAtAnomaly(std::forward<StatsAtAnomalyT>(value)); return *this;}
    template<typename StatsAtAnomalyT = PerformanceInsightsStat>
    PerformanceInsightsMetricsDetail& AddStatsAtAnomaly(StatsAtAnomalyT&& value) { m_statsAtAnomalyHasBeenSet = true; m_statsAtAnomaly.emplace_back(std::forward<StatsAtAnomalyT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Typical metric statistics that are not considered anomalous. When DevOps Guru
     * analyzes metrics, it compares them to <code>StatsAtBaseline</code> to help
     * determine if they are anomalous.</p>
     */
    inline const Aws::Vector<PerformanceInsightsStat>& GetStatsAtBaseline() const { return m_statsAtBaseline; }
    inline bool StatsAtBaselineHasBeenSet() const { return m_statsAtBaselineHasBeenSet; }
    template<typename StatsAtBaselineT = Aws::Vector<PerformanceInsightsStat>>
    void SetStatsAtBaseline(StatsAtBaselineT&& value) { m_statsAtBaselineHasBeenSet = true; m_statsAtBaseline = std::forward<StatsAtBaselineT>(value); }
    template<typename StatsAtBaselineT = Aws::Vector<PerformanceInsightsStat>>
    PerformanceInsightsMetricsDetail& WithStatsAtBaseline(StatsAtBaselineT&& value) { SetStatsAtBaseline(std::forward<StatsAtBaselineT>(value)); return *this;}
    template<typename StatsAtBaselineT = PerformanceInsightsStat>
    PerformanceInsightsMetricsDetail& AddStatsAtBaseline(StatsAtBaselineT&& value) { m_statsAtBaselineHasBeenSet = true; m_statsAtBaseline.emplace_back(std::forward<StatsAtBaselineT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_metricDisplayName;
    bool m_metricDisplayNameHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    PerformanceInsightsMetricQuery m_metricQuery;
    bool m_metricQueryHasBeenSet = false;

    Aws::Vector<PerformanceInsightsReferenceData> m_referenceData;
    bool m_referenceDataHasBeenSet = false;

    Aws::Vector<PerformanceInsightsStat> m_statsAtAnomaly;
    bool m_statsAtAnomalyHasBeenSet = false;

    Aws::Vector<PerformanceInsightsStat> m_statsAtBaseline;
    bool m_statsAtBaselineHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
