﻿/**
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
    AWS_FORECASTSERVICE_API ListForecastExportJobsResult();
    AWS_FORECASTSERVICE_API ListForecastExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListForecastExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that summarize each export job's properties.</p>
     */
    inline const Aws::Vector<ForecastExportJobSummary>& GetForecastExportJobs() const{ return m_forecastExportJobs; }
    inline void SetForecastExportJobs(const Aws::Vector<ForecastExportJobSummary>& value) { m_forecastExportJobs = value; }
    inline void SetForecastExportJobs(Aws::Vector<ForecastExportJobSummary>&& value) { m_forecastExportJobs = std::move(value); }
    inline ListForecastExportJobsResult& WithForecastExportJobs(const Aws::Vector<ForecastExportJobSummary>& value) { SetForecastExportJobs(value); return *this;}
    inline ListForecastExportJobsResult& WithForecastExportJobs(Aws::Vector<ForecastExportJobSummary>&& value) { SetForecastExportJobs(std::move(value)); return *this;}
    inline ListForecastExportJobsResult& AddForecastExportJobs(const ForecastExportJobSummary& value) { m_forecastExportJobs.push_back(value); return *this; }
    inline ListForecastExportJobsResult& AddForecastExportJobs(ForecastExportJobSummary&& value) { m_forecastExportJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListForecastExportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListForecastExportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListForecastExportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListForecastExportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListForecastExportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListForecastExportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ForecastExportJobSummary> m_forecastExportJobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
