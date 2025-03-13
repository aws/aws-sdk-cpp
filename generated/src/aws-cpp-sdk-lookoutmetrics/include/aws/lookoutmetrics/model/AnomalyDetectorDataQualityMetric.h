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
    AWS_LOOKOUTMETRICS_API AnomalyDetectorDataQualityMetric() = default;
    AWS_LOOKOUTMETRICS_API AnomalyDetectorDataQualityMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AnomalyDetectorDataQualityMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time for the data quality metrics collection.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    void SetStartTimestamp(StartTimestampT&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::forward<StartTimestampT>(value); }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    AnomalyDetectorDataQualityMetric& WithStartTimestamp(StartTimestampT&& value) { SetStartTimestamp(std::forward<StartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>DataQualityMetricList</code> objects. Each object in the
     * array contains information about a data quality metric.</p>
     */
    inline const Aws::Vector<MetricSetDataQualityMetric>& GetMetricSetDataQualityMetricList() const { return m_metricSetDataQualityMetricList; }
    inline bool MetricSetDataQualityMetricListHasBeenSet() const { return m_metricSetDataQualityMetricListHasBeenSet; }
    template<typename MetricSetDataQualityMetricListT = Aws::Vector<MetricSetDataQualityMetric>>
    void SetMetricSetDataQualityMetricList(MetricSetDataQualityMetricListT&& value) { m_metricSetDataQualityMetricListHasBeenSet = true; m_metricSetDataQualityMetricList = std::forward<MetricSetDataQualityMetricListT>(value); }
    template<typename MetricSetDataQualityMetricListT = Aws::Vector<MetricSetDataQualityMetric>>
    AnomalyDetectorDataQualityMetric& WithMetricSetDataQualityMetricList(MetricSetDataQualityMetricListT&& value) { SetMetricSetDataQualityMetricList(std::forward<MetricSetDataQualityMetricListT>(value)); return *this;}
    template<typename MetricSetDataQualityMetricListT = MetricSetDataQualityMetric>
    AnomalyDetectorDataQualityMetric& AddMetricSetDataQualityMetricList(MetricSetDataQualityMetricListT&& value) { m_metricSetDataQualityMetricListHasBeenSet = true; m_metricSetDataQualityMetricList.emplace_back(std::forward<MetricSetDataQualityMetricListT>(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_startTimestamp{};
    bool m_startTimestampHasBeenSet = false;

    Aws::Vector<MetricSetDataQualityMetric> m_metricSetDataQualityMetricList;
    bool m_metricSetDataQualityMetricListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
