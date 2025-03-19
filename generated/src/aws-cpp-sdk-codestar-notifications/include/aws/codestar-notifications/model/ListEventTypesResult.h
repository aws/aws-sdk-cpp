/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-notifications/model/EventTypeSummary.h>
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
namespace CodeStarNotifications
{
namespace Model
{
  class ListEventTypesResult
  {
  public:
    AWS_CODESTARNOTIFICATIONS_API ListEventTypesResult() = default;
    AWS_CODESTARNOTIFICATIONS_API ListEventTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARNOTIFICATIONS_API ListEventTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about each event, including service name, resource type, event
     * ID, and event name.</p>
     */
    inline const Aws::Vector<EventTypeSummary>& GetEventTypes() const { return m_eventTypes; }
    template<typename EventTypesT = Aws::Vector<EventTypeSummary>>
    void SetEventTypes(EventTypesT&& value) { m_eventTypesHasBeenSet = true; m_eventTypes = std::forward<EventTypesT>(value); }
    template<typename EventTypesT = Aws::Vector<EventTypeSummary>>
    ListEventTypesResult& WithEventTypes(EventTypesT&& value) { SetEventTypes(std::forward<EventTypesT>(value)); return *this;}
    template<typename EventTypesT = EventTypeSummary>
    ListEventTypesResult& AddEventTypes(EventTypesT&& value) { m_eventTypesHasBeenSet = true; m_eventTypes.emplace_back(std::forward<EventTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEventTypesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEventTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventTypeSummary> m_eventTypes;
    bool m_eventTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
