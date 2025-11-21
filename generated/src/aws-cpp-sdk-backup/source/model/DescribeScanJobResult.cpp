/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DescribeScanJobResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeScanJobResult::DescribeScanJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeScanJobResult& DescribeScanJobResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
