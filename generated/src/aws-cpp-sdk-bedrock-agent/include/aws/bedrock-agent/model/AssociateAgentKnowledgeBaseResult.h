/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/AgentKnowledgeBase.h>
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
  class AssociateAgentKnowledgeBaseResult
  {
  public:
    AWS_BEDROCKAGENT_API AssociateAgentKnowledgeBaseResult() = default;
    AWS_BEDROCKAGENT_API AssociateAgentKnowledgeBaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API AssociateAgentKnowledgeBaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains details about the knowledge base that has been associated with the
     * agent.</p>
     */
    inline const AgentKnowledgeBase& GetAgentKnowledgeBase() const { return m_agentKnowledgeBase; }
    template<typename AgentKnowledgeBaseT = AgentKnowledgeBase>
    void SetAgentKnowledgeBase(AgentKnowledgeBaseT&& value) { m_agentKnowledgeBaseHasBeenSet = true; m_agentKnowledgeBase = std::forward<AgentKnowledgeBaseT>(value); }
    template<typename AgentKnowledgeBaseT = AgentKnowledgeBase>
    AssociateAgentKnowledgeBaseResult& WithAgentKnowledgeBase(AgentKnowledgeBaseT&& value) { SetAgentKnowledgeBase(std::forward<AgentKnowledgeBaseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateAgentKnowledgeBaseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AgentKnowledgeBase m_agentKnowledgeBase;
    bool m_agentKnowledgeBaseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
