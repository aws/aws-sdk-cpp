/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/OutputLogEvent.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class GetLogEventsResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API GetLogEventsResult();
    AWS_CLOUDWATCHLOGS_API GetLogEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API GetLogEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The events.</p>
     */
    inline const Aws::Vector<OutputLogEvent>& GetEvents() const{ return m_events; }

    /**
     * <p>The events.</p>
     */
    inline void SetEvents(const Aws::Vector<OutputLogEvent>& value) { m_events = value; }

    /**
     * <p>The events.</p>
     */
    inline void SetEvents(Aws::Vector<OutputLogEvent>&& value) { m_events = std::move(value); }

    /**
     * <p>The events.</p>
     */
    inline GetLogEventsResult& WithEvents(const Aws::Vector<OutputLogEvent>& value) { SetEvents(value); return *this;}

    /**
     * <p>The events.</p>
     */
    inline GetLogEventsResult& WithEvents(Aws::Vector<OutputLogEvent>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>The events.</p>
     */
    inline GetLogEventsResult& AddEvents(const OutputLogEvent& value) { m_events.push_back(value); return *this; }

    /**
     * <p>The events.</p>
     */
    inline GetLogEventsResult& AddEvents(OutputLogEvent&& value) { m_events.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items in the forward direction. The token
     * expires after 24 hours. If you have reached the end of the stream, it returns
     * the same token you passed in.</p>
     */
    inline const Aws::String& GetNextForwardToken() const{ return m_nextForwardToken; }

    /**
     * <p>The token for the next set of items in the forward direction. The token
     * expires after 24 hours. If you have reached the end of the stream, it returns
     * the same token you passed in.</p>
     */
    inline void SetNextForwardToken(const Aws::String& value) { m_nextForwardToken = value; }

    /**
     * <p>The token for the next set of items in the forward direction. The token
     * expires after 24 hours. If you have reached the end of the stream, it returns
     * the same token you passed in.</p>
     */
    inline void SetNextForwardToken(Aws::String&& value) { m_nextForwardToken = std::move(value); }

    /**
     * <p>The token for the next set of items in the forward direction. The token
     * expires after 24 hours. If you have reached the end of the stream, it returns
     * the same token you passed in.</p>
     */
    inline void SetNextForwardToken(const char* value) { m_nextForwardToken.assign(value); }

    /**
     * <p>The token for the next set of items in the forward direction. The token
     * expires after 24 hours. If you have reached the end of the stream, it returns
     * the same token you passed in.</p>
     */
    inline GetLogEventsResult& WithNextForwardToken(const Aws::String& value) { SetNextForwardToken(value); return *this;}

    /**
     * <p>The token for the next set of items in the forward direction. The token
     * expires after 24 hours. If you have reached the end of the stream, it returns
     * the same token you passed in.</p>
     */
    inline GetLogEventsResult& WithNextForwardToken(Aws::String&& value) { SetNextForwardToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items in the forward direction. The token
     * expires after 24 hours. If you have reached the end of the stream, it returns
     * the same token you passed in.</p>
     */
    inline GetLogEventsResult& WithNextForwardToken(const char* value) { SetNextForwardToken(value); return *this;}


    /**
     * <p>The token for the next set of items in the backward direction. The token
     * expires after 24 hours. This token is not null. If you have reached the end of
     * the stream, it returns the same token you passed in.</p>
     */
    inline const Aws::String& GetNextBackwardToken() const{ return m_nextBackwardToken; }

    /**
     * <p>The token for the next set of items in the backward direction. The token
     * expires after 24 hours. This token is not null. If you have reached the end of
     * the stream, it returns the same token you passed in.</p>
     */
    inline void SetNextBackwardToken(const Aws::String& value) { m_nextBackwardToken = value; }

    /**
     * <p>The token for the next set of items in the backward direction. The token
     * expires after 24 hours. This token is not null. If you have reached the end of
     * the stream, it returns the same token you passed in.</p>
     */
    inline void SetNextBackwardToken(Aws::String&& value) { m_nextBackwardToken = std::move(value); }

    /**
     * <p>The token for the next set of items in the backward direction. The token
     * expires after 24 hours. This token is not null. If you have reached the end of
     * the stream, it returns the same token you passed in.</p>
     */
    inline void SetNextBackwardToken(const char* value) { m_nextBackwardToken.assign(value); }

    /**
     * <p>The token for the next set of items in the backward direction. The token
     * expires after 24 hours. This token is not null. If you have reached the end of
     * the stream, it returns the same token you passed in.</p>
     */
    inline GetLogEventsResult& WithNextBackwardToken(const Aws::String& value) { SetNextBackwardToken(value); return *this;}

    /**
     * <p>The token for the next set of items in the backward direction. The token
     * expires after 24 hours. This token is not null. If you have reached the end of
     * the stream, it returns the same token you passed in.</p>
     */
    inline GetLogEventsResult& WithNextBackwardToken(Aws::String&& value) { SetNextBackwardToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items in the backward direction. The token
     * expires after 24 hours. This token is not null. If you have reached the end of
     * the stream, it returns the same token you passed in.</p>
     */
    inline GetLogEventsResult& WithNextBackwardToken(const char* value) { SetNextBackwardToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLogEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLogEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLogEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<OutputLogEvent> m_events;

    Aws::String m_nextForwardToken;

    Aws::String m_nextBackwardToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
