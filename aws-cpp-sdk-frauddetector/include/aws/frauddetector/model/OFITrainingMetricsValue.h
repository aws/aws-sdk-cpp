/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/OFIModelPerformance.h>
#include <aws/frauddetector/model/OFIMetricDataPoint.h>
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
   * <p> The Online Fraud Insights (OFI) model training metric details.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/OFITrainingMetricsValue">AWS
   * API Reference</a></p>
   */
  class OFITrainingMetricsValue
  {
  public:
    AWS_FRAUDDETECTOR_API OFITrainingMetricsValue();
    AWS_FRAUDDETECTOR_API OFITrainingMetricsValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API OFITrainingMetricsValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline const Aws::Vector<OFIMetricDataPoint>& GetMetricDataPoints() const{ return m_metricDataPoints; }

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline bool MetricDataPointsHasBeenSet() const { return m_metricDataPointsHasBeenSet; }

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline void SetMetricDataPoints(const Aws::Vector<OFIMetricDataPoint>& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints = value; }

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline void SetMetricDataPoints(Aws::Vector<OFIMetricDataPoint>&& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints = std::move(value); }

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline OFITrainingMetricsValue& WithMetricDataPoints(const Aws::Vector<OFIMetricDataPoint>& value) { SetMetricDataPoints(value); return *this;}

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline OFITrainingMetricsValue& WithMetricDataPoints(Aws::Vector<OFIMetricDataPoint>&& value) { SetMetricDataPoints(std::move(value)); return *this;}

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline OFITrainingMetricsValue& AddMetricDataPoints(const OFIMetricDataPoint& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints.push_back(value); return *this; }

    /**
     * <p> The model's performance metrics data points. </p>
     */
    inline OFITrainingMetricsValue& AddMetricDataPoints(OFIMetricDataPoint&& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints.push_back(std::move(value)); return *this; }


    /**
     * <p> The model's overall performance score. </p>
     */
    inline const OFIModelPerformance& GetModelPerformance() const{ return m_modelPerformance; }

    /**
     * <p> The model's overall performance score. </p>
     */
    inline bool ModelPerformanceHasBeenSet() const { return m_modelPerformanceHasBeenSet; }

    /**
     * <p> The model's overall performance score. </p>
     */
    inline void SetModelPerformance(const OFIModelPerformance& value) { m_modelPerformanceHasBeenSet = true; m_modelPerformance = value; }

    /**
     * <p> The model's overall performance score. </p>
     */
    inline void SetModelPerformance(OFIModelPerformance&& value) { m_modelPerformanceHasBeenSet = true; m_modelPerformance = std::move(value); }

    /**
     * <p> The model's overall performance score. </p>
     */
    inline OFITrainingMetricsValue& WithModelPerformance(const OFIModelPerformance& value) { SetModelPerformance(value); return *this;}

    /**
     * <p> The model's overall performance score. </p>
     */
    inline OFITrainingMetricsValue& WithModelPerformance(OFIModelPerformance&& value) { SetModelPerformance(std::move(value)); return *this;}

  private:

    Aws::Vector<OFIMetricDataPoint> m_metricDataPoints;
    bool m_metricDataPointsHasBeenSet = false;

    OFIModelPerformance m_modelPerformance;
    bool m_modelPerformanceHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
