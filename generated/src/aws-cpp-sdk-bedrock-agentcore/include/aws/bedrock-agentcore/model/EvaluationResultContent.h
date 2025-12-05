/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/Context.h>
#include <aws/bedrock-agentcore/model/TokenUsage.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p> The comprehensive result of an evaluation containing the score, explanation,
 * evaluator metadata, and execution details. Provides both quantitative ratings
 * and qualitative insights about agent performance. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/EvaluationResultContent">AWS
 * API Reference</a></p>
 */
class EvaluationResultContent {
 public:
  AWS_BEDROCKAGENTCORE_API EvaluationResultContent() = default;
  AWS_BEDROCKAGENTCORE_API EvaluationResultContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API EvaluationResultContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the evaluator used to generate this
   * result. For custom evaluators, this is the full ARN; for built-in evaluators,
   * this follows the pattern <code>Builtin.{EvaluatorName}</code>. </p>
   */
  inline const Aws::String& GetEvaluatorArn() const { return m_evaluatorArn; }
  inline bool EvaluatorArnHasBeenSet() const { return m_evaluatorArnHasBeenSet; }
  template <typename EvaluatorArnT = Aws::String>
  void SetEvaluatorArn(EvaluatorArnT&& value) {
    m_evaluatorArnHasBeenSet = true;
    m_evaluatorArn = std::forward<EvaluatorArnT>(value);
  }
  template <typename EvaluatorArnT = Aws::String>
  EvaluationResultContent& WithEvaluatorArn(EvaluatorArnT&& value) {
    SetEvaluatorArn(std::forward<EvaluatorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the evaluator that produced this result. This
   * matches the <code>evaluatorId</code> provided in the evaluation request and can
   * be used to identify which evaluator generated specific results. </p>
   */
  inline const Aws::String& GetEvaluatorId() const { return m_evaluatorId; }
  inline bool EvaluatorIdHasBeenSet() const { return m_evaluatorIdHasBeenSet; }
  template <typename EvaluatorIdT = Aws::String>
  void SetEvaluatorId(EvaluatorIdT&& value) {
    m_evaluatorIdHasBeenSet = true;
    m_evaluatorId = std::forward<EvaluatorIdT>(value);
  }
  template <typename EvaluatorIdT = Aws::String>
  EvaluationResultContent& WithEvaluatorId(EvaluatorIdT&& value) {
    SetEvaluatorId(std::forward<EvaluatorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The human-readable name of the evaluator used for this evaluation. For
   * built-in evaluators, this is the descriptive name (e.g., "Helpfulness",
   * "Correctness"); for custom evaluators, this is the user-defined name. </p>
   */
  inline const Aws::String& GetEvaluatorName() const { return m_evaluatorName; }
  inline bool EvaluatorNameHasBeenSet() const { return m_evaluatorNameHasBeenSet; }
  template <typename EvaluatorNameT = Aws::String>
  void SetEvaluatorName(EvaluatorNameT&& value) {
    m_evaluatorNameHasBeenSet = true;
    m_evaluatorName = std::forward<EvaluatorNameT>(value);
  }
  template <typename EvaluatorNameT = Aws::String>
  EvaluationResultContent& WithEvaluatorName(EvaluatorNameT&& value) {
    SetEvaluatorName(std::forward<EvaluatorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The detailed explanation provided by the evaluator describing the reasoning
   * behind the assigned score. This qualitative feedback helps understand why
   * specific ratings were given and provides actionable insights for improvement.
   * </p>
   */
  inline const Aws::String& GetExplanation() const { return m_explanation; }
  inline bool ExplanationHasBeenSet() const { return m_explanationHasBeenSet; }
  template <typename ExplanationT = Aws::String>
  void SetExplanation(ExplanationT&& value) {
    m_explanationHasBeenSet = true;
    m_explanation = std::forward<ExplanationT>(value);
  }
  template <typename ExplanationT = Aws::String>
  EvaluationResultContent& WithExplanation(ExplanationT&& value) {
    SetExplanation(std::forward<ExplanationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The contextual information associated with this evaluation result, including
   * span context details that identify the specific traces and sessions that were
   * evaluated. </p>
   */
  inline const Context& GetContext() const { return m_context; }
  inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
  template <typename ContextT = Context>
  void SetContext(ContextT&& value) {
    m_contextHasBeenSet = true;
    m_context = std::forward<ContextT>(value);
  }
  template <typename ContextT = Context>
  EvaluationResultContent& WithContext(ContextT&& value) {
    SetContext(std::forward<ContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The numerical score assigned by the evaluator according to its configured
   * rating scale. For numerical scales, this is a decimal value within the defined
   * range. This field is not allowed for categorical scales. </p>
   */
  inline double GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(double value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline EvaluationResultContent& WithValue(double value) {
    SetValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The categorical label assigned by the evaluator when using a categorical
   * rating scale. This provides a human-readable description of the evaluation
   * result (e.g., "Excellent", "Good", "Poor") corresponding to the numerical value.
   * For numerical scales, this field is optional and provides a natural language
   * explanation of what the value means (e.g., value 0.5 = "Somewhat Helpful"). </p>
   */
  inline const Aws::String& GetLabel() const { return m_label; }
  inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
  template <typename LabelT = Aws::String>
  void SetLabel(LabelT&& value) {
    m_labelHasBeenSet = true;
    m_label = std::forward<LabelT>(value);
  }
  template <typename LabelT = Aws::String>
  EvaluationResultContent& WithLabel(LabelT&& value) {
    SetLabel(std::forward<LabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The token consumption statistics for this evaluation, including input
   * tokens, output tokens, and total tokens used by the underlying language model
   * during the evaluation process. </p>
   */
  inline const TokenUsage& GetTokenUsage() const { return m_tokenUsage; }
  inline bool TokenUsageHasBeenSet() const { return m_tokenUsageHasBeenSet; }
  template <typename TokenUsageT = TokenUsage>
  void SetTokenUsage(TokenUsageT&& value) {
    m_tokenUsageHasBeenSet = true;
    m_tokenUsage = std::forward<TokenUsageT>(value);
  }
  template <typename TokenUsageT = TokenUsage>
  EvaluationResultContent& WithTokenUsage(TokenUsageT&& value) {
    SetTokenUsage(std::forward<TokenUsageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The error message describing what went wrong if the evaluation failed.
   * Provides detailed information about evaluation failures to help diagnose and
   * resolve issues with evaluator configuration or input data. </p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  EvaluationResultContent& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The error code indicating the type of failure that occurred during
   * evaluation. Used to programmatically identify and handle different categories of
   * evaluation errors. </p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  EvaluationResultContent& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_evaluatorArn;

  Aws::String m_evaluatorId;

  Aws::String m_evaluatorName;

  Aws::String m_explanation;

  Context m_context;

  double m_value{0.0};

  Aws::String m_label;

  TokenUsage m_tokenUsage;

  Aws::String m_errorMessage;

  Aws::String m_errorCode;
  bool m_evaluatorArnHasBeenSet = false;
  bool m_evaluatorIdHasBeenSet = false;
  bool m_evaluatorNameHasBeenSet = false;
  bool m_explanationHasBeenSet = false;
  bool m_contextHasBeenSet = false;
  bool m_valueHasBeenSet = false;
  bool m_labelHasBeenSet = false;
  bool m_tokenUsageHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
