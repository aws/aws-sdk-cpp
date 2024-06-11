﻿/**
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
    AWS_CODESTARNOTIFICATIONS_API ListEventTypesResult();
    AWS_CODESTARNOTIFICATIONS_API ListEventTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARNOTIFICATIONS_API ListEventTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about each event, including service name, resource type, event
     * ID, and event name.</p>
     */
    inline const Aws::Vector<EventTypeSummary>& GetEventTypes() const{ return m_eventTypes; }
    inline void SetEventTypes(const Aws::Vector<EventTypeSummary>& value) { m_eventTypes = value; }
    inline void SetEventTypes(Aws::Vector<EventTypeSummary>&& value) { m_eventTypes = std::move(value); }
    inline ListEventTypesResult& WithEventTypes(const Aws::Vector<EventTypeSummary>& value) { SetEventTypes(value); return *this;}
    inline ListEventTypesResult& WithEventTypes(Aws::Vector<EventTypeSummary>&& value) { SetEventTypes(std::move(value)); return *this;}
    inline ListEventTypesResult& AddEventTypes(const EventTypeSummary& value) { m_eventTypes.push_back(value); return *this; }
    inline ListEventTypesResult& AddEventTypes(EventTypeSummary&& value) { m_eventTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEventTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEventTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEventTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEventTypesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEventTypesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEventTypesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EventTypeSummary> m_eventTypes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
