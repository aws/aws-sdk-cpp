/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot/model/ThingConnectivity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {

ThingConnectivity::ThingConnectivity(JsonView jsonValue) { *this = jsonValue; }

ThingConnectivity& ThingConnectivity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("connected")) {
    m_connected = jsonValue.GetBool("connected");
    m_connectedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timestamp")) {
    m_timestamp = jsonValue.GetInt64("timestamp");
    m_timestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("disconnectReason")) {
    m_disconnectReason = jsonValue.GetString("disconnectReason");
    m_disconnectReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("keepAliveDuration")) {
    m_keepAliveDuration = jsonValue.GetInteger("keepAliveDuration");
    m_keepAliveDurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cleanSession")) {
    m_cleanSession = jsonValue.GetBool("cleanSession");
    m_cleanSessionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionExpiry")) {
    m_sessionExpiry = jsonValue.GetInt64("sessionExpiry");
    m_sessionExpiryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientId")) {
    m_clientId = jsonValue.GetString("clientId");
    m_clientIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ThingConnectivity::Jsonize() const {
  JsonValue payload;

  if (m_connectedHasBeenSet) {
    payload.WithBool("connected", m_connected);
  }

  if (m_timestampHasBeenSet) {
    payload.WithInt64("timestamp", m_timestamp);
  }

  if (m_disconnectReasonHasBeenSet) {
    payload.WithString("disconnectReason", m_disconnectReason);
  }

  if (m_keepAliveDurationHasBeenSet) {
    payload.WithInteger("keepAliveDuration", m_keepAliveDuration);
  }

  if (m_cleanSessionHasBeenSet) {
    payload.WithBool("cleanSession", m_cleanSession);
  }

  if (m_sessionExpiryHasBeenSet) {
    payload.WithInt64("sessionExpiry", m_sessionExpiry);
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("clientId", m_clientId);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
