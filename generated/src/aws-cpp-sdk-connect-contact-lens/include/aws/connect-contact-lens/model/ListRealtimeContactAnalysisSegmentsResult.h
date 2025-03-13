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
    AWS_CONNECTCONTACTLENS_API ListRealtimeContactAnalysisSegmentsResult() = default;
    AWS_CONNECTCONTACTLENS_API ListRealtimeContactAnalysisSegmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCONTACTLENS_API ListRealtimeContactAnalysisSegmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An analyzed transcript or category.</p>
     */
    inline const Aws::Vector<RealtimeContactAnalysisSegment>& GetSegments() const { return m_segments; }
    template<typename SegmentsT = Aws::Vector<RealtimeContactAnalysisSegment>>
    void SetSegments(SegmentsT&& value) { m_segmentsHasBeenSet = true; m_segments = std::forward<SegmentsT>(value); }
    template<typename SegmentsT = Aws::Vector<RealtimeContactAnalysisSegment>>
    ListRealtimeContactAnalysisSegmentsResult& WithSegments(SegmentsT&& value) { SetSegments(std::forward<SegmentsT>(value)); return *this;}
    template<typename SegmentsT = RealtimeContactAnalysisSegment>
    ListRealtimeContactAnalysisSegmentsResult& AddSegments(SegmentsT&& value) { m_segmentsHasBeenSet = true; m_segments.emplace_back(std::forward<SegmentsT>(value)); return *this; }
    ///@}

    ///@{
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
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRealtimeContactAnalysisSegmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRealtimeContactAnalysisSegmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RealtimeContactAnalysisSegment> m_segments;
    bool m_segmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
