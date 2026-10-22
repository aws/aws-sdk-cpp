/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/ErrorEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

ErrorEvent::ErrorEvent(JsonView jsonValue) { *this = jsonValue; }

ErrorEvent& ErrorEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Error")) {
    m_error = AgentErrorTypeMapper::GetAgentErrorTypeForName(jsonValue.GetString("Error"));
    m_errorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue ErrorEvent::Jsonize() const {
  JsonValue payload;

  if (m_errorHasBeenSet) {
    payload.WithString("Error", AgentErrorTypeMapper::GetNameForAgentErrorType(m_error));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
