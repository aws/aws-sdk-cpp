/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/RecoveryPoint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

RecoveryPoint::RecoveryPoint(JsonView jsonValue) { *this = jsonValue; }

RecoveryPoint& RecoveryPoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("backupVaultName")) {
    m_backupVaultName = jsonValue.GetString("backupVaultName");
    m_backupVaultNameHasBeenSet = true;
  }
  return *this;
}

JsonValue RecoveryPoint::Jsonize() const {
  JsonValue payload;

  if (m_backupVaultNameHasBeenSet) {
    payload.WithString("backupVaultName", m_backupVaultName);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
