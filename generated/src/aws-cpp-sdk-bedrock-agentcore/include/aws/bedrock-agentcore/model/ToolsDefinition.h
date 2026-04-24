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
 * <p> The MCP tools definition with a protocol version and inline content. The
 * <code>protocolVersion</code> identifies the MCP protocol version that the tools
 * conform to. This differs from <code>schemaVersion</code> in the server
 * definition, which identifies the server configuration schema
 * format.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ToolsDefinition">AWS
 * API Reference</a></p>
 */
class ToolsDefinition {
 public:
  AWS_BEDROCKAGENTCORE_API ToolsDefinition() = default;
  AWS_BEDROCKAGENTCORE_API ToolsDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ToolsDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The MCP protocol version that the tools conform to. This differs from the
   * <code>schemaVersion</code> field in the server definition, which identifies the
   * server configuration schema format.</p>
   */
  inline const Aws::String& GetProtocolVersion() const { return m_protocolVersion; }
  inline bool ProtocolVersionHasBeenSet() const { return m_protocolVersionHasBeenSet; }
  template <typename ProtocolVersionT = Aws::String>
  void SetProtocolVersion(ProtocolVersionT&& value) {
    m_protocolVersionHasBeenSet = true;
    m_protocolVersion = std::forward<ProtocolVersionT>(value);
  }
  template <typename ProtocolVersionT = Aws::String>
  ToolsDefinition& WithProtocolVersion(ProtocolVersionT&& value) {
    SetProtocolVersion(std::forward<ProtocolVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The inline content of the tools definition.</p>
   */
  inline const Aws::String& GetInlineContent() const { return m_inlineContent; }
  inline bool InlineContentHasBeenSet() const { return m_inlineContentHasBeenSet; }
  template <typename InlineContentT = Aws::String>
  void SetInlineContent(InlineContentT&& value) {
    m_inlineContentHasBeenSet = true;
    m_inlineContent = std::forward<InlineContentT>(value);
  }
  template <typename InlineContentT = Aws::String>
  ToolsDefinition& WithInlineContent(InlineContentT&& value) {
    SetInlineContent(std::forward<InlineContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_protocolVersion;

  Aws::String m_inlineContent;
  bool m_protocolVersionHasBeenSet = false;
  bool m_inlineContentHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
