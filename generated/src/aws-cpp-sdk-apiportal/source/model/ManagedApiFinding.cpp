/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ManagedApiFinding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

ManagedApiFinding::ManagedApiFinding(JsonView jsonValue) { *this = jsonValue; }

ManagedApiFinding& ManagedApiFinding::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("postureId")) {
    m_postureId = jsonValue.GetString("postureId");
    m_postureIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("postureStatus")) {
    m_postureStatus = PostureStatusMapper::GetPostureStatusForName(jsonValue.GetString("postureStatus"));
    m_postureStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reason")) {
    m_reason = FindingReasonMapper::GetFindingReasonForName(jsonValue.GetString("reason"));
    m_reasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedApiFinding::Jsonize() const {
  JsonValue payload;

  if (m_postureIdHasBeenSet) {
    payload.WithString("postureId", m_postureId);
  }

  if (m_postureStatusHasBeenSet) {
    payload.WithString("postureStatus", PostureStatusMapper::GetNameForPostureStatus(m_postureStatus));
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", FindingReasonMapper::GetNameForFindingReason(m_reason));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
