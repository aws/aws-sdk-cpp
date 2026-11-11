/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SessionDescriptionType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

SessionDescriptionType::SessionDescriptionType(JsonView jsonValue) { *this = jsonValue; }

SessionDescriptionType& SessionDescriptionType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SessionId")) {
    m_sessionId = jsonValue.GetString("SessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SessionType")) {
    m_sessionType = SessionTypeTypeMapper::GetSessionTypeTypeForName(jsonValue.GetString("SessionType"));
    m_sessionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientId")) {
    m_clientId = jsonValue.GetString("ClientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateDate")) {
    m_createDate = jsonValue.GetDouble("CreateDate");
    m_createDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastActiveDate")) {
    m_lastActiveDate = jsonValue.GetDouble("LastActiveDate");
    m_lastActiveDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeviceType")) {
    m_deviceType = jsonValue.GetString("DeviceType");
    m_deviceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastIPAddress")) {
    m_lastIPAddress = jsonValue.GetString("LastIPAddress");
    m_lastIPAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastLocation")) {
    m_lastLocation = jsonValue.GetObject("LastLocation");
    m_lastLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OriginSessionId")) {
    m_originSessionId = jsonValue.GetString("OriginSessionId");
    m_originSessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsCurrentSession")) {
    m_isCurrentSession = jsonValue.GetBool("IsCurrentSession");
    m_isCurrentSessionHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionDescriptionType::Jsonize() const {
  JsonValue payload;

  if (m_sessionIdHasBeenSet) {
    payload.WithString("SessionId", m_sessionId);
  }

  if (m_sessionTypeHasBeenSet) {
    payload.WithString("SessionType", SessionTypeTypeMapper::GetNameForSessionTypeType(m_sessionType));
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("ClientId", m_clientId);
  }

  if (m_createDateHasBeenSet) {
    payload.WithDouble("CreateDate", m_createDate.SecondsWithMSPrecision());
  }

  if (m_lastActiveDateHasBeenSet) {
    payload.WithDouble("LastActiveDate", m_lastActiveDate.SecondsWithMSPrecision());
  }

  if (m_deviceTypeHasBeenSet) {
    payload.WithString("DeviceType", m_deviceType);
  }

  if (m_lastIPAddressHasBeenSet) {
    payload.WithString("LastIPAddress", m_lastIPAddress);
  }

  if (m_lastLocationHasBeenSet) {
    payload.WithObject("LastLocation", m_lastLocation.Jsonize());
  }

  if (m_originSessionIdHasBeenSet) {
    payload.WithString("OriginSessionId", m_originSessionId);
  }

  if (m_isCurrentSessionHasBeenSet) {
    payload.WithBool("IsCurrentSession", m_isCurrentSession);
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
