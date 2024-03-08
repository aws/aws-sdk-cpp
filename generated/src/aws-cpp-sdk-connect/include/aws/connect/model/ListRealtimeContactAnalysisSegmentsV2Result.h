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
    AWS_CONNECT_API ListRealtimeContactAnalysisSegmentsV2Result();
    AWS_CONNECT_API ListRealtimeContactAnalysisSegmentsV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListRealtimeContactAnalysisSegmentsV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The channel of the contact. <code>Voice</code> will not be returned. </p>
     */
    inline const RealTimeContactAnalysisSupportedChannel& GetChannel() const{ return m_channel; }

    /**
     * <p>The channel of the contact. <code>Voice</code> will not be returned. </p>
     */
    inline void SetChannel(const RealTimeContactAnalysisSupportedChannel& value) { m_channel = value; }

    /**
     * <p>The channel of the contact. <code>Voice</code> will not be returned. </p>
     */
    inline void SetChannel(RealTimeContactAnalysisSupportedChannel&& value) { m_channel = std::move(value); }

    /**
     * <p>The channel of the contact. <code>Voice</code> will not be returned. </p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Result& WithChannel(const RealTimeContactAnalysisSupportedChannel& value) { SetChannel(value); return *this;}

    /**
     * <p>The channel of the contact. <code>Voice</code> will not be returned. </p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Result& WithChannel(RealTimeContactAnalysisSupportedChannel&& value) { SetChannel(std::move(value)); return *this;}


    /**
     * <p>Status of real-time contact analysis.</p>
     */
    inline const RealTimeContactAnalysisStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of real-time contact analysis.</p>
     */
    inline void SetStatus(const RealTimeContactAnalysisStatus& value) { m_status = value; }

    /**
     * <p>Status of real-time contact analysis.</p>
     */
    inline void SetStatus(RealTimeContactAnalysisStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Status of real-time contact analysis.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Result& WithStatus(const RealTimeContactAnalysisStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of real-time contact analysis.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Result& WithStatus(RealTimeContactAnalysisStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline ListRealtimeContactAnalysisSegmentsV2Result& WithSegments(const Aws::Vector<RealtimeContactAnalysisSegment>& value) { SetSegments(value); return *this;}

    /**
     * <p>An analyzed transcript or category.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Result& WithSegments(Aws::Vector<RealtimeContactAnalysisSegment>&& value) { SetSegments(std::move(value)); return *this;}

    /**
     * <p>An analyzed transcript or category.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Result& AddSegments(const RealtimeContactAnalysisSegment& value) { m_segments.push_back(value); return *this; }

    /**
     * <p>An analyzed transcript or category.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Result& AddSegments(RealtimeContactAnalysisSegment&& value) { m_segments.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Result& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Result& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListRealtimeContactAnalysisSegmentsV2Result& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRealtimeContactAnalysisSegmentsV2Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRealtimeContactAnalysisSegmentsV2Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRealtimeContactAnalysisSegmentsV2Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RealTimeContactAnalysisSupportedChannel m_channel;

    RealTimeContactAnalysisStatus m_status;

    Aws::Vector<RealtimeContactAnalysisSegment> m_segments;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
