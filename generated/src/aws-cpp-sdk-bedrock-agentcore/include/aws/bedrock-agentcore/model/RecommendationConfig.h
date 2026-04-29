/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/SystemPromptRecommendationConfig.h>
#include <aws/bedrock-agentcore/model/ToolDescriptionRecommendationConfig.h>

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
 * <p>The configuration for a recommendation, varying by recommendation
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/RecommendationConfig">AWS
 * API Reference</a></p>
 */
class RecommendationConfig {
 public:
  AWS_BEDROCKAGENTCORE_API RecommendationConfig() = default;
  AWS_BEDROCKAGENTCORE_API RecommendationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API RecommendationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for a system prompt recommendation.</p>
   */
  inline const SystemPromptRecommendationConfig& GetSystemPromptRecommendationConfig() const { return m_systemPromptRecommendationConfig; }
  inline bool SystemPromptRecommendationConfigHasBeenSet() const { return m_systemPromptRecommendationConfigHasBeenSet; }
  template <typename SystemPromptRecommendationConfigT = SystemPromptRecommendationConfig>
  void SetSystemPromptRecommendationConfig(SystemPromptRecommendationConfigT&& value) {
    m_systemPromptRecommendationConfigHasBeenSet = true;
    m_systemPromptRecommendationConfig = std::forward<SystemPromptRecommendationConfigT>(value);
  }
  template <typename SystemPromptRecommendationConfigT = SystemPromptRecommendationConfig>
  RecommendationConfig& WithSystemPromptRecommendationConfig(SystemPromptRecommendationConfigT&& value) {
    SetSystemPromptRecommendationConfig(std::forward<SystemPromptRecommendationConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a tool description recommendation.</p>
   */
  inline const ToolDescriptionRecommendationConfig& GetToolDescriptionRecommendationConfig() const {
    return m_toolDescriptionRecommendationConfig;
  }
  inline bool ToolDescriptionRecommendationConfigHasBeenSet() const { return m_toolDescriptionRecommendationConfigHasBeenSet; }
  template <typename ToolDescriptionRecommendationConfigT = ToolDescriptionRecommendationConfig>
  void SetToolDescriptionRecommendationConfig(ToolDescriptionRecommendationConfigT&& value) {
    m_toolDescriptionRecommendationConfigHasBeenSet = true;
    m_toolDescriptionRecommendationConfig = std::forward<ToolDescriptionRecommendationConfigT>(value);
  }
  template <typename ToolDescriptionRecommendationConfigT = ToolDescriptionRecommendationConfig>
  RecommendationConfig& WithToolDescriptionRecommendationConfig(ToolDescriptionRecommendationConfigT&& value) {
    SetToolDescriptionRecommendationConfig(std::forward<ToolDescriptionRecommendationConfigT>(value));
    return *this;
  }
  ///@}
 private:
  SystemPromptRecommendationConfig m_systemPromptRecommendationConfig;

  ToolDescriptionRecommendationConfig m_toolDescriptionRecommendationConfig;
  bool m_systemPromptRecommendationConfigHasBeenSet = false;
  bool m_toolDescriptionRecommendationConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
