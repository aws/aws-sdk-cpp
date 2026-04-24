/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessToolUseType.h>
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
 * <p>Start payload for a tool use content block.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessToolUseBlockStart">AWS
 * API Reference</a></p>
 */
class HarnessToolUseBlockStart {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessToolUseBlockStart() = default;
  AWS_BEDROCKAGENTCORE_API HarnessToolUseBlockStart(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessToolUseBlockStart& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique ID of this tool use.</p>
   */
  inline const Aws::String& GetToolUseId() const { return m_toolUseId; }
  inline bool ToolUseIdHasBeenSet() const { return m_toolUseIdHasBeenSet; }
  template <typename ToolUseIdT = Aws::String>
  void SetToolUseId(ToolUseIdT&& value) {
    m_toolUseIdHasBeenSet = true;
    m_toolUseId = std::forward<ToolUseIdT>(value);
  }
  template <typename ToolUseIdT = Aws::String>
  HarnessToolUseBlockStart& WithToolUseId(ToolUseIdT&& value) {
    SetToolUseId(std::forward<ToolUseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the tool being called.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  HarnessToolUseBlockStart& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of tool use.</p>
   */
  inline HarnessToolUseType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(HarnessToolUseType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline HarnessToolUseBlockStart& WithType(HarnessToolUseType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the MCP server providing this tool.</p>
   */
  inline const Aws::String& GetServerName() const { return m_serverName; }
  inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
  template <typename ServerNameT = Aws::String>
  void SetServerName(ServerNameT&& value) {
    m_serverNameHasBeenSet = true;
    m_serverName = std::forward<ServerNameT>(value);
  }
  template <typename ServerNameT = Aws::String>
  HarnessToolUseBlockStart& WithServerName(ServerNameT&& value) {
    SetServerName(std::forward<ServerNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_toolUseId;

  Aws::String m_name;

  HarnessToolUseType m_type{HarnessToolUseType::NOT_SET};

  Aws::String m_serverName;
  bool m_toolUseIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_serverNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
