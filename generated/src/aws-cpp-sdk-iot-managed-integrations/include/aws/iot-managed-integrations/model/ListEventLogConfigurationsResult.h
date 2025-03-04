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
    AWS_IOTMANAGEDINTEGRATIONS_API ListEventLogConfigurationsResult();
    AWS_IOTMANAGEDINTEGRATIONS_API ListEventLogConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API ListEventLogConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of each event log configuration and pertinent information.</p>
     */
    inline const Aws::Vector<EventLogConfigurationSummary>& GetEventLogConfigurationList() const{ return m_eventLogConfigurationList; }
    inline void SetEventLogConfigurationList(const Aws::Vector<EventLogConfigurationSummary>& value) { m_eventLogConfigurationList = value; }
    inline void SetEventLogConfigurationList(Aws::Vector<EventLogConfigurationSummary>&& value) { m_eventLogConfigurationList = std::move(value); }
    inline ListEventLogConfigurationsResult& WithEventLogConfigurationList(const Aws::Vector<EventLogConfigurationSummary>& value) { SetEventLogConfigurationList(value); return *this;}
    inline ListEventLogConfigurationsResult& WithEventLogConfigurationList(Aws::Vector<EventLogConfigurationSummary>&& value) { SetEventLogConfigurationList(std::move(value)); return *this;}
    inline ListEventLogConfigurationsResult& AddEventLogConfigurationList(const EventLogConfigurationSummary& value) { m_eventLogConfigurationList.push_back(value); return *this; }
    inline ListEventLogConfigurationsResult& AddEventLogConfigurationList(EventLogConfigurationSummary&& value) { m_eventLogConfigurationList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEventLogConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEventLogConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEventLogConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEventLogConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEventLogConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEventLogConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EventLogConfigurationSummary> m_eventLogConfigurationList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
