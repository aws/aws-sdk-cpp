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
    AWS_DEVOPSGURU_API PerformanceInsightsMetricsDetail();
    AWS_DEVOPSGURU_API PerformanceInsightsMetricsDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API PerformanceInsightsMetricsDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name used for a specific Performance Insights metric.</p>
     */
    inline const Aws::String& GetMetricDisplayName() const{ return m_metricDisplayName; }

    /**
     * <p>The name used for a specific Performance Insights metric.</p>
     */
    inline bool MetricDisplayNameHasBeenSet() const { return m_metricDisplayNameHasBeenSet; }

    /**
     * <p>The name used for a specific Performance Insights metric.</p>
     */
    inline void SetMetricDisplayName(const Aws::String& value) { m_metricDisplayNameHasBeenSet = true; m_metricDisplayName = value; }

    /**
     * <p>The name used for a specific Performance Insights metric.</p>
     */
    inline void SetMetricDisplayName(Aws::String&& value) { m_metricDisplayNameHasBeenSet = true; m_metricDisplayName = std::move(value); }

    /**
     * <p>The name used for a specific Performance Insights metric.</p>
     */
    inline void SetMetricDisplayName(const char* value) { m_metricDisplayNameHasBeenSet = true; m_metricDisplayName.assign(value); }

    /**
     * <p>The name used for a specific Performance Insights metric.</p>
     */
    inline PerformanceInsightsMetricsDetail& WithMetricDisplayName(const Aws::String& value) { SetMetricDisplayName(value); return *this;}

    /**
     * <p>The name used for a specific Performance Insights metric.</p>
     */
    inline PerformanceInsightsMetricsDetail& WithMetricDisplayName(Aws::String&& value) { SetMetricDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name used for a specific Performance Insights metric.</p>
     */
    inline PerformanceInsightsMetricsDetail& WithMetricDisplayName(const char* value) { SetMetricDisplayName(value); return *this;}


    /**
     * <p>The unit of measure for a metric. For example, a session or a process.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of measure for a metric. For example, a session or a process.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of measure for a metric. For example, a session or a process.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of measure for a metric. For example, a session or a process.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of measure for a metric. For example, a session or a process.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The unit of measure for a metric. For example, a session or a process.</p>
     */
    inline PerformanceInsightsMetricsDetail& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of measure for a metric. For example, a session or a process.</p>
     */
    inline PerformanceInsightsMetricsDetail& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The unit of measure for a metric. For example, a session or a process.</p>
     */
    inline PerformanceInsightsMetricsDetail& WithUnit(const char* value) { SetUnit(value); return *this;}


    /**
     * <p>A single query to be processed for the metric. For more information, see
     * <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsMetricQuery.html">PerformanceInsightsMetricQuery</a>
     * </code>.</p>
     */
    inline const PerformanceInsightsMetricQuery& GetMetricQuery() const{ return m_metricQuery; }

    /**
     * <p>A single query to be processed for the metric. For more information, see
     * <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsMetricQuery.html">PerformanceInsightsMetricQuery</a>
     * </code>.</p>
     */
    inline bool MetricQueryHasBeenSet() const { return m_metricQueryHasBeenSet; }

    /**
     * <p>A single query to be processed for the metric. For more information, see
     * <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsMetricQuery.html">PerformanceInsightsMetricQuery</a>
     * </code>.</p>
     */
    inline void SetMetricQuery(const PerformanceInsightsMetricQuery& value) { m_metricQueryHasBeenSet = true; m_metricQuery = value; }

    /**
     * <p>A single query to be processed for the metric. For more information, see
     * <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsMetricQuery.html">PerformanceInsightsMetricQuery</a>
     * </code>.</p>
     */
    inline void SetMetricQuery(PerformanceInsightsMetricQuery&& value) { m_metricQueryHasBeenSet = true; m_metricQuery = std::move(value); }

    /**
     * <p>A single query to be processed for the metric. For more information, see
     * <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsMetricQuery.html">PerformanceInsightsMetricQuery</a>
     * </code>.</p>
     */
    inline PerformanceInsightsMetricsDetail& WithMetricQuery(const PerformanceInsightsMetricQuery& value) { SetMetricQuery(value); return *this;}

    /**
     * <p>A single query to be processed for the metric. For more information, see
     * <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsMetricQuery.html">PerformanceInsightsMetricQuery</a>
     * </code>.</p>
     */
    inline PerformanceInsightsMetricsDetail& WithMetricQuery(PerformanceInsightsMetricQuery&& value) { SetMetricQuery(std::move(value)); return *this;}


    /**
     * <p> For more information, see <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsReferenceData.html">PerformanceInsightsReferenceData</a>
     * </code>. </p>
     */
    inline const Aws::Vector<PerformanceInsightsReferenceData>& GetReferenceData() const{ return m_referenceData; }

    /**
     * <p> For more information, see <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsReferenceData.html">PerformanceInsightsReferenceData</a>
     * </code>. </p>
     */
    inline bool ReferenceDataHasBeenSet() const { return m_referenceDataHasBeenSet; }

    /**
     * <p> For more information, see <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsReferenceData.html">PerformanceInsightsReferenceData</a>
     * </code>. </p>
     */
    inline void SetReferenceData(const Aws::Vector<PerformanceInsightsReferenceData>& value) { m_referenceDataHasBeenSet = true; m_referenceData = value; }

    /**
     * <p> For more information, see <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsReferenceData.html">PerformanceInsightsReferenceData</a>
     * </code>. </p>
     */
    inline void SetReferenceData(Aws::Vector<PerformanceInsightsReferenceData>&& value) { m_referenceDataHasBeenSet = true; m_referenceData = std::move(value); }

    /**
     * <p> For more information, see <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsReferenceData.html">PerformanceInsightsReferenceData</a>
     * </code>. </p>
     */
    inline PerformanceInsightsMetricsDetail& WithReferenceData(const Aws::Vector<PerformanceInsightsReferenceData>& value) { SetReferenceData(value); return *this;}

    /**
     * <p> For more information, see <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsReferenceData.html">PerformanceInsightsReferenceData</a>
     * </code>. </p>
     */
    inline PerformanceInsightsMetricsDetail& WithReferenceData(Aws::Vector<PerformanceInsightsReferenceData>&& value) { SetReferenceData(std::move(value)); return *this;}

    /**
     * <p> For more information, see <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsReferenceData.html">PerformanceInsightsReferenceData</a>
     * </code>. </p>
     */
    inline PerformanceInsightsMetricsDetail& AddReferenceData(const PerformanceInsightsReferenceData& value) { m_referenceDataHasBeenSet = true; m_referenceData.push_back(value); return *this; }

    /**
     * <p> For more information, see <code> <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/APIReference/API_PerformanceInsightsReferenceData.html">PerformanceInsightsReferenceData</a>
     * </code>. </p>
     */
    inline PerformanceInsightsMetricsDetail& AddReferenceData(PerformanceInsightsReferenceData&& value) { m_referenceDataHasBeenSet = true; m_referenceData.push_back(std::move(value)); return *this; }


    /**
     * <p>The metric statistics during the anomalous period detected by DevOps
     * Guru;</p>
     */
    inline const Aws::Vector<PerformanceInsightsStat>& GetStatsAtAnomaly() const{ return m_statsAtAnomaly; }

    /**
     * <p>The metric statistics during the anomalous period detected by DevOps
     * Guru;</p>
     */
    inline bool StatsAtAnomalyHasBeenSet() const { return m_statsAtAnomalyHasBeenSet; }

    /**
     * <p>The metric statistics during the anomalous period detected by DevOps
     * Guru;</p>
     */
    inline void SetStatsAtAnomaly(const Aws::Vector<PerformanceInsightsStat>& value) { m_statsAtAnomalyHasBeenSet = true; m_statsAtAnomaly = value; }

    /**
     * <p>The metric statistics during the anomalous period detected by DevOps
     * Guru;</p>
     */
    inline void SetStatsAtAnomaly(Aws::Vector<PerformanceInsightsStat>&& value) { m_statsAtAnomalyHasBeenSet = true; m_statsAtAnomaly = std::move(value); }

    /**
     * <p>The metric statistics during the anomalous period detected by DevOps
     * Guru;</p>
     */
    inline PerformanceInsightsMetricsDetail& WithStatsAtAnomaly(const Aws::Vector<PerformanceInsightsStat>& value) { SetStatsAtAnomaly(value); return *this;}

    /**
     * <p>The metric statistics during the anomalous period detected by DevOps
     * Guru;</p>
     */
    inline PerformanceInsightsMetricsDetail& WithStatsAtAnomaly(Aws::Vector<PerformanceInsightsStat>&& value) { SetStatsAtAnomaly(std::move(value)); return *this;}

    /**
     * <p>The metric statistics during the anomalous period detected by DevOps
     * Guru;</p>
     */
    inline PerformanceInsightsMetricsDetail& AddStatsAtAnomaly(const PerformanceInsightsStat& value) { m_statsAtAnomalyHasBeenSet = true; m_statsAtAnomaly.push_back(value); return *this; }

    /**
     * <p>The metric statistics during the anomalous period detected by DevOps
     * Guru;</p>
     */
    inline PerformanceInsightsMetricsDetail& AddStatsAtAnomaly(PerformanceInsightsStat&& value) { m_statsAtAnomalyHasBeenSet = true; m_statsAtAnomaly.push_back(std::move(value)); return *this; }


    /**
     * <p>Typical metric statistics that are not considered anomalous. When DevOps Guru
     * analyzes metrics, it compares them to <code>StatsAtBaseline</code> to help
     * determine if they are anomalous.</p>
     */
    inline const Aws::Vector<PerformanceInsightsStat>& GetStatsAtBaseline() const{ return m_statsAtBaseline; }

    /**
     * <p>Typical metric statistics that are not considered anomalous. When DevOps Guru
     * analyzes metrics, it compares them to <code>StatsAtBaseline</code> to help
     * determine if they are anomalous.</p>
     */
    inline bool StatsAtBaselineHasBeenSet() const { return m_statsAtBaselineHasBeenSet; }

    /**
     * <p>Typical metric statistics that are not considered anomalous. When DevOps Guru
     * analyzes metrics, it compares them to <code>StatsAtBaseline</code> to help
     * determine if they are anomalous.</p>
     */
    inline void SetStatsAtBaseline(const Aws::Vector<PerformanceInsightsStat>& value) { m_statsAtBaselineHasBeenSet = true; m_statsAtBaseline = value; }

    /**
     * <p>Typical metric statistics that are not considered anomalous. When DevOps Guru
     * analyzes metrics, it compares them to <code>StatsAtBaseline</code> to help
     * determine if they are anomalous.</p>
     */
    inline void SetStatsAtBaseline(Aws::Vector<PerformanceInsightsStat>&& value) { m_statsAtBaselineHasBeenSet = true; m_statsAtBaseline = std::move(value); }

    /**
     * <p>Typical metric statistics that are not considered anomalous. When DevOps Guru
     * analyzes metrics, it compares them to <code>StatsAtBaseline</code> to help
     * determine if they are anomalous.</p>
     */
    inline PerformanceInsightsMetricsDetail& WithStatsAtBaseline(const Aws::Vector<PerformanceInsightsStat>& value) { SetStatsAtBaseline(value); return *this;}

    /**
     * <p>Typical metric statistics that are not considered anomalous. When DevOps Guru
     * analyzes metrics, it compares them to <code>StatsAtBaseline</code> to help
     * determine if they are anomalous.</p>
     */
    inline PerformanceInsightsMetricsDetail& WithStatsAtBaseline(Aws::Vector<PerformanceInsightsStat>&& value) { SetStatsAtBaseline(std::move(value)); return *this;}

    /**
     * <p>Typical metric statistics that are not considered anomalous. When DevOps Guru
     * analyzes metrics, it compares them to <code>StatsAtBaseline</code> to help
     * determine if they are anomalous.</p>
     */
    inline PerformanceInsightsMetricsDetail& AddStatsAtBaseline(const PerformanceInsightsStat& value) { m_statsAtBaselineHasBeenSet = true; m_statsAtBaseline.push_back(value); return *this; }

    /**
     * <p>Typical metric statistics that are not considered anomalous. When DevOps Guru
     * analyzes metrics, it compares them to <code>StatsAtBaseline</code> to help
     * determine if they are anomalous.</p>
     */
    inline PerformanceInsightsMetricsDetail& AddStatsAtBaseline(PerformanceInsightsStat&& value) { m_statsAtBaselineHasBeenSet = true; m_statsAtBaseline.push_back(std::move(value)); return *this; }

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
