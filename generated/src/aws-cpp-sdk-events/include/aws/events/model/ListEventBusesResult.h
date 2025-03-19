/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/EventBus.h>
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
namespace CloudWatchEvents
{
namespace Model
{
  class ListEventBusesResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API ListEventBusesResult() = default;
    AWS_CLOUDWATCHEVENTS_API ListEventBusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API ListEventBusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This list of event buses.</p>
     */
    inline const Aws::Vector<EventBus>& GetEventBuses() const { return m_eventBuses; }
    template<typename EventBusesT = Aws::Vector<EventBus>>
    void SetEventBuses(EventBusesT&& value) { m_eventBusesHasBeenSet = true; m_eventBuses = std::forward<EventBusesT>(value); }
    template<typename EventBusesT = Aws::Vector<EventBus>>
    ListEventBusesResult& WithEventBuses(EventBusesT&& value) { SetEventBuses(std::forward<EventBusesT>(value)); return *this;}
    template<typename EventBusesT = EventBus>
    ListEventBusesResult& AddEventBuses(EventBusesT&& value) { m_eventBusesHasBeenSet = true; m_eventBuses.emplace_back(std::forward<EventBusesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEventBusesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEventBusesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventBus> m_eventBuses;
    bool m_eventBusesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
