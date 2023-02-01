/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/HistoricalMetricResult.h>
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
namespace Connect
{
namespace Model
{
  class GetMetricDataResult
  {
  public:
    AWS_CONNECT_API GetMetricDataResult();
    AWS_CONNECT_API GetMetricDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetMetricDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the token must use the same request parameters as
     * the request that generated the token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the token must use the same request parameters as
     * the request that generated the token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the token must use the same request parameters as
     * the request that generated the token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the token must use the same request parameters as
     * the request that generated the token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the token must use the same request parameters as
     * the request that generated the token.</p>
     */
    inline GetMetricDataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the token must use the same request parameters as
     * the request that generated the token.</p>
     */
    inline GetMetricDataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the token must use the same request parameters as
     * the request that generated the token.</p>
     */
    inline GetMetricDataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the historical metrics.</p> <p>If no grouping is specified,
     * a summary of metric data is returned.</p>
     */
    inline const Aws::Vector<HistoricalMetricResult>& GetMetricResults() const{ return m_metricResults; }

    /**
     * <p>Information about the historical metrics.</p> <p>If no grouping is specified,
     * a summary of metric data is returned.</p>
     */
    inline void SetMetricResults(const Aws::Vector<HistoricalMetricResult>& value) { m_metricResults = value; }

    /**
     * <p>Information about the historical metrics.</p> <p>If no grouping is specified,
     * a summary of metric data is returned.</p>
     */
    inline void SetMetricResults(Aws::Vector<HistoricalMetricResult>&& value) { m_metricResults = std::move(value); }

    /**
     * <p>Information about the historical metrics.</p> <p>If no grouping is specified,
     * a summary of metric data is returned.</p>
     */
    inline GetMetricDataResult& WithMetricResults(const Aws::Vector<HistoricalMetricResult>& value) { SetMetricResults(value); return *this;}

    /**
     * <p>Information about the historical metrics.</p> <p>If no grouping is specified,
     * a summary of metric data is returned.</p>
     */
    inline GetMetricDataResult& WithMetricResults(Aws::Vector<HistoricalMetricResult>&& value) { SetMetricResults(std::move(value)); return *this;}

    /**
     * <p>Information about the historical metrics.</p> <p>If no grouping is specified,
     * a summary of metric data is returned.</p>
     */
    inline GetMetricDataResult& AddMetricResults(const HistoricalMetricResult& value) { m_metricResults.push_back(value); return *this; }

    /**
     * <p>Information about the historical metrics.</p> <p>If no grouping is specified,
     * a summary of metric data is returned.</p>
     */
    inline GetMetricDataResult& AddMetricResults(HistoricalMetricResult&& value) { m_metricResults.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<HistoricalMetricResult> m_metricResults;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
