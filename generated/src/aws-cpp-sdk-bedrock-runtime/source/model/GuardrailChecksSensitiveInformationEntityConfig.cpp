/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailChecksSensitiveInformationEntityConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

GuardrailChecksSensitiveInformationEntityConfig::GuardrailChecksSensitiveInformationEntityConfig(JsonView jsonValue) { *this = jsonValue; }

GuardrailChecksSensitiveInformationEntityConfig& GuardrailChecksSensitiveInformationEntityConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = GuardrailChecksSensitiveInformationEntityTypeMapper::GetGuardrailChecksSensitiveInformationEntityTypeForName(
        jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailChecksSensitiveInformationEntityConfig::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString(
        "type", GuardrailChecksSensitiveInformationEntityTypeMapper::GetNameForGuardrailChecksSensitiveInformationEntityType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
