/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
