/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/AutoMLOverrideStrategy.h>
#include <aws/forecast/model/OptimizationMetric.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/EvaluationResult.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ForecastService
{
namespace Model
{
  class GetAccuracyMetricsResult
  {
  public:
    AWS_FORECASTSERVICE_API GetAccuracyMetricsResult() = default;
    AWS_FORECASTSERVICE_API GetAccuracyMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API GetAccuracyMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of results from evaluating the predictor.</p>
     */
    inline const Aws::Vector<EvaluationResult>& GetPredictorEvaluationResults() const { return m_predictorEvaluationResults; }
    template<typename PredictorEvaluationResultsT = Aws::Vector<EvaluationResult>>
    void SetPredictorEvaluationResults(PredictorEvaluationResultsT&& value) { m_predictorEvaluationResultsHasBeenSet = true; m_predictorEvaluationResults = std::forward<PredictorEvaluationResultsT>(value); }
    template<typename PredictorEvaluationResultsT = Aws::Vector<EvaluationResult>>
    GetAccuracyMetricsResult& WithPredictorEvaluationResults(PredictorEvaluationResultsT&& value) { SetPredictorEvaluationResults(std::forward<PredictorEvaluationResultsT>(value)); return *this;}
    template<typename PredictorEvaluationResultsT = EvaluationResult>
    GetAccuracyMetricsResult& AddPredictorEvaluationResults(PredictorEvaluationResultsT&& value) { m_predictorEvaluationResultsHasBeenSet = true; m_predictorEvaluationResults.emplace_back(std::forward<PredictorEvaluationResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the predictor was created with <a>CreateAutoPredictor</a>.</p>
     */
    inline bool GetIsAutoPredictor() const { return m_isAutoPredictor; }
    inline void SetIsAutoPredictor(bool value) { m_isAutoPredictorHasBeenSet = true; m_isAutoPredictor = value; }
    inline GetAccuracyMetricsResult& WithIsAutoPredictor(bool value) { SetIsAutoPredictor(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p> The <code>LatencyOptimized</code> AutoML override strategy is only
     * available in private beta. Contact Amazon Web Services Support or your account
     * manager to learn more about access privileges. </p>  <p>The AutoML
     * strategy used to train the predictor. Unless <code>LatencyOptimized</code> is
     * specified, the AutoML strategy optimizes predictor accuracy.</p> <p>This
     * parameter is only valid for predictors trained using AutoML.</p>
     */
    inline AutoMLOverrideStrategy GetAutoMLOverrideStrategy() const { return m_autoMLOverrideStrategy; }
    inline void SetAutoMLOverrideStrategy(AutoMLOverrideStrategy value) { m_autoMLOverrideStrategyHasBeenSet = true; m_autoMLOverrideStrategy = value; }
    inline GetAccuracyMetricsResult& WithAutoMLOverrideStrategy(AutoMLOverrideStrategy value) { SetAutoMLOverrideStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline OptimizationMetric GetOptimizationMetric() const { return m_optimizationMetric; }
    inline void SetOptimizationMetric(OptimizationMetric value) { m_optimizationMetricHasBeenSet = true; m_optimizationMetric = value; }
    inline GetAccuracyMetricsResult& WithOptimizationMetric(OptimizationMetric value) { SetOptimizationMetric(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccuracyMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EvaluationResult> m_predictorEvaluationResults;
    bool m_predictorEvaluationResultsHasBeenSet = false;

    bool m_isAutoPredictor{false};
    bool m_isAutoPredictorHasBeenSet = false;

    AutoMLOverrideStrategy m_autoMLOverrideStrategy{AutoMLOverrideStrategy::NOT_SET};
    bool m_autoMLOverrideStrategyHasBeenSet = false;

    OptimizationMetric m_optimizationMetric{OptimizationMetric::NOT_SET};
    bool m_optimizationMetricHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
