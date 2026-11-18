/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/DeviceStatusReason.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Braket {
namespace Model {

DeviceStatusReason::DeviceStatusReason(JsonView jsonValue) { *this = jsonValue; }

DeviceStatusReason& DeviceStatusReason::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reason")) {
    m_reason = DeviceStatusReasonCodeMapper::GetDeviceStatusReasonCodeForName(jsonValue.GetString("reason"));
    m_reasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetString("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("estimatedEndAt")) {
    m_estimatedEndAt = jsonValue.GetString("estimatedEndAt");
    m_estimatedEndAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue DeviceStatusReason::Jsonize() const {
  JsonValue payload;

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", DeviceStatusReasonCodeMapper::GetNameForDeviceStatusReasonCode(m_reason));
  }

  if (m_startedAtHasBeenSet) {
    payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_estimatedEndAtHasBeenSet) {
    payload.WithString("estimatedEndAt", m_estimatedEndAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace Braket
}  // namespace Aws
