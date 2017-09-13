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
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/TimeWindow.h>
#include <aws/waf/model/SampledHTTPRequest.h>
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
namespace WAF
{
namespace Model
{
  class AWS_WAF_API GetSampledRequestsResult
  {
  public:
    GetSampledRequestsResult();
    GetSampledRequestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSampledRequestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A complex type that contains detailed information about each of the requests
     * in the sample.</p>
     */
    inline const Aws::Vector<SampledHTTPRequest>& GetSampledRequests() const{ return m_sampledRequests; }

    /**
     * <p>A complex type that contains detailed information about each of the requests
     * in the sample.</p>
     */
    inline void SetSampledRequests(const Aws::Vector<SampledHTTPRequest>& value) { m_sampledRequests = value; }

    /**
     * <p>A complex type that contains detailed information about each of the requests
     * in the sample.</p>
     */
    inline void SetSampledRequests(Aws::Vector<SampledHTTPRequest>&& value) { m_sampledRequests = std::move(value); }

    /**
     * <p>A complex type that contains detailed information about each of the requests
     * in the sample.</p>
     */
    inline GetSampledRequestsResult& WithSampledRequests(const Aws::Vector<SampledHTTPRequest>& value) { SetSampledRequests(value); return *this;}

    /**
     * <p>A complex type that contains detailed information about each of the requests
     * in the sample.</p>
     */
    inline GetSampledRequestsResult& WithSampledRequests(Aws::Vector<SampledHTTPRequest>&& value) { SetSampledRequests(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains detailed information about each of the requests
     * in the sample.</p>
     */
    inline GetSampledRequestsResult& AddSampledRequests(const SampledHTTPRequest& value) { m_sampledRequests.push_back(value); return *this; }

    /**
     * <p>A complex type that contains detailed information about each of the requests
     * in the sample.</p>
     */
    inline GetSampledRequestsResult& AddSampledRequests(SampledHTTPRequest&& value) { m_sampledRequests.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of requests from which <code>GetSampledRequests</code> got a
     * sample of <code>MaxItems</code> requests. If <code>PopulationSize</code> is less
     * than <code>MaxItems</code>, the sample includes every request that your AWS
     * resource received during the specified time range.</p>
     */
    inline long long GetPopulationSize() const{ return m_populationSize; }

    /**
     * <p>The total number of requests from which <code>GetSampledRequests</code> got a
     * sample of <code>MaxItems</code> requests. If <code>PopulationSize</code> is less
     * than <code>MaxItems</code>, the sample includes every request that your AWS
     * resource received during the specified time range.</p>
     */
    inline void SetPopulationSize(long long value) { m_populationSize = value; }

    /**
     * <p>The total number of requests from which <code>GetSampledRequests</code> got a
     * sample of <code>MaxItems</code> requests. If <code>PopulationSize</code> is less
     * than <code>MaxItems</code>, the sample includes every request that your AWS
     * resource received during the specified time range.</p>
     */
    inline GetSampledRequestsResult& WithPopulationSize(long long value) { SetPopulationSize(value); return *this;}


    /**
     * <p>Usually, <code>TimeWindow</code> is the time range that you specified in the
     * <code>GetSampledRequests</code> request. However, if your AWS resource received
     * more than 5,000 requests during the time range that you specified in the
     * request, <code>GetSampledRequests</code> returns the time range for the first
     * 5,000 requests.</p>
     */
    inline const TimeWindow& GetTimeWindow() const{ return m_timeWindow; }

    /**
     * <p>Usually, <code>TimeWindow</code> is the time range that you specified in the
     * <code>GetSampledRequests</code> request. However, if your AWS resource received
     * more than 5,000 requests during the time range that you specified in the
     * request, <code>GetSampledRequests</code> returns the time range for the first
     * 5,000 requests.</p>
     */
    inline void SetTimeWindow(const TimeWindow& value) { m_timeWindow = value; }

    /**
     * <p>Usually, <code>TimeWindow</code> is the time range that you specified in the
     * <code>GetSampledRequests</code> request. However, if your AWS resource received
     * more than 5,000 requests during the time range that you specified in the
     * request, <code>GetSampledRequests</code> returns the time range for the first
     * 5,000 requests.</p>
     */
    inline void SetTimeWindow(TimeWindow&& value) { m_timeWindow = std::move(value); }

    /**
     * <p>Usually, <code>TimeWindow</code> is the time range that you specified in the
     * <code>GetSampledRequests</code> request. However, if your AWS resource received
     * more than 5,000 requests during the time range that you specified in the
     * request, <code>GetSampledRequests</code> returns the time range for the first
     * 5,000 requests.</p>
     */
    inline GetSampledRequestsResult& WithTimeWindow(const TimeWindow& value) { SetTimeWindow(value); return *this;}

    /**
     * <p>Usually, <code>TimeWindow</code> is the time range that you specified in the
     * <code>GetSampledRequests</code> request. However, if your AWS resource received
     * more than 5,000 requests during the time range that you specified in the
     * request, <code>GetSampledRequests</code> returns the time range for the first
     * 5,000 requests.</p>
     */
    inline GetSampledRequestsResult& WithTimeWindow(TimeWindow&& value) { SetTimeWindow(std::move(value)); return *this;}

  private:

    Aws::Vector<SampledHTTPRequest> m_sampledRequests;

    long long m_populationSize;

    TimeWindow m_timeWindow;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
