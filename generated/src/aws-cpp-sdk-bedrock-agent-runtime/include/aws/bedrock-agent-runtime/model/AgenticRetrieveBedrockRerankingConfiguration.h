/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveBedrockRerankingModelConfiguration.h>

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
 * <p>Configuration for a Bedrock reranking model.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveBedrockRerankingConfiguration">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveBedrockRerankingConfiguration {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveBedrockRerankingConfiguration() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveBedrockRerankingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveBedrockRerankingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The model configuration containing the model ARN.</p>
   */
  inline const AgenticRetrieveBedrockRerankingModelConfiguration& GetModelConfiguration() const { return m_modelConfiguration; }
  inline bool ModelConfigurationHasBeenSet() const { return m_modelConfigurationHasBeenSet; }
  template <typename ModelConfigurationT = AgenticRetrieveBedrockRerankingModelConfiguration>
  void SetModelConfiguration(ModelConfigurationT&& value) {
    m_modelConfigurationHasBeenSet = true;
    m_modelConfiguration = std::forward<ModelConfigurationT>(value);
  }
  template <typename ModelConfigurationT = AgenticRetrieveBedrockRerankingModelConfiguration>
  AgenticRetrieveBedrockRerankingConfiguration& WithModelConfiguration(ModelConfigurationT&& value) {
    SetModelConfiguration(std::forward<ModelConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  AgenticRetrieveBedrockRerankingModelConfiguration m_modelConfiguration;
  bool m_modelConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
