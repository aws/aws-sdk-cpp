/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_FORECASTSERVICE_API GetAccuracyMetricsResult
  {
  public:
    GetAccuracyMetricsResult();
    GetAccuracyMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAccuracyMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of results from evaluating the predictor.</p>
     */
    inline const Aws::Vector<EvaluationResult>& GetPredictorEvaluationResults() const{ return m_predictorEvaluationResults; }

    /**
     * <p>An array of results from evaluating the predictor.</p>
     */
    inline void SetPredictorEvaluationResults(const Aws::Vector<EvaluationResult>& value) { m_predictorEvaluationResults = value; }

    /**
     * <p>An array of results from evaluating the predictor.</p>
     */
    inline void SetPredictorEvaluationResults(Aws::Vector<EvaluationResult>&& value) { m_predictorEvaluationResults = std::move(value); }

    /**
     * <p>An array of results from evaluating the predictor.</p>
     */
    inline GetAccuracyMetricsResult& WithPredictorEvaluationResults(const Aws::Vector<EvaluationResult>& value) { SetPredictorEvaluationResults(value); return *this;}

    /**
     * <p>An array of results from evaluating the predictor.</p>
     */
    inline GetAccuracyMetricsResult& WithPredictorEvaluationResults(Aws::Vector<EvaluationResult>&& value) { SetPredictorEvaluationResults(std::move(value)); return *this;}

    /**
     * <p>An array of results from evaluating the predictor.</p>
     */
    inline GetAccuracyMetricsResult& AddPredictorEvaluationResults(const EvaluationResult& value) { m_predictorEvaluationResults.push_back(value); return *this; }

    /**
     * <p>An array of results from evaluating the predictor.</p>
     */
    inline GetAccuracyMetricsResult& AddPredictorEvaluationResults(EvaluationResult&& value) { m_predictorEvaluationResults.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EvaluationResult> m_predictorEvaluationResults;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
