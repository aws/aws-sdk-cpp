/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/AmiConfigurationState.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

AmiConfigurationState::AmiConfigurationState(JsonView jsonValue) { *this = jsonValue; }

AmiConfigurationState& AmiConfigurationState::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lastLaunchedWithin")) {
    m_lastLaunchedWithin = AmiScanDurationMapper::GetAmiScanDurationForName(jsonValue.GetString("lastLaunchedWithin"));
    m_lastLaunchedWithinHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdWithin")) {
    m_createdWithin = AmiScanDurationMapper::GetAmiScanDurationForName(jsonValue.GetString("createdWithin"));
    m_createdWithinHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanModeConfiguration")) {
    m_scanModeConfiguration = jsonValue.GetObject("scanModeConfiguration");
    m_scanModeConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AmiConfigurationStatusMapper::GetAmiConfigurationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AmiConfigurationState::Jsonize() const {
  JsonValue payload;

  if (m_lastLaunchedWithinHasBeenSet) {
    payload.WithString("lastLaunchedWithin", AmiScanDurationMapper::GetNameForAmiScanDuration(m_lastLaunchedWithin));
  }

  if (m_createdWithinHasBeenSet) {
    payload.WithString("createdWithin", AmiScanDurationMapper::GetNameForAmiScanDuration(m_createdWithin));
  }

  if (m_scanModeConfigurationHasBeenSet) {
    payload.WithObject("scanModeConfiguration", m_scanModeConfiguration.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", AmiConfigurationStatusMapper::GetNameForAmiConfigurationStatus(m_status));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
