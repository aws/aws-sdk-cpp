/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/EventBus.h>
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
  class ListEventBusesResult
  {
  public:
    AWS_EVENTBRIDGE_API ListEventBusesResult();
    AWS_EVENTBRIDGE_API ListEventBusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API ListEventBusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This list of event buses.</p>
     */
    inline const Aws::Vector<EventBus>& GetEventBuses() const{ return m_eventBuses; }
    inline void SetEventBuses(const Aws::Vector<EventBus>& value) { m_eventBuses = value; }
    inline void SetEventBuses(Aws::Vector<EventBus>&& value) { m_eventBuses = std::move(value); }
    inline ListEventBusesResult& WithEventBuses(const Aws::Vector<EventBus>& value) { SetEventBuses(value); return *this;}
    inline ListEventBusesResult& WithEventBuses(Aws::Vector<EventBus>&& value) { SetEventBuses(std::move(value)); return *this;}
    inline ListEventBusesResult& AddEventBuses(const EventBus& value) { m_eventBuses.push_back(value); return *this; }
    inline ListEventBusesResult& AddEventBuses(EventBus&& value) { m_eventBuses.push_back(std::move(value)); return *this; }
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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEventBusesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEventBusesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEventBusesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEventBusesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEventBusesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEventBusesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EventBus> m_eventBuses;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
