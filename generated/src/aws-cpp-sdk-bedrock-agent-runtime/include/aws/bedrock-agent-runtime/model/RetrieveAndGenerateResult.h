/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/GuadrailAction.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateOutput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/Citation.h>
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
  class RetrieveAndGenerateResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateResult() = default;
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of segments of the generated response that are based on sources in the
     * knowledge base, alongside information about the sources.</p>
     */
    inline const Aws::Vector<Citation>& GetCitations() const { return m_citations; }
    template<typename CitationsT = Aws::Vector<Citation>>
    void SetCitations(CitationsT&& value) { m_citationsHasBeenSet = true; m_citations = std::forward<CitationsT>(value); }
    template<typename CitationsT = Aws::Vector<Citation>>
    RetrieveAndGenerateResult& WithCitations(CitationsT&& value) { SetCitations(std::forward<CitationsT>(value)); return *this;}
    template<typename CitationsT = Citation>
    RetrieveAndGenerateResult& AddCitations(CitationsT&& value) { m_citationsHasBeenSet = true; m_citations.emplace_back(std::forward<CitationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies if there is a guardrail intervention in the response.</p>
     */
    inline GuadrailAction GetGuardrailAction() const { return m_guardrailAction; }
    inline void SetGuardrailAction(GuadrailAction value) { m_guardrailActionHasBeenSet = true; m_guardrailAction = value; }
    inline RetrieveAndGenerateResult& WithGuardrailAction(GuadrailAction value) { SetGuardrailAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the response generated from querying the knowledge base.</p>
     */
    inline const RetrieveAndGenerateOutput& GetOutput() const { return m_output; }
    template<typename OutputT = RetrieveAndGenerateOutput>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = RetrieveAndGenerateOutput>
    RetrieveAndGenerateResult& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the session. When you first make a
     * <code>RetrieveAndGenerate</code> request, Amazon Bedrock automatically generates
     * this value. You must reuse this value for all subsequent requests in the same
     * conversational session. This value allows Amazon Bedrock to maintain context and
     * knowledge from previous interactions. You can't explicitly set the
     * <code>sessionId</code> yourself.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    RetrieveAndGenerateResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RetrieveAndGenerateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Citation> m_citations;
    bool m_citationsHasBeenSet = false;

    GuadrailAction m_guardrailAction{GuadrailAction::NOT_SET};
    bool m_guardrailActionHasBeenSet = false;

    RetrieveAndGenerateOutput m_output;
    bool m_outputHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
