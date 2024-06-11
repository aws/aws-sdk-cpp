﻿/**
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
    AWS_APPLICATIONDISCOVERYSERVICE_API StartDataCollectionByAgentIdsResult();
    AWS_APPLICATIONDISCOVERYSERVICE_API StartDataCollectionByAgentIdsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API StartDataCollectionByAgentIdsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about agents that were instructed to start collecting data.
     * Information includes the agent ID, a description of the operation performed, and
     * whether the agent configuration was updated.</p>
     */
    inline const Aws::Vector<AgentConfigurationStatus>& GetAgentsConfigurationStatus() const{ return m_agentsConfigurationStatus; }
    inline void SetAgentsConfigurationStatus(const Aws::Vector<AgentConfigurationStatus>& value) { m_agentsConfigurationStatus = value; }
    inline void SetAgentsConfigurationStatus(Aws::Vector<AgentConfigurationStatus>&& value) { m_agentsConfigurationStatus = std::move(value); }
    inline StartDataCollectionByAgentIdsResult& WithAgentsConfigurationStatus(const Aws::Vector<AgentConfigurationStatus>& value) { SetAgentsConfigurationStatus(value); return *this;}
    inline StartDataCollectionByAgentIdsResult& WithAgentsConfigurationStatus(Aws::Vector<AgentConfigurationStatus>&& value) { SetAgentsConfigurationStatus(std::move(value)); return *this;}
    inline StartDataCollectionByAgentIdsResult& AddAgentsConfigurationStatus(const AgentConfigurationStatus& value) { m_agentsConfigurationStatus.push_back(value); return *this; }
    inline StartDataCollectionByAgentIdsResult& AddAgentsConfigurationStatus(AgentConfigurationStatus&& value) { m_agentsConfigurationStatus.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartDataCollectionByAgentIdsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartDataCollectionByAgentIdsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartDataCollectionByAgentIdsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AgentConfigurationStatus> m_agentsConfigurationStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
