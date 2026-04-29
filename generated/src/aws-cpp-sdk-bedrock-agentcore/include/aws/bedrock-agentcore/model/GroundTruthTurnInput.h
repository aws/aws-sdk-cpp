/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The input for a ground truth conversation turn.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GroundTruthTurnInput">AWS
 * API Reference</a></p>
 */
class GroundTruthTurnInput {
 public:
  AWS_BEDROCKAGENTCORE_API GroundTruthTurnInput() = default;
  AWS_BEDROCKAGENTCORE_API GroundTruthTurnInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API GroundTruthTurnInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The text prompt for this conversation turn.</p>
   */
  inline const Aws::String& GetPrompt() const { return m_prompt; }
  inline bool PromptHasBeenSet() const { return m_promptHasBeenSet; }
  template <typename PromptT = Aws::String>
  void SetPrompt(PromptT&& value) {
    m_promptHasBeenSet = true;
    m_prompt = std::forward<PromptT>(value);
  }
  template <typename PromptT = Aws::String>
  GroundTruthTurnInput& WithPrompt(PromptT&& value) {
    SetPrompt(std::forward<PromptT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_prompt;
  bool m_promptHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
