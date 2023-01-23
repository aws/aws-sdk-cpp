/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/BaselineMetric.h>
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
   * <p>Metrics you can use as a baseline for comparison purposes. Use these metrics
   * when you interpret monitoring results for an auto predictor.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/PredictorBaseline">AWS
   * API Reference</a></p>
   */
  class PredictorBaseline
  {
  public:
    AWS_FORECASTSERVICE_API PredictorBaseline();
    AWS_FORECASTSERVICE_API PredictorBaseline(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API PredictorBaseline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The initial <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/metrics.html">accuracy
     * metrics</a> for the predictor. Use these metrics as a baseline for comparison
     * purposes as you use your predictor and the metrics change.</p>
     */
    inline const Aws::Vector<BaselineMetric>& GetBaselineMetrics() const{ return m_baselineMetrics; }

    /**
     * <p>The initial <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/metrics.html">accuracy
     * metrics</a> for the predictor. Use these metrics as a baseline for comparison
     * purposes as you use your predictor and the metrics change.</p>
     */
    inline bool BaselineMetricsHasBeenSet() const { return m_baselineMetricsHasBeenSet; }

    /**
     * <p>The initial <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/metrics.html">accuracy
     * metrics</a> for the predictor. Use these metrics as a baseline for comparison
     * purposes as you use your predictor and the metrics change.</p>
     */
    inline void SetBaselineMetrics(const Aws::Vector<BaselineMetric>& value) { m_baselineMetricsHasBeenSet = true; m_baselineMetrics = value; }

    /**
     * <p>The initial <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/metrics.html">accuracy
     * metrics</a> for the predictor. Use these metrics as a baseline for comparison
     * purposes as you use your predictor and the metrics change.</p>
     */
    inline void SetBaselineMetrics(Aws::Vector<BaselineMetric>&& value) { m_baselineMetricsHasBeenSet = true; m_baselineMetrics = std::move(value); }

    /**
     * <p>The initial <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/metrics.html">accuracy
     * metrics</a> for the predictor. Use these metrics as a baseline for comparison
     * purposes as you use your predictor and the metrics change.</p>
     */
    inline PredictorBaseline& WithBaselineMetrics(const Aws::Vector<BaselineMetric>& value) { SetBaselineMetrics(value); return *this;}

    /**
     * <p>The initial <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/metrics.html">accuracy
     * metrics</a> for the predictor. Use these metrics as a baseline for comparison
     * purposes as you use your predictor and the metrics change.</p>
     */
    inline PredictorBaseline& WithBaselineMetrics(Aws::Vector<BaselineMetric>&& value) { SetBaselineMetrics(std::move(value)); return *this;}

    /**
     * <p>The initial <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/metrics.html">accuracy
     * metrics</a> for the predictor. Use these metrics as a baseline for comparison
     * purposes as you use your predictor and the metrics change.</p>
     */
    inline PredictorBaseline& AddBaselineMetrics(const BaselineMetric& value) { m_baselineMetricsHasBeenSet = true; m_baselineMetrics.push_back(value); return *this; }

    /**
     * <p>The initial <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/metrics.html">accuracy
     * metrics</a> for the predictor. Use these metrics as a baseline for comparison
     * purposes as you use your predictor and the metrics change.</p>
     */
    inline PredictorBaseline& AddBaselineMetrics(BaselineMetric&& value) { m_baselineMetricsHasBeenSet = true; m_baselineMetrics.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BaselineMetric> m_baselineMetrics;
    bool m_baselineMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
