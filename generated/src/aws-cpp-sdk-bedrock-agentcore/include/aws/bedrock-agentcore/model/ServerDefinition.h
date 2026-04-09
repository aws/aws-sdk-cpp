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
 * <p> The MCP server definition with a schema version and inline content. The
 * <code>schemaVersion</code> identifies the version of the MCP server
 * configuration schema.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ServerDefinition">AWS
 * API Reference</a></p>
 */
class ServerDefinition {
 public:
  AWS_BEDROCKAGENTCORE_API ServerDefinition() = default;
  AWS_BEDROCKAGENTCORE_API ServerDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ServerDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The schema version of the MCP server configuration. The schema version
   * identifies the format of the server definition content.</p>
   */
  inline const Aws::String& GetSchemaVersion() const { return m_schemaVersion; }
  inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
  template <typename SchemaVersionT = Aws::String>
  void SetSchemaVersion(SchemaVersionT&& value) {
    m_schemaVersionHasBeenSet = true;
    m_schemaVersion = std::forward<SchemaVersionT>(value);
  }
  template <typename SchemaVersionT = Aws::String>
  ServerDefinition& WithSchemaVersion(SchemaVersionT&& value) {
    SetSchemaVersion(std::forward<SchemaVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The inline content of the server definition.</p>
   */
  inline const Aws::String& GetInlineContent() const { return m_inlineContent; }
  inline bool InlineContentHasBeenSet() const { return m_inlineContentHasBeenSet; }
  template <typename InlineContentT = Aws::String>
  void SetInlineContent(InlineContentT&& value) {
    m_inlineContentHasBeenSet = true;
    m_inlineContent = std::forward<InlineContentT>(value);
  }
  template <typename InlineContentT = Aws::String>
  ServerDefinition& WithInlineContent(InlineContentT&& value) {
    SetInlineContent(std::forward<InlineContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_schemaVersion;

  Aws::String m_inlineContent;
  bool m_schemaVersionHasBeenSet = false;
  bool m_inlineContentHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
