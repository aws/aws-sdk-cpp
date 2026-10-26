/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/WafAtpConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {

WafAtpConfig::WafAtpConfig(JsonView jsonValue) { *this = jsonValue; }

WafAtpConfig& WafAtpConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("loginPath")) {
    m_loginPath = jsonValue.GetString("loginPath");
    m_loginPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("payloadType")) {
    m_payloadType = WafPayloadTypeEnumMapper::GetWafPayloadTypeEnumForName(jsonValue.GetString("payloadType"));
    m_payloadTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usernameField")) {
    m_usernameField = jsonValue.GetString("usernameField");
    m_usernameFieldHasBeenSet = true;
  }
  if (jsonValue.ValueExists("passwordField")) {
    m_passwordField = jsonValue.GetString("passwordField");
    m_passwordFieldHasBeenSet = true;
  }
  if (jsonValue.ValueExists("responseInspection")) {
    m_responseInspection = jsonValue.GetObject("responseInspection");
    m_responseInspectionHasBeenSet = true;
  }
  return *this;
}

JsonValue WafAtpConfig::Jsonize() const {
  JsonValue payload;

  if (m_loginPathHasBeenSet) {
    payload.WithString("loginPath", m_loginPath);
  }

  if (m_payloadTypeHasBeenSet) {
    payload.WithString("payloadType", WafPayloadTypeEnumMapper::GetNameForWafPayloadTypeEnum(m_payloadType));
  }

  if (m_usernameFieldHasBeenSet) {
    payload.WithString("usernameField", m_usernameField);
  }

  if (m_passwordFieldHasBeenSet) {
    payload.WithString("passwordField", m_passwordField);
  }

  if (m_responseInspectionHasBeenSet) {
    payload.WithObject("responseInspection", m_responseInspection.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
