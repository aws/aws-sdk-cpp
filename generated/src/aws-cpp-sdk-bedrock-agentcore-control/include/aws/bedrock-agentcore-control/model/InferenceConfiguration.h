/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p> The configuration parameters that control how the foundation model behaves
 * during evaluation, including response generation settings. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/InferenceConfiguration">AWS
 * API Reference</a></p>
 */
class InferenceConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API InferenceConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API InferenceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API InferenceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The maximum number of tokens to generate in the model response during
   * evaluation. </p>
   */
  inline int GetMaxTokens() const { return m_maxTokens; }
  inline bool MaxTokensHasBeenSet() const { return m_maxTokensHasBeenSet; }
  inline void SetMaxTokens(int value) {
    m_maxTokensHasBeenSet = true;
    m_maxTokens = value;
  }
  inline InferenceConfiguration& WithMaxTokens(int value) {
    SetMaxTokens(value);
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
  inline InferenceConfiguration& WithTemperature(double value) {
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
  inline InferenceConfiguration& WithTopP(double value) {
    SetTopP(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The list of sequences that will cause the model to stop generating tokens
   * when encountered. </p>
   */
  inline const Aws::Vector<Aws::String>& GetStopSequences() const { return m_stopSequences; }
  inline bool StopSequencesHasBeenSet() const { return m_stopSequencesHasBeenSet; }
  template <typename StopSequencesT = Aws::Vector<Aws::String>>
  void SetStopSequences(StopSequencesT&& value) {
    m_stopSequencesHasBeenSet = true;
    m_stopSequences = std::forward<StopSequencesT>(value);
  }
  template <typename StopSequencesT = Aws::Vector<Aws::String>>
  InferenceConfiguration& WithStopSequences(StopSequencesT&& value) {
    SetStopSequences(std::forward<StopSequencesT>(value));
    return *this;
  }
  template <typename StopSequencesT = Aws::String>
  InferenceConfiguration& AddStopSequences(StopSequencesT&& value) {
    m_stopSequencesHasBeenSet = true;
    m_stopSequences.emplace_back(std::forward<StopSequencesT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxTokens{0};

  double m_temperature{0.0};

  double m_topP{0.0};

  Aws::Vector<Aws::String> m_stopSequences;
  bool m_maxTokensHasBeenSet = false;
  bool m_temperatureHasBeenSet = false;
  bool m_topPHasBeenSet = false;
  bool m_stopSequencesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
