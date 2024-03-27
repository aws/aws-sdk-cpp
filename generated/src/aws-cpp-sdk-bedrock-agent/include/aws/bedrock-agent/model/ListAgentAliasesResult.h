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
  class ListAgentAliasesResult
  {
  public:
    AWS_BEDROCKAGENT_API ListAgentAliasesResult();
    AWS_BEDROCKAGENT_API ListAgentAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API ListAgentAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects, each of which contains information about an alias of the
     * agent.</p>
     */
    inline const Aws::Vector<AgentAliasSummary>& GetAgentAliasSummaries() const{ return m_agentAliasSummaries; }

    /**
     * <p>A list of objects, each of which contains information about an alias of the
     * agent.</p>
     */
    inline void SetAgentAliasSummaries(const Aws::Vector<AgentAliasSummary>& value) { m_agentAliasSummaries = value; }

    /**
     * <p>A list of objects, each of which contains information about an alias of the
     * agent.</p>
     */
    inline void SetAgentAliasSummaries(Aws::Vector<AgentAliasSummary>&& value) { m_agentAliasSummaries = std::move(value); }

    /**
     * <p>A list of objects, each of which contains information about an alias of the
     * agent.</p>
     */
    inline ListAgentAliasesResult& WithAgentAliasSummaries(const Aws::Vector<AgentAliasSummary>& value) { SetAgentAliasSummaries(value); return *this;}

    /**
     * <p>A list of objects, each of which contains information about an alias of the
     * agent.</p>
     */
    inline ListAgentAliasesResult& WithAgentAliasSummaries(Aws::Vector<AgentAliasSummary>&& value) { SetAgentAliasSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of objects, each of which contains information about an alias of the
     * agent.</p>
     */
    inline ListAgentAliasesResult& AddAgentAliasSummaries(const AgentAliasSummary& value) { m_agentAliasSummaries.push_back(value); return *this; }

    /**
     * <p>A list of objects, each of which contains information about an alias of the
     * agent.</p>
     */
    inline ListAgentAliasesResult& AddAgentAliasSummaries(AgentAliasSummary&& value) { m_agentAliasSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
    inline ListAgentAliasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
    inline ListAgentAliasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
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
