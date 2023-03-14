/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/FilteredLogEvent.h>
#include <aws/logs/model/SearchedLogStream.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class FilterLogEventsResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API FilterLogEventsResult();
    AWS_CLOUDWATCHLOGS_API FilterLogEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API FilterLogEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The matched events.</p>
     */
    inline const Aws::Vector<FilteredLogEvent>& GetEvents() const{ return m_events; }

    /**
     * <p>The matched events.</p>
     */
    inline void SetEvents(const Aws::Vector<FilteredLogEvent>& value) { m_events = value; }

    /**
     * <p>The matched events.</p>
     */
    inline void SetEvents(Aws::Vector<FilteredLogEvent>&& value) { m_events = std::move(value); }

    /**
     * <p>The matched events.</p>
     */
    inline FilterLogEventsResult& WithEvents(const Aws::Vector<FilteredLogEvent>& value) { SetEvents(value); return *this;}

    /**
     * <p>The matched events.</p>
     */
    inline FilterLogEventsResult& WithEvents(Aws::Vector<FilteredLogEvent>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>The matched events.</p>
     */
    inline FilterLogEventsResult& AddEvents(const FilteredLogEvent& value) { m_events.push_back(value); return *this; }

    /**
     * <p>The matched events.</p>
     */
    inline FilterLogEventsResult& AddEvents(FilteredLogEvent&& value) { m_events.push_back(std::move(value)); return *this; }


    /**
     * <p> <b>Important</b> As of May 15, 2020, this parameter is no longer supported.
     * This parameter returns an empty list.</p> <p>Indicates which log streams have
     * been searched and whether each has been searched completely.</p>
     */
    inline const Aws::Vector<SearchedLogStream>& GetSearchedLogStreams() const{ return m_searchedLogStreams; }

    /**
     * <p> <b>Important</b> As of May 15, 2020, this parameter is no longer supported.
     * This parameter returns an empty list.</p> <p>Indicates which log streams have
     * been searched and whether each has been searched completely.</p>
     */
    inline void SetSearchedLogStreams(const Aws::Vector<SearchedLogStream>& value) { m_searchedLogStreams = value; }

    /**
     * <p> <b>Important</b> As of May 15, 2020, this parameter is no longer supported.
     * This parameter returns an empty list.</p> <p>Indicates which log streams have
     * been searched and whether each has been searched completely.</p>
     */
    inline void SetSearchedLogStreams(Aws::Vector<SearchedLogStream>&& value) { m_searchedLogStreams = std::move(value); }

    /**
     * <p> <b>Important</b> As of May 15, 2020, this parameter is no longer supported.
     * This parameter returns an empty list.</p> <p>Indicates which log streams have
     * been searched and whether each has been searched completely.</p>
     */
    inline FilterLogEventsResult& WithSearchedLogStreams(const Aws::Vector<SearchedLogStream>& value) { SetSearchedLogStreams(value); return *this;}

    /**
     * <p> <b>Important</b> As of May 15, 2020, this parameter is no longer supported.
     * This parameter returns an empty list.</p> <p>Indicates which log streams have
     * been searched and whether each has been searched completely.</p>
     */
    inline FilterLogEventsResult& WithSearchedLogStreams(Aws::Vector<SearchedLogStream>&& value) { SetSearchedLogStreams(std::move(value)); return *this;}

    /**
     * <p> <b>Important</b> As of May 15, 2020, this parameter is no longer supported.
     * This parameter returns an empty list.</p> <p>Indicates which log streams have
     * been searched and whether each has been searched completely.</p>
     */
    inline FilterLogEventsResult& AddSearchedLogStreams(const SearchedLogStream& value) { m_searchedLogStreams.push_back(value); return *this; }

    /**
     * <p> <b>Important</b> As of May 15, 2020, this parameter is no longer supported.
     * This parameter returns an empty list.</p> <p>Indicates which log streams have
     * been searched and whether each has been searched completely.</p>
     */
    inline FilterLogEventsResult& AddSearchedLogStreams(SearchedLogStream&& value) { m_searchedLogStreams.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. The token expires
     * after 24 hours.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. The token expires
     * after 24 hours.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. The token expires
     * after 24 hours.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. The token expires
     * after 24 hours.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. The token expires
     * after 24 hours.</p>
     */
    inline FilterLogEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. The token expires
     * after 24 hours.</p>
     */
    inline FilterLogEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. The token expires
     * after 24 hours.</p>
     */
    inline FilterLogEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline FilterLogEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline FilterLogEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline FilterLogEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FilteredLogEvent> m_events;

    Aws::Vector<SearchedLogStream> m_searchedLogStreams;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
