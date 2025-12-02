/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/CallbackStartedDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

CallbackStartedDetails::CallbackStartedDetails(JsonView jsonValue) { *this = jsonValue; }

CallbackStartedDetails& CallbackStartedDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CallbackId")) {
    m_callbackId = jsonValue.GetString("CallbackId");
    m_callbackIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HeartbeatTimeout")) {
    m_heartbeatTimeout = jsonValue.GetInteger("HeartbeatTimeout");
    m_heartbeatTimeoutHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Timeout")) {
    m_timeout = jsonValue.GetInteger("Timeout");
    m_timeoutHasBeenSet = true;
  }
  return *this;
}

JsonValue CallbackStartedDetails::Jsonize() const {
  JsonValue payload;

  if (m_callbackIdHasBeenSet) {
    payload.WithString("CallbackId", m_callbackId);
  }

  if (m_heartbeatTimeoutHasBeenSet) {
    payload.WithInteger("HeartbeatTimeout", m_heartbeatTimeout);
  }

  if (m_timeoutHasBeenSet) {
    payload.WithInteger("Timeout", m_timeout);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
