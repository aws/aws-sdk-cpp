/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/evs/model/VmEntitlement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EVS {
namespace Model {

VmEntitlement::VmEntitlement(JsonView jsonValue) { *this = jsonValue; }

VmEntitlement& VmEntitlement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("vmId")) {
    m_vmId = jsonValue.GetString("vmId");
    m_vmIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environmentId")) {
    m_environmentId = jsonValue.GetString("environmentId");
    m_environmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectorId")) {
    m_connectorId = jsonValue.GetString("connectorId");
    m_connectorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vmName")) {
    m_vmName = jsonValue.GetString("vmName");
    m_vmNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = EntitlementTypeMapper::GetEntitlementTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = EntitlementStatusMapper::GetEntitlementStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastSyncedAt")) {
    m_lastSyncedAt = jsonValue.GetDouble("lastSyncedAt");
    m_lastSyncedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stoppedAt")) {
    m_stoppedAt = jsonValue.GetDouble("stoppedAt");
    m_stoppedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorDetail")) {
    m_errorDetail = jsonValue.GetObject("errorDetail");
    m_errorDetailHasBeenSet = true;
  }
  return *this;
}

JsonValue VmEntitlement::Jsonize() const {
  JsonValue payload;

  if (m_vmIdHasBeenSet) {
    payload.WithString("vmId", m_vmId);
  }

  if (m_environmentIdHasBeenSet) {
    payload.WithString("environmentId", m_environmentId);
  }

  if (m_connectorIdHasBeenSet) {
    payload.WithString("connectorId", m_connectorId);
  }

  if (m_vmNameHasBeenSet) {
    payload.WithString("vmName", m_vmName);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", EntitlementTypeMapper::GetNameForEntitlementType(m_type));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", EntitlementStatusMapper::GetNameForEntitlementStatus(m_status));
  }

  if (m_lastSyncedAtHasBeenSet) {
    payload.WithDouble("lastSyncedAt", m_lastSyncedAt.SecondsWithMSPrecision());
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_stoppedAtHasBeenSet) {
    payload.WithDouble("stoppedAt", m_stoppedAt.SecondsWithMSPrecision());
  }

  if (m_errorDetailHasBeenSet) {
    payload.WithObject("errorDetail", m_errorDetail.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EVS
}  // namespace Aws
