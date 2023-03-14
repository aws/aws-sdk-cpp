/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/internetmonitor/model/HealthEvent.h>
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
namespace InternetMonitor
{
namespace Model
{
  class ListHealthEventsResult
  {
  public:
    AWS_INTERNETMONITOR_API ListHealthEventsResult();
    AWS_INTERNETMONITOR_API ListHealthEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INTERNETMONITOR_API ListHealthEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of health events.</p>
     */
    inline const Aws::Vector<HealthEvent>& GetHealthEvents() const{ return m_healthEvents; }

    /**
     * <p>A list of health events.</p>
     */
    inline void SetHealthEvents(const Aws::Vector<HealthEvent>& value) { m_healthEvents = value; }

    /**
     * <p>A list of health events.</p>
     */
    inline void SetHealthEvents(Aws::Vector<HealthEvent>&& value) { m_healthEvents = std::move(value); }

    /**
     * <p>A list of health events.</p>
     */
    inline ListHealthEventsResult& WithHealthEvents(const Aws::Vector<HealthEvent>& value) { SetHealthEvents(value); return *this;}

    /**
     * <p>A list of health events.</p>
     */
    inline ListHealthEventsResult& WithHealthEvents(Aws::Vector<HealthEvent>&& value) { SetHealthEvents(std::move(value)); return *this;}

    /**
     * <p>A list of health events.</p>
     */
    inline ListHealthEventsResult& AddHealthEvents(const HealthEvent& value) { m_healthEvents.push_back(value); return *this; }

    /**
     * <p>A list of health events.</p>
     */
    inline ListHealthEventsResult& AddHealthEvents(HealthEvent&& value) { m_healthEvents.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListHealthEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListHealthEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListHealthEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListHealthEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListHealthEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListHealthEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<HealthEvent> m_healthEvents;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
