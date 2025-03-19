/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/EventLogConfigurationSummary.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{
  class ListEventLogConfigurationsResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ListEventLogConfigurationsResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API ListEventLogConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API ListEventLogConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of each event log configuration and pertinent information.</p>
     */
    inline const Aws::Vector<EventLogConfigurationSummary>& GetEventLogConfigurationList() const { return m_eventLogConfigurationList; }
    template<typename EventLogConfigurationListT = Aws::Vector<EventLogConfigurationSummary>>
    void SetEventLogConfigurationList(EventLogConfigurationListT&& value) { m_eventLogConfigurationListHasBeenSet = true; m_eventLogConfigurationList = std::forward<EventLogConfigurationListT>(value); }
    template<typename EventLogConfigurationListT = Aws::Vector<EventLogConfigurationSummary>>
    ListEventLogConfigurationsResult& WithEventLogConfigurationList(EventLogConfigurationListT&& value) { SetEventLogConfigurationList(std::forward<EventLogConfigurationListT>(value)); return *this;}
    template<typename EventLogConfigurationListT = EventLogConfigurationSummary>
    ListEventLogConfigurationsResult& AddEventLogConfigurationList(EventLogConfigurationListT&& value) { m_eventLogConfigurationListHasBeenSet = true; m_eventLogConfigurationList.emplace_back(std::forward<EventLogConfigurationListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEventLogConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEventLogConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventLogConfigurationSummary> m_eventLogConfigurationList;
    bool m_eventLogConfigurationListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
