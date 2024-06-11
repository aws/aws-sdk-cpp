﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/EventSource.h>
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
  class ListEventSourcesResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API ListEventSourcesResult();
    AWS_CLOUDWATCHEVENTS_API ListEventSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API ListEventSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of event sources.</p>
     */
    inline const Aws::Vector<EventSource>& GetEventSources() const{ return m_eventSources; }
    inline void SetEventSources(const Aws::Vector<EventSource>& value) { m_eventSources = value; }
    inline void SetEventSources(Aws::Vector<EventSource>&& value) { m_eventSources = std::move(value); }
    inline ListEventSourcesResult& WithEventSources(const Aws::Vector<EventSource>& value) { SetEventSources(value); return *this;}
    inline ListEventSourcesResult& WithEventSources(Aws::Vector<EventSource>&& value) { SetEventSources(std::move(value)); return *this;}
    inline ListEventSourcesResult& AddEventSources(const EventSource& value) { m_eventSources.push_back(value); return *this; }
    inline ListEventSourcesResult& AddEventSources(EventSource&& value) { m_eventSources.push_back(std::move(value)); return *this; }
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
    inline ListEventSourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEventSourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEventSourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEventSourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEventSourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEventSourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EventSource> m_eventSources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
