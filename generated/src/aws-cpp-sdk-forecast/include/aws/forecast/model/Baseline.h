﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/model/PredictorBaseline.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/Baseline">AWS
   * API Reference</a></p>
   */
  class Baseline
  {
  public:
    AWS_FORECASTSERVICE_API Baseline() = default;
    AWS_FORECASTSERVICE_API Baseline(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Baseline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The initial <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/metrics.html">accuracy
     * metrics</a> for the predictor you are monitoring. Use these metrics as a
     * baseline for comparison purposes as you use your predictor and the metrics
     * change.</p>
     */
    inline const PredictorBaseline& GetPredictorBaseline() const { return m_predictorBaseline; }
    inline bool PredictorBaselineHasBeenSet() const { return m_predictorBaselineHasBeenSet; }
    template<typename PredictorBaselineT = PredictorBaseline>
    void SetPredictorBaseline(PredictorBaselineT&& value) { m_predictorBaselineHasBeenSet = true; m_predictorBaseline = std::forward<PredictorBaselineT>(value); }
    template<typename PredictorBaselineT = PredictorBaseline>
    Baseline& WithPredictorBaseline(PredictorBaselineT&& value) { SetPredictorBaseline(std::forward<PredictorBaselineT>(value)); return *this;}
    ///@}
  private:

    PredictorBaseline m_predictorBaseline;
    bool m_predictorBaselineHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
