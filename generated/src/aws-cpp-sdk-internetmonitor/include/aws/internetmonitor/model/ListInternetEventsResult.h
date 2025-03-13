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
    AWS_INTERNETMONITOR_API ListInternetEventsResult() = default;
    AWS_INTERNETMONITOR_API ListInternetEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INTERNETMONITOR_API ListInternetEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A set of internet events returned for the list operation.</p>
     */
    inline const Aws::Vector<InternetEventSummary>& GetInternetEvents() const { return m_internetEvents; }
    template<typename InternetEventsT = Aws::Vector<InternetEventSummary>>
    void SetInternetEvents(InternetEventsT&& value) { m_internetEventsHasBeenSet = true; m_internetEvents = std::forward<InternetEventsT>(value); }
    template<typename InternetEventsT = Aws::Vector<InternetEventSummary>>
    ListInternetEventsResult& WithInternetEvents(InternetEventsT&& value) { SetInternetEvents(std::forward<InternetEventsT>(value)); return *this;}
    template<typename InternetEventsT = InternetEventSummary>
    ListInternetEventsResult& AddInternetEvents(InternetEventsT&& value) { m_internetEventsHasBeenSet = true; m_internetEvents.emplace_back(std::forward<InternetEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInternetEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInternetEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InternetEventSummary> m_internetEvents;
    bool m_internetEventsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
