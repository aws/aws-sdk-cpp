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
    AWS_FORECASTSERVICE_API PredictorBaseline() = default;
    AWS_FORECASTSERVICE_API PredictorBaseline(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API PredictorBaseline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The initial <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/metrics.html">accuracy
     * metrics</a> for the predictor. Use these metrics as a baseline for comparison
     * purposes as you use your predictor and the metrics change.</p>
     */
    inline const Aws::Vector<BaselineMetric>& GetBaselineMetrics() const { return m_baselineMetrics; }
    inline bool BaselineMetricsHasBeenSet() const { return m_baselineMetricsHasBeenSet; }
    template<typename BaselineMetricsT = Aws::Vector<BaselineMetric>>
    void SetBaselineMetrics(BaselineMetricsT&& value) { m_baselineMetricsHasBeenSet = true; m_baselineMetrics = std::forward<BaselineMetricsT>(value); }
    template<typename BaselineMetricsT = Aws::Vector<BaselineMetric>>
    PredictorBaseline& WithBaselineMetrics(BaselineMetricsT&& value) { SetBaselineMetrics(std::forward<BaselineMetricsT>(value)); return *this;}
    template<typename BaselineMetricsT = BaselineMetric>
    PredictorBaseline& AddBaselineMetrics(BaselineMetricsT&& value) { m_baselineMetricsHasBeenSet = true; m_baselineMetrics.emplace_back(std::forward<BaselineMetricsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<BaselineMetric> m_baselineMetrics;
    bool m_baselineMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
