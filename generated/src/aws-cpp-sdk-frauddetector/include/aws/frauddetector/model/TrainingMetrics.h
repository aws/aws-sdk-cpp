/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/MetricDataPoint.h>
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
   * <p>The training metric details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/TrainingMetrics">AWS
   * API Reference</a></p>
   */
  class TrainingMetrics
  {
  public:
    AWS_FRAUDDETECTOR_API TrainingMetrics();
    AWS_FRAUDDETECTOR_API TrainingMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API TrainingMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The area under the curve. This summarizes true positive rate (TPR) and false
     * positive rate (FPR) across all possible model score thresholds. A model with no
     * predictive power has an AUC of 0.5, whereas a perfect model has a score of
     * 1.0.</p>
     */
    inline double GetAuc() const{ return m_auc; }

    /**
     * <p>The area under the curve. This summarizes true positive rate (TPR) and false
     * positive rate (FPR) across all possible model score thresholds. A model with no
     * predictive power has an AUC of 0.5, whereas a perfect model has a score of
     * 1.0.</p>
     */
    inline bool AucHasBeenSet() const { return m_aucHasBeenSet; }

    /**
     * <p>The area under the curve. This summarizes true positive rate (TPR) and false
     * positive rate (FPR) across all possible model score thresholds. A model with no
     * predictive power has an AUC of 0.5, whereas a perfect model has a score of
     * 1.0.</p>
     */
    inline void SetAuc(double value) { m_aucHasBeenSet = true; m_auc = value; }

    /**
     * <p>The area under the curve. This summarizes true positive rate (TPR) and false
     * positive rate (FPR) across all possible model score thresholds. A model with no
     * predictive power has an AUC of 0.5, whereas a perfect model has a score of
     * 1.0.</p>
     */
    inline TrainingMetrics& WithAuc(double value) { SetAuc(value); return *this;}


    /**
     * <p>The data points details.</p>
     */
    inline const Aws::Vector<MetricDataPoint>& GetMetricDataPoints() const{ return m_metricDataPoints; }

    /**
     * <p>The data points details.</p>
     */
    inline bool MetricDataPointsHasBeenSet() const { return m_metricDataPointsHasBeenSet; }

    /**
     * <p>The data points details.</p>
     */
    inline void SetMetricDataPoints(const Aws::Vector<MetricDataPoint>& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints = value; }

    /**
     * <p>The data points details.</p>
     */
    inline void SetMetricDataPoints(Aws::Vector<MetricDataPoint>&& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints = std::move(value); }

    /**
     * <p>The data points details.</p>
     */
    inline TrainingMetrics& WithMetricDataPoints(const Aws::Vector<MetricDataPoint>& value) { SetMetricDataPoints(value); return *this;}

    /**
     * <p>The data points details.</p>
     */
    inline TrainingMetrics& WithMetricDataPoints(Aws::Vector<MetricDataPoint>&& value) { SetMetricDataPoints(std::move(value)); return *this;}

    /**
     * <p>The data points details.</p>
     */
    inline TrainingMetrics& AddMetricDataPoints(const MetricDataPoint& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints.push_back(value); return *this; }

    /**
     * <p>The data points details.</p>
     */
    inline TrainingMetrics& AddMetricDataPoints(MetricDataPoint&& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints.push_back(std::move(value)); return *this; }

  private:

    double m_auc;
    bool m_aucHasBeenSet = false;

    Aws::Vector<MetricDataPoint> m_metricDataPoints;
    bool m_metricDataPointsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
