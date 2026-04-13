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
 * <p>The structured skill definition with schema version and
 * content.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SkillDefinition">AWS
 * API Reference</a></p>
 */
class SkillDefinition {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API SkillDefinition() = default;
  AWS_BEDROCKAGENTCORECONTROL_API SkillDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API SkillDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The version of the skill definition schema.</p>
   */
  inline const Aws::String& GetSchemaVersion() const { return m_schemaVersion; }
  inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
  template <typename SchemaVersionT = Aws::String>
  void SetSchemaVersion(SchemaVersionT&& value) {
    m_schemaVersionHasBeenSet = true;
    m_schemaVersion = std::forward<SchemaVersionT>(value);
  }
  template <typename SchemaVersionT = Aws::String>
  SkillDefinition& WithSchemaVersion(SchemaVersionT&& value) {
    SetSchemaVersion(std::forward<SchemaVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON content containing the structured skill definition.</p>
   */
  inline const Aws::String& GetInlineContent() const { return m_inlineContent; }
  inline bool InlineContentHasBeenSet() const { return m_inlineContentHasBeenSet; }
  template <typename InlineContentT = Aws::String>
  void SetInlineContent(InlineContentT&& value) {
    m_inlineContentHasBeenSet = true;
    m_inlineContent = std::forward<InlineContentT>(value);
  }
  template <typename InlineContentT = Aws::String>
  SkillDefinition& WithInlineContent(InlineContentT&& value) {
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
