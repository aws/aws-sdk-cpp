/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutmetrics/model/MetricSetDataQualityMetric.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Aggregated details about the data quality metrics collected for the
   * <code>AnomalyDetectorArn</code> provided in the <a>GetDataQualityMetrics</a>
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/AnomalyDetectorDataQualityMetric">AWS
   * API Reference</a></p>
   */
  class AnomalyDetectorDataQualityMetric
  {
  public:
    AWS_LOOKOUTMETRICS_API AnomalyDetectorDataQualityMetric();
    AWS_LOOKOUTMETRICS_API AnomalyDetectorDataQualityMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AnomalyDetectorDataQualityMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start time for the data quality metrics collection.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const{ return m_startTimestamp; }

    /**
     * <p>The start time for the data quality metrics collection.</p>
     */
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }

    /**
     * <p>The start time for the data quality metrics collection.</p>
     */
    inline void SetStartTimestamp(const Aws::Utils::DateTime& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }

    /**
     * <p>The start time for the data quality metrics collection.</p>
     */
    inline void SetStartTimestamp(Aws::Utils::DateTime&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::move(value); }

    /**
     * <p>The start time for the data quality metrics collection.</p>
     */
    inline AnomalyDetectorDataQualityMetric& WithStartTimestamp(const Aws::Utils::DateTime& value) { SetStartTimestamp(value); return *this;}

    /**
     * <p>The start time for the data quality metrics collection.</p>
     */
    inline AnomalyDetectorDataQualityMetric& WithStartTimestamp(Aws::Utils::DateTime&& value) { SetStartTimestamp(std::move(value)); return *this;}


    /**
     * <p>An array of <code>DataQualityMetricList</code> objects. Each object in the
     * array contains information about a data quality metric.</p>
     */
    inline const Aws::Vector<MetricSetDataQualityMetric>& GetMetricSetDataQualityMetricList() const{ return m_metricSetDataQualityMetricList; }

    /**
     * <p>An array of <code>DataQualityMetricList</code> objects. Each object in the
     * array contains information about a data quality metric.</p>
     */
    inline bool MetricSetDataQualityMetricListHasBeenSet() const { return m_metricSetDataQualityMetricListHasBeenSet; }

    /**
     * <p>An array of <code>DataQualityMetricList</code> objects. Each object in the
     * array contains information about a data quality metric.</p>
     */
    inline void SetMetricSetDataQualityMetricList(const Aws::Vector<MetricSetDataQualityMetric>& value) { m_metricSetDataQualityMetricListHasBeenSet = true; m_metricSetDataQualityMetricList = value; }

    /**
     * <p>An array of <code>DataQualityMetricList</code> objects. Each object in the
     * array contains information about a data quality metric.</p>
     */
    inline void SetMetricSetDataQualityMetricList(Aws::Vector<MetricSetDataQualityMetric>&& value) { m_metricSetDataQualityMetricListHasBeenSet = true; m_metricSetDataQualityMetricList = std::move(value); }

    /**
     * <p>An array of <code>DataQualityMetricList</code> objects. Each object in the
     * array contains information about a data quality metric.</p>
     */
    inline AnomalyDetectorDataQualityMetric& WithMetricSetDataQualityMetricList(const Aws::Vector<MetricSetDataQualityMetric>& value) { SetMetricSetDataQualityMetricList(value); return *this;}

    /**
     * <p>An array of <code>DataQualityMetricList</code> objects. Each object in the
     * array contains information about a data quality metric.</p>
     */
    inline AnomalyDetectorDataQualityMetric& WithMetricSetDataQualityMetricList(Aws::Vector<MetricSetDataQualityMetric>&& value) { SetMetricSetDataQualityMetricList(std::move(value)); return *this;}

    /**
     * <p>An array of <code>DataQualityMetricList</code> objects. Each object in the
     * array contains information about a data quality metric.</p>
     */
    inline AnomalyDetectorDataQualityMetric& AddMetricSetDataQualityMetricList(const MetricSetDataQualityMetric& value) { m_metricSetDataQualityMetricListHasBeenSet = true; m_metricSetDataQualityMetricList.push_back(value); return *this; }

    /**
     * <p>An array of <code>DataQualityMetricList</code> objects. Each object in the
     * array contains information about a data quality metric.</p>
     */
    inline AnomalyDetectorDataQualityMetric& AddMetricSetDataQualityMetricList(MetricSetDataQualityMetric&& value) { m_metricSetDataQualityMetricListHasBeenSet = true; m_metricSetDataQualityMetricList.push_back(std::move(value)); return *this; }

  private:

    Aws::Utils::DateTime m_startTimestamp;
    bool m_startTimestampHasBeenSet = false;

    Aws::Vector<MetricSetDataQualityMetric> m_metricSetDataQualityMetricList;
    bool m_metricSetDataQualityMetricListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
