/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailContextualGroundingTierConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

GuardrailContextualGroundingTierConfig::GuardrailContextualGroundingTierConfig(JsonView jsonValue) { *this = jsonValue; }

GuardrailContextualGroundingTierConfig& GuardrailContextualGroundingTierConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tierName")) {
    m_tierName =
        GuardrailContextualGroundingTierNameMapper::GetGuardrailContextualGroundingTierNameForName(jsonValue.GetString("tierName"));
    m_tierNameHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailContextualGroundingTierConfig::Jsonize() const {
  JsonValue payload;

  if (m_tierNameHasBeenSet) {
    payload.WithString("tierName", GuardrailContextualGroundingTierNameMapper::GetNameForGuardrailContextualGroundingTierName(m_tierName));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
