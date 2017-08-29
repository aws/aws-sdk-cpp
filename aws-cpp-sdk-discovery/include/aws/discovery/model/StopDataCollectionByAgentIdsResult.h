/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_APPLICATIONDISCOVERYSERVICE_API StopDataCollectionByAgentIdsResult
  {
  public:
    StopDataCollectionByAgentIdsResult();
    StopDataCollectionByAgentIdsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StopDataCollectionByAgentIdsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the agents or connector that were instructed to stop
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline const Aws::Vector<AgentConfigurationStatus>& GetAgentsConfigurationStatus() const{ return m_agentsConfigurationStatus; }

    /**
     * <p>Information about the agents or connector that were instructed to stop
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline void SetAgentsConfigurationStatus(const Aws::Vector<AgentConfigurationStatus>& value) { m_agentsConfigurationStatus = value; }

    /**
     * <p>Information about the agents or connector that were instructed to stop
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline void SetAgentsConfigurationStatus(Aws::Vector<AgentConfigurationStatus>&& value) { m_agentsConfigurationStatus = std::move(value); }

    /**
     * <p>Information about the agents or connector that were instructed to stop
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline StopDataCollectionByAgentIdsResult& WithAgentsConfigurationStatus(const Aws::Vector<AgentConfigurationStatus>& value) { SetAgentsConfigurationStatus(value); return *this;}

    /**
     * <p>Information about the agents or connector that were instructed to stop
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline StopDataCollectionByAgentIdsResult& WithAgentsConfigurationStatus(Aws::Vector<AgentConfigurationStatus>&& value) { SetAgentsConfigurationStatus(std::move(value)); return *this;}

    /**
     * <p>Information about the agents or connector that were instructed to stop
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline StopDataCollectionByAgentIdsResult& AddAgentsConfigurationStatus(const AgentConfigurationStatus& value) { m_agentsConfigurationStatus.push_back(value); return *this; }

    /**
     * <p>Information about the agents or connector that were instructed to stop
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline StopDataCollectionByAgentIdsResult& AddAgentsConfigurationStatus(AgentConfigurationStatus&& value) { m_agentsConfigurationStatus.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AgentConfigurationStatus> m_agentsConfigurationStatus;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
