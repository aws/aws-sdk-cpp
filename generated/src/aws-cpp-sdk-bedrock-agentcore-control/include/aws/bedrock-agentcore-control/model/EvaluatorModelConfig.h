/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/BedrockEvaluatorModelConfig.h>

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
 * <p> The model configuration that specifies which foundation model to use for
 * evaluation and how to configure it. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/EvaluatorModelConfig">AWS
 * API Reference</a></p>
 */
class EvaluatorModelConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API EvaluatorModelConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API EvaluatorModelConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API EvaluatorModelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The Amazon Bedrock model configuration for evaluation. </p>
   */
  inline const BedrockEvaluatorModelConfig& GetBedrockEvaluatorModelConfig() const { return m_bedrockEvaluatorModelConfig; }
  inline bool BedrockEvaluatorModelConfigHasBeenSet() const { return m_bedrockEvaluatorModelConfigHasBeenSet; }
  template <typename BedrockEvaluatorModelConfigT = BedrockEvaluatorModelConfig>
  void SetBedrockEvaluatorModelConfig(BedrockEvaluatorModelConfigT&& value) {
    m_bedrockEvaluatorModelConfigHasBeenSet = true;
    m_bedrockEvaluatorModelConfig = std::forward<BedrockEvaluatorModelConfigT>(value);
  }
  template <typename BedrockEvaluatorModelConfigT = BedrockEvaluatorModelConfig>
  EvaluatorModelConfig& WithBedrockEvaluatorModelConfig(BedrockEvaluatorModelConfigT&& value) {
    SetBedrockEvaluatorModelConfig(std::forward<BedrockEvaluatorModelConfigT>(value));
    return *this;
  }
  ///@}
 private:
  BedrockEvaluatorModelConfig m_bedrockEvaluatorModelConfig;
  bool m_bedrockEvaluatorModelConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
