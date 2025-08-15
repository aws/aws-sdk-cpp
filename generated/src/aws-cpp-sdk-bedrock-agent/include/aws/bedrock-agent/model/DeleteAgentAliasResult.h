/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/AgentAliasStatus.h>
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
  class DeleteAgentAliasResult
  {
  public:
    AWS_BEDROCKAGENT_API DeleteAgentAliasResult() = default;
    AWS_BEDROCKAGENT_API DeleteAgentAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API DeleteAgentAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the agent that the alias belongs to.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    DeleteAgentAliasResult& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the alias that was deleted.</p>
     */
    inline const Aws::String& GetAgentAliasId() const { return m_agentAliasId; }
    template<typename AgentAliasIdT = Aws::String>
    void SetAgentAliasId(AgentAliasIdT&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::forward<AgentAliasIdT>(value); }
    template<typename AgentAliasIdT = Aws::String>
    DeleteAgentAliasResult& WithAgentAliasId(AgentAliasIdT&& value) { SetAgentAliasId(std::forward<AgentAliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the alias.</p>
     */
    inline AgentAliasStatus GetAgentAliasStatus() const { return m_agentAliasStatus; }
    inline void SetAgentAliasStatus(AgentAliasStatus value) { m_agentAliasStatusHasBeenSet = true; m_agentAliasStatus = value; }
    inline DeleteAgentAliasResult& WithAgentAliasStatus(AgentAliasStatus value) { SetAgentAliasStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteAgentAliasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;

    AgentAliasStatus m_agentAliasStatus{AgentAliasStatus::NOT_SET};
    bool m_agentAliasStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
