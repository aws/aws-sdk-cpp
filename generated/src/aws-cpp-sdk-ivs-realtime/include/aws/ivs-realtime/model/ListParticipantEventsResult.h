/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/Event.h>
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
namespace ivsrealtime
{
namespace Model
{
  class ListParticipantEventsResult
  {
  public:
    AWS_IVSREALTIME_API ListParticipantEventsResult();
    AWS_IVSREALTIME_API ListParticipantEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API ListParticipantEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of the matching events.</p>
     */
    inline const Aws::Vector<Event>& GetEvents() const{ return m_events; }

    /**
     * <p>List of the matching events.</p>
     */
    inline void SetEvents(const Aws::Vector<Event>& value) { m_events = value; }

    /**
     * <p>List of the matching events.</p>
     */
    inline void SetEvents(Aws::Vector<Event>&& value) { m_events = std::move(value); }

    /**
     * <p>List of the matching events.</p>
     */
    inline ListParticipantEventsResult& WithEvents(const Aws::Vector<Event>& value) { SetEvents(value); return *this;}

    /**
     * <p>List of the matching events.</p>
     */
    inline ListParticipantEventsResult& WithEvents(Aws::Vector<Event>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>List of the matching events.</p>
     */
    inline ListParticipantEventsResult& AddEvents(const Event& value) { m_events.push_back(value); return *this; }

    /**
     * <p>List of the matching events.</p>
     */
    inline ListParticipantEventsResult& AddEvents(Event&& value) { m_events.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are more events than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more events than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more events than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more events than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more events than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set. </p>
     */
    inline ListParticipantEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more events than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set. </p>
     */
    inline ListParticipantEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more events than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set. </p>
     */
    inline ListParticipantEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListParticipantEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListParticipantEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListParticipantEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Event> m_events;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
