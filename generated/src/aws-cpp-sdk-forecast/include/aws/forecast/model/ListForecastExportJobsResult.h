/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/ForecastExportJobSummary.h>
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
  class ListForecastExportJobsResult
  {
  public:
    AWS_FORECASTSERVICE_API ListForecastExportJobsResult() = default;
    AWS_FORECASTSERVICE_API ListForecastExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListForecastExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that summarize each export job's properties.</p>
     */
    inline const Aws::Vector<ForecastExportJobSummary>& GetForecastExportJobs() const { return m_forecastExportJobs; }
    template<typename ForecastExportJobsT = Aws::Vector<ForecastExportJobSummary>>
    void SetForecastExportJobs(ForecastExportJobsT&& value) { m_forecastExportJobsHasBeenSet = true; m_forecastExportJobs = std::forward<ForecastExportJobsT>(value); }
    template<typename ForecastExportJobsT = Aws::Vector<ForecastExportJobSummary>>
    ListForecastExportJobsResult& WithForecastExportJobs(ForecastExportJobsT&& value) { SetForecastExportJobs(std::forward<ForecastExportJobsT>(value)); return *this;}
    template<typename ForecastExportJobsT = ForecastExportJobSummary>
    ListForecastExportJobsResult& AddForecastExportJobs(ForecastExportJobsT&& value) { m_forecastExportJobsHasBeenSet = true; m_forecastExportJobs.emplace_back(std::forward<ForecastExportJobsT>(value)); return *this; }
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
    ListForecastExportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListForecastExportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ForecastExportJobSummary> m_forecastExportJobs;
    bool m_forecastExportJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
