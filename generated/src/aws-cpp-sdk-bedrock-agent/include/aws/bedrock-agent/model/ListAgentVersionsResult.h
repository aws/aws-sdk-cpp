/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/AgentVersionSummary.h>
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
   * <p>List Agent Versions Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListAgentVersionsResponse">AWS
   * API Reference</a></p>
   */
  class ListAgentVersionsResult
  {
  public:
    AWS_BEDROCKAGENT_API ListAgentVersionsResult();
    AWS_BEDROCKAGENT_API ListAgentVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API ListAgentVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<AgentVersionSummary>& GetAgentVersionSummaries() const{ return m_agentVersionSummaries; }

    
    inline void SetAgentVersionSummaries(const Aws::Vector<AgentVersionSummary>& value) { m_agentVersionSummaries = value; }

    
    inline void SetAgentVersionSummaries(Aws::Vector<AgentVersionSummary>&& value) { m_agentVersionSummaries = std::move(value); }

    
    inline ListAgentVersionsResult& WithAgentVersionSummaries(const Aws::Vector<AgentVersionSummary>& value) { SetAgentVersionSummaries(value); return *this;}

    
    inline ListAgentVersionsResult& WithAgentVersionSummaries(Aws::Vector<AgentVersionSummary>&& value) { SetAgentVersionSummaries(std::move(value)); return *this;}

    
    inline ListAgentVersionsResult& AddAgentVersionSummaries(const AgentVersionSummary& value) { m_agentVersionSummaries.push_back(value); return *this; }

    
    inline ListAgentVersionsResult& AddAgentVersionSummaries(AgentVersionSummary&& value) { m_agentVersionSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListAgentVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListAgentVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListAgentVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAgentVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAgentVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAgentVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AgentVersionSummary> m_agentVersionSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
