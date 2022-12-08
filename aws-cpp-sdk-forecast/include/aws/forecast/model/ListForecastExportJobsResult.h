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
    AWS_FORECASTSERVICE_API ListForecastExportJobsResult();
    AWS_FORECASTSERVICE_API ListForecastExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListForecastExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that summarize each export job's properties.</p>
     */
    inline const Aws::Vector<ForecastExportJobSummary>& GetForecastExportJobs() const{ return m_forecastExportJobs; }

    /**
     * <p>An array of objects that summarize each export job's properties.</p>
     */
    inline void SetForecastExportJobs(const Aws::Vector<ForecastExportJobSummary>& value) { m_forecastExportJobs = value; }

    /**
     * <p>An array of objects that summarize each export job's properties.</p>
     */
    inline void SetForecastExportJobs(Aws::Vector<ForecastExportJobSummary>&& value) { m_forecastExportJobs = std::move(value); }

    /**
     * <p>An array of objects that summarize each export job's properties.</p>
     */
    inline ListForecastExportJobsResult& WithForecastExportJobs(const Aws::Vector<ForecastExportJobSummary>& value) { SetForecastExportJobs(value); return *this;}

    /**
     * <p>An array of objects that summarize each export job's properties.</p>
     */
    inline ListForecastExportJobsResult& WithForecastExportJobs(Aws::Vector<ForecastExportJobSummary>&& value) { SetForecastExportJobs(std::move(value)); return *this;}

    /**
     * <p>An array of objects that summarize each export job's properties.</p>
     */
    inline ListForecastExportJobsResult& AddForecastExportJobs(const ForecastExportJobSummary& value) { m_forecastExportJobs.push_back(value); return *this; }

    /**
     * <p>An array of objects that summarize each export job's properties.</p>
     */
    inline ListForecastExportJobsResult& AddForecastExportJobs(ForecastExportJobSummary&& value) { m_forecastExportJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline ListForecastExportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline ListForecastExportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline ListForecastExportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ForecastExportJobSummary> m_forecastExportJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
