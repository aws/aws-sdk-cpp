/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/WafAcfpConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {

WafAcfpConfig::WafAcfpConfig(JsonView jsonValue) { *this = jsonValue; }

WafAcfpConfig& WafAcfpConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("payloadType")) {
    m_payloadType = WafPayloadTypeEnumMapper::GetWafPayloadTypeEnumForName(jsonValue.GetString("payloadType"));
    m_payloadTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationPath")) {
    m_creationPath = jsonValue.GetString("creationPath");
    m_creationPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("registrationPagePath")) {
    m_registrationPagePath = jsonValue.GetString("registrationPagePath");
    m_registrationPagePathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("responseInspection")) {
    m_responseInspection = jsonValue.GetObject("responseInspection");
    m_responseInspectionHasBeenSet = true;
  }
  return *this;
}

JsonValue WafAcfpConfig::Jsonize() const {
  JsonValue payload;

  if (m_payloadTypeHasBeenSet) {
    payload.WithString("payloadType", WafPayloadTypeEnumMapper::GetNameForWafPayloadTypeEnum(m_payloadType));
  }

  if (m_creationPathHasBeenSet) {
    payload.WithString("creationPath", m_creationPath);
  }

  if (m_registrationPagePathHasBeenSet) {
    payload.WithString("registrationPagePath", m_registrationPagePath);
  }

  if (m_responseInspectionHasBeenSet) {
    payload.WithObject("responseInspection", m_responseInspection.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
