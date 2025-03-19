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
    AWS_FRAUDDETECTOR_API TrainingMetrics() = default;
    AWS_FRAUDDETECTOR_API TrainingMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API TrainingMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The area under the curve. This summarizes true positive rate (TPR) and false
     * positive rate (FPR) across all possible model score thresholds. A model with no
     * predictive power has an AUC of 0.5, whereas a perfect model has a score of
     * 1.0.</p>
     */
    inline double GetAuc() const { return m_auc; }
    inline bool AucHasBeenSet() const { return m_aucHasBeenSet; }
    inline void SetAuc(double value) { m_aucHasBeenSet = true; m_auc = value; }
    inline TrainingMetrics& WithAuc(double value) { SetAuc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data points details.</p>
     */
    inline const Aws::Vector<MetricDataPoint>& GetMetricDataPoints() const { return m_metricDataPoints; }
    inline bool MetricDataPointsHasBeenSet() const { return m_metricDataPointsHasBeenSet; }
    template<typename MetricDataPointsT = Aws::Vector<MetricDataPoint>>
    void SetMetricDataPoints(MetricDataPointsT&& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints = std::forward<MetricDataPointsT>(value); }
    template<typename MetricDataPointsT = Aws::Vector<MetricDataPoint>>
    TrainingMetrics& WithMetricDataPoints(MetricDataPointsT&& value) { SetMetricDataPoints(std::forward<MetricDataPointsT>(value)); return *this;}
    template<typename MetricDataPointsT = MetricDataPoint>
    TrainingMetrics& AddMetricDataPoints(MetricDataPointsT&& value) { m_metricDataPointsHasBeenSet = true; m_metricDataPoints.emplace_back(std::forward<MetricDataPointsT>(value)); return *this; }
    ///@}
  private:

    double m_auc{0.0};
    bool m_aucHasBeenSet = false;

    Aws::Vector<MetricDataPoint> m_metricDataPoints;
    bool m_metricDataPointsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
