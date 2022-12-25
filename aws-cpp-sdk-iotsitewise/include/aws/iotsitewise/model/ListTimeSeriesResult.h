/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/TimeSeriesSummary.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class ListTimeSeriesResult
  {
  public:
    AWS_IOTSITEWISE_API ListTimeSeriesResult();
    AWS_IOTSITEWISE_API ListTimeSeriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListTimeSeriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>One or more time series summaries to list.</p>
     */
    inline const Aws::Vector<TimeSeriesSummary>& GetTimeSeriesSummaries() const{ return m_timeSeriesSummaries; }

    /**
     * <p>One or more time series summaries to list.</p>
     */
    inline void SetTimeSeriesSummaries(const Aws::Vector<TimeSeriesSummary>& value) { m_timeSeriesSummaries = value; }

    /**
     * <p>One or more time series summaries to list.</p>
     */
    inline void SetTimeSeriesSummaries(Aws::Vector<TimeSeriesSummary>&& value) { m_timeSeriesSummaries = std::move(value); }

    /**
     * <p>One or more time series summaries to list.</p>
     */
    inline ListTimeSeriesResult& WithTimeSeriesSummaries(const Aws::Vector<TimeSeriesSummary>& value) { SetTimeSeriesSummaries(value); return *this;}

    /**
     * <p>One or more time series summaries to list.</p>
     */
    inline ListTimeSeriesResult& WithTimeSeriesSummaries(Aws::Vector<TimeSeriesSummary>&& value) { SetTimeSeriesSummaries(std::move(value)); return *this;}

    /**
     * <p>One or more time series summaries to list.</p>
     */
    inline ListTimeSeriesResult& AddTimeSeriesSummaries(const TimeSeriesSummary& value) { m_timeSeriesSummaries.push_back(value); return *this; }

    /**
     * <p>One or more time series summaries to list.</p>
     */
    inline ListTimeSeriesResult& AddTimeSeriesSummaries(TimeSeriesSummary&& value) { m_timeSeriesSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListTimeSeriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListTimeSeriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListTimeSeriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TimeSeriesSummary> m_timeSeriesSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
