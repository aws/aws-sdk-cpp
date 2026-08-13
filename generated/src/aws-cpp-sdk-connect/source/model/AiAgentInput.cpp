/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AiAgentInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

AiAgentInput::AiAgentInput(JsonView jsonValue) { *this = jsonValue; }

AiAgentInput& AiAgentInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AiAgentId")) {
    m_aiAgentId = jsonValue.GetString("AiAgentId");
    m_aiAgentIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AiAgentInput::Jsonize() const {
  JsonValue payload;

  if (m_aiAgentIdHasBeenSet) {
    payload.WithString("AiAgentId", m_aiAgentId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
