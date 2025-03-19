/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/WeightedQuantileLoss.h>
#include <aws/forecast/model/ErrorMetric.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Provides metrics that are used to evaluate the performance of a predictor.
   * This object is part of the <a>WindowSummary</a> object.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/Metrics">AWS
   * API Reference</a></p>
   */
  class Metrics
  {
  public:
    AWS_FORECASTSERVICE_API Metrics() = default;
    AWS_FORECASTSERVICE_API Metrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Metrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of weighted quantile losses. Quantiles divide a probability
     * distribution into regions of equal probability. The distribution in this case is
     * the loss function.</p>
     */
    inline const Aws::Vector<WeightedQuantileLoss>& GetWeightedQuantileLosses() const { return m_weightedQuantileLosses; }
    inline bool WeightedQuantileLossesHasBeenSet() const { return m_weightedQuantileLossesHasBeenSet; }
    template<typename WeightedQuantileLossesT = Aws::Vector<WeightedQuantileLoss>>
    void SetWeightedQuantileLosses(WeightedQuantileLossesT&& value) { m_weightedQuantileLossesHasBeenSet = true; m_weightedQuantileLosses = std::forward<WeightedQuantileLossesT>(value); }
    template<typename WeightedQuantileLossesT = Aws::Vector<WeightedQuantileLoss>>
    Metrics& WithWeightedQuantileLosses(WeightedQuantileLossesT&& value) { SetWeightedQuantileLosses(std::forward<WeightedQuantileLossesT>(value)); return *this;}
    template<typename WeightedQuantileLossesT = WeightedQuantileLoss>
    Metrics& AddWeightedQuantileLosses(WeightedQuantileLossesT&& value) { m_weightedQuantileLossesHasBeenSet = true; m_weightedQuantileLosses.emplace_back(std::forward<WeightedQuantileLossesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Provides detailed error metrics for each forecast type. Metrics include
     * root-mean square-error (RMSE), mean absolute percentage error (MAPE), mean
     * absolute scaled error (MASE), and weighted average percentage error (WAPE). </p>
     */
    inline const Aws::Vector<ErrorMetric>& GetErrorMetrics() const { return m_errorMetrics; }
    inline bool ErrorMetricsHasBeenSet() const { return m_errorMetricsHasBeenSet; }
    template<typename ErrorMetricsT = Aws::Vector<ErrorMetric>>
    void SetErrorMetrics(ErrorMetricsT&& value) { m_errorMetricsHasBeenSet = true; m_errorMetrics = std::forward<ErrorMetricsT>(value); }
    template<typename ErrorMetricsT = Aws::Vector<ErrorMetric>>
    Metrics& WithErrorMetrics(ErrorMetricsT&& value) { SetErrorMetrics(std::forward<ErrorMetricsT>(value)); return *this;}
    template<typename ErrorMetricsT = ErrorMetric>
    Metrics& AddErrorMetrics(ErrorMetricsT&& value) { m_errorMetricsHasBeenSet = true; m_errorMetrics.emplace_back(std::forward<ErrorMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The average value of all weighted quantile losses.</p>
     */
    inline double GetAverageWeightedQuantileLoss() const { return m_averageWeightedQuantileLoss; }
    inline bool AverageWeightedQuantileLossHasBeenSet() const { return m_averageWeightedQuantileLossHasBeenSet; }
    inline void SetAverageWeightedQuantileLoss(double value) { m_averageWeightedQuantileLossHasBeenSet = true; m_averageWeightedQuantileLoss = value; }
    inline Metrics& WithAverageWeightedQuantileLoss(double value) { SetAverageWeightedQuantileLoss(value); return *this;}
    ///@}
  private:

    Aws::Vector<WeightedQuantileLoss> m_weightedQuantileLosses;
    bool m_weightedQuantileLossesHasBeenSet = false;

    Aws::Vector<ErrorMetric> m_errorMetrics;
    bool m_errorMetricsHasBeenSet = false;

    double m_averageWeightedQuantileLoss{0.0};
    bool m_averageWeightedQuantileLossHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
