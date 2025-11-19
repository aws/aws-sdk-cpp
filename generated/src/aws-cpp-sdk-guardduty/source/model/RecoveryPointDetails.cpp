/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/RecoveryPointDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

RecoveryPointDetails::RecoveryPointDetails(JsonView jsonValue) { *this = jsonValue; }

RecoveryPointDetails& RecoveryPointDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recoveryPointArn")) {
    m_recoveryPointArn = jsonValue.GetString("recoveryPointArn");
    m_recoveryPointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("backupVaultName")) {
    m_backupVaultName = jsonValue.GetString("backupVaultName");
    m_backupVaultNameHasBeenSet = true;
  }
  return *this;
}

JsonValue RecoveryPointDetails::Jsonize() const {
  JsonValue payload;

  if (m_recoveryPointArnHasBeenSet) {
    payload.WithString("recoveryPointArn", m_recoveryPointArn);
  }

  if (m_backupVaultNameHasBeenSet) {
    payload.WithString("backupVaultName", m_backupVaultName);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
