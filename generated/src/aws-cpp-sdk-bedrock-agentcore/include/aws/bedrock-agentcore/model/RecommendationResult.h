/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/SystemPromptRecommendationResult.h>
#include <aws/bedrock-agentcore/model/ToolDescriptionRecommendationResult.h>

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
 * <p>The result of a recommendation, containing the optimized
 * output.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/RecommendationResult">AWS
 * API Reference</a></p>
 */
class RecommendationResult {
 public:
  AWS_BEDROCKAGENTCORE_API RecommendationResult() = default;
  AWS_BEDROCKAGENTCORE_API RecommendationResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API RecommendationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The result of a system prompt recommendation.</p>
   */
  inline const SystemPromptRecommendationResult& GetSystemPromptRecommendationResult() const { return m_systemPromptRecommendationResult; }
  inline bool SystemPromptRecommendationResultHasBeenSet() const { return m_systemPromptRecommendationResultHasBeenSet; }
  template <typename SystemPromptRecommendationResultT = SystemPromptRecommendationResult>
  void SetSystemPromptRecommendationResult(SystemPromptRecommendationResultT&& value) {
    m_systemPromptRecommendationResultHasBeenSet = true;
    m_systemPromptRecommendationResult = std::forward<SystemPromptRecommendationResultT>(value);
  }
  template <typename SystemPromptRecommendationResultT = SystemPromptRecommendationResult>
  RecommendationResult& WithSystemPromptRecommendationResult(SystemPromptRecommendationResultT&& value) {
    SetSystemPromptRecommendationResult(std::forward<SystemPromptRecommendationResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result of a tool description recommendation.</p>
   */
  inline const ToolDescriptionRecommendationResult& GetToolDescriptionRecommendationResult() const {
    return m_toolDescriptionRecommendationResult;
  }
  inline bool ToolDescriptionRecommendationResultHasBeenSet() const { return m_toolDescriptionRecommendationResultHasBeenSet; }
  template <typename ToolDescriptionRecommendationResultT = ToolDescriptionRecommendationResult>
  void SetToolDescriptionRecommendationResult(ToolDescriptionRecommendationResultT&& value) {
    m_toolDescriptionRecommendationResultHasBeenSet = true;
    m_toolDescriptionRecommendationResult = std::forward<ToolDescriptionRecommendationResultT>(value);
  }
  template <typename ToolDescriptionRecommendationResultT = ToolDescriptionRecommendationResult>
  RecommendationResult& WithToolDescriptionRecommendationResult(ToolDescriptionRecommendationResultT&& value) {
    SetToolDescriptionRecommendationResult(std::forward<ToolDescriptionRecommendationResultT>(value));
    return *this;
  }
  ///@}
 private:
  SystemPromptRecommendationResult m_systemPromptRecommendationResult;

  ToolDescriptionRecommendationResult m_toolDescriptionRecommendationResult;
  bool m_systemPromptRecommendationResultHasBeenSet = false;
  bool m_toolDescriptionRecommendationResultHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
