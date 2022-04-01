﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/discovery/model/AgentConfigurationStatus.h>
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
  class AWS_APPLICATIONDISCOVERYSERVICE_API StartDataCollectionByAgentIdsResult
  {
  public:
    StartDataCollectionByAgentIdsResult();
    StartDataCollectionByAgentIdsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartDataCollectionByAgentIdsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about agents or the connector that were instructed to start
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline const Aws::Vector<AgentConfigurationStatus>& GetAgentsConfigurationStatus() const{ return m_agentsConfigurationStatus; }

    /**
     * <p>Information about agents or the connector that were instructed to start
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline void SetAgentsConfigurationStatus(const Aws::Vector<AgentConfigurationStatus>& value) { m_agentsConfigurationStatus = value; }

    /**
     * <p>Information about agents or the connector that were instructed to start
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline void SetAgentsConfigurationStatus(Aws::Vector<AgentConfigurationStatus>&& value) { m_agentsConfigurationStatus = std::move(value); }

    /**
     * <p>Information about agents or the connector that were instructed to start
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline StartDataCollectionByAgentIdsResult& WithAgentsConfigurationStatus(const Aws::Vector<AgentConfigurationStatus>& value) { SetAgentsConfigurationStatus(value); return *this;}

    /**
     * <p>Information about agents or the connector that were instructed to start
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline StartDataCollectionByAgentIdsResult& WithAgentsConfigurationStatus(Aws::Vector<AgentConfigurationStatus>&& value) { SetAgentsConfigurationStatus(std::move(value)); return *this;}

    /**
     * <p>Information about agents or the connector that were instructed to start
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline StartDataCollectionByAgentIdsResult& AddAgentsConfigurationStatus(const AgentConfigurationStatus& value) { m_agentsConfigurationStatus.push_back(value); return *this; }

    /**
     * <p>Information about agents or the connector that were instructed to start
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline StartDataCollectionByAgentIdsResult& AddAgentsConfigurationStatus(AgentConfigurationStatus&& value) { m_agentsConfigurationStatus.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AgentConfigurationStatus> m_agentsConfigurationStatus;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
