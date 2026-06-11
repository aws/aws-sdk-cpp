/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/MetadataSchemaEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

MetadataSchemaEntry::MetadataSchemaEntry(JsonView jsonValue) { *this = jsonValue; }

MetadataSchemaEntry& MetadataSchemaEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = MetadataValueTypeMapper::GetMetadataValueTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("extractionType")) {
    m_extractionType = ExtractionTypeMapper::GetExtractionTypeForName(jsonValue.GetString("extractionType"));
    m_extractionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("extractionConfig")) {
    m_extractionConfig = jsonValue.GetObject("extractionConfig");
    m_extractionConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue MetadataSchemaEntry::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("key", m_key);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", MetadataValueTypeMapper::GetNameForMetadataValueType(m_type));
  }

  if (m_extractionTypeHasBeenSet) {
    payload.WithString("extractionType", ExtractionTypeMapper::GetNameForExtractionType(m_extractionType));
  }

  if (m_extractionConfigHasBeenSet) {
    payload.WithObject("extractionConfig", m_extractionConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
