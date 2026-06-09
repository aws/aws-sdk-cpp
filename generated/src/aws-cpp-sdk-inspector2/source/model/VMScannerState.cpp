/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/VMScannerState.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

VMScannerState::VMScannerState(JsonView jsonValue) { *this = jsonValue; }

VMScannerState& VMScannerState::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("activated")) {
    m_activated = jsonValue.GetBool("activated");
    m_activatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("activatedAt")) {
    m_activatedAt = jsonValue.GetDouble("activatedAt");
    m_activatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = VMScannerStatusMapper::GetVMScannerStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue VMScannerState::Jsonize() const {
  JsonValue payload;

  if (m_activatedHasBeenSet) {
    payload.WithBool("activated", m_activated);
  }

  if (m_activatedAtHasBeenSet) {
    payload.WithDouble("activatedAt", m_activatedAt.SecondsWithMSPrecision());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", VMScannerStatusMapper::GetNameForVMScannerStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
