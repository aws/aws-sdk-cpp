/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AgentTracesConfig.h>
#include <aws/bedrock-agentcore/model/RecommendationEvaluationConfig.h>
#include <aws/bedrock-agentcore/model/SystemPromptConfig.h>

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
 * <p>Configuration for generating system prompt optimization
 * recommendations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/SystemPromptRecommendationConfig">AWS
 * API Reference</a></p>
 */
class SystemPromptRecommendationConfig {
 public:
  AWS_BEDROCKAGENTCORE_API SystemPromptRecommendationConfig() = default;
  AWS_BEDROCKAGENTCORE_API SystemPromptRecommendationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API SystemPromptRecommendationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current system prompt to optimize.</p>
   */
  inline const SystemPromptConfig& GetSystemPrompt() const { return m_systemPrompt; }
  inline bool SystemPromptHasBeenSet() const { return m_systemPromptHasBeenSet; }
  template <typename SystemPromptT = SystemPromptConfig>
  void SetSystemPrompt(SystemPromptT&& value) {
    m_systemPromptHasBeenSet = true;
    m_systemPrompt = std::forward<SystemPromptT>(value);
  }
  template <typename SystemPromptT = SystemPromptConfig>
  SystemPromptRecommendationConfig& WithSystemPrompt(SystemPromptT&& value) {
    SetSystemPrompt(std::forward<SystemPromptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The agent traces to analyze for generating recommendations.</p>
   */
  inline const AgentTracesConfig& GetAgentTraces() const { return m_agentTraces; }
  inline bool AgentTracesHasBeenSet() const { return m_agentTracesHasBeenSet; }
  template <typename AgentTracesT = AgentTracesConfig>
  void SetAgentTraces(AgentTracesT&& value) {
    m_agentTracesHasBeenSet = true;
    m_agentTraces = std::forward<AgentTracesT>(value);
  }
  template <typename AgentTracesT = AgentTracesConfig>
  SystemPromptRecommendationConfig& WithAgentTraces(AgentTracesT&& value) {
    SetAgentTraces(std::forward<AgentTracesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The evaluation configuration specifying which evaluator to use for assessing
   * recommendation quality.</p>
   */
  inline const RecommendationEvaluationConfig& GetEvaluationConfig() const { return m_evaluationConfig; }
  inline bool EvaluationConfigHasBeenSet() const { return m_evaluationConfigHasBeenSet; }
  template <typename EvaluationConfigT = RecommendationEvaluationConfig>
  void SetEvaluationConfig(EvaluationConfigT&& value) {
    m_evaluationConfigHasBeenSet = true;
    m_evaluationConfig = std::forward<EvaluationConfigT>(value);
  }
  template <typename EvaluationConfigT = RecommendationEvaluationConfig>
  SystemPromptRecommendationConfig& WithEvaluationConfig(EvaluationConfigT&& value) {
    SetEvaluationConfig(std::forward<EvaluationConfigT>(value));
    return *this;
  }
  ///@}
 private:
  SystemPromptConfig m_systemPrompt;

  AgentTracesConfig m_agentTraces;

  RecommendationEvaluationConfig m_evaluationConfig;
  bool m_systemPromptHasBeenSet = false;
  bool m_agentTracesHasBeenSet = false;
  bool m_evaluationConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
