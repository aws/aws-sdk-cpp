/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ExtractionConfig.h>
#include <aws/bedrock-agentcore-control/model/ExtractionType.h>
#include <aws/bedrock-agentcore-control/model/MetadataValueType.h>
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
 * <p>A metadata field definition within a strategy's schema.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/MetadataSchemaEntry">AWS
 * API Reference</a></p>
 */
class MetadataSchemaEntry {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API MetadataSchemaEntry() = default;
  AWS_BEDROCKAGENTCORECONTROL_API MetadataSchemaEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API MetadataSchemaEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The metadata field name. Must match an indexed key to be queryable via
   * metadata filters.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  MetadataSchemaEntry& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MetadataValueType.</p>
   */
  inline MetadataValueType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(MetadataValueType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline MetadataSchemaEntry& WithType(MetadataValueType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the metadata value is extracted by the LLM or passed
   * through deterministically from the event.</p>
   */
  inline ExtractionType GetExtractionType() const { return m_extractionType; }
  inline bool ExtractionTypeHasBeenSet() const { return m_extractionTypeHasBeenSet; }
  inline void SetExtractionType(ExtractionType value) {
    m_extractionTypeHasBeenSet = true;
    m_extractionType = value;
  }
  inline MetadataSchemaEntry& WithExtractionType(ExtractionType value) {
    SetExtractionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for extracting this metadata value from conversational content.
   * Applicable only if extractionType is LLM inferred.</p>
   */
  inline const ExtractionConfig& GetExtractionConfig() const { return m_extractionConfig; }
  inline bool ExtractionConfigHasBeenSet() const { return m_extractionConfigHasBeenSet; }
  template <typename ExtractionConfigT = ExtractionConfig>
  void SetExtractionConfig(ExtractionConfigT&& value) {
    m_extractionConfigHasBeenSet = true;
    m_extractionConfig = std::forward<ExtractionConfigT>(value);
  }
  template <typename ExtractionConfigT = ExtractionConfig>
  MetadataSchemaEntry& WithExtractionConfig(ExtractionConfigT&& value) {
    SetExtractionConfig(std::forward<ExtractionConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;

  MetadataValueType m_type{MetadataValueType::NOT_SET};

  ExtractionType m_extractionType{ExtractionType::NOT_SET};

  ExtractionConfig m_extractionConfig;
  bool m_keyHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_extractionTypeHasBeenSet = false;
  bool m_extractionConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
