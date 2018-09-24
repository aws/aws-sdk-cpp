/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CONNECT_API GetMetricDataResult
  {
  public:
    GetMetricDataResult();
    GetMetricDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMetricDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A string returned in the response. Use the value returned in the response as
     * the value of the NextToken in a subsequent request to retrieve the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the NextToken must use the same request parameters
     * as the request that generated the token. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string returned in the response. Use the value returned in the response as
     * the value of the NextToken in a subsequent request to retrieve the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the NextToken must use the same request parameters
     * as the request that generated the token. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A string returned in the response. Use the value returned in the response as
     * the value of the NextToken in a subsequent request to retrieve the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the NextToken must use the same request parameters
     * as the request that generated the token. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A string returned in the response. Use the value returned in the response as
     * the value of the NextToken in a subsequent request to retrieve the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the NextToken must use the same request parameters
     * as the request that generated the token. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A string returned in the response. Use the value returned in the response as
     * the value of the NextToken in a subsequent request to retrieve the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the NextToken must use the same request parameters
     * as the request that generated the token. </p>
     */
    inline GetMetricDataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string returned in the response. Use the value returned in the response as
     * the value of the NextToken in a subsequent request to retrieve the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the NextToken must use the same request parameters
     * as the request that generated the token. </p>
     */
    inline GetMetricDataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string returned in the response. Use the value returned in the response as
     * the value of the NextToken in a subsequent request to retrieve the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the NextToken must use the same request parameters
     * as the request that generated the token. </p>
     */
    inline GetMetricDataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of <code>HistoricalMetricResult</code> objects, organized by
     * <code>Dimensions</code>, which is the ID of the resource specified in the
     * <code>Filters</code> used for the request. The metrics are combined with the
     * metrics included in <code>Collections</code>, which is a list of
     * <code>HisotricalMetricData</code> objects.</p> <p>If no <code>Grouping</code> is
     * specified in the request, <code>Collections</code> includes summary data for the
     * <code>HistoricalMetrics</code>.</p>
     */
    inline const Aws::Vector<HistoricalMetricResult>& GetMetricResults() const{ return m_metricResults; }

    /**
     * <p>A list of <code>HistoricalMetricResult</code> objects, organized by
     * <code>Dimensions</code>, which is the ID of the resource specified in the
     * <code>Filters</code> used for the request. The metrics are combined with the
     * metrics included in <code>Collections</code>, which is a list of
     * <code>HisotricalMetricData</code> objects.</p> <p>If no <code>Grouping</code> is
     * specified in the request, <code>Collections</code> includes summary data for the
     * <code>HistoricalMetrics</code>.</p>
     */
    inline void SetMetricResults(const Aws::Vector<HistoricalMetricResult>& value) { m_metricResults = value; }

    /**
     * <p>A list of <code>HistoricalMetricResult</code> objects, organized by
     * <code>Dimensions</code>, which is the ID of the resource specified in the
     * <code>Filters</code> used for the request. The metrics are combined with the
     * metrics included in <code>Collections</code>, which is a list of
     * <code>HisotricalMetricData</code> objects.</p> <p>If no <code>Grouping</code> is
     * specified in the request, <code>Collections</code> includes summary data for the
     * <code>HistoricalMetrics</code>.</p>
     */
    inline void SetMetricResults(Aws::Vector<HistoricalMetricResult>&& value) { m_metricResults = std::move(value); }

    /**
     * <p>A list of <code>HistoricalMetricResult</code> objects, organized by
     * <code>Dimensions</code>, which is the ID of the resource specified in the
     * <code>Filters</code> used for the request. The metrics are combined with the
     * metrics included in <code>Collections</code>, which is a list of
     * <code>HisotricalMetricData</code> objects.</p> <p>If no <code>Grouping</code> is
     * specified in the request, <code>Collections</code> includes summary data for the
     * <code>HistoricalMetrics</code>.</p>
     */
    inline GetMetricDataResult& WithMetricResults(const Aws::Vector<HistoricalMetricResult>& value) { SetMetricResults(value); return *this;}

    /**
     * <p>A list of <code>HistoricalMetricResult</code> objects, organized by
     * <code>Dimensions</code>, which is the ID of the resource specified in the
     * <code>Filters</code> used for the request. The metrics are combined with the
     * metrics included in <code>Collections</code>, which is a list of
     * <code>HisotricalMetricData</code> objects.</p> <p>If no <code>Grouping</code> is
     * specified in the request, <code>Collections</code> includes summary data for the
     * <code>HistoricalMetrics</code>.</p>
     */
    inline GetMetricDataResult& WithMetricResults(Aws::Vector<HistoricalMetricResult>&& value) { SetMetricResults(std::move(value)); return *this;}

    /**
     * <p>A list of <code>HistoricalMetricResult</code> objects, organized by
     * <code>Dimensions</code>, which is the ID of the resource specified in the
     * <code>Filters</code> used for the request. The metrics are combined with the
     * metrics included in <code>Collections</code>, which is a list of
     * <code>HisotricalMetricData</code> objects.</p> <p>If no <code>Grouping</code> is
     * specified in the request, <code>Collections</code> includes summary data for the
     * <code>HistoricalMetrics</code>.</p>
     */
    inline GetMetricDataResult& AddMetricResults(const HistoricalMetricResult& value) { m_metricResults.push_back(value); return *this; }

    /**
     * <p>A list of <code>HistoricalMetricResult</code> objects, organized by
     * <code>Dimensions</code>, which is the ID of the resource specified in the
     * <code>Filters</code> used for the request. The metrics are combined with the
     * metrics included in <code>Collections</code>, which is a list of
     * <code>HisotricalMetricData</code> objects.</p> <p>If no <code>Grouping</code> is
     * specified in the request, <code>Collections</code> includes summary data for the
     * <code>HistoricalMetrics</code>.</p>
     */
    inline GetMetricDataResult& AddMetricResults(HistoricalMetricResult&& value) { m_metricResults.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<HistoricalMetricResult> m_metricResults;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
