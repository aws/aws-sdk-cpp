/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/GuadrailAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_BEDROCKAGENTRUNTIME_API RetrieveResult() = default;
    AWS_BEDROCKAGENTRUNTIME_API RetrieveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API RetrieveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of results from querying the knowledge base.</p>
     */
    inline const Aws::Vector<KnowledgeBaseRetrievalResult>& GetRetrievalResults() const { return m_retrievalResults; }
    template<typename RetrievalResultsT = Aws::Vector<KnowledgeBaseRetrievalResult>>
    void SetRetrievalResults(RetrievalResultsT&& value) { m_retrievalResultsHasBeenSet = true; m_retrievalResults = std::forward<RetrievalResultsT>(value); }
    template<typename RetrievalResultsT = Aws::Vector<KnowledgeBaseRetrievalResult>>
    RetrieveResult& WithRetrievalResults(RetrievalResultsT&& value) { SetRetrievalResults(std::forward<RetrievalResultsT>(value)); return *this;}
    template<typename RetrievalResultsT = KnowledgeBaseRetrievalResult>
    RetrieveResult& AddRetrievalResults(RetrievalResultsT&& value) { m_retrievalResultsHasBeenSet = true; m_retrievalResults.emplace_back(std::forward<RetrievalResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies if there is a guardrail intervention in the response.</p>
     */
    inline GuadrailAction GetGuardrailAction() const { return m_guardrailAction; }
    inline void SetGuardrailAction(GuadrailAction value) { m_guardrailActionHasBeenSet = true; m_guardrailAction = value; }
    inline RetrieveResult& WithGuardrailAction(GuadrailAction value) { SetGuardrailAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If there are more results than can fit in the response, the response returns
     * a <code>nextToken</code>. Use this token in the <code>nextToken</code> field of
     * another request to retrieve the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    RetrieveResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RetrieveResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<KnowledgeBaseRetrievalResult> m_retrievalResults;
    bool m_retrievalResultsHasBeenSet = false;

    GuadrailAction m_guardrailAction{GuadrailAction::NOT_SET};
    bool m_guardrailActionHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
