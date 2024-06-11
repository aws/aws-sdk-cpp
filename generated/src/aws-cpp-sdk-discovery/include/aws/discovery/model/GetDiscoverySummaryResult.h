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
    AWS_APPLICATIONDISCOVERYSERVICE_API GetDiscoverySummaryResult();
    AWS_APPLICATIONDISCOVERYSERVICE_API GetDiscoverySummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API GetDiscoverySummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of servers discovered.</p>
     */
    inline long long GetServers() const{ return m_servers; }
    inline void SetServers(long long value) { m_servers = value; }
    inline GetDiscoverySummaryResult& WithServers(long long value) { SetServers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of applications discovered.</p>
     */
    inline long long GetApplications() const{ return m_applications; }
    inline void SetApplications(long long value) { m_applications = value; }
    inline GetDiscoverySummaryResult& WithApplications(long long value) { SetApplications(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of servers mapped to applications.</p>
     */
    inline long long GetServersMappedToApplications() const{ return m_serversMappedToApplications; }
    inline void SetServersMappedToApplications(long long value) { m_serversMappedToApplications = value; }
    inline GetDiscoverySummaryResult& WithServersMappedToApplications(long long value) { SetServersMappedToApplications(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of servers mapped to tags.</p>
     */
    inline long long GetServersMappedtoTags() const{ return m_serversMappedtoTags; }
    inline void SetServersMappedtoTags(long long value) { m_serversMappedtoTags = value; }
    inline GetDiscoverySummaryResult& WithServersMappedtoTags(long long value) { SetServersMappedtoTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about discovered agents, including agent status and health.</p>
     */
    inline const CustomerAgentInfo& GetAgentSummary() const{ return m_agentSummary; }
    inline void SetAgentSummary(const CustomerAgentInfo& value) { m_agentSummary = value; }
    inline void SetAgentSummary(CustomerAgentInfo&& value) { m_agentSummary = std::move(value); }
    inline GetDiscoverySummaryResult& WithAgentSummary(const CustomerAgentInfo& value) { SetAgentSummary(value); return *this;}
    inline GetDiscoverySummaryResult& WithAgentSummary(CustomerAgentInfo&& value) { SetAgentSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about discovered connectors, including connector status and
     * health.</p>
     */
    inline const CustomerConnectorInfo& GetConnectorSummary() const{ return m_connectorSummary; }
    inline void SetConnectorSummary(const CustomerConnectorInfo& value) { m_connectorSummary = value; }
    inline void SetConnectorSummary(CustomerConnectorInfo&& value) { m_connectorSummary = std::move(value); }
    inline GetDiscoverySummaryResult& WithConnectorSummary(const CustomerConnectorInfo& value) { SetConnectorSummary(value); return *this;}
    inline GetDiscoverySummaryResult& WithConnectorSummary(CustomerConnectorInfo&& value) { SetConnectorSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Details about Migration Evaluator collectors, including collector status and
     * health. </p>
     */
    inline const CustomerMeCollectorInfo& GetMeCollectorSummary() const{ return m_meCollectorSummary; }
    inline void SetMeCollectorSummary(const CustomerMeCollectorInfo& value) { m_meCollectorSummary = value; }
    inline void SetMeCollectorSummary(CustomerMeCollectorInfo&& value) { m_meCollectorSummary = std::move(value); }
    inline GetDiscoverySummaryResult& WithMeCollectorSummary(const CustomerMeCollectorInfo& value) { SetMeCollectorSummary(value); return *this;}
    inline GetDiscoverySummaryResult& WithMeCollectorSummary(CustomerMeCollectorInfo&& value) { SetMeCollectorSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Details about Agentless Collector collectors, including status. </p>
     */
    inline const CustomerAgentlessCollectorInfo& GetAgentlessCollectorSummary() const{ return m_agentlessCollectorSummary; }
    inline void SetAgentlessCollectorSummary(const CustomerAgentlessCollectorInfo& value) { m_agentlessCollectorSummary = value; }
    inline void SetAgentlessCollectorSummary(CustomerAgentlessCollectorInfo&& value) { m_agentlessCollectorSummary = std::move(value); }
    inline GetDiscoverySummaryResult& WithAgentlessCollectorSummary(const CustomerAgentlessCollectorInfo& value) { SetAgentlessCollectorSummary(value); return *this;}
    inline GetDiscoverySummaryResult& WithAgentlessCollectorSummary(CustomerAgentlessCollectorInfo&& value) { SetAgentlessCollectorSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDiscoverySummaryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDiscoverySummaryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDiscoverySummaryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    long long m_servers;

    long long m_applications;

    long long m_serversMappedToApplications;

    long long m_serversMappedtoTags;

    CustomerAgentInfo m_agentSummary;

    CustomerConnectorInfo m_connectorSummary;

    CustomerMeCollectorInfo m_meCollectorSummary;

    CustomerAgentlessCollectorInfo m_agentlessCollectorSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
