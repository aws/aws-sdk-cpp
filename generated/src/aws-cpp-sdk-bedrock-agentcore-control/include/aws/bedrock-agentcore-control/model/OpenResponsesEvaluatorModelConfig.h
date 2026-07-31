/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ReasoningConfiguration.h>
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
 * <p> The configuration for using models served through the OpenResponses API in
 * evaluator assessments, including model selection and inference parameters.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/OpenResponsesEvaluatorModelConfig">AWS
 * API Reference</a></p>
 */
class OpenResponsesEvaluatorModelConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API OpenResponsesEvaluatorModelConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API OpenResponsesEvaluatorModelConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API OpenResponsesEvaluatorModelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The identifier of the model to use for evaluation. </p>
   */
  inline const Aws::String& GetModelId() const { return m_modelId; }
  inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
  template <typename ModelIdT = Aws::String>
  void SetModelId(ModelIdT&& value) {
    m_modelIdHasBeenSet = true;
    m_modelId = std::forward<ModelIdT>(value);
  }
  template <typename ModelIdT = Aws::String>
  OpenResponsesEvaluatorModelConfig& WithModelId(ModelIdT&& value) {
    SetModelId(std::forward<ModelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The maximum number of tokens to generate in the model response, including
   * visible output and reasoning tokens. </p>
   */
  inline int GetMaxOutputTokens() const { return m_maxOutputTokens; }
  inline bool MaxOutputTokensHasBeenSet() const { return m_maxOutputTokensHasBeenSet; }
  inline void SetMaxOutputTokens(int value) {
    m_maxOutputTokensHasBeenSet = true;
    m_maxOutputTokens = value;
  }
  inline OpenResponsesEvaluatorModelConfig& WithMaxOutputTokens(int value) {
    SetMaxOutputTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The temperature value that controls randomness in the model's responses.
   * Lower values produce more deterministic outputs. </p>
   */
  inline double GetTemperature() const { return m_temperature; }
  inline bool TemperatureHasBeenSet() const { return m_temperatureHasBeenSet; }
  inline void SetTemperature(double value) {
    m_temperatureHasBeenSet = true;
    m_temperature = value;
  }
  inline OpenResponsesEvaluatorModelConfig& WithTemperature(double value) {
    SetTemperature(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The top-p sampling parameter that controls the diversity of the model's
   * responses by limiting the cumulative probability of token choices. </p>
   */
  inline double GetTopP() const { return m_topP; }
  inline bool TopPHasBeenSet() const { return m_topPHasBeenSet; }
  inline void SetTopP(double value) {
    m_topPHasBeenSet = true;
    m_topP = value;
  }
  inline OpenResponsesEvaluatorModelConfig& WithTopP(double value) {
    SetTopP(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The reasoning configuration for reasoning models. Non-reasoning models
   * ignore this configuration. </p>
   */
  inline const ReasoningConfiguration& GetReasoning() const { return m_reasoning; }
  inline bool ReasoningHasBeenSet() const { return m_reasoningHasBeenSet; }
  template <typename ReasoningT = ReasoningConfiguration>
  void SetReasoning(ReasoningT&& value) {
    m_reasoningHasBeenSet = true;
    m_reasoning = std::forward<ReasoningT>(value);
  }
  template <typename ReasoningT = ReasoningConfiguration>
  OpenResponsesEvaluatorModelConfig& WithReasoning(ReasoningT&& value) {
    SetReasoning(std::forward<ReasoningT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelId;

  int m_maxOutputTokens{0};

  double m_temperature{0.0};

  double m_topP{0.0};

  ReasoningConfiguration m_reasoning;
  bool m_modelIdHasBeenSet = false;
  bool m_maxOutputTokensHasBeenSet = false;
  bool m_temperatureHasBeenSet = false;
  bool m_topPHasBeenSet = false;
  bool m_reasoningHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
