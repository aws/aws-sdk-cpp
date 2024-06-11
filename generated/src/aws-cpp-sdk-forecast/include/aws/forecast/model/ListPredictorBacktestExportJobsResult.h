﻿/**
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
    AWS_FORECASTSERVICE_API ListPredictorBacktestExportJobsResult();
    AWS_FORECASTSERVICE_API ListPredictorBacktestExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListPredictorBacktestExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that summarize the properties of each predictor backtest
     * export job.</p>
     */
    inline const Aws::Vector<PredictorBacktestExportJobSummary>& GetPredictorBacktestExportJobs() const{ return m_predictorBacktestExportJobs; }
    inline void SetPredictorBacktestExportJobs(const Aws::Vector<PredictorBacktestExportJobSummary>& value) { m_predictorBacktestExportJobs = value; }
    inline void SetPredictorBacktestExportJobs(Aws::Vector<PredictorBacktestExportJobSummary>&& value) { m_predictorBacktestExportJobs = std::move(value); }
    inline ListPredictorBacktestExportJobsResult& WithPredictorBacktestExportJobs(const Aws::Vector<PredictorBacktestExportJobSummary>& value) { SetPredictorBacktestExportJobs(value); return *this;}
    inline ListPredictorBacktestExportJobsResult& WithPredictorBacktestExportJobs(Aws::Vector<PredictorBacktestExportJobSummary>&& value) { SetPredictorBacktestExportJobs(std::move(value)); return *this;}
    inline ListPredictorBacktestExportJobsResult& AddPredictorBacktestExportJobs(const PredictorBacktestExportJobSummary& value) { m_predictorBacktestExportJobs.push_back(value); return *this; }
    inline ListPredictorBacktestExportJobsResult& AddPredictorBacktestExportJobs(PredictorBacktestExportJobSummary&& value) { m_predictorBacktestExportJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns this token if the response is truncated. To retrieve the next set of
     * results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPredictorBacktestExportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPredictorBacktestExportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPredictorBacktestExportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPredictorBacktestExportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPredictorBacktestExportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPredictorBacktestExportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PredictorBacktestExportJobSummary> m_predictorBacktestExportJobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
