/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/NetworkTraffic.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

NetworkTraffic::NetworkTraffic(JsonView jsonValue) { *this = jsonValue; }

NetworkTraffic& NetworkTraffic::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bytesSent")) {
    m_bytesSent = jsonValue.GetInt64("bytesSent");
    m_bytesSentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bytesReceived")) {
    m_bytesReceived = jsonValue.GetInt64("bytesReceived");
    m_bytesReceivedHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkTraffic::Jsonize() const {
  JsonValue payload;

  if (m_bytesSentHasBeenSet) {
    payload.WithInt64("bytesSent", m_bytesSent);
  }

  if (m_bytesReceivedHasBeenSet) {
    payload.WithInt64("bytesReceived", m_bytesReceived);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
