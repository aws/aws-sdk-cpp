/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/EbsSnapshot.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

EbsSnapshot::EbsSnapshot(JsonView jsonValue) { *this = jsonValue; }

EbsSnapshot& EbsSnapshot::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("deviceName")) {
    m_deviceName = jsonValue.GetString("deviceName");
    m_deviceNameHasBeenSet = true;
  }
  return *this;
}

JsonValue EbsSnapshot::Jsonize() const {
  JsonValue payload;

  if (m_deviceNameHasBeenSet) {
    payload.WithString("deviceName", m_deviceName);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
