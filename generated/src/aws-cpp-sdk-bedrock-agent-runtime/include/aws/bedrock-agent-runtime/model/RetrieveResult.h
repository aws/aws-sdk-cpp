/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBaseRetrievalResult.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{
  class RetrieveResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrieveResult();
    AWS_BEDROCKAGENTRUNTIME_API RetrieveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API RetrieveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are more results than can fit in the response, the response returns
     * a <code>nextToken</code>. Use this token in the <code>nextToken</code> field of
     * another request to retrieve the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more results than can fit in the response, the response returns
     * a <code>nextToken</code>. Use this token in the <code>nextToken</code> field of
     * another request to retrieve the next batch of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more results than can fit in the response, the response returns
     * a <code>nextToken</code>. Use this token in the <code>nextToken</code> field of
     * another request to retrieve the next batch of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more results than can fit in the response, the response returns
     * a <code>nextToken</code>. Use this token in the <code>nextToken</code> field of
     * another request to retrieve the next batch of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more results than can fit in the response, the response returns
     * a <code>nextToken</code>. Use this token in the <code>nextToken</code> field of
     * another request to retrieve the next batch of results.</p>
     */
    inline RetrieveResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more results than can fit in the response, the response returns
     * a <code>nextToken</code>. Use this token in the <code>nextToken</code> field of
     * another request to retrieve the next batch of results.</p>
     */
    inline RetrieveResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more results than can fit in the response, the response returns
     * a <code>nextToken</code>. Use this token in the <code>nextToken</code> field of
     * another request to retrieve the next batch of results.</p>
     */
    inline RetrieveResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of results from querying the knowledge base.</p>
     */
    inline const Aws::Vector<KnowledgeBaseRetrievalResult>& GetRetrievalResults() const{ return m_retrievalResults; }

    /**
     * <p>A list of results from querying the knowledge base.</p>
     */
    inline void SetRetrievalResults(const Aws::Vector<KnowledgeBaseRetrievalResult>& value) { m_retrievalResults = value; }

    /**
     * <p>A list of results from querying the knowledge base.</p>
     */
    inline void SetRetrievalResults(Aws::Vector<KnowledgeBaseRetrievalResult>&& value) { m_retrievalResults = std::move(value); }

    /**
     * <p>A list of results from querying the knowledge base.</p>
     */
    inline RetrieveResult& WithRetrievalResults(const Aws::Vector<KnowledgeBaseRetrievalResult>& value) { SetRetrievalResults(value); return *this;}

    /**
     * <p>A list of results from querying the knowledge base.</p>
     */
    inline RetrieveResult& WithRetrievalResults(Aws::Vector<KnowledgeBaseRetrievalResult>&& value) { SetRetrievalResults(std::move(value)); return *this;}

    /**
     * <p>A list of results from querying the knowledge base.</p>
     */
    inline RetrieveResult& AddRetrievalResults(const KnowledgeBaseRetrievalResult& value) { m_retrievalResults.push_back(value); return *this; }

    /**
     * <p>A list of results from querying the knowledge base.</p>
     */
    inline RetrieveResult& AddRetrievalResults(KnowledgeBaseRetrievalResult&& value) { m_retrievalResults.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RetrieveResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RetrieveResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RetrieveResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<KnowledgeBaseRetrievalResult> m_retrievalResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
