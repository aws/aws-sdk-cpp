/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/internetmonitor/model/InternetEventSummary.h>
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
  class ListInternetEventsResult
  {
  public:
    AWS_INTERNETMONITOR_API ListInternetEventsResult();
    AWS_INTERNETMONITOR_API ListInternetEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INTERNETMONITOR_API ListInternetEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A set of internet events returned for the list operation.</p>
     */
    inline const Aws::Vector<InternetEventSummary>& GetInternetEvents() const{ return m_internetEvents; }

    /**
     * <p>A set of internet events returned for the list operation.</p>
     */
    inline void SetInternetEvents(const Aws::Vector<InternetEventSummary>& value) { m_internetEvents = value; }

    /**
     * <p>A set of internet events returned for the list operation.</p>
     */
    inline void SetInternetEvents(Aws::Vector<InternetEventSummary>&& value) { m_internetEvents = std::move(value); }

    /**
     * <p>A set of internet events returned for the list operation.</p>
     */
    inline ListInternetEventsResult& WithInternetEvents(const Aws::Vector<InternetEventSummary>& value) { SetInternetEvents(value); return *this;}

    /**
     * <p>A set of internet events returned for the list operation.</p>
     */
    inline ListInternetEventsResult& WithInternetEvents(Aws::Vector<InternetEventSummary>&& value) { SetInternetEvents(std::move(value)); return *this;}

    /**
     * <p>A set of internet events returned for the list operation.</p>
     */
    inline ListInternetEventsResult& AddInternetEvents(const InternetEventSummary& value) { m_internetEvents.push_back(value); return *this; }

    /**
     * <p>A set of internet events returned for the list operation.</p>
     */
    inline ListInternetEventsResult& AddInternetEvents(InternetEventSummary&& value) { m_internetEvents.push_back(std::move(value)); return *this; }


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
    inline ListInternetEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListInternetEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListInternetEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListInternetEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListInternetEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListInternetEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<InternetEventSummary> m_internetEvents;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
