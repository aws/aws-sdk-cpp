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
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/CurrentMetricResult.h>
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
  class AWS_CONNECT_API GetCurrentMetricDataResult
  {
  public:
    GetCurrentMetricDataResult();
    GetCurrentMetricDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCurrentMetricDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetCurrentMetricDataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string returned in the response. Use the value returned in the response as
     * the value of the NextToken in a subsequent request to retrieve the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the NextToken must use the same request parameters
     * as the request that generated the token. </p>
     */
    inline GetCurrentMetricDataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string returned in the response. Use the value returned in the response as
     * the value of the NextToken in a subsequent request to retrieve the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the NextToken must use the same request parameters
     * as the request that generated the token. </p>
     */
    inline GetCurrentMetricDataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of <code>CurrentMetricResult</code> objects organized by
     * <code>Dimensions</code> combining with
     * <code>CurrentMetricDataCollections</code>.</p> <p> <code>Dimensions</code> is
     * the resourceId specified in the <code>Filters</code> of the request. </p> <p>
     * <code>Collections</code> is a list of <code>CurrentMetricData</code> objects
     * with corresponding values to the <code>CurrentMetrics</code> specified in the
     * request.</p> <p>If no <code>Grouping</code> is specified in the request,
     * <code>Collections</code> is a summary for the <code>CurrentMetric</code>
     * returned.</p>
     */
    inline const Aws::Vector<CurrentMetricResult>& GetMetricResults() const{ return m_metricResults; }

    /**
     * <p>A list of <code>CurrentMetricResult</code> objects organized by
     * <code>Dimensions</code> combining with
     * <code>CurrentMetricDataCollections</code>.</p> <p> <code>Dimensions</code> is
     * the resourceId specified in the <code>Filters</code> of the request. </p> <p>
     * <code>Collections</code> is a list of <code>CurrentMetricData</code> objects
     * with corresponding values to the <code>CurrentMetrics</code> specified in the
     * request.</p> <p>If no <code>Grouping</code> is specified in the request,
     * <code>Collections</code> is a summary for the <code>CurrentMetric</code>
     * returned.</p>
     */
    inline void SetMetricResults(const Aws::Vector<CurrentMetricResult>& value) { m_metricResults = value; }

    /**
     * <p>A list of <code>CurrentMetricResult</code> objects organized by
     * <code>Dimensions</code> combining with
     * <code>CurrentMetricDataCollections</code>.</p> <p> <code>Dimensions</code> is
     * the resourceId specified in the <code>Filters</code> of the request. </p> <p>
     * <code>Collections</code> is a list of <code>CurrentMetricData</code> objects
     * with corresponding values to the <code>CurrentMetrics</code> specified in the
     * request.</p> <p>If no <code>Grouping</code> is specified in the request,
     * <code>Collections</code> is a summary for the <code>CurrentMetric</code>
     * returned.</p>
     */
    inline void SetMetricResults(Aws::Vector<CurrentMetricResult>&& value) { m_metricResults = std::move(value); }

    /**
     * <p>A list of <code>CurrentMetricResult</code> objects organized by
     * <code>Dimensions</code> combining with
     * <code>CurrentMetricDataCollections</code>.</p> <p> <code>Dimensions</code> is
     * the resourceId specified in the <code>Filters</code> of the request. </p> <p>
     * <code>Collections</code> is a list of <code>CurrentMetricData</code> objects
     * with corresponding values to the <code>CurrentMetrics</code> specified in the
     * request.</p> <p>If no <code>Grouping</code> is specified in the request,
     * <code>Collections</code> is a summary for the <code>CurrentMetric</code>
     * returned.</p>
     */
    inline GetCurrentMetricDataResult& WithMetricResults(const Aws::Vector<CurrentMetricResult>& value) { SetMetricResults(value); return *this;}

    /**
     * <p>A list of <code>CurrentMetricResult</code> objects organized by
     * <code>Dimensions</code> combining with
     * <code>CurrentMetricDataCollections</code>.</p> <p> <code>Dimensions</code> is
     * the resourceId specified in the <code>Filters</code> of the request. </p> <p>
     * <code>Collections</code> is a list of <code>CurrentMetricData</code> objects
     * with corresponding values to the <code>CurrentMetrics</code> specified in the
     * request.</p> <p>If no <code>Grouping</code> is specified in the request,
     * <code>Collections</code> is a summary for the <code>CurrentMetric</code>
     * returned.</p>
     */
    inline GetCurrentMetricDataResult& WithMetricResults(Aws::Vector<CurrentMetricResult>&& value) { SetMetricResults(std::move(value)); return *this;}

    /**
     * <p>A list of <code>CurrentMetricResult</code> objects organized by
     * <code>Dimensions</code> combining with
     * <code>CurrentMetricDataCollections</code>.</p> <p> <code>Dimensions</code> is
     * the resourceId specified in the <code>Filters</code> of the request. </p> <p>
     * <code>Collections</code> is a list of <code>CurrentMetricData</code> objects
     * with corresponding values to the <code>CurrentMetrics</code> specified in the
     * request.</p> <p>If no <code>Grouping</code> is specified in the request,
     * <code>Collections</code> is a summary for the <code>CurrentMetric</code>
     * returned.</p>
     */
    inline GetCurrentMetricDataResult& AddMetricResults(const CurrentMetricResult& value) { m_metricResults.push_back(value); return *this; }

    /**
     * <p>A list of <code>CurrentMetricResult</code> objects organized by
     * <code>Dimensions</code> combining with
     * <code>CurrentMetricDataCollections</code>.</p> <p> <code>Dimensions</code> is
     * the resourceId specified in the <code>Filters</code> of the request. </p> <p>
     * <code>Collections</code> is a list of <code>CurrentMetricData</code> objects
     * with corresponding values to the <code>CurrentMetrics</code> specified in the
     * request.</p> <p>If no <code>Grouping</code> is specified in the request,
     * <code>Collections</code> is a summary for the <code>CurrentMetric</code>
     * returned.</p>
     */
    inline GetCurrentMetricDataResult& AddMetricResults(CurrentMetricResult&& value) { m_metricResults.push_back(std::move(value)); return *this; }


    /**
     * <p>The time at which <code>CurrentMetricData</code> was retrieved and cached for
     * pagination.</p>
     */
    inline const Aws::Utils::DateTime& GetDataSnapshotTime() const{ return m_dataSnapshotTime; }

    /**
     * <p>The time at which <code>CurrentMetricData</code> was retrieved and cached for
     * pagination.</p>
     */
    inline void SetDataSnapshotTime(const Aws::Utils::DateTime& value) { m_dataSnapshotTime = value; }

    /**
     * <p>The time at which <code>CurrentMetricData</code> was retrieved and cached for
     * pagination.</p>
     */
    inline void SetDataSnapshotTime(Aws::Utils::DateTime&& value) { m_dataSnapshotTime = std::move(value); }

    /**
     * <p>The time at which <code>CurrentMetricData</code> was retrieved and cached for
     * pagination.</p>
     */
    inline GetCurrentMetricDataResult& WithDataSnapshotTime(const Aws::Utils::DateTime& value) { SetDataSnapshotTime(value); return *this;}

    /**
     * <p>The time at which <code>CurrentMetricData</code> was retrieved and cached for
     * pagination.</p>
     */
    inline GetCurrentMetricDataResult& WithDataSnapshotTime(Aws::Utils::DateTime&& value) { SetDataSnapshotTime(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<CurrentMetricResult> m_metricResults;

    Aws::Utils::DateTime m_dataSnapshotTime;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
