/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/EventConfigurationItem.h>
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
namespace IoTWireless
{
namespace Model
{
  class ListEventConfigurationsResult
  {
  public:
    AWS_IOTWIRELESS_API ListEventConfigurationsResult() = default;
    AWS_IOTWIRELESS_API ListEventConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListEventConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEventConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event configurations of all events for a single resource.</p>
     */
    inline const Aws::Vector<EventConfigurationItem>& GetEventConfigurationsList() const { return m_eventConfigurationsList; }
    template<typename EventConfigurationsListT = Aws::Vector<EventConfigurationItem>>
    void SetEventConfigurationsList(EventConfigurationsListT&& value) { m_eventConfigurationsListHasBeenSet = true; m_eventConfigurationsList = std::forward<EventConfigurationsListT>(value); }
    template<typename EventConfigurationsListT = Aws::Vector<EventConfigurationItem>>
    ListEventConfigurationsResult& WithEventConfigurationsList(EventConfigurationsListT&& value) { SetEventConfigurationsList(std::forward<EventConfigurationsListT>(value)); return *this;}
    template<typename EventConfigurationsListT = EventConfigurationItem>
    ListEventConfigurationsResult& AddEventConfigurationsList(EventConfigurationsListT&& value) { m_eventConfigurationsListHasBeenSet = true; m_eventConfigurationsList.emplace_back(std::forward<EventConfigurationsListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEventConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<EventConfigurationItem> m_eventConfigurationsList;
    bool m_eventConfigurationsListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
