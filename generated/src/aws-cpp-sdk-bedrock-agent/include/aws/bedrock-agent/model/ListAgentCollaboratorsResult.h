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
    AWS_BEDROCKAGENT_API ListAgentCollaboratorsResult() = default;
    AWS_BEDROCKAGENT_API ListAgentCollaboratorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API ListAgentCollaboratorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of collaborator summaries.</p>
     */
    inline const Aws::Vector<AgentCollaboratorSummary>& GetAgentCollaboratorSummaries() const { return m_agentCollaboratorSummaries; }
    template<typename AgentCollaboratorSummariesT = Aws::Vector<AgentCollaboratorSummary>>
    void SetAgentCollaboratorSummaries(AgentCollaboratorSummariesT&& value) { m_agentCollaboratorSummariesHasBeenSet = true; m_agentCollaboratorSummaries = std::forward<AgentCollaboratorSummariesT>(value); }
    template<typename AgentCollaboratorSummariesT = Aws::Vector<AgentCollaboratorSummary>>
    ListAgentCollaboratorsResult& WithAgentCollaboratorSummaries(AgentCollaboratorSummariesT&& value) { SetAgentCollaboratorSummaries(std::forward<AgentCollaboratorSummariesT>(value)); return *this;}
    template<typename AgentCollaboratorSummariesT = AgentCollaboratorSummary>
    ListAgentCollaboratorsResult& AddAgentCollaboratorSummaries(AgentCollaboratorSummariesT&& value) { m_agentCollaboratorSummariesHasBeenSet = true; m_agentCollaboratorSummaries.emplace_back(std::forward<AgentCollaboratorSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAgentCollaboratorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAgentCollaboratorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AgentCollaboratorSummary> m_agentCollaboratorSummaries;
    bool m_agentCollaboratorSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
