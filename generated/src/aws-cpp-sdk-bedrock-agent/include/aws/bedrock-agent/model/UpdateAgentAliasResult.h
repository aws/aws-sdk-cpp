/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/AgentAlias.h>
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
  class UpdateAgentAliasResult
  {
  public:
    AWS_BEDROCKAGENT_API UpdateAgentAliasResult() = default;
    AWS_BEDROCKAGENT_API UpdateAgentAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API UpdateAgentAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains details about the alias that was updated.</p>
     */
    inline const AgentAlias& GetAgentAlias() const { return m_agentAlias; }
    template<typename AgentAliasT = AgentAlias>
    void SetAgentAlias(AgentAliasT&& value) { m_agentAliasHasBeenSet = true; m_agentAlias = std::forward<AgentAliasT>(value); }
    template<typename AgentAliasT = AgentAlias>
    UpdateAgentAliasResult& WithAgentAlias(AgentAliasT&& value) { SetAgentAlias(std::forward<AgentAliasT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAgentAliasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AgentAlias m_agentAlias;
    bool m_agentAliasHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
