﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/LogEvent.h>
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
namespace Lightsail
{
namespace Model
{
  class GetRelationalDatabaseLogEventsResult
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseLogEventsResult();
    AWS_LIGHTSAIL_API GetRelationalDatabaseLogEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRelationalDatabaseLogEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object describing the result of your get relational database log events
     * request.</p>
     */
    inline const Aws::Vector<LogEvent>& GetResourceLogEvents() const{ return m_resourceLogEvents; }
    inline void SetResourceLogEvents(const Aws::Vector<LogEvent>& value) { m_resourceLogEvents = value; }
    inline void SetResourceLogEvents(Aws::Vector<LogEvent>&& value) { m_resourceLogEvents = std::move(value); }
    inline GetRelationalDatabaseLogEventsResult& WithResourceLogEvents(const Aws::Vector<LogEvent>& value) { SetResourceLogEvents(value); return *this;}
    inline GetRelationalDatabaseLogEventsResult& WithResourceLogEvents(Aws::Vector<LogEvent>&& value) { SetResourceLogEvents(std::move(value)); return *this;}
    inline GetRelationalDatabaseLogEventsResult& AddResourceLogEvents(const LogEvent& value) { m_resourceLogEvents.push_back(value); return *this; }
    inline GetRelationalDatabaseLogEventsResult& AddResourceLogEvents(LogEvent&& value) { m_resourceLogEvents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used for advancing to the previous page of results from your get
     * relational database log events request.</p>
     */
    inline const Aws::String& GetNextBackwardToken() const{ return m_nextBackwardToken; }
    inline void SetNextBackwardToken(const Aws::String& value) { m_nextBackwardToken = value; }
    inline void SetNextBackwardToken(Aws::String&& value) { m_nextBackwardToken = std::move(value); }
    inline void SetNextBackwardToken(const char* value) { m_nextBackwardToken.assign(value); }
    inline GetRelationalDatabaseLogEventsResult& WithNextBackwardToken(const Aws::String& value) { SetNextBackwardToken(value); return *this;}
    inline GetRelationalDatabaseLogEventsResult& WithNextBackwardToken(Aws::String&& value) { SetNextBackwardToken(std::move(value)); return *this;}
    inline GetRelationalDatabaseLogEventsResult& WithNextBackwardToken(const char* value) { SetNextBackwardToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token used for advancing to the next page of results from your get
     * relational database log events request.</p>
     */
    inline const Aws::String& GetNextForwardToken() const{ return m_nextForwardToken; }
    inline void SetNextForwardToken(const Aws::String& value) { m_nextForwardToken = value; }
    inline void SetNextForwardToken(Aws::String&& value) { m_nextForwardToken = std::move(value); }
    inline void SetNextForwardToken(const char* value) { m_nextForwardToken.assign(value); }
    inline GetRelationalDatabaseLogEventsResult& WithNextForwardToken(const Aws::String& value) { SetNextForwardToken(value); return *this;}
    inline GetRelationalDatabaseLogEventsResult& WithNextForwardToken(Aws::String&& value) { SetNextForwardToken(std::move(value)); return *this;}
    inline GetRelationalDatabaseLogEventsResult& WithNextForwardToken(const char* value) { SetNextForwardToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRelationalDatabaseLogEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRelationalDatabaseLogEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRelationalDatabaseLogEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LogEvent> m_resourceLogEvents;

    Aws::String m_nextBackwardToken;

    Aws::String m_nextForwardToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
