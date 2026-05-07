/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/AvailableLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

AvailableLimits::AvailableLimits(JsonView jsonValue) { *this = jsonValue; }

AvailableLimits& AvailableLimits::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("availableSpendAmount")) {
    m_availableSpendAmount = jsonValue.GetObject("availableSpendAmount");
    m_availableSpendAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AvailableLimits::Jsonize() const {
  JsonValue payload;

  if (m_availableSpendAmountHasBeenSet) {
    payload.WithObject("availableSpendAmount", m_availableSpendAmount.Jsonize());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
