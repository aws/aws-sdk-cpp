/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/BedrockFoundationModelModelConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>Configuration for a Bedrock foundation model.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/BedrockFoundationModelConfiguration">AWS
 * API Reference</a></p>
 */
class BedrockFoundationModelConfiguration {
 public:
  AWS_BEDROCKAGENTRUNTIME_API BedrockFoundationModelConfiguration() = default;
  AWS_BEDROCKAGENTRUNTIME_API BedrockFoundationModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API BedrockFoundationModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The model configuration containing the model ARN.</p>
   */
  inline const BedrockFoundationModelModelConfiguration& GetModelConfiguration() const { return m_modelConfiguration; }
  inline bool ModelConfigurationHasBeenSet() const { return m_modelConfigurationHasBeenSet; }
  template <typename ModelConfigurationT = BedrockFoundationModelModelConfiguration>
  void SetModelConfiguration(ModelConfigurationT&& value) {
    m_modelConfigurationHasBeenSet = true;
    m_modelConfiguration = std::forward<ModelConfigurationT>(value);
  }
  template <typename ModelConfigurationT = BedrockFoundationModelModelConfiguration>
  BedrockFoundationModelConfiguration& WithModelConfiguration(ModelConfigurationT&& value) {
    SetModelConfiguration(std::forward<ModelConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  BedrockFoundationModelModelConfiguration m_modelConfiguration;
  bool m_modelConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
