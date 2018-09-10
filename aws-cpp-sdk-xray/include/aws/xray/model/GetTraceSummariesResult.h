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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/TraceSummary.h>
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
namespace XRay
{
namespace Model
{
  class AWS_XRAY_API GetTraceSummariesResult
  {
  public:
    GetTraceSummariesResult();
    GetTraceSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTraceSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Trace IDs and metadata for traces that were found in the specified time
     * frame.</p>
     */
    inline const Aws::Vector<TraceSummary>& GetTraceSummaries() const{ return m_traceSummaries; }

    /**
     * <p>Trace IDs and metadata for traces that were found in the specified time
     * frame.</p>
     */
    inline void SetTraceSummaries(const Aws::Vector<TraceSummary>& value) { m_traceSummaries = value; }

    /**
     * <p>Trace IDs and metadata for traces that were found in the specified time
     * frame.</p>
     */
    inline void SetTraceSummaries(Aws::Vector<TraceSummary>&& value) { m_traceSummaries = std::move(value); }

    /**
     * <p>Trace IDs and metadata for traces that were found in the specified time
     * frame.</p>
     */
    inline GetTraceSummariesResult& WithTraceSummaries(const Aws::Vector<TraceSummary>& value) { SetTraceSummaries(value); return *this;}

    /**
     * <p>Trace IDs and metadata for traces that were found in the specified time
     * frame.</p>
     */
    inline GetTraceSummariesResult& WithTraceSummaries(Aws::Vector<TraceSummary>&& value) { SetTraceSummaries(std::move(value)); return *this;}

    /**
     * <p>Trace IDs and metadata for traces that were found in the specified time
     * frame.</p>
     */
    inline GetTraceSummariesResult& AddTraceSummaries(const TraceSummary& value) { m_traceSummaries.push_back(value); return *this; }

    /**
     * <p>Trace IDs and metadata for traces that were found in the specified time
     * frame.</p>
     */
    inline GetTraceSummariesResult& AddTraceSummaries(TraceSummary&& value) { m_traceSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The start time of this page of results.</p>
     */
    inline const Aws::Utils::DateTime& GetApproximateTime() const{ return m_approximateTime; }

    /**
     * <p>The start time of this page of results.</p>
     */
    inline void SetApproximateTime(const Aws::Utils::DateTime& value) { m_approximateTime = value; }

    /**
     * <p>The start time of this page of results.</p>
     */
    inline void SetApproximateTime(Aws::Utils::DateTime&& value) { m_approximateTime = std::move(value); }

    /**
     * <p>The start time of this page of results.</p>
     */
    inline GetTraceSummariesResult& WithApproximateTime(const Aws::Utils::DateTime& value) { SetApproximateTime(value); return *this;}

    /**
     * <p>The start time of this page of results.</p>
     */
    inline GetTraceSummariesResult& WithApproximateTime(Aws::Utils::DateTime&& value) { SetApproximateTime(std::move(value)); return *this;}


    /**
     * <p>The total number of traces processed, including traces that did not match the
     * specified filter expression.</p>
     */
    inline long long GetTracesProcessedCount() const{ return m_tracesProcessedCount; }

    /**
     * <p>The total number of traces processed, including traces that did not match the
     * specified filter expression.</p>
     */
    inline void SetTracesProcessedCount(long long value) { m_tracesProcessedCount = value; }

    /**
     * <p>The total number of traces processed, including traces that did not match the
     * specified filter expression.</p>
     */
    inline GetTraceSummariesResult& WithTracesProcessedCount(long long value) { SetTracesProcessedCount(value); return *this;}


    /**
     * <p>If the requested time frame contained more than one page of results, you can
     * use this token to retrieve the next page. The first page contains the most most
     * recent results, closest to the end of the time frame.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the requested time frame contained more than one page of results, you can
     * use this token to retrieve the next page. The first page contains the most most
     * recent results, closest to the end of the time frame.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the requested time frame contained more than one page of results, you can
     * use this token to retrieve the next page. The first page contains the most most
     * recent results, closest to the end of the time frame.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the requested time frame contained more than one page of results, you can
     * use this token to retrieve the next page. The first page contains the most most
     * recent results, closest to the end of the time frame.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the requested time frame contained more than one page of results, you can
     * use this token to retrieve the next page. The first page contains the most most
     * recent results, closest to the end of the time frame.</p>
     */
    inline GetTraceSummariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the requested time frame contained more than one page of results, you can
     * use this token to retrieve the next page. The first page contains the most most
     * recent results, closest to the end of the time frame.</p>
     */
    inline GetTraceSummariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the requested time frame contained more than one page of results, you can
     * use this token to retrieve the next page. The first page contains the most most
     * recent results, closest to the end of the time frame.</p>
     */
    inline GetTraceSummariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TraceSummary> m_traceSummaries;

    Aws::Utils::DateTime m_approximateTime;

    long long m_tracesProcessedCount;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
