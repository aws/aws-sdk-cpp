/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/OnDemandScan.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

OnDemandScan::OnDemandScan(JsonView jsonValue) { *this = jsonValue; }

OnDemandScan& OnDemandScan::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scanId")) {
    m_scanId = jsonValue.GetString("scanId");
    m_scanIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceId")) {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = OnDemandResourceTypeMapper::GetOnDemandResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanStatus")) {
    m_scanStatus = OnDemandScanStatusMapper::GetOnDemandScanStatusForName(jsonValue.GetString("scanStatus"));
    m_scanStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanStatusReason")) {
    m_scanStatusReason = OnDemandScanStatusReasonMapper::GetOnDemandScanStatusReasonForName(jsonValue.GetString("scanStatusReason"));
    m_scanStatusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetString("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedAt")) {
    m_completedAt = jsonValue.GetString("completedAt");
    m_completedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue OnDemandScan::Jsonize() const {
  JsonValue payload;

  if (m_scanIdHasBeenSet) {
    payload.WithString("scanId", m_scanId);
  }

  if (m_resourceIdHasBeenSet) {
    payload.WithString("resourceId", m_resourceId);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", OnDemandResourceTypeMapper::GetNameForOnDemandResourceType(m_resourceType));
  }

  if (m_scanStatusHasBeenSet) {
    payload.WithString("scanStatus", OnDemandScanStatusMapper::GetNameForOnDemandScanStatus(m_scanStatus));
  }

  if (m_scanStatusReasonHasBeenSet) {
    payload.WithString("scanStatusReason", OnDemandScanStatusReasonMapper::GetNameForOnDemandScanStatusReason(m_scanStatusReason));
  }

  if (m_startedAtHasBeenSet) {
    payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_completedAtHasBeenSet) {
    payload.WithString("completedAt", m_completedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
