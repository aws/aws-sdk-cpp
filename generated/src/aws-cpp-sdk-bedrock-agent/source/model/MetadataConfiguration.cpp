/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/MetadataConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

MetadataConfiguration::MetadataConfiguration(JsonView jsonValue) { *this = jsonValue; }

MetadataConfiguration& MetadataConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = FieldTypeMapper::GetFieldTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("searchability")) {
    m_searchability = SearchableStatusMapper::GetSearchableStatusForName(jsonValue.GetString("searchability"));
    m_searchabilityHasBeenSet = true;
  }
  return *this;
}

JsonValue MetadataConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", FieldTypeMapper::GetNameForFieldType(m_type));
  }

  if (m_searchabilityHasBeenSet) {
    payload.WithString("searchability", SearchableStatusMapper::GetNameForSearchableStatus(m_searchability));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
