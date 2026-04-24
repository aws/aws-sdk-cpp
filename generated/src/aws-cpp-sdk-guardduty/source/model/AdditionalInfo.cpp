/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/AdditionalInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

AdditionalInfo::AdditionalInfo(JsonView jsonValue) { *this = jsonValue; }

AdditionalInfo& AdditionalInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("versionId")) {
    m_versionId = jsonValue.GetString("versionId");
    m_versionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deviceName")) {
    m_deviceName = jsonValue.GetString("deviceName");
    m_deviceNameHasBeenSet = true;
  }
  return *this;
}

JsonValue AdditionalInfo::Jsonize() const {
  JsonValue payload;

  if (m_versionIdHasBeenSet) {
    payload.WithString("versionId", m_versionId);
  }

  if (m_deviceNameHasBeenSet) {
    payload.WithString("deviceName", m_deviceName);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
