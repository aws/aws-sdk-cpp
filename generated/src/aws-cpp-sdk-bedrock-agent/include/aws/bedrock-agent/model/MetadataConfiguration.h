/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/FieldType.h>
#include <aws/bedrock-agent/model/SearchableStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgent {
namespace Model {

/**
 * <p>Contains the configuration of a single custom metadata field in a knowledge
 * base, including its name, data type, and whether the field is
 * searchable.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/MetadataConfiguration">AWS
 * API Reference</a></p>
 */
class MetadataConfiguration {
 public:
  AWS_BEDROCKAGENT_API MetadataConfiguration() = default;
  AWS_BEDROCKAGENT_API MetadataConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API MetadataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the custom metadata field.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MetadataConfiguration& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of the custom metadata field. Valid values are
   * <code>STRING</code> and <code>STRING_LIST</code>.</p>
   */
  inline FieldType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(FieldType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline MetadataConfiguration& WithType(FieldType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the custom metadata field is searchable. Valid values:</p>
   * <ul> <li> <p> <code>ENABLED</code> – The field is searchable.</p> </li> <li> <p>
   * <code>DISABLED</code> – The field is not searchable.</p> </li> </ul>
   */
  inline SearchableStatus GetSearchability() const { return m_searchability; }
  inline bool SearchabilityHasBeenSet() const { return m_searchabilityHasBeenSet; }
  inline void SetSearchability(SearchableStatus value) {
    m_searchabilityHasBeenSet = true;
    m_searchability = value;
  }
  inline MetadataConfiguration& WithSearchability(SearchableStatus value) {
    SetSearchability(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  FieldType m_type{FieldType::NOT_SET};

  SearchableStatus m_searchability{SearchableStatus::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_searchabilityHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
