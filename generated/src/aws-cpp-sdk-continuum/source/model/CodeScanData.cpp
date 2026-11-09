/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/CodeScanData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

CodeScanData::CodeScanData(JsonView jsonValue) { *this = jsonValue; }

CodeScanData& CodeScanData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scanRunId")) {
    m_scanRunId = jsonValue.GetString("scanRunId");
    m_scanRunIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ScanStatusMapper::GetScanStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("origin")) {
    m_origin = ScanOriginMapper::GetScanOriginForName(jsonValue.GetString("origin"));
    m_originHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedAt")) {
    m_completedAt = jsonValue.GetString("completedAt");
    m_completedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureMessage")) {
    m_failureMessage = jsonValue.GetString("failureMessage");
    m_failureMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureStage")) {
    m_failureStage = ScanFailureStageMapper::GetScanFailureStageForName(jsonValue.GetString("failureStage"));
    m_failureStageHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeScanData::Jsonize() const {
  JsonValue payload;

  if (m_scanRunIdHasBeenSet) {
    payload.WithString("scanRunId", m_scanRunId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ScanStatusMapper::GetNameForScanStatus(m_status));
  }

  if (m_originHasBeenSet) {
    payload.WithString("origin", ScanOriginMapper::GetNameForScanOrigin(m_origin));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_completedAtHasBeenSet) {
    payload.WithString("completedAt", m_completedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_failureMessageHasBeenSet) {
    payload.WithString("failureMessage", m_failureMessage);
  }

  if (m_failureStageHasBeenSet) {
    payload.WithString("failureStage", ScanFailureStageMapper::GetNameForScanFailureStage(m_failureStage));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
