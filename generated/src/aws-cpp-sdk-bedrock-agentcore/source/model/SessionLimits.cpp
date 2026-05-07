/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/SessionLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

SessionLimits::SessionLimits(JsonView jsonValue) { *this = jsonValue; }

SessionLimits& SessionLimits::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maxSpendAmount")) {
    m_maxSpendAmount = jsonValue.GetObject("maxSpendAmount");
    m_maxSpendAmountHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionLimits::Jsonize() const {
  JsonValue payload;

  if (m_maxSpendAmountHasBeenSet) {
    payload.WithObject("maxSpendAmount", m_maxSpendAmount.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
