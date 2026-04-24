/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/EntityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockDataAutomation {
namespace Model {

/**
 * <p>Information about an entity type in the DataAutomationLibrary</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/EntityTypeInfo">AWS
 * API Reference</a></p>
 */
class EntityTypeInfo {
 public:
  AWS_BEDROCKDATAAUTOMATION_API EntityTypeInfo() = default;
  AWS_BEDROCKDATAAUTOMATION_API EntityTypeInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API EntityTypeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline EntityType GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  inline void SetEntityType(EntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline EntityTypeInfo& WithEntityType(EntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetEntityMetadata() const { return m_entityMetadata; }
  inline bool EntityMetadataHasBeenSet() const { return m_entityMetadataHasBeenSet; }
  template <typename EntityMetadataT = Aws::String>
  void SetEntityMetadata(EntityMetadataT&& value) {
    m_entityMetadataHasBeenSet = true;
    m_entityMetadata = std::forward<EntityMetadataT>(value);
  }
  template <typename EntityMetadataT = Aws::String>
  EntityTypeInfo& WithEntityMetadata(EntityMetadataT&& value) {
    SetEntityMetadata(std::forward<EntityMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  EntityType m_entityType{EntityType::NOT_SET};

  Aws::String m_entityMetadata;
  bool m_entityTypeHasBeenSet = false;
  bool m_entityMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
