/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ToolDescriptionConfig.h>
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
 * <p>A tool description input containing the tool name and its current
 * description.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ToolDescriptionInput">AWS
 * API Reference</a></p>
 */
class ToolDescriptionInput {
 public:
  AWS_BEDROCKAGENTCORE_API ToolDescriptionInput() = default;
  AWS_BEDROCKAGENTCORE_API ToolDescriptionInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ToolDescriptionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the tool.</p>
   */
  inline const Aws::String& GetToolName() const { return m_toolName; }
  inline bool ToolNameHasBeenSet() const { return m_toolNameHasBeenSet; }
  template <typename ToolNameT = Aws::String>
  void SetToolName(ToolNameT&& value) {
    m_toolNameHasBeenSet = true;
    m_toolName = std::forward<ToolNameT>(value);
  }
  template <typename ToolNameT = Aws::String>
  ToolDescriptionInput& WithToolName(ToolNameT&& value) {
    SetToolName(std::forward<ToolNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current description of the tool to optimize.</p>
   */
  inline const ToolDescriptionConfig& GetToolDescription() const { return m_toolDescription; }
  inline bool ToolDescriptionHasBeenSet() const { return m_toolDescriptionHasBeenSet; }
  template <typename ToolDescriptionT = ToolDescriptionConfig>
  void SetToolDescription(ToolDescriptionT&& value) {
    m_toolDescriptionHasBeenSet = true;
    m_toolDescription = std::forward<ToolDescriptionT>(value);
  }
  template <typename ToolDescriptionT = ToolDescriptionConfig>
  ToolDescriptionInput& WithToolDescription(ToolDescriptionT&& value) {
    SetToolDescription(std::forward<ToolDescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_toolName;

  ToolDescriptionConfig m_toolDescription;
  bool m_toolNameHasBeenSet = false;
  bool m_toolDescriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
