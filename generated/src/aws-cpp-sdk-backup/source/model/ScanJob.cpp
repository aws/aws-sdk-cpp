/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ScanJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {

ScanJob::ScanJob(JsonView jsonValue) { *this = jsonValue; }

ScanJob& ScanJob::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AccountId")) {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupVaultArn")) {
    m_backupVaultArn = jsonValue.GetString("BackupVaultArn");
    m_backupVaultArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupVaultName")) {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");
    m_backupVaultNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CompletionDate")) {
    m_completionDate = jsonValue.GetDouble("CompletionDate");
    m_completionDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedBy")) {
    m_createdBy = jsonValue.GetObject("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationDate")) {
    m_creationDate = jsonValue.GetDouble("CreationDate");
    m_creationDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IamRoleArn")) {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");
    m_iamRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MalwareScanner")) {
    m_malwareScanner = MalwareScannerMapper::GetMalwareScannerForName(jsonValue.GetString("MalwareScanner"));
    m_malwareScannerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecoveryPointArn")) {
    m_recoveryPointArn = jsonValue.GetString("RecoveryPointArn");
    m_recoveryPointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceName")) {
    m_resourceName = jsonValue.GetString("ResourceName");
    m_resourceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = ScanResourceTypeMapper::GetScanResourceTypeForName(jsonValue.GetString("ResourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScanBaseRecoveryPointArn")) {
    m_scanBaseRecoveryPointArn = jsonValue.GetString("ScanBaseRecoveryPointArn");
    m_scanBaseRecoveryPointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScanId")) {
    m_scanId = jsonValue.GetString("ScanId");
    m_scanIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScanJobId")) {
    m_scanJobId = jsonValue.GetString("ScanJobId");
    m_scanJobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScanMode")) {
    m_scanMode = ScanModeMapper::GetScanModeForName(jsonValue.GetString("ScanMode"));
    m_scanModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScanResult")) {
    m_scanResult = jsonValue.GetObject("ScanResult");
    m_scanResultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScannerRoleArn")) {
    m_scannerRoleArn = jsonValue.GetString("ScannerRoleArn");
    m_scannerRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = ScanStateMapper::GetScanStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusMessage")) {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue ScanJob::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("AccountId", m_accountId);
  }

  if (m_backupVaultArnHasBeenSet) {
    payload.WithString("BackupVaultArn", m_backupVaultArn);
  }

  if (m_backupVaultNameHasBeenSet) {
    payload.WithString("BackupVaultName", m_backupVaultName);
  }

  if (m_completionDateHasBeenSet) {
    payload.WithDouble("CompletionDate", m_completionDate.SecondsWithMSPrecision());
  }

  if (m_createdByHasBeenSet) {
    payload.WithObject("CreatedBy", m_createdBy.Jsonize());
  }

  if (m_creationDateHasBeenSet) {
    payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if (m_iamRoleArnHasBeenSet) {
    payload.WithString("IamRoleArn", m_iamRoleArn);
  }

  if (m_malwareScannerHasBeenSet) {
    payload.WithString("MalwareScanner", MalwareScannerMapper::GetNameForMalwareScanner(m_malwareScanner));
  }

  if (m_recoveryPointArnHasBeenSet) {
    payload.WithString("RecoveryPointArn", m_recoveryPointArn);
  }

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  if (m_resourceNameHasBeenSet) {
    payload.WithString("ResourceName", m_resourceName);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", ScanResourceTypeMapper::GetNameForScanResourceType(m_resourceType));
  }

  if (m_scanBaseRecoveryPointArnHasBeenSet) {
    payload.WithString("ScanBaseRecoveryPointArn", m_scanBaseRecoveryPointArn);
  }

  if (m_scanIdHasBeenSet) {
    payload.WithString("ScanId", m_scanId);
  }

  if (m_scanJobIdHasBeenSet) {
    payload.WithString("ScanJobId", m_scanJobId);
  }

  if (m_scanModeHasBeenSet) {
    payload.WithString("ScanMode", ScanModeMapper::GetNameForScanMode(m_scanMode));
  }

  if (m_scanResultHasBeenSet) {
    payload.WithObject("ScanResult", m_scanResult.Jsonize());
  }

  if (m_scannerRoleArnHasBeenSet) {
    payload.WithString("ScannerRoleArn", m_scannerRoleArn);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", ScanStateMapper::GetNameForScanState(m_state));
  }

  if (m_statusMessageHasBeenSet) {
    payload.WithString("StatusMessage", m_statusMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
