/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/ScanConfigurationRecoveryPoint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

ScanConfigurationRecoveryPoint::ScanConfigurationRecoveryPoint(JsonView jsonValue) { *this = jsonValue; }

ScanConfigurationRecoveryPoint& ScanConfigurationRecoveryPoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("backupVaultName")) {
    m_backupVaultName = jsonValue.GetString("backupVaultName");
    m_backupVaultNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ScanConfigurationRecoveryPoint::Jsonize() const {
  JsonValue payload;

  if (m_backupVaultNameHasBeenSet) {
    payload.WithString("backupVaultName", m_backupVaultName);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
