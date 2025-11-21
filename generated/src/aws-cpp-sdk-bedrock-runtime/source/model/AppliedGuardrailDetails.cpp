/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/AppliedGuardrailDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

AppliedGuardrailDetails::AppliedGuardrailDetails(JsonView jsonValue) { *this = jsonValue; }

AppliedGuardrailDetails& AppliedGuardrailDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("guardrailId")) {
    m_guardrailId = jsonValue.GetString("guardrailId");
    m_guardrailIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("guardrailVersion")) {
    m_guardrailVersion = jsonValue.GetString("guardrailVersion");
    m_guardrailVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("guardrailArn")) {
    m_guardrailArn = jsonValue.GetString("guardrailArn");
    m_guardrailArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("guardrailOrigin")) {
    Aws::Utils::Array<JsonView> guardrailOriginJsonList = jsonValue.GetArray("guardrailOrigin");
    for (unsigned guardrailOriginIndex = 0; guardrailOriginIndex < guardrailOriginJsonList.GetLength(); ++guardrailOriginIndex) {
      m_guardrailOrigin.push_back(
          GuardrailOriginMapper::GetGuardrailOriginForName(guardrailOriginJsonList[guardrailOriginIndex].AsString()));
    }
    m_guardrailOriginHasBeenSet = true;
  }
  if (jsonValue.ValueExists("guardrailOwnership")) {
    m_guardrailOwnership = GuardrailOwnershipMapper::GetGuardrailOwnershipForName(jsonValue.GetString("guardrailOwnership"));
    m_guardrailOwnershipHasBeenSet = true;
  }
  return *this;
}

JsonValue AppliedGuardrailDetails::Jsonize() const {
  JsonValue payload;

  if (m_guardrailIdHasBeenSet) {
    payload.WithString("guardrailId", m_guardrailId);
  }

  if (m_guardrailVersionHasBeenSet) {
    payload.WithString("guardrailVersion", m_guardrailVersion);
  }

  if (m_guardrailArnHasBeenSet) {
    payload.WithString("guardrailArn", m_guardrailArn);
  }

  if (m_guardrailOriginHasBeenSet) {
    Aws::Utils::Array<JsonValue> guardrailOriginJsonList(m_guardrailOrigin.size());
    for (unsigned guardrailOriginIndex = 0; guardrailOriginIndex < guardrailOriginJsonList.GetLength(); ++guardrailOriginIndex) {
      guardrailOriginJsonList[guardrailOriginIndex].AsString(
          GuardrailOriginMapper::GetNameForGuardrailOrigin(m_guardrailOrigin[guardrailOriginIndex]));
    }
    payload.WithArray("guardrailOrigin", std::move(guardrailOriginJsonList));
  }

  if (m_guardrailOwnershipHasBeenSet) {
    payload.WithString("guardrailOwnership", GuardrailOwnershipMapper::GetNameForGuardrailOwnership(m_guardrailOwnership));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
