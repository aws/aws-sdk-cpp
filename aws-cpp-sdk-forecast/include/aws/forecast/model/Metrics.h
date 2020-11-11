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
  class AWS_FORECASTSERVICE_API Metrics
  {
  public:
    Metrics();
    Metrics(Aws::Utils::Json::JsonView jsonValue);
    Metrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of weighted quantile losses. Quantiles divide a probability
     * distribution into regions of equal probability. The distribution in this case is
     * the loss function.</p>
     */
    inline const Aws::Vector<WeightedQuantileLoss>& GetWeightedQuantileLosses() const{ return m_weightedQuantileLosses; }

    /**
     * <p>An array of weighted quantile losses. Quantiles divide a probability
     * distribution into regions of equal probability. The distribution in this case is
     * the loss function.</p>
     */
    inline bool WeightedQuantileLossesHasBeenSet() const { return m_weightedQuantileLossesHasBeenSet; }

    /**
     * <p>An array of weighted quantile losses. Quantiles divide a probability
     * distribution into regions of equal probability. The distribution in this case is
     * the loss function.</p>
     */
    inline void SetWeightedQuantileLosses(const Aws::Vector<WeightedQuantileLoss>& value) { m_weightedQuantileLossesHasBeenSet = true; m_weightedQuantileLosses = value; }

    /**
     * <p>An array of weighted quantile losses. Quantiles divide a probability
     * distribution into regions of equal probability. The distribution in this case is
     * the loss function.</p>
     */
    inline void SetWeightedQuantileLosses(Aws::Vector<WeightedQuantileLoss>&& value) { m_weightedQuantileLossesHasBeenSet = true; m_weightedQuantileLosses = std::move(value); }

    /**
     * <p>An array of weighted quantile losses. Quantiles divide a probability
     * distribution into regions of equal probability. The distribution in this case is
     * the loss function.</p>
     */
    inline Metrics& WithWeightedQuantileLosses(const Aws::Vector<WeightedQuantileLoss>& value) { SetWeightedQuantileLosses(value); return *this;}

    /**
     * <p>An array of weighted quantile losses. Quantiles divide a probability
     * distribution into regions of equal probability. The distribution in this case is
     * the loss function.</p>
     */
    inline Metrics& WithWeightedQuantileLosses(Aws::Vector<WeightedQuantileLoss>&& value) { SetWeightedQuantileLosses(std::move(value)); return *this;}

    /**
     * <p>An array of weighted quantile losses. Quantiles divide a probability
     * distribution into regions of equal probability. The distribution in this case is
     * the loss function.</p>
     */
    inline Metrics& AddWeightedQuantileLosses(const WeightedQuantileLoss& value) { m_weightedQuantileLossesHasBeenSet = true; m_weightedQuantileLosses.push_back(value); return *this; }

    /**
     * <p>An array of weighted quantile losses. Quantiles divide a probability
     * distribution into regions of equal probability. The distribution in this case is
     * the loss function.</p>
     */
    inline Metrics& AddWeightedQuantileLosses(WeightedQuantileLoss&& value) { m_weightedQuantileLossesHasBeenSet = true; m_weightedQuantileLosses.push_back(std::move(value)); return *this; }


    /**
     * <p> Provides detailed error metrics on forecast type, root-mean square-error
     * (RMSE), and weighted average percentage error (WAPE). </p>
     */
    inline const Aws::Vector<ErrorMetric>& GetErrorMetrics() const{ return m_errorMetrics; }

    /**
     * <p> Provides detailed error metrics on forecast type, root-mean square-error
     * (RMSE), and weighted average percentage error (WAPE). </p>
     */
    inline bool ErrorMetricsHasBeenSet() const { return m_errorMetricsHasBeenSet; }

    /**
     * <p> Provides detailed error metrics on forecast type, root-mean square-error
     * (RMSE), and weighted average percentage error (WAPE). </p>
     */
    inline void SetErrorMetrics(const Aws::Vector<ErrorMetric>& value) { m_errorMetricsHasBeenSet = true; m_errorMetrics = value; }

    /**
     * <p> Provides detailed error metrics on forecast type, root-mean square-error
     * (RMSE), and weighted average percentage error (WAPE). </p>
     */
    inline void SetErrorMetrics(Aws::Vector<ErrorMetric>&& value) { m_errorMetricsHasBeenSet = true; m_errorMetrics = std::move(value); }

    /**
     * <p> Provides detailed error metrics on forecast type, root-mean square-error
     * (RMSE), and weighted average percentage error (WAPE). </p>
     */
    inline Metrics& WithErrorMetrics(const Aws::Vector<ErrorMetric>& value) { SetErrorMetrics(value); return *this;}

    /**
     * <p> Provides detailed error metrics on forecast type, root-mean square-error
     * (RMSE), and weighted average percentage error (WAPE). </p>
     */
    inline Metrics& WithErrorMetrics(Aws::Vector<ErrorMetric>&& value) { SetErrorMetrics(std::move(value)); return *this;}

    /**
     * <p> Provides detailed error metrics on forecast type, root-mean square-error
     * (RMSE), and weighted average percentage error (WAPE). </p>
     */
    inline Metrics& AddErrorMetrics(const ErrorMetric& value) { m_errorMetricsHasBeenSet = true; m_errorMetrics.push_back(value); return *this; }

    /**
     * <p> Provides detailed error metrics on forecast type, root-mean square-error
     * (RMSE), and weighted average percentage error (WAPE). </p>
     */
    inline Metrics& AddErrorMetrics(ErrorMetric&& value) { m_errorMetricsHasBeenSet = true; m_errorMetrics.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<WeightedQuantileLoss> m_weightedQuantileLosses;
    bool m_weightedQuantileLossesHasBeenSet;

    Aws::Vector<ErrorMetric> m_errorMetrics;
    bool m_errorMetricsHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
