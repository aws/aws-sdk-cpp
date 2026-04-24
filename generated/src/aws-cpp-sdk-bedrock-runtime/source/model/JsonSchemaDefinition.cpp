/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/JsonSchemaDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

JsonSchemaDefinition::JsonSchemaDefinition(JsonView jsonValue) { *this = jsonValue; }

JsonSchemaDefinition& JsonSchemaDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("schema")) {
    m_schema = jsonValue.GetString("schema");
    m_schemaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue JsonSchemaDefinition::Jsonize() const {
  JsonValue payload;

  if (m_schemaHasBeenSet) {
    payload.WithString("schema", m_schema);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
