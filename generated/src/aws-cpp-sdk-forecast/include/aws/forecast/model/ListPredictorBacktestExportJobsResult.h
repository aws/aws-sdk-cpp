/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/PredictorBacktestExportJobSummary.h>
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
  class ListPredictorBacktestExportJobsResult
  {
  public:
    AWS_FORECASTSERVICE_API ListPredictorBacktestExportJobsResult() = default;
    AWS_FORECASTSERVICE_API ListPredictorBacktestExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListPredictorBacktestExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that summarize the properties of each predictor backtest
     * export job.</p>
     */
    inline const Aws::Vector<PredictorBacktestExportJobSummary>& GetPredictorBacktestExportJobs() const { return m_predictorBacktestExportJobs; }
    template<typename PredictorBacktestExportJobsT = Aws::Vector<PredictorBacktestExportJobSummary>>
    void SetPredictorBacktestExportJobs(PredictorBacktestExportJobsT&& value) { m_predictorBacktestExportJobsHasBeenSet = true; m_predictorBacktestExportJobs = std::forward<PredictorBacktestExportJobsT>(value); }
    template<typename PredictorBacktestExportJobsT = Aws::Vector<PredictorBacktestExportJobSummary>>
    ListPredictorBacktestExportJobsResult& WithPredictorBacktestExportJobs(PredictorBacktestExportJobsT&& value) { SetPredictorBacktestExportJobs(std::forward<PredictorBacktestExportJobsT>(value)); return *this;}
    template<typename PredictorBacktestExportJobsT = PredictorBacktestExportJobSummary>
    ListPredictorBacktestExportJobsResult& AddPredictorBacktestExportJobs(PredictorBacktestExportJobsT&& value) { m_predictorBacktestExportJobsHasBeenSet = true; m_predictorBacktestExportJobs.emplace_back(std::forward<PredictorBacktestExportJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns this token if the response is truncated. To retrieve the next set of
     * results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPredictorBacktestExportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPredictorBacktestExportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PredictorBacktestExportJobSummary> m_predictorBacktestExportJobs;
    bool m_predictorBacktestExportJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
