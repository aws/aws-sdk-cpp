﻿/**
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
    AWS_CLOUDWATCHEVENTS_API ListEventBusesResult();
    AWS_CLOUDWATCHEVENTS_API ListEventBusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API ListEventBusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
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
} // namespace CloudWatchEvents
} // namespace Aws
