/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CodeBasedEvaluatorConfig.h>
#include <aws/bedrock-agentcore-control/model/LlmAsAJudgeEvaluatorConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p> The configuration that defines how an evaluator assesses agent performance,
 * including the evaluation method and parameters. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/EvaluatorConfig">AWS
 * API Reference</a></p>
 */
class EvaluatorConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API EvaluatorConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API EvaluatorConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API EvaluatorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The LLM-as-a-Judge configuration that uses a language model to evaluate
   * agent performance based on custom instructions and rating scales. </p>
   */
  inline const LlmAsAJudgeEvaluatorConfig& GetLlmAsAJudge() const { return m_llmAsAJudge; }
  inline bool LlmAsAJudgeHasBeenSet() const { return m_llmAsAJudgeHasBeenSet; }
  template <typename LlmAsAJudgeT = LlmAsAJudgeEvaluatorConfig>
  void SetLlmAsAJudge(LlmAsAJudgeT&& value) {
    m_llmAsAJudgeHasBeenSet = true;
    m_llmAsAJudge = std::forward<LlmAsAJudgeT>(value);
  }
  template <typename LlmAsAJudgeT = LlmAsAJudgeEvaluatorConfig>
  EvaluatorConfig& WithLlmAsAJudge(LlmAsAJudgeT&& value) {
    SetLlmAsAJudge(std::forward<LlmAsAJudgeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Configuration for a code-based evaluator that uses a customer-managed Lambda
   * function to programmatically assess agent performance. </p>
   */
  inline const CodeBasedEvaluatorConfig& GetCodeBased() const { return m_codeBased; }
  inline bool CodeBasedHasBeenSet() const { return m_codeBasedHasBeenSet; }
  template <typename CodeBasedT = CodeBasedEvaluatorConfig>
  void SetCodeBased(CodeBasedT&& value) {
    m_codeBasedHasBeenSet = true;
    m_codeBased = std::forward<CodeBasedT>(value);
  }
  template <typename CodeBasedT = CodeBasedEvaluatorConfig>
  EvaluatorConfig& WithCodeBased(CodeBasedT&& value) {
    SetCodeBased(std::forward<CodeBasedT>(value));
    return *this;
  }
  ///@}
 private:
  LlmAsAJudgeEvaluatorConfig m_llmAsAJudge;

  CodeBasedEvaluatorConfig m_codeBased;
  bool m_llmAsAJudgeHasBeenSet = false;
  bool m_codeBasedHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
