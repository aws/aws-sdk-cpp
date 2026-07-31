/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/ToolReference.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockRuntime {
namespace Model {

/**
 * <p>A content block for removing a tool from the available tool set
 * mid-conversation. Each block references a single tool via its <code>tool</code>
 * field. Use within a <code>system</code> role message to remove a tool without
 * re-sending the full tool configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ToolRemovalBlock">AWS
 * API Reference</a></p>
 */
class ToolRemovalBlock {
 public:
  AWS_BEDROCKRUNTIME_API ToolRemovalBlock() = default;
  AWS_BEDROCKRUNTIME_API ToolRemovalBlock(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API ToolRemovalBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A reference to the tool to remove from the available tool set.</p>
   */
  inline const ToolReference& GetTool() const { return m_tool; }
  inline bool ToolHasBeenSet() const { return m_toolHasBeenSet; }
  template <typename ToolT = ToolReference>
  void SetTool(ToolT&& value) {
    m_toolHasBeenSet = true;
    m_tool = std::forward<ToolT>(value);
  }
  template <typename ToolT = ToolReference>
  ToolRemovalBlock& WithTool(ToolT&& value) {
    SetTool(std::forward<ToolT>(value));
    return *this;
  }
  ///@}
 private:
  ToolReference m_tool;
  bool m_toolHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
