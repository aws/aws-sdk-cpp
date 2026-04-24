/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessToolUseType.h>
#include <aws/core/utils/Document.h>
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
 * <p>A tool use request from the model.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessToolUseBlock">AWS
 * API Reference</a></p>
 */
class HarnessToolUseBlock {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessToolUseBlock() = default;
  AWS_BEDROCKAGENTCORE_API HarnessToolUseBlock(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessToolUseBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the tool to call.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  HarnessToolUseBlock& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

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
  HarnessToolUseBlock& WithToolUseId(ToolUseIdT&& value) {
    SetToolUseId(std::forward<ToolUseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON input to pass to the tool.</p>
   */
  inline Aws::Utils::DocumentView GetInput() const { return m_input; }
  inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
  template <typename InputT = Aws::Utils::Document>
  void SetInput(InputT&& value) {
    m_inputHasBeenSet = true;
    m_input = std::forward<InputT>(value);
  }
  template <typename InputT = Aws::Utils::Document>
  HarnessToolUseBlock& WithInput(InputT&& value) {
    SetInput(std::forward<InputT>(value));
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
  inline HarnessToolUseBlock& WithType(HarnessToolUseType value) {
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
  HarnessToolUseBlock& WithServerName(ServerNameT&& value) {
    SetServerName(std::forward<ServerNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_toolUseId;

  Aws::Utils::Document m_input;

  HarnessToolUseType m_type{HarnessToolUseType::NOT_SET};

  Aws::String m_serverName;
  bool m_nameHasBeenSet = false;
  bool m_toolUseIdHasBeenSet = false;
  bool m_inputHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_serverNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
