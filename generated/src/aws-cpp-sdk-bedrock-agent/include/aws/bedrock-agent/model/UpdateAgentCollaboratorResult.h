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
  class UpdateAgentCollaboratorResult
  {
  public:
    AWS_BEDROCKAGENT_API UpdateAgentCollaboratorResult();
    AWS_BEDROCKAGENT_API UpdateAgentCollaboratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API UpdateAgentCollaboratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the collaborator.</p>
     */
    inline const AgentCollaborator& GetAgentCollaborator() const{ return m_agentCollaborator; }
    inline void SetAgentCollaborator(const AgentCollaborator& value) { m_agentCollaborator = value; }
    inline void SetAgentCollaborator(AgentCollaborator&& value) { m_agentCollaborator = std::move(value); }
    inline UpdateAgentCollaboratorResult& WithAgentCollaborator(const AgentCollaborator& value) { SetAgentCollaborator(value); return *this;}
    inline UpdateAgentCollaboratorResult& WithAgentCollaborator(AgentCollaborator&& value) { SetAgentCollaborator(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateAgentCollaboratorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateAgentCollaboratorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateAgentCollaboratorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AgentCollaborator m_agentCollaborator;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
