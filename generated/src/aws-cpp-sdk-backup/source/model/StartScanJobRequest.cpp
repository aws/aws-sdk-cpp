/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/StartScanJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartScanJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_backupVaultNameHasBeenSet) {
    payload.WithString("BackupVaultName", m_backupVaultName);
  }

  if (m_iamRoleArnHasBeenSet) {
    payload.WithString("IamRoleArn", m_iamRoleArn);
  }

  if (m_idempotencyTokenHasBeenSet) {
    payload.WithString("IdempotencyToken", m_idempotencyToken);
  }

  if (m_malwareScannerHasBeenSet) {
    payload.WithString("MalwareScanner", MalwareScannerMapper::GetNameForMalwareScanner(m_malwareScanner));
  }

  if (m_recoveryPointArnHasBeenSet) {
    payload.WithString("RecoveryPointArn", m_recoveryPointArn);
  }

  if (m_scanBaseRecoveryPointArnHasBeenSet) {
    payload.WithString("ScanBaseRecoveryPointArn", m_scanBaseRecoveryPointArn);
  }

  if (m_scanModeHasBeenSet) {
    payload.WithString("ScanMode", ScanModeMapper::GetNameForScanMode(m_scanMode));
  }

  if (m_scannerRoleArnHasBeenSet) {
    payload.WithString("ScannerRoleArn", m_scannerRoleArn);
  }

  return payload.View().WriteReadable();
}
