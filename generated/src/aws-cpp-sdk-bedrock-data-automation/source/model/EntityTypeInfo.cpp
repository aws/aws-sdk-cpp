/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/EntityTypeInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

EntityTypeInfo::EntityTypeInfo(JsonView jsonValue) { *this = jsonValue; }

EntityTypeInfo& EntityTypeInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("entityType")) {
    m_entityType = EntityTypeMapper::GetEntityTypeForName(jsonValue.GetString("entityType"));
    m_entityTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entityMetadata")) {
    m_entityMetadata = jsonValue.GetString("entityMetadata");
    m_entityMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue EntityTypeInfo::Jsonize() const {
  JsonValue payload;

  if (m_entityTypeHasBeenSet) {
    payload.WithString("entityType", EntityTypeMapper::GetNameForEntityType(m_entityType));
  }

  if (m_entityMetadataHasBeenSet) {
    payload.WithString("entityMetadata", m_entityMetadata);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
