/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/AgentActionGroup.h>
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
namespace BedrockAgent
{
namespace Model
{
  class GetAgentActionGroupResult
  {
  public:
    AWS_BEDROCKAGENT_API GetAgentActionGroupResult() = default;
    AWS_BEDROCKAGENT_API GetAgentActionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API GetAgentActionGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains details about the action group.</p>
     */
    inline const AgentActionGroup& GetAgentActionGroup() const { return m_agentActionGroup; }
    template<typename AgentActionGroupT = AgentActionGroup>
    void SetAgentActionGroup(AgentActionGroupT&& value) { m_agentActionGroupHasBeenSet = true; m_agentActionGroup = std::forward<AgentActionGroupT>(value); }
    template<typename AgentActionGroupT = AgentActionGroup>
    GetAgentActionGroupResult& WithAgentActionGroup(AgentActionGroupT&& value) { SetAgentActionGroup(std::forward<AgentActionGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAgentActionGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AgentActionGroup m_agentActionGroup;
    bool m_agentActionGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
