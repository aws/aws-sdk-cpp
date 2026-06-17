/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveBedrockGuardrailConfiguration.h>

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
 * <p>Policy configuration for agentic retrieval.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrievePolicyConfiguration">AWS
 * API Reference</a></p>
 */
class AgenticRetrievePolicyConfiguration {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrievePolicyConfiguration() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrievePolicyConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrievePolicyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for Bedrock guardrails to apply during retrieval.</p>
   */
  inline const AgenticRetrieveBedrockGuardrailConfiguration& GetBedrockGuardrailConfiguration() const {
    return m_bedrockGuardrailConfiguration;
  }
  inline bool BedrockGuardrailConfigurationHasBeenSet() const { return m_bedrockGuardrailConfigurationHasBeenSet; }
  template <typename BedrockGuardrailConfigurationT = AgenticRetrieveBedrockGuardrailConfiguration>
  void SetBedrockGuardrailConfiguration(BedrockGuardrailConfigurationT&& value) {
    m_bedrockGuardrailConfigurationHasBeenSet = true;
    m_bedrockGuardrailConfiguration = std::forward<BedrockGuardrailConfigurationT>(value);
  }
  template <typename BedrockGuardrailConfigurationT = AgenticRetrieveBedrockGuardrailConfiguration>
  AgenticRetrievePolicyConfiguration& WithBedrockGuardrailConfiguration(BedrockGuardrailConfigurationT&& value) {
    SetBedrockGuardrailConfiguration(std::forward<BedrockGuardrailConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  AgenticRetrieveBedrockGuardrailConfiguration m_bedrockGuardrailConfiguration;
  bool m_bedrockGuardrailConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
