/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect-contact-lens/model/RealtimeContactAnalysisSegment.h>
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
namespace ConnectContactLens
{
namespace Model
{
  class ListRealtimeContactAnalysisSegmentsResult
  {
  public:
    AWS_CONNECTCONTACTLENS_API ListRealtimeContactAnalysisSegmentsResult();
    AWS_CONNECTCONTACTLENS_API ListRealtimeContactAnalysisSegmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCONTACTLENS_API ListRealtimeContactAnalysisSegmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An analyzed transcript or category.</p>
     */
    inline const Aws::Vector<RealtimeContactAnalysisSegment>& GetSegments() const{ return m_segments; }

    /**
     * <p>An analyzed transcript or category.</p>
     */
    inline void SetSegments(const Aws::Vector<RealtimeContactAnalysisSegment>& value) { m_segments = value; }

    /**
     * <p>An analyzed transcript or category.</p>
     */
    inline void SetSegments(Aws::Vector<RealtimeContactAnalysisSegment>&& value) { m_segments = std::move(value); }

    /**
     * <p>An analyzed transcript or category.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsResult& WithSegments(const Aws::Vector<RealtimeContactAnalysisSegment>& value) { SetSegments(value); return *this;}

    /**
     * <p>An analyzed transcript or category.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsResult& WithSegments(Aws::Vector<RealtimeContactAnalysisSegment>&& value) { SetSegments(std::move(value)); return *this;}

    /**
     * <p>An analyzed transcript or category.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsResult& AddSegments(const RealtimeContactAnalysisSegment& value) { m_segments.push_back(value); return *this; }

    /**
     * <p>An analyzed transcript or category.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsResult& AddSegments(RealtimeContactAnalysisSegment&& value) { m_segments.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results. If response includes <code>nextToken</code> there are two possible
     * scenarios:</p> <ul> <li> <p>There are more segments so another call is required
     * to get them.</p> </li> <li> <p>There are no more segments at this time, but more
     * may be available later (real-time analysis is in progress) so the client should
     * call the operation again to get new segments.</p> </li> </ul> <p>If response
     * does not include <code>nextToken</code>, the analysis is completed (successfully
     * or failed) and there are no more segments to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results. If response includes <code>nextToken</code> there are two possible
     * scenarios:</p> <ul> <li> <p>There are more segments so another call is required
     * to get them.</p> </li> <li> <p>There are no more segments at this time, but more
     * may be available later (real-time analysis is in progress) so the client should
     * call the operation again to get new segments.</p> </li> </ul> <p>If response
     * does not include <code>nextToken</code>, the analysis is completed (successfully
     * or failed) and there are no more segments to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results. If response includes <code>nextToken</code> there are two possible
     * scenarios:</p> <ul> <li> <p>There are more segments so another call is required
     * to get them.</p> </li> <li> <p>There are no more segments at this time, but more
     * may be available later (real-time analysis is in progress) so the client should
     * call the operation again to get new segments.</p> </li> </ul> <p>If response
     * does not include <code>nextToken</code>, the analysis is completed (successfully
     * or failed) and there are no more segments to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results. If response includes <code>nextToken</code> there are two possible
     * scenarios:</p> <ul> <li> <p>There are more segments so another call is required
     * to get them.</p> </li> <li> <p>There are no more segments at this time, but more
     * may be available later (real-time analysis is in progress) so the client should
     * call the operation again to get new segments.</p> </li> </ul> <p>If response
     * does not include <code>nextToken</code>, the analysis is completed (successfully
     * or failed) and there are no more segments to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results. If response includes <code>nextToken</code> there are two possible
     * scenarios:</p> <ul> <li> <p>There are more segments so another call is required
     * to get them.</p> </li> <li> <p>There are no more segments at this time, but more
     * may be available later (real-time analysis is in progress) so the client should
     * call the operation again to get new segments.</p> </li> </ul> <p>If response
     * does not include <code>nextToken</code>, the analysis is completed (successfully
     * or failed) and there are no more segments to retrieve.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results. If response includes <code>nextToken</code> there are two possible
     * scenarios:</p> <ul> <li> <p>There are more segments so another call is required
     * to get them.</p> </li> <li> <p>There are no more segments at this time, but more
     * may be available later (real-time analysis is in progress) so the client should
     * call the operation again to get new segments.</p> </li> </ul> <p>If response
     * does not include <code>nextToken</code>, the analysis is completed (successfully
     * or failed) and there are no more segments to retrieve.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results. If response includes <code>nextToken</code> there are two possible
     * scenarios:</p> <ul> <li> <p>There are more segments so another call is required
     * to get them.</p> </li> <li> <p>There are no more segments at this time, but more
     * may be available later (real-time analysis is in progress) so the client should
     * call the operation again to get new segments.</p> </li> </ul> <p>If response
     * does not include <code>nextToken</code>, the analysis is completed (successfully
     * or failed) and there are no more segments to retrieve.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RealtimeContactAnalysisSegment> m_segments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
