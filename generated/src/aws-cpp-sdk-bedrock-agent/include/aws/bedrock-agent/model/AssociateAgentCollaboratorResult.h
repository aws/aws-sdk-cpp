/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/AgentCollaborator.h>
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
  class AssociateAgentCollaboratorResult
  {
  public:
    AWS_BEDROCKAGENT_API AssociateAgentCollaboratorResult() = default;
    AWS_BEDROCKAGENT_API AssociateAgentCollaboratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API AssociateAgentCollaboratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the collaborator.</p>
     */
    inline const AgentCollaborator& GetAgentCollaborator() const { return m_agentCollaborator; }
    template<typename AgentCollaboratorT = AgentCollaborator>
    void SetAgentCollaborator(AgentCollaboratorT&& value) { m_agentCollaboratorHasBeenSet = true; m_agentCollaborator = std::forward<AgentCollaboratorT>(value); }
    template<typename AgentCollaboratorT = AgentCollaborator>
    AssociateAgentCollaboratorResult& WithAgentCollaborator(AgentCollaboratorT&& value) { SetAgentCollaborator(std::forward<AgentCollaboratorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateAgentCollaboratorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AgentCollaborator m_agentCollaborator;
    bool m_agentCollaboratorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
