/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/EventSource.h>
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
namespace EventBridge
{
namespace Model
{
  class ListEventSourcesResult
  {
  public:
    AWS_EVENTBRIDGE_API ListEventSourcesResult() = default;
    AWS_EVENTBRIDGE_API ListEventSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API ListEventSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of event sources.</p>
     */
    inline const Aws::Vector<EventSource>& GetEventSources() const { return m_eventSources; }
    template<typename EventSourcesT = Aws::Vector<EventSource>>
    void SetEventSources(EventSourcesT&& value) { m_eventSourcesHasBeenSet = true; m_eventSources = std::forward<EventSourcesT>(value); }
    template<typename EventSourcesT = Aws::Vector<EventSource>>
    ListEventSourcesResult& WithEventSources(EventSourcesT&& value) { SetEventSources(std::forward<EventSourcesT>(value)); return *this;}
    template<typename EventSourcesT = EventSource>
    ListEventSourcesResult& AddEventSources(EventSourcesT&& value) { m_eventSourcesHasBeenSet = true; m_eventSources.emplace_back(std::forward<EventSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token indicating there are more results available. If there are no more
     * results, no token is included in the response.</p> <p>The value of
     * <code>nextToken</code> is a unique pagination token for each page. To retrieve
     * the next page of results, make the call again using the returned token. Keep all
     * other arguments unchanged.</p> <p> Using an expired pagination token results in
     * an <code>HTTP 400 InvalidToken</code> error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEventSourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEventSourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventSource> m_eventSources;
    bool m_eventSourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
