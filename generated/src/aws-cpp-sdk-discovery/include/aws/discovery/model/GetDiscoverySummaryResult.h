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


    /**
     * <p>The number of servers discovered.</p>
     */
    inline long long GetServers() const{ return m_servers; }

    /**
     * <p>The number of servers discovered.</p>
     */
    inline void SetServers(long long value) { m_servers = value; }

    /**
     * <p>The number of servers discovered.</p>
     */
    inline GetDiscoverySummaryResult& WithServers(long long value) { SetServers(value); return *this;}


    /**
     * <p>The number of applications discovered.</p>
     */
    inline long long GetApplications() const{ return m_applications; }

    /**
     * <p>The number of applications discovered.</p>
     */
    inline void SetApplications(long long value) { m_applications = value; }

    /**
     * <p>The number of applications discovered.</p>
     */
    inline GetDiscoverySummaryResult& WithApplications(long long value) { SetApplications(value); return *this;}


    /**
     * <p>The number of servers mapped to applications.</p>
     */
    inline long long GetServersMappedToApplications() const{ return m_serversMappedToApplications; }

    /**
     * <p>The number of servers mapped to applications.</p>
     */
    inline void SetServersMappedToApplications(long long value) { m_serversMappedToApplications = value; }

    /**
     * <p>The number of servers mapped to applications.</p>
     */
    inline GetDiscoverySummaryResult& WithServersMappedToApplications(long long value) { SetServersMappedToApplications(value); return *this;}


    /**
     * <p>The number of servers mapped to tags.</p>
     */
    inline long long GetServersMappedtoTags() const{ return m_serversMappedtoTags; }

    /**
     * <p>The number of servers mapped to tags.</p>
     */
    inline void SetServersMappedtoTags(long long value) { m_serversMappedtoTags = value; }

    /**
     * <p>The number of servers mapped to tags.</p>
     */
    inline GetDiscoverySummaryResult& WithServersMappedtoTags(long long value) { SetServersMappedtoTags(value); return *this;}


    /**
     * <p>Details about discovered agents, including agent status and health.</p>
     */
    inline const CustomerAgentInfo& GetAgentSummary() const{ return m_agentSummary; }

    /**
     * <p>Details about discovered agents, including agent status and health.</p>
     */
    inline void SetAgentSummary(const CustomerAgentInfo& value) { m_agentSummary = value; }

    /**
     * <p>Details about discovered agents, including agent status and health.</p>
     */
    inline void SetAgentSummary(CustomerAgentInfo&& value) { m_agentSummary = std::move(value); }

    /**
     * <p>Details about discovered agents, including agent status and health.</p>
     */
    inline GetDiscoverySummaryResult& WithAgentSummary(const CustomerAgentInfo& value) { SetAgentSummary(value); return *this;}

    /**
     * <p>Details about discovered agents, including agent status and health.</p>
     */
    inline GetDiscoverySummaryResult& WithAgentSummary(CustomerAgentInfo&& value) { SetAgentSummary(std::move(value)); return *this;}


    /**
     * <p>Details about discovered connectors, including connector status and
     * health.</p>
     */
    inline const CustomerConnectorInfo& GetConnectorSummary() const{ return m_connectorSummary; }

    /**
     * <p>Details about discovered connectors, including connector status and
     * health.</p>
     */
    inline void SetConnectorSummary(const CustomerConnectorInfo& value) { m_connectorSummary = value; }

    /**
     * <p>Details about discovered connectors, including connector status and
     * health.</p>
     */
    inline void SetConnectorSummary(CustomerConnectorInfo&& value) { m_connectorSummary = std::move(value); }

    /**
     * <p>Details about discovered connectors, including connector status and
     * health.</p>
     */
    inline GetDiscoverySummaryResult& WithConnectorSummary(const CustomerConnectorInfo& value) { SetConnectorSummary(value); return *this;}

    /**
     * <p>Details about discovered connectors, including connector status and
     * health.</p>
     */
    inline GetDiscoverySummaryResult& WithConnectorSummary(CustomerConnectorInfo&& value) { SetConnectorSummary(std::move(value)); return *this;}


    /**
     * <p> Details about Migration Evaluator collectors, including collector status and
     * health. </p>
     */
    inline const CustomerMeCollectorInfo& GetMeCollectorSummary() const{ return m_meCollectorSummary; }

    /**
     * <p> Details about Migration Evaluator collectors, including collector status and
     * health. </p>
     */
    inline void SetMeCollectorSummary(const CustomerMeCollectorInfo& value) { m_meCollectorSummary = value; }

    /**
     * <p> Details about Migration Evaluator collectors, including collector status and
     * health. </p>
     */
    inline void SetMeCollectorSummary(CustomerMeCollectorInfo&& value) { m_meCollectorSummary = std::move(value); }

    /**
     * <p> Details about Migration Evaluator collectors, including collector status and
     * health. </p>
     */
    inline GetDiscoverySummaryResult& WithMeCollectorSummary(const CustomerMeCollectorInfo& value) { SetMeCollectorSummary(value); return *this;}

    /**
     * <p> Details about Migration Evaluator collectors, including collector status and
     * health. </p>
     */
    inline GetDiscoverySummaryResult& WithMeCollectorSummary(CustomerMeCollectorInfo&& value) { SetMeCollectorSummary(std::move(value)); return *this;}


    
    inline const CustomerAgentlessCollectorInfo& GetAgentlessCollectorSummary() const{ return m_agentlessCollectorSummary; }

    
    inline void SetAgentlessCollectorSummary(const CustomerAgentlessCollectorInfo& value) { m_agentlessCollectorSummary = value; }

    
    inline void SetAgentlessCollectorSummary(CustomerAgentlessCollectorInfo&& value) { m_agentlessCollectorSummary = std::move(value); }

    
    inline GetDiscoverySummaryResult& WithAgentlessCollectorSummary(const CustomerAgentlessCollectorInfo& value) { SetAgentlessCollectorSummary(value); return *this;}

    
    inline GetDiscoverySummaryResult& WithAgentlessCollectorSummary(CustomerAgentlessCollectorInfo&& value) { SetAgentlessCollectorSummary(std::move(value)); return *this;}

  private:

    long long m_servers;

    long long m_applications;

    long long m_serversMappedToApplications;

    long long m_serversMappedtoTags;

    CustomerAgentInfo m_agentSummary;

    CustomerConnectorInfo m_connectorSummary;

    CustomerMeCollectorInfo m_meCollectorSummary;

    CustomerAgentlessCollectorInfo m_agentlessCollectorSummary;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
