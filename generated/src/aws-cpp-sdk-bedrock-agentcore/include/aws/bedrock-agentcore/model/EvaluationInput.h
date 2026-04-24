/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p> The input data structure containing agent session spans in OpenTelemetry
 * format. Supports traces from frameworks like Strands (AgentCore Runtime) and
 * LangGraph with OpenInference instrumentation for comprehensive evaluation.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/EvaluationInput">AWS
 * API Reference</a></p>
 */
class EvaluationInput {
 public:
  AWS_BEDROCKAGENTCORE_API EvaluationInput() = default;
  AWS_BEDROCKAGENTCORE_API EvaluationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API EvaluationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The collection of spans representing agent execution traces within a
   * session. Each span contains detailed information about tool calls, model
   * interactions, and other agent activities that can be evaluated for quality and
   * performance. </p>
   */
  inline const Aws::Vector<Aws::Utils::Document>& GetSessionSpans() const { return m_sessionSpans; }
  inline bool SessionSpansHasBeenSet() const { return m_sessionSpansHasBeenSet; }
  template <typename SessionSpansT = Aws::Vector<Aws::Utils::Document>>
  void SetSessionSpans(SessionSpansT&& value) {
    m_sessionSpansHasBeenSet = true;
    m_sessionSpans = std::forward<SessionSpansT>(value);
  }
  template <typename SessionSpansT = Aws::Vector<Aws::Utils::Document>>
  EvaluationInput& WithSessionSpans(SessionSpansT&& value) {
    SetSessionSpans(std::forward<SessionSpansT>(value));
    return *this;
  }
  template <typename SessionSpansT = Aws::Utils::Document>
  EvaluationInput& AddSessionSpans(SessionSpansT&& value) {
    m_sessionSpansHasBeenSet = true;
    m_sessionSpans.emplace_back(std::forward<SessionSpansT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::Utils::Document> m_sessionSpans;
  bool m_sessionSpansHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
