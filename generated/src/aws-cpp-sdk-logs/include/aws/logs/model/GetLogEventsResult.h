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
    AWS_CLOUDWATCHLOGS_API GetLogEventsResult() = default;
    AWS_CLOUDWATCHLOGS_API GetLogEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API GetLogEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The events.</p>
     */
    inline const Aws::Vector<OutputLogEvent>& GetEvents() const { return m_events; }
    template<typename EventsT = Aws::Vector<OutputLogEvent>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<OutputLogEvent>>
    GetLogEventsResult& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsT = OutputLogEvent>
    GetLogEventsResult& AddEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events.emplace_back(std::forward<EventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items in the forward direction. The token
     * expires after 24 hours. If you have reached the end of the stream, it returns
     * the same token you passed in.</p>
     */
    inline const Aws::String& GetNextForwardToken() const { return m_nextForwardToken; }
    template<typename NextForwardTokenT = Aws::String>
    void SetNextForwardToken(NextForwardTokenT&& value) { m_nextForwardTokenHasBeenSet = true; m_nextForwardToken = std::forward<NextForwardTokenT>(value); }
    template<typename NextForwardTokenT = Aws::String>
    GetLogEventsResult& WithNextForwardToken(NextForwardTokenT&& value) { SetNextForwardToken(std::forward<NextForwardTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items in the backward direction. The token
     * expires after 24 hours. This token is not null. If you have reached the end of
     * the stream, it returns the same token you passed in.</p>
     */
    inline const Aws::String& GetNextBackwardToken() const { return m_nextBackwardToken; }
    template<typename NextBackwardTokenT = Aws::String>
    void SetNextBackwardToken(NextBackwardTokenT&& value) { m_nextBackwardTokenHasBeenSet = true; m_nextBackwardToken = std::forward<NextBackwardTokenT>(value); }
    template<typename NextBackwardTokenT = Aws::String>
    GetLogEventsResult& WithNextBackwardToken(NextBackwardTokenT&& value) { SetNextBackwardToken(std::forward<NextBackwardTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLogEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OutputLogEvent> m_events;
    bool m_eventsHasBeenSet = false;

    Aws::String m_nextForwardToken;
    bool m_nextForwardTokenHasBeenSet = false;

    Aws::String m_nextBackwardToken;
    bool m_nextBackwardTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
