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
    AWS_CLOUDWATCHLOGS_API FilterLogEventsResult() = default;
    AWS_CLOUDWATCHLOGS_API FilterLogEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API FilterLogEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The matched events.</p>
     */
    inline const Aws::Vector<FilteredLogEvent>& GetEvents() const { return m_events; }
    template<typename EventsT = Aws::Vector<FilteredLogEvent>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<FilteredLogEvent>>
    FilterLogEventsResult& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsT = FilteredLogEvent>
    FilterLogEventsResult& AddEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events.emplace_back(std::forward<EventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>Important</b> As of May 15, 2020, this parameter is no longer supported.
     * This parameter returns an empty list.</p> <p>Indicates which log streams have
     * been searched and whether each has been searched completely.</p>
     */
    inline const Aws::Vector<SearchedLogStream>& GetSearchedLogStreams() const { return m_searchedLogStreams; }
    template<typename SearchedLogStreamsT = Aws::Vector<SearchedLogStream>>
    void SetSearchedLogStreams(SearchedLogStreamsT&& value) { m_searchedLogStreamsHasBeenSet = true; m_searchedLogStreams = std::forward<SearchedLogStreamsT>(value); }
    template<typename SearchedLogStreamsT = Aws::Vector<SearchedLogStream>>
    FilterLogEventsResult& WithSearchedLogStreams(SearchedLogStreamsT&& value) { SetSearchedLogStreams(std::forward<SearchedLogStreamsT>(value)); return *this;}
    template<typename SearchedLogStreamsT = SearchedLogStream>
    FilterLogEventsResult& AddSearchedLogStreams(SearchedLogStreamsT&& value) { m_searchedLogStreamsHasBeenSet = true; m_searchedLogStreams.emplace_back(std::forward<SearchedLogStreamsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. The token expires
     * after 24 hours.</p> <p>If the results don't include a <code>nextToken</code>,
     * then pagination is finished. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    FilterLogEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    FilterLogEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FilteredLogEvent> m_events;
    bool m_eventsHasBeenSet = false;

    Aws::Vector<SearchedLogStream> m_searchedLogStreams;
    bool m_searchedLogStreamsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
