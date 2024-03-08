/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/AgentAliasSummary.h>
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
   * <p>List Agent Aliases Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListAgentAliasesResponse">AWS
   * API Reference</a></p>
   */
  class ListAgentAliasesResult
  {
  public:
    AWS_BEDROCKAGENT_API ListAgentAliasesResult();
    AWS_BEDROCKAGENT_API ListAgentAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API ListAgentAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<AgentAliasSummary>& GetAgentAliasSummaries() const{ return m_agentAliasSummaries; }

    
    inline void SetAgentAliasSummaries(const Aws::Vector<AgentAliasSummary>& value) { m_agentAliasSummaries = value; }

    
    inline void SetAgentAliasSummaries(Aws::Vector<AgentAliasSummary>&& value) { m_agentAliasSummaries = std::move(value); }

    
    inline ListAgentAliasesResult& WithAgentAliasSummaries(const Aws::Vector<AgentAliasSummary>& value) { SetAgentAliasSummaries(value); return *this;}

    
    inline ListAgentAliasesResult& WithAgentAliasSummaries(Aws::Vector<AgentAliasSummary>&& value) { SetAgentAliasSummaries(std::move(value)); return *this;}

    
    inline ListAgentAliasesResult& AddAgentAliasSummaries(const AgentAliasSummary& value) { m_agentAliasSummaries.push_back(value); return *this; }

    
    inline ListAgentAliasesResult& AddAgentAliasSummaries(AgentAliasSummary&& value) { m_agentAliasSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListAgentAliasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListAgentAliasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListAgentAliasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAgentAliasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAgentAliasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAgentAliasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AgentAliasSummary> m_agentAliasSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
