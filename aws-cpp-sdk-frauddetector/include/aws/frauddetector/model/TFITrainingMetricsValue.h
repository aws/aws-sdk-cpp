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
    AWS_FRAUDDETECTOR_API TFITrainingMetricsValue();
    AWS_FRAUDDETECTOR_API TFITrainingMetricsValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API TFITrainingMetricsValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline const Aws::Vector<TFIMetricDataPoint>& GetMetricDataPoints() const{ return m_metricDataPoints; }

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline bool MetricDataPointsHasBeenSet() const { return m_metricDataPointsHasBeenSet; }

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline void SetMetricDataPoints(const Aws::Vector<TFIMetricDataPoint>& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints = value; }

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline void SetMetricDataPoints(Aws::Vector<TFIMetricDataPoint>&& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints = std::move(value); }

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline TFITrainingMetricsValue& WithMetricDataPoints(const Aws::Vector<TFIMetricDataPoint>& value) { SetMetricDataPoints(value); return *this;}

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline TFITrainingMetricsValue& WithMetricDataPoints(Aws::Vector<TFIMetricDataPoint>&& value) { SetMetricDataPoints(std::move(value)); return *this;}

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline TFITrainingMetricsValue& AddMetricDataPoints(const TFIMetricDataPoint& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints.push_back(value); return *this; }

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline TFITrainingMetricsValue& AddMetricDataPoints(TFIMetricDataPoint&& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints.push_back(std::move(value)); return *this; }


    /**
     * <p> The model performance score. </p>
     */
    inline const TFIModelPerformance& GetModelPerformance() const{ return m_modelPerformance; }

    /**
     * <p> The model performance score. </p>
     */
    inline bool ModelPerformanceHasBeenSet() const { return m_modelPerformanceHasBeenSet; }

    /**
     * <p> The model performance score. </p>
     */
    inline void SetModelPerformance(const TFIModelPerformance& value) { m_modelPerformanceHasBeenSet = true; m_modelPerformance = value; }

    /**
     * <p> The model performance score. </p>
     */
    inline void SetModelPerformance(TFIModelPerformance&& value) { m_modelPerformanceHasBeenSet = true; m_modelPerformance = std::move(value); }

    /**
     * <p> The model performance score. </p>
     */
    inline TFITrainingMetricsValue& WithModelPerformance(const TFIModelPerformance& value) { SetModelPerformance(value); return *this;}

    /**
     * <p> The model performance score. </p>
     */
    inline TFITrainingMetricsValue& WithModelPerformance(TFIModelPerformance&& value) { SetModelPerformance(std::move(value)); return *this;}

  private:

    Aws::Vector<TFIMetricDataPoint> m_metricDataPoints;
    bool m_metricDataPointsHasBeenSet = false;

    TFIModelPerformance m_modelPerformance;
    bool m_modelPerformanceHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
