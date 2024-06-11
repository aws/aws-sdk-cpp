﻿/**
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
    AWS_FORECASTSERVICE_API GetAccuracyMetricsResult();
    AWS_FORECASTSERVICE_API GetAccuracyMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API GetAccuracyMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of results from evaluating the predictor.</p>
     */
    inline const Aws::Vector<EvaluationResult>& GetPredictorEvaluationResults() const{ return m_predictorEvaluationResults; }
    inline void SetPredictorEvaluationResults(const Aws::Vector<EvaluationResult>& value) { m_predictorEvaluationResults = value; }
    inline void SetPredictorEvaluationResults(Aws::Vector<EvaluationResult>&& value) { m_predictorEvaluationResults = std::move(value); }
    inline GetAccuracyMetricsResult& WithPredictorEvaluationResults(const Aws::Vector<EvaluationResult>& value) { SetPredictorEvaluationResults(value); return *this;}
    inline GetAccuracyMetricsResult& WithPredictorEvaluationResults(Aws::Vector<EvaluationResult>&& value) { SetPredictorEvaluationResults(std::move(value)); return *this;}
    inline GetAccuracyMetricsResult& AddPredictorEvaluationResults(const EvaluationResult& value) { m_predictorEvaluationResults.push_back(value); return *this; }
    inline GetAccuracyMetricsResult& AddPredictorEvaluationResults(EvaluationResult&& value) { m_predictorEvaluationResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the predictor was created with <a>CreateAutoPredictor</a>.</p>
     */
    inline bool GetIsAutoPredictor() const{ return m_isAutoPredictor; }
    inline void SetIsAutoPredictor(bool value) { m_isAutoPredictor = value; }
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
    inline const AutoMLOverrideStrategy& GetAutoMLOverrideStrategy() const{ return m_autoMLOverrideStrategy; }
    inline void SetAutoMLOverrideStrategy(const AutoMLOverrideStrategy& value) { m_autoMLOverrideStrategy = value; }
    inline void SetAutoMLOverrideStrategy(AutoMLOverrideStrategy&& value) { m_autoMLOverrideStrategy = std::move(value); }
    inline GetAccuracyMetricsResult& WithAutoMLOverrideStrategy(const AutoMLOverrideStrategy& value) { SetAutoMLOverrideStrategy(value); return *this;}
    inline GetAccuracyMetricsResult& WithAutoMLOverrideStrategy(AutoMLOverrideStrategy&& value) { SetAutoMLOverrideStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline const OptimizationMetric& GetOptimizationMetric() const{ return m_optimizationMetric; }
    inline void SetOptimizationMetric(const OptimizationMetric& value) { m_optimizationMetric = value; }
    inline void SetOptimizationMetric(OptimizationMetric&& value) { m_optimizationMetric = std::move(value); }
    inline GetAccuracyMetricsResult& WithOptimizationMetric(const OptimizationMetric& value) { SetOptimizationMetric(value); return *this;}
    inline GetAccuracyMetricsResult& WithOptimizationMetric(OptimizationMetric&& value) { SetOptimizationMetric(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAccuracyMetricsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAccuracyMetricsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAccuracyMetricsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EvaluationResult> m_predictorEvaluationResults;

    bool m_isAutoPredictor;

    AutoMLOverrideStrategy m_autoMLOverrideStrategy;

    OptimizationMetric m_optimizationMetric;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
