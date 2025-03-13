/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class StartDataCollectionByAgentIdsResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API StartDataCollectionByAgentIdsResult() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API StartDataCollectionByAgentIdsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API StartDataCollectionByAgentIdsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about agents that were instructed to start collecting data.
     * Information includes the agent ID, a description of the operation performed, and
     * whether the agent configuration was updated.</p>
     */
    inline const Aws::Vector<AgentConfigurationStatus>& GetAgentsConfigurationStatus() const { return m_agentsConfigurationStatus; }
    template<typename AgentsConfigurationStatusT = Aws::Vector<AgentConfigurationStatus>>
    void SetAgentsConfigurationStatus(AgentsConfigurationStatusT&& value) { m_agentsConfigurationStatusHasBeenSet = true; m_agentsConfigurationStatus = std::forward<AgentsConfigurationStatusT>(value); }
    template<typename AgentsConfigurationStatusT = Aws::Vector<AgentConfigurationStatus>>
    StartDataCollectionByAgentIdsResult& WithAgentsConfigurationStatus(AgentsConfigurationStatusT&& value) { SetAgentsConfigurationStatus(std::forward<AgentsConfigurationStatusT>(value)); return *this;}
    template<typename AgentsConfigurationStatusT = AgentConfigurationStatus>
    StartDataCollectionByAgentIdsResult& AddAgentsConfigurationStatus(AgentsConfigurationStatusT&& value) { m_agentsConfigurationStatusHasBeenSet = true; m_agentsConfigurationStatus.emplace_back(std::forward<AgentsConfigurationStatusT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartDataCollectionByAgentIdsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AgentConfigurationStatus> m_agentsConfigurationStatus;
    bool m_agentsConfigurationStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
