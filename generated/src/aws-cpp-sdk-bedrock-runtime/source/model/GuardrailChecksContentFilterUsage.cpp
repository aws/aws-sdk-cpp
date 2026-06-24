/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailChecksContentFilterUsage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

GuardrailChecksContentFilterUsage::GuardrailChecksContentFilterUsage(JsonView jsonValue) { *this = jsonValue; }

GuardrailChecksContentFilterUsage& GuardrailChecksContentFilterUsage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("textUnits")) {
    m_textUnits = jsonValue.GetInteger("textUnits");
    m_textUnitsHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailChecksContentFilterUsage::Jsonize() const {
  JsonValue payload;

  if (m_textUnitsHasBeenSet) {
    payload.WithInteger("textUnits", m_textUnits);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
