/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/ConfigurationEvent.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class ListConfigurationHistoryResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API ListConfigurationHistoryResult() = default;
    AWS_APPLICATIONINSIGHTS_API ListConfigurationHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API ListConfigurationHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of configuration events and their corresponding details. </p>
     */
    inline const Aws::Vector<ConfigurationEvent>& GetEventList() const { return m_eventList; }
    template<typename EventListT = Aws::Vector<ConfigurationEvent>>
    void SetEventList(EventListT&& value) { m_eventListHasBeenSet = true; m_eventList = std::forward<EventListT>(value); }
    template<typename EventListT = Aws::Vector<ConfigurationEvent>>
    ListConfigurationHistoryResult& WithEventList(EventListT&& value) { SetEventList(std::forward<EventListT>(value)); return *this;}
    template<typename EventListT = ConfigurationEvent>
    ListConfigurationHistoryResult& AddEventList(EventListT&& value) { m_eventListHasBeenSet = true; m_eventList.emplace_back(std::forward<EventListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>ListConfigurationHistory</code> request. When the results of a
     * <code>ListConfigurationHistory</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfigurationHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConfigurationHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationEvent> m_eventList;
    bool m_eventListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
