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
 * <p>Maps a tool name to its JSON path within a configuration
 * bundle.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ConfigurationBundleToolEntry">AWS
 * API Reference</a></p>
 */
class ConfigurationBundleToolEntry {
 public:
  AWS_BEDROCKAGENTCORE_API ConfigurationBundleToolEntry() = default;
  AWS_BEDROCKAGENTCORE_API ConfigurationBundleToolEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ConfigurationBundleToolEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ConfigurationBundleToolEntry& WithToolName(ToolNameT&& value) {
    SetToolName(std::forward<ToolNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON path within the configuration bundle's components that contains the
   * tool description.</p>
   */
  inline const Aws::String& GetToolDescriptionJsonPath() const { return m_toolDescriptionJsonPath; }
  inline bool ToolDescriptionJsonPathHasBeenSet() const { return m_toolDescriptionJsonPathHasBeenSet; }
  template <typename ToolDescriptionJsonPathT = Aws::String>
  void SetToolDescriptionJsonPath(ToolDescriptionJsonPathT&& value) {
    m_toolDescriptionJsonPathHasBeenSet = true;
    m_toolDescriptionJsonPath = std::forward<ToolDescriptionJsonPathT>(value);
  }
  template <typename ToolDescriptionJsonPathT = Aws::String>
  ConfigurationBundleToolEntry& WithToolDescriptionJsonPath(ToolDescriptionJsonPathT&& value) {
    SetToolDescriptionJsonPath(std::forward<ToolDescriptionJsonPathT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_toolName;

  Aws::String m_toolDescriptionJsonPath;
  bool m_toolNameHasBeenSet = false;
  bool m_toolDescriptionJsonPathHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
