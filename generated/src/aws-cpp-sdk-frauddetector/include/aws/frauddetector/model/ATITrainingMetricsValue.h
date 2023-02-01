/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/ATIModelPerformance.h>
#include <aws/frauddetector/model/ATIMetricDataPoint.h>
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
   * <p> The Account Takeover Insights (ATI) model training metric details.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ATITrainingMetricsValue">AWS
   * API Reference</a></p>
   */
  class ATITrainingMetricsValue
  {
  public:
    AWS_FRAUDDETECTOR_API ATITrainingMetricsValue();
    AWS_FRAUDDETECTOR_API ATITrainingMetricsValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ATITrainingMetricsValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline const Aws::Vector<ATIMetricDataPoint>& GetMetricDataPoints() const{ return m_metricDataPoints; }

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline bool MetricDataPointsHasBeenSet() const { return m_metricDataPointsHasBeenSet; }

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline void SetMetricDataPoints(const Aws::Vector<ATIMetricDataPoint>& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints = value; }

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline void SetMetricDataPoints(Aws::Vector<ATIMetricDataPoint>&& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints = std::move(value); }

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline ATITrainingMetricsValue& WithMetricDataPoints(const Aws::Vector<ATIMetricDataPoint>& value) { SetMetricDataPoints(value); return *this;}

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline ATITrainingMetricsValue& WithMetricDataPoints(Aws::Vector<ATIMetricDataPoint>&& value) { SetMetricDataPoints(std::move(value)); return *this;}

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline ATITrainingMetricsValue& AddMetricDataPoints(const ATIMetricDataPoint& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints.push_back(value); return *this; }

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline ATITrainingMetricsValue& AddMetricDataPoints(ATIMetricDataPoint&& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints.push_back(std::move(value)); return *this; }


    /**
     * <p> The model's overall performance scores. </p>
     */
    inline const ATIModelPerformance& GetModelPerformance() const{ return m_modelPerformance; }

    /**
     * <p> The model's overall performance scores. </p>
     */
    inline bool ModelPerformanceHasBeenSet() const { return m_modelPerformanceHasBeenSet; }

    /**
     * <p> The model's overall performance scores. </p>
     */
    inline void SetModelPerformance(const ATIModelPerformance& value) { m_modelPerformanceHasBeenSet = true; m_modelPerformance = value; }

    /**
     * <p> The model's overall performance scores. </p>
     */
    inline void SetModelPerformance(ATIModelPerformance&& value) { m_modelPerformanceHasBeenSet = true; m_modelPerformance = std::move(value); }

    /**
     * <p> The model's overall performance scores. </p>
     */
    inline ATITrainingMetricsValue& WithModelPerformance(const ATIModelPerformance& value) { SetModelPerformance(value); return *this;}

    /**
     * <p> The model's overall performance scores. </p>
     */
    inline ATITrainingMetricsValue& WithModelPerformance(ATIModelPerformance&& value) { SetModelPerformance(std::move(value)); return *this;}

  private:

    Aws::Vector<ATIMetricDataPoint> m_metricDataPoints;
    bool m_metricDataPointsHasBeenSet = false;

    ATIModelPerformance m_modelPerformance;
    bool m_modelPerformanceHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
