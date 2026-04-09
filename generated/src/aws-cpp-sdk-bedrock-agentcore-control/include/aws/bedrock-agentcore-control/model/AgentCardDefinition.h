/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The agent card definition for an A2A descriptor. Contains the schema version
 * and inline content for the agent card.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/AgentCardDefinition">AWS
 * API Reference</a></p>
 */
class AgentCardDefinition {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API AgentCardDefinition() = default;
  AWS_BEDROCKAGENTCORECONTROL_API AgentCardDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API AgentCardDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The schema version of the agent card based on the A2A protocol
   * specification.</p>
   */
  inline const Aws::String& GetSchemaVersion() const { return m_schemaVersion; }
  inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
  template <typename SchemaVersionT = Aws::String>
  void SetSchemaVersion(SchemaVersionT&& value) {
    m_schemaVersionHasBeenSet = true;
    m_schemaVersion = std::forward<SchemaVersionT>(value);
  }
  template <typename SchemaVersionT = Aws::String>
  AgentCardDefinition& WithSchemaVersion(SchemaVersionT&& value) {
    SetSchemaVersion(std::forward<SchemaVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON content containing the A2A agent card definition, conforming to the
   * A2A protocol specification.</p>
   */
  inline const Aws::String& GetInlineContent() const { return m_inlineContent; }
  inline bool InlineContentHasBeenSet() const { return m_inlineContentHasBeenSet; }
  template <typename InlineContentT = Aws::String>
  void SetInlineContent(InlineContentT&& value) {
    m_inlineContentHasBeenSet = true;
    m_inlineContent = std::forward<InlineContentT>(value);
  }
  template <typename InlineContentT = Aws::String>
  AgentCardDefinition& WithInlineContent(InlineContentT&& value) {
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
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
