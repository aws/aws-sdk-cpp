/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/PredictorSummary.h>
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
  class ListPredictorsResult
  {
  public:
    AWS_FORECASTSERVICE_API ListPredictorsResult() = default;
    AWS_FORECASTSERVICE_API ListPredictorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListPredictorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that summarize each predictor's properties.</p>
     */
    inline const Aws::Vector<PredictorSummary>& GetPredictors() const { return m_predictors; }
    template<typename PredictorsT = Aws::Vector<PredictorSummary>>
    void SetPredictors(PredictorsT&& value) { m_predictorsHasBeenSet = true; m_predictors = std::forward<PredictorsT>(value); }
    template<typename PredictorsT = Aws::Vector<PredictorSummary>>
    ListPredictorsResult& WithPredictors(PredictorsT&& value) { SetPredictors(std::forward<PredictorsT>(value)); return *this;}
    template<typename PredictorsT = PredictorSummary>
    ListPredictorsResult& AddPredictors(PredictorsT&& value) { m_predictorsHasBeenSet = true; m_predictors.emplace_back(std::forward<PredictorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPredictorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPredictorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PredictorSummary> m_predictors;
    bool m_predictorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
