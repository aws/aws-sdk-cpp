/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ScanAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {

ScanAction::ScanAction(JsonView jsonValue) { *this = jsonValue; }

ScanAction& ScanAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MalwareScanner")) {
    m_malwareScanner = MalwareScannerMapper::GetMalwareScannerForName(jsonValue.GetString("MalwareScanner"));
    m_malwareScannerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScanMode")) {
    m_scanMode = ScanModeMapper::GetScanModeForName(jsonValue.GetString("ScanMode"));
    m_scanModeHasBeenSet = true;
  }
  return *this;
}

JsonValue ScanAction::Jsonize() const {
  JsonValue payload;

  if (m_malwareScannerHasBeenSet) {
    payload.WithString("MalwareScanner", MalwareScannerMapper::GetNameForMalwareScanner(m_malwareScanner));
  }

  if (m_scanModeHasBeenSet) {
    payload.WithString("ScanMode", ScanModeMapper::GetNameForScanMode(m_scanMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
