/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/BedrockFoundationModelConfiguration.h>
#include <aws/bedrock-agent-runtime/model/FoundationModelConfigurationType.h>

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
 * <p>Configuration for the foundation model.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FoundationModelConfiguration">AWS
 * API Reference</a></p>
 */
class FoundationModelConfiguration {
 public:
  AWS_BEDROCKAGENTRUNTIME_API FoundationModelConfiguration() = default;
  AWS_BEDROCKAGENTRUNTIME_API FoundationModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API FoundationModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Bedrock foundation model configuration.</p>
   */
  inline const BedrockFoundationModelConfiguration& GetBedrockFoundationModelConfiguration() const {
    return m_bedrockFoundationModelConfiguration;
  }
  inline bool BedrockFoundationModelConfigurationHasBeenSet() const { return m_bedrockFoundationModelConfigurationHasBeenSet; }
  template <typename BedrockFoundationModelConfigurationT = BedrockFoundationModelConfiguration>
  void SetBedrockFoundationModelConfiguration(BedrockFoundationModelConfigurationT&& value) {
    m_bedrockFoundationModelConfigurationHasBeenSet = true;
    m_bedrockFoundationModelConfiguration = std::forward<BedrockFoundationModelConfigurationT>(value);
  }
  template <typename BedrockFoundationModelConfigurationT = BedrockFoundationModelConfiguration>
  FoundationModelConfiguration& WithBedrockFoundationModelConfiguration(BedrockFoundationModelConfigurationT&& value) {
    SetBedrockFoundationModelConfiguration(std::forward<BedrockFoundationModelConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of foundation model configuration.</p>
   */
  inline FoundationModelConfigurationType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(FoundationModelConfigurationType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline FoundationModelConfiguration& WithType(FoundationModelConfigurationType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  BedrockFoundationModelConfiguration m_bedrockFoundationModelConfiguration;

  FoundationModelConfigurationType m_type{FoundationModelConfigurationType::NOT_SET};
  bool m_bedrockFoundationModelConfigurationHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
