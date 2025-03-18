/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/RealTimeContactAnalysisSupportedChannel.h>
#include <aws/connect/model/RealTimeContactAnalysisStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/RealtimeContactAnalysisSegment.h>
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
  class ListRealtimeContactAnalysisSegmentsV2Result
  {
  public:
    AWS_CONNECT_API ListRealtimeContactAnalysisSegmentsV2Result() = default;
    AWS_CONNECT_API ListRealtimeContactAnalysisSegmentsV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListRealtimeContactAnalysisSegmentsV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The channel of the contact. </p>  <p>Only <code>CHAT</code> is
     * supported. This API does not support <code>VOICE</code>. If you attempt to use
     * it for the VOICE channel, an <code>InvalidRequestException</code> error
     * occurs.</p> 
     */
    inline RealTimeContactAnalysisSupportedChannel GetChannel() const { return m_channel; }
    inline void SetChannel(RealTimeContactAnalysisSupportedChannel value) { m_channelHasBeenSet = true; m_channel = value; }
    inline ListRealtimeContactAnalysisSegmentsV2Result& WithChannel(RealTimeContactAnalysisSupportedChannel value) { SetChannel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of real-time contact analysis.</p>
     */
    inline RealTimeContactAnalysisStatus GetStatus() const { return m_status; }
    inline void SetStatus(RealTimeContactAnalysisStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListRealtimeContactAnalysisSegmentsV2Result& WithStatus(RealTimeContactAnalysisStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An analyzed transcript or category.</p>
     */
    inline const Aws::Vector<RealtimeContactAnalysisSegment>& GetSegments() const { return m_segments; }
    template<typename SegmentsT = Aws::Vector<RealtimeContactAnalysisSegment>>
    void SetSegments(SegmentsT&& value) { m_segmentsHasBeenSet = true; m_segments = std::forward<SegmentsT>(value); }
    template<typename SegmentsT = Aws::Vector<RealtimeContactAnalysisSegment>>
    ListRealtimeContactAnalysisSegmentsV2Result& WithSegments(SegmentsT&& value) { SetSegments(std::forward<SegmentsT>(value)); return *this;}
    template<typename SegmentsT = RealtimeContactAnalysisSegment>
    ListRealtimeContactAnalysisSegmentsV2Result& AddSegments(SegmentsT&& value) { m_segmentsHasBeenSet = true; m_segments.emplace_back(std::forward<SegmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRealtimeContactAnalysisSegmentsV2Result& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRealtimeContactAnalysisSegmentsV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RealTimeContactAnalysisSupportedChannel m_channel{RealTimeContactAnalysisSupportedChannel::NOT_SET};
    bool m_channelHasBeenSet = false;

    RealTimeContactAnalysisStatus m_status{RealTimeContactAnalysisStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<RealtimeContactAnalysisSegment> m_segments;
    bool m_segmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
