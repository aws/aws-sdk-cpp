/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/AgentInputMessage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

AgentInputMessage::AgentInputMessage(JsonView jsonValue) { *this = jsonValue; }

AgentInputMessage& AgentInputMessage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Body")) {
    m_body = jsonValue.GetString("Body");
    m_bodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = AgentInputMessageTypeMapper::GetAgentInputMessageTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentInputMessage::Jsonize() const {
  JsonValue payload;

  if (m_bodyHasBeenSet) {
    payload.WithString("Body", m_body);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", AgentInputMessageTypeMapper::GetNameForAgentInputMessageType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
