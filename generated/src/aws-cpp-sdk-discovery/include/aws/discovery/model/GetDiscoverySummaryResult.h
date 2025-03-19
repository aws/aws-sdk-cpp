/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/model/CustomerAgentInfo.h>
#include <aws/discovery/model/CustomerConnectorInfo.h>
#include <aws/discovery/model/CustomerMeCollectorInfo.h>
#include <aws/discovery/model/CustomerAgentlessCollectorInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class GetDiscoverySummaryResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API GetDiscoverySummaryResult() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API GetDiscoverySummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API GetDiscoverySummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of servers discovered.</p>
     */
    inline long long GetServers() const { return m_servers; }
    inline void SetServers(long long value) { m_serversHasBeenSet = true; m_servers = value; }
    inline GetDiscoverySummaryResult& WithServers(long long value) { SetServers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of applications discovered.</p>
     */
    inline long long GetApplications() const { return m_applications; }
    inline void SetApplications(long long value) { m_applicationsHasBeenSet = true; m_applications = value; }
    inline GetDiscoverySummaryResult& WithApplications(long long value) { SetApplications(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of servers mapped to applications.</p>
     */
    inline long long GetServersMappedToApplications() const { return m_serversMappedToApplications; }
    inline void SetServersMappedToApplications(long long value) { m_serversMappedToApplicationsHasBeenSet = true; m_serversMappedToApplications = value; }
    inline GetDiscoverySummaryResult& WithServersMappedToApplications(long long value) { SetServersMappedToApplications(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of servers mapped to tags.</p>
     */
    inline long long GetServersMappedtoTags() const { return m_serversMappedtoTags; }
    inline void SetServersMappedtoTags(long long value) { m_serversMappedtoTagsHasBeenSet = true; m_serversMappedtoTags = value; }
    inline GetDiscoverySummaryResult& WithServersMappedtoTags(long long value) { SetServersMappedtoTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about discovered agents, including agent status and health.</p>
     */
    inline const CustomerAgentInfo& GetAgentSummary() const { return m_agentSummary; }
    template<typename AgentSummaryT = CustomerAgentInfo>
    void SetAgentSummary(AgentSummaryT&& value) { m_agentSummaryHasBeenSet = true; m_agentSummary = std::forward<AgentSummaryT>(value); }
    template<typename AgentSummaryT = CustomerAgentInfo>
    GetDiscoverySummaryResult& WithAgentSummary(AgentSummaryT&& value) { SetAgentSummary(std::forward<AgentSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about discovered connectors, including connector status and
     * health.</p>
     */
    inline const CustomerConnectorInfo& GetConnectorSummary() const { return m_connectorSummary; }
    template<typename ConnectorSummaryT = CustomerConnectorInfo>
    void SetConnectorSummary(ConnectorSummaryT&& value) { m_connectorSummaryHasBeenSet = true; m_connectorSummary = std::forward<ConnectorSummaryT>(value); }
    template<typename ConnectorSummaryT = CustomerConnectorInfo>
    GetDiscoverySummaryResult& WithConnectorSummary(ConnectorSummaryT&& value) { SetConnectorSummary(std::forward<ConnectorSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Details about Migration Evaluator collectors, including collector status and
     * health. </p>
     */
    inline const CustomerMeCollectorInfo& GetMeCollectorSummary() const { return m_meCollectorSummary; }
    template<typename MeCollectorSummaryT = CustomerMeCollectorInfo>
    void SetMeCollectorSummary(MeCollectorSummaryT&& value) { m_meCollectorSummaryHasBeenSet = true; m_meCollectorSummary = std::forward<MeCollectorSummaryT>(value); }
    template<typename MeCollectorSummaryT = CustomerMeCollectorInfo>
    GetDiscoverySummaryResult& WithMeCollectorSummary(MeCollectorSummaryT&& value) { SetMeCollectorSummary(std::forward<MeCollectorSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Details about Agentless Collector collectors, including status. </p>
     */
    inline const CustomerAgentlessCollectorInfo& GetAgentlessCollectorSummary() const { return m_agentlessCollectorSummary; }
    template<typename AgentlessCollectorSummaryT = CustomerAgentlessCollectorInfo>
    void SetAgentlessCollectorSummary(AgentlessCollectorSummaryT&& value) { m_agentlessCollectorSummaryHasBeenSet = true; m_agentlessCollectorSummary = std::forward<AgentlessCollectorSummaryT>(value); }
    template<typename AgentlessCollectorSummaryT = CustomerAgentlessCollectorInfo>
    GetDiscoverySummaryResult& WithAgentlessCollectorSummary(AgentlessCollectorSummaryT&& value) { SetAgentlessCollectorSummary(std::forward<AgentlessCollectorSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDiscoverySummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    long long m_servers{0};
    bool m_serversHasBeenSet = false;

    long long m_applications{0};
    bool m_applicationsHasBeenSet = false;

    long long m_serversMappedToApplications{0};
    bool m_serversMappedToApplicationsHasBeenSet = false;

    long long m_serversMappedtoTags{0};
    bool m_serversMappedtoTagsHasBeenSet = false;

    CustomerAgentInfo m_agentSummary;
    bool m_agentSummaryHasBeenSet = false;

    CustomerConnectorInfo m_connectorSummary;
    bool m_connectorSummaryHasBeenSet = false;

    CustomerMeCollectorInfo m_meCollectorSummary;
    bool m_meCollectorSummaryHasBeenSet = false;

    CustomerAgentlessCollectorInfo m_agentlessCollectorSummary;
    bool m_agentlessCollectorSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
