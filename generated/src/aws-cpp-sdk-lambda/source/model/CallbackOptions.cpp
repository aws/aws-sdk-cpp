/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/CallbackOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

CallbackOptions::CallbackOptions(JsonView jsonValue) { *this = jsonValue; }

CallbackOptions& CallbackOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TimeoutSeconds")) {
    m_timeoutSeconds = jsonValue.GetInteger("TimeoutSeconds");
    m_timeoutSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HeartbeatTimeoutSeconds")) {
    m_heartbeatTimeoutSeconds = jsonValue.GetInteger("HeartbeatTimeoutSeconds");
    m_heartbeatTimeoutSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue CallbackOptions::Jsonize() const {
  JsonValue payload;

  if (m_timeoutSecondsHasBeenSet) {
    payload.WithInteger("TimeoutSeconds", m_timeoutSeconds);
  }

  if (m_heartbeatTimeoutSecondsHasBeenSet) {
    payload.WithInteger("HeartbeatTimeoutSeconds", m_heartbeatTimeoutSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
