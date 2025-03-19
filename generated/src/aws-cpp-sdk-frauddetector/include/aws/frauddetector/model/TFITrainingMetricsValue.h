/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/TFIModelPerformance.h>
#include <aws/frauddetector/model/TFIMetricDataPoint.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p> The Transaction Fraud Insights (TFI) model training metric details.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/TFITrainingMetricsValue">AWS
   * API Reference</a></p>
   */
  class TFITrainingMetricsValue
  {
  public:
    AWS_FRAUDDETECTOR_API TFITrainingMetricsValue() = default;
    AWS_FRAUDDETECTOR_API TFITrainingMetricsValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API TFITrainingMetricsValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline const Aws::Vector<TFIMetricDataPoint>& GetMetricDataPoints() const { return m_metricDataPoints; }
    inline bool MetricDataPointsHasBeenSet() const { return m_metricDataPointsHasBeenSet; }
    template<typename MetricDataPointsT = Aws::Vector<TFIMetricDataPoint>>
    void SetMetricDataPoints(MetricDataPointsT&& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints = std::forward<MetricDataPointsT>(value); }
    template<typename MetricDataPointsT = Aws::Vector<TFIMetricDataPoint>>
    TFITrainingMetricsValue& WithMetricDataPoints(MetricDataPointsT&& value) { SetMetricDataPoints(std::forward<MetricDataPointsT>(value)); return *this;}
    template<typename MetricDataPointsT = TFIMetricDataPoint>
    TFITrainingMetricsValue& AddMetricDataPoints(MetricDataPointsT&& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints.emplace_back(std::forward<MetricDataPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The model performance score. </p>
     */
    inline const TFIModelPerformance& GetModelPerformance() const { return m_modelPerformance; }
    inline bool ModelPerformanceHasBeenSet() const { return m_modelPerformanceHasBeenSet; }
    template<typename ModelPerformanceT = TFIModelPerformance>
    void SetModelPerformance(ModelPerformanceT&& value) { m_modelPerformanceHasBeenSet = true; m_modelPerformance = std::forward<ModelPerformanceT>(value); }
    template<typename ModelPerformanceT = TFIModelPerformance>
    TFITrainingMetricsValue& WithModelPerformance(ModelPerformanceT&& value) { SetModelPerformance(std::forward<ModelPerformanceT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TFIMetricDataPoint> m_metricDataPoints;
    bool m_metricDataPointsHasBeenSet = false;

    TFIModelPerformance m_modelPerformance;
    bool m_modelPerformanceHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
