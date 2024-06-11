﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/PredictorMonitorEvaluation.h>
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
  class ListMonitorEvaluationsResult
  {
  public:
    AWS_FORECASTSERVICE_API ListMonitorEvaluationsResult();
    AWS_FORECASTSERVICE_API ListMonitorEvaluationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListMonitorEvaluationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request. Tokens expire after
     * 24 hours.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMonitorEvaluationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMonitorEvaluationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMonitorEvaluationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monitoring results and predictor events collected by the monitor resource
     * during different windows of time.</p> <p>For information about monitoring see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/predictor-monitoring-results.html">Viewing
     * Monitoring Results</a>. For more information about retrieving monitoring results
     * see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/predictor-monitoring-results.html">Viewing
     * Monitoring Results</a>.</p>
     */
    inline const Aws::Vector<PredictorMonitorEvaluation>& GetPredictorMonitorEvaluations() const{ return m_predictorMonitorEvaluations; }
    inline void SetPredictorMonitorEvaluations(const Aws::Vector<PredictorMonitorEvaluation>& value) { m_predictorMonitorEvaluations = value; }
    inline void SetPredictorMonitorEvaluations(Aws::Vector<PredictorMonitorEvaluation>&& value) { m_predictorMonitorEvaluations = std::move(value); }
    inline ListMonitorEvaluationsResult& WithPredictorMonitorEvaluations(const Aws::Vector<PredictorMonitorEvaluation>& value) { SetPredictorMonitorEvaluations(value); return *this;}
    inline ListMonitorEvaluationsResult& WithPredictorMonitorEvaluations(Aws::Vector<PredictorMonitorEvaluation>&& value) { SetPredictorMonitorEvaluations(std::move(value)); return *this;}
    inline ListMonitorEvaluationsResult& AddPredictorMonitorEvaluations(const PredictorMonitorEvaluation& value) { m_predictorMonitorEvaluations.push_back(value); return *this; }
    inline ListMonitorEvaluationsResult& AddPredictorMonitorEvaluations(PredictorMonitorEvaluation&& value) { m_predictorMonitorEvaluations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMonitorEvaluationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMonitorEvaluationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMonitorEvaluationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<PredictorMonitorEvaluation> m_predictorMonitorEvaluations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
