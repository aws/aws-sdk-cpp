/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/AgentKnowledgeBaseSummary.h>
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
  /**
   * <p>List Agent Knowledge Bases Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListAgentKnowledgeBasesResponse">AWS
   * API Reference</a></p>
   */
  class ListAgentKnowledgeBasesResult
  {
  public:
    AWS_BEDROCKAGENT_API ListAgentKnowledgeBasesResult();
    AWS_BEDROCKAGENT_API ListAgentKnowledgeBasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API ListAgentKnowledgeBasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<AgentKnowledgeBaseSummary>& GetAgentKnowledgeBaseSummaries() const{ return m_agentKnowledgeBaseSummaries; }

    
    inline void SetAgentKnowledgeBaseSummaries(const Aws::Vector<AgentKnowledgeBaseSummary>& value) { m_agentKnowledgeBaseSummaries = value; }

    
    inline void SetAgentKnowledgeBaseSummaries(Aws::Vector<AgentKnowledgeBaseSummary>&& value) { m_agentKnowledgeBaseSummaries = std::move(value); }

    
    inline ListAgentKnowledgeBasesResult& WithAgentKnowledgeBaseSummaries(const Aws::Vector<AgentKnowledgeBaseSummary>& value) { SetAgentKnowledgeBaseSummaries(value); return *this;}

    
    inline ListAgentKnowledgeBasesResult& WithAgentKnowledgeBaseSummaries(Aws::Vector<AgentKnowledgeBaseSummary>&& value) { SetAgentKnowledgeBaseSummaries(std::move(value)); return *this;}

    
    inline ListAgentKnowledgeBasesResult& AddAgentKnowledgeBaseSummaries(const AgentKnowledgeBaseSummary& value) { m_agentKnowledgeBaseSummaries.push_back(value); return *this; }

    
    inline ListAgentKnowledgeBasesResult& AddAgentKnowledgeBaseSummaries(AgentKnowledgeBaseSummary&& value) { m_agentKnowledgeBaseSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListAgentKnowledgeBasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListAgentKnowledgeBasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListAgentKnowledgeBasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAgentKnowledgeBasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAgentKnowledgeBasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAgentKnowledgeBasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AgentKnowledgeBaseSummary> m_agentKnowledgeBaseSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
