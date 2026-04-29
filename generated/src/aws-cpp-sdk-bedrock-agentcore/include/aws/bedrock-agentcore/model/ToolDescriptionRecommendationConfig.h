/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AgentTracesConfig.h>
#include <aws/bedrock-agentcore/model/ToolDescriptionSource.h>

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
 * <p>Configuration for generating tool description optimization
 * recommendations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ToolDescriptionRecommendationConfig">AWS
 * API Reference</a></p>
 */
class ToolDescriptionRecommendationConfig {
 public:
  AWS_BEDROCKAGENTCORE_API ToolDescriptionRecommendationConfig() = default;
  AWS_BEDROCKAGENTCORE_API ToolDescriptionRecommendationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ToolDescriptionRecommendationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current tool descriptions to optimize.</p>
   */
  inline const ToolDescriptionSource& GetToolDescription() const { return m_toolDescription; }
  inline bool ToolDescriptionHasBeenSet() const { return m_toolDescriptionHasBeenSet; }
  template <typename ToolDescriptionT = ToolDescriptionSource>
  void SetToolDescription(ToolDescriptionT&& value) {
    m_toolDescriptionHasBeenSet = true;
    m_toolDescription = std::forward<ToolDescriptionT>(value);
  }
  template <typename ToolDescriptionT = ToolDescriptionSource>
  ToolDescriptionRecommendationConfig& WithToolDescription(ToolDescriptionT&& value) {
    SetToolDescription(std::forward<ToolDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The agent traces to analyze for generating tool description
   * recommendations.</p>
   */
  inline const AgentTracesConfig& GetAgentTraces() const { return m_agentTraces; }
  inline bool AgentTracesHasBeenSet() const { return m_agentTracesHasBeenSet; }
  template <typename AgentTracesT = AgentTracesConfig>
  void SetAgentTraces(AgentTracesT&& value) {
    m_agentTracesHasBeenSet = true;
    m_agentTraces = std::forward<AgentTracesT>(value);
  }
  template <typename AgentTracesT = AgentTracesConfig>
  ToolDescriptionRecommendationConfig& WithAgentTraces(AgentTracesT&& value) {
    SetAgentTraces(std::forward<AgentTracesT>(value));
    return *this;
  }
  ///@}
 private:
  ToolDescriptionSource m_toolDescription;

  AgentTracesConfig m_agentTraces;
  bool m_toolDescriptionHasBeenSet = false;
  bool m_agentTracesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
