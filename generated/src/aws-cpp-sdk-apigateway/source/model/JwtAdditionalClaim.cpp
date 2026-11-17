/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/JwtAdditionalClaim.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIGateway {
namespace Model {

JwtAdditionalClaim::JwtAdditionalClaim(JsonView jsonValue) { *this = jsonValue; }

JwtAdditionalClaim& JwtAdditionalClaim::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("claimName")) {
    m_claimName = jsonValue.GetString("claimName");
    m_claimNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("format")) {
    m_format = JwtClaimFormatMapper::GetJwtClaimFormatForName(jsonValue.GetString("format"));
    m_formatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("required")) {
    m_required = jsonValue.GetBool("required");
    m_requiredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expectedValues")) {
    Aws::Utils::Array<JsonView> expectedValuesJsonList = jsonValue.GetArray("expectedValues");
    for (unsigned expectedValuesIndex = 0; expectedValuesIndex < expectedValuesJsonList.GetLength(); ++expectedValuesIndex) {
      m_expectedValues.push_back(expectedValuesJsonList[expectedValuesIndex].AsString());
    }
    m_expectedValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue JwtAdditionalClaim::Jsonize() const {
  JsonValue payload;

  if (m_claimNameHasBeenSet) {
    payload.WithString("claimName", m_claimName);
  }

  if (m_formatHasBeenSet) {
    payload.WithString("format", JwtClaimFormatMapper::GetNameForJwtClaimFormat(m_format));
  }

  if (m_requiredHasBeenSet) {
    payload.WithBool("required", m_required);
  }

  if (m_expectedValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> expectedValuesJsonList(m_expectedValues.size());
    for (unsigned expectedValuesIndex = 0; expectedValuesIndex < expectedValuesJsonList.GetLength(); ++expectedValuesIndex) {
      expectedValuesJsonList[expectedValuesIndex].AsString(m_expectedValues[expectedValuesIndex]);
    }
    payload.WithArray("expectedValues", std::move(expectedValuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws
