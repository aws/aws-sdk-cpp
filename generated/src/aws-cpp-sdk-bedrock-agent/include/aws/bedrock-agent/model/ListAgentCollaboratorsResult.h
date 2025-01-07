/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/AgentCollaboratorSummary.h>
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
  class ListAgentCollaboratorsResult
  {
  public:
    AWS_BEDROCKAGENT_API ListAgentCollaboratorsResult();
    AWS_BEDROCKAGENT_API ListAgentCollaboratorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API ListAgentCollaboratorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of collaborator summaries.</p>
     */
    inline const Aws::Vector<AgentCollaboratorSummary>& GetAgentCollaboratorSummaries() const{ return m_agentCollaboratorSummaries; }
    inline void SetAgentCollaboratorSummaries(const Aws::Vector<AgentCollaboratorSummary>& value) { m_agentCollaboratorSummaries = value; }
    inline void SetAgentCollaboratorSummaries(Aws::Vector<AgentCollaboratorSummary>&& value) { m_agentCollaboratorSummaries = std::move(value); }
    inline ListAgentCollaboratorsResult& WithAgentCollaboratorSummaries(const Aws::Vector<AgentCollaboratorSummary>& value) { SetAgentCollaboratorSummaries(value); return *this;}
    inline ListAgentCollaboratorsResult& WithAgentCollaboratorSummaries(Aws::Vector<AgentCollaboratorSummary>&& value) { SetAgentCollaboratorSummaries(std::move(value)); return *this;}
    inline ListAgentCollaboratorsResult& AddAgentCollaboratorSummaries(const AgentCollaboratorSummary& value) { m_agentCollaboratorSummaries.push_back(value); return *this; }
    inline ListAgentCollaboratorsResult& AddAgentCollaboratorSummaries(AgentCollaboratorSummary&& value) { m_agentCollaboratorSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAgentCollaboratorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAgentCollaboratorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAgentCollaboratorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAgentCollaboratorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAgentCollaboratorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAgentCollaboratorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AgentCollaboratorSummary> m_agentCollaboratorSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
