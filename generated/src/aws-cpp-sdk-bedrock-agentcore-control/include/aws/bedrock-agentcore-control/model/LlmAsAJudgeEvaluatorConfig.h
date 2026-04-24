/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/EvaluatorModelConfig.h>
#include <aws/bedrock-agentcore-control/model/RatingScale.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p> The configuration for LLM-as-a-Judge evaluation that uses a language model
 * to assess agent performance based on custom instructions and rating scales.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/LlmAsAJudgeEvaluatorConfig">AWS
 * API Reference</a></p>
 */
class LlmAsAJudgeEvaluatorConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API LlmAsAJudgeEvaluatorConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API LlmAsAJudgeEvaluatorConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API LlmAsAJudgeEvaluatorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The evaluation instructions that guide the language model in assessing agent
   * performance, including criteria and evaluation guidelines. </p>
   */
  inline const Aws::String& GetInstructions() const { return m_instructions; }
  inline bool InstructionsHasBeenSet() const { return m_instructionsHasBeenSet; }
  template <typename InstructionsT = Aws::String>
  void SetInstructions(InstructionsT&& value) {
    m_instructionsHasBeenSet = true;
    m_instructions = std::forward<InstructionsT>(value);
  }
  template <typename InstructionsT = Aws::String>
  LlmAsAJudgeEvaluatorConfig& WithInstructions(InstructionsT&& value) {
    SetInstructions(std::forward<InstructionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The rating scale that defines how the evaluator should score agent
   * performance, either numerical or categorical. </p>
   */
  inline const RatingScale& GetRatingScale() const { return m_ratingScale; }
  inline bool RatingScaleHasBeenSet() const { return m_ratingScaleHasBeenSet; }
  template <typename RatingScaleT = RatingScale>
  void SetRatingScale(RatingScaleT&& value) {
    m_ratingScaleHasBeenSet = true;
    m_ratingScale = std::forward<RatingScaleT>(value);
  }
  template <typename RatingScaleT = RatingScale>
  LlmAsAJudgeEvaluatorConfig& WithRatingScale(RatingScaleT&& value) {
    SetRatingScale(std::forward<RatingScaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The model configuration that specifies which foundation model to use and how
   * to configure it for evaluation. </p>
   */
  inline const EvaluatorModelConfig& GetModelConfig() const { return m_modelConfig; }
  inline bool ModelConfigHasBeenSet() const { return m_modelConfigHasBeenSet; }
  template <typename ModelConfigT = EvaluatorModelConfig>
  void SetModelConfig(ModelConfigT&& value) {
    m_modelConfigHasBeenSet = true;
    m_modelConfig = std::forward<ModelConfigT>(value);
  }
  template <typename ModelConfigT = EvaluatorModelConfig>
  LlmAsAJudgeEvaluatorConfig& WithModelConfig(ModelConfigT&& value) {
    SetModelConfig(std::forward<ModelConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instructions;

  RatingScale m_ratingScale;

  EvaluatorModelConfig m_modelConfig;
  bool m_instructionsHasBeenSet = false;
  bool m_ratingScaleHasBeenSet = false;
  bool m_modelConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
