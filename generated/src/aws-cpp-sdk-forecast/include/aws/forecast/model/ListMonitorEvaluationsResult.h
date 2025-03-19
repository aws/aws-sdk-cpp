/**
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
    AWS_FORECASTSERVICE_API ListMonitorEvaluationsResult() = default;
    AWS_FORECASTSERVICE_API ListMonitorEvaluationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListMonitorEvaluationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request. Tokens expire after
     * 24 hours.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMonitorEvaluationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    inline const Aws::Vector<PredictorMonitorEvaluation>& GetPredictorMonitorEvaluations() const { return m_predictorMonitorEvaluations; }
    template<typename PredictorMonitorEvaluationsT = Aws::Vector<PredictorMonitorEvaluation>>
    void SetPredictorMonitorEvaluations(PredictorMonitorEvaluationsT&& value) { m_predictorMonitorEvaluationsHasBeenSet = true; m_predictorMonitorEvaluations = std::forward<PredictorMonitorEvaluationsT>(value); }
    template<typename PredictorMonitorEvaluationsT = Aws::Vector<PredictorMonitorEvaluation>>
    ListMonitorEvaluationsResult& WithPredictorMonitorEvaluations(PredictorMonitorEvaluationsT&& value) { SetPredictorMonitorEvaluations(std::forward<PredictorMonitorEvaluationsT>(value)); return *this;}
    template<typename PredictorMonitorEvaluationsT = PredictorMonitorEvaluation>
    ListMonitorEvaluationsResult& AddPredictorMonitorEvaluations(PredictorMonitorEvaluationsT&& value) { m_predictorMonitorEvaluationsHasBeenSet = true; m_predictorMonitorEvaluations.emplace_back(std::forward<PredictorMonitorEvaluationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMonitorEvaluationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<PredictorMonitorEvaluation> m_predictorMonitorEvaluations;
    bool m_predictorMonitorEvaluationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
