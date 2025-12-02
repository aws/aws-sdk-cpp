/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/EvaluationInput.h>
#include <aws/bedrock-agentcore/model/EvaluationTarget.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 */
class EvaluateRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API EvaluateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "Evaluate"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p> The unique identifier of the evaluator to use for scoring. Can be a built-in
   * evaluator (e.g., <code>Builtin.Helpfulness</code>,
   * <code>Builtin.Correctness</code>) or a custom evaluator ARN created through the
   * control plane API. </p>
   */
  inline const Aws::String& GetEvaluatorId() const { return m_evaluatorId; }
  inline bool EvaluatorIdHasBeenSet() const { return m_evaluatorIdHasBeenSet; }
  template <typename EvaluatorIdT = Aws::String>
  void SetEvaluatorId(EvaluatorIdT&& value) {
    m_evaluatorIdHasBeenSet = true;
    m_evaluatorId = std::forward<EvaluatorIdT>(value);
  }
  template <typename EvaluatorIdT = Aws::String>
  EvaluateRequest& WithEvaluatorId(EvaluatorIdT&& value) {
    SetEvaluatorId(std::forward<EvaluatorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The input data containing agent session spans to be evaluated. Includes a
   * list of spans in OpenTelemetry format from supported frameworks like Strands
   * (AgentCore Runtime) or LangGraph with OpenInference instrumentation. </p>
   */
  inline const EvaluationInput& GetEvaluationInput() const { return m_evaluationInput; }
  inline bool EvaluationInputHasBeenSet() const { return m_evaluationInputHasBeenSet; }
  template <typename EvaluationInputT = EvaluationInput>
  void SetEvaluationInput(EvaluationInputT&& value) {
    m_evaluationInputHasBeenSet = true;
    m_evaluationInput = std::forward<EvaluationInputT>(value);
  }
  template <typename EvaluationInputT = EvaluationInput>
  EvaluateRequest& WithEvaluationInput(EvaluationInputT&& value) {
    SetEvaluationInput(std::forward<EvaluationInputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The specific trace or span IDs to evaluate within the provided input. Allows
   * targeting evaluation at different levels: individual tool calls, single
   * request-response interactions (traces), or entire conversation sessions. </p>
   */
  inline const EvaluationTarget& GetEvaluationTarget() const { return m_evaluationTarget; }
  inline bool EvaluationTargetHasBeenSet() const { return m_evaluationTargetHasBeenSet; }
  template <typename EvaluationTargetT = EvaluationTarget>
  void SetEvaluationTarget(EvaluationTargetT&& value) {
    m_evaluationTargetHasBeenSet = true;
    m_evaluationTarget = std::forward<EvaluationTargetT>(value);
  }
  template <typename EvaluationTargetT = EvaluationTarget>
  EvaluateRequest& WithEvaluationTarget(EvaluationTargetT&& value) {
    SetEvaluationTarget(std::forward<EvaluationTargetT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_evaluatorId;
  bool m_evaluatorIdHasBeenSet = false;

  EvaluationInput m_evaluationInput;
  bool m_evaluationInputHasBeenSet = false;

  EvaluationTarget m_evaluationTarget;
  bool m_evaluationTargetHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
