/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailContextualGroundingTier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

GuardrailContextualGroundingTier::GuardrailContextualGroundingTier(JsonView jsonValue) { *this = jsonValue; }

GuardrailContextualGroundingTier& GuardrailContextualGroundingTier::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tierName")) {
    m_tierName =
        GuardrailContextualGroundingTierNameMapper::GetGuardrailContextualGroundingTierNameForName(jsonValue.GetString("tierName"));
    m_tierNameHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailContextualGroundingTier::Jsonize() const {
  JsonValue payload;

  if (m_tierNameHasBeenSet) {
    payload.WithString("tierName", GuardrailContextualGroundingTierNameMapper::GetNameForGuardrailContextualGroundingTierName(m_tierName));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
