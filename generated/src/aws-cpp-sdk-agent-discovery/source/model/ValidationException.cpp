/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-discovery/model/ValidationException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentDiscovery {
namespace Model {

ValidationException::ValidationException(JsonView jsonValue) { *this = jsonValue; }

ValidationException& ValidationException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = ArdErrorCodeMapper::GetArdErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationException::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", ArdErrorCodeMapper::GetNameForArdErrorCode(m_errorCode));
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
