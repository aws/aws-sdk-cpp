/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DescribeBackupVaultResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBackupVaultResult::DescribeBackupVaultResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeBackupVaultResult& DescribeBackupVaultResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BackupVaultName"))
  {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");
    m_backupVaultNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackupVaultArn"))
  {
    m_backupVaultArn = jsonValue.GetString("BackupVaultArn");
    m_backupVaultArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VaultType"))
  {
    m_vaultType = VaultTypeMapper::GetVaultTypeForName(jsonValue.GetString("VaultType"));
    m_vaultTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VaultState"))
  {
    m_vaultState = VaultStateMapper::GetVaultStateForName(jsonValue.GetString("VaultState"));
    m_vaultStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");
    m_encryptionKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");
    m_creatorRequestIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfRecoveryPoints"))
  {
    m_numberOfRecoveryPoints = jsonValue.GetInt64("NumberOfRecoveryPoints");
    m_numberOfRecoveryPointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Locked"))
  {
    m_locked = jsonValue.GetBool("Locked");
    m_lockedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MinRetentionDays"))
  {
    m_minRetentionDays = jsonValue.GetInt64("MinRetentionDays");
    m_minRetentionDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxRetentionDays"))
  {
    m_maxRetentionDays = jsonValue.GetInt64("MaxRetentionDays");
    m_maxRetentionDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LockDate"))
  {
    m_lockDate = jsonValue.GetDouble("LockDate");
    m_lockDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceBackupVaultArn"))
  {
    m_sourceBackupVaultArn = jsonValue.GetString("SourceBackupVaultArn");
    m_sourceBackupVaultArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MpaApprovalTeamArn"))
  {
    m_mpaApprovalTeamArn = jsonValue.GetString("MpaApprovalTeamArn");
    m_mpaApprovalTeamArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MpaSessionArn"))
  {
    m_mpaSessionArn = jsonValue.GetString("MpaSessionArn");
    m_mpaSessionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestMpaApprovalTeamUpdate"))
  {
    m_latestMpaApprovalTeamUpdate = jsonValue.GetObject("LatestMpaApprovalTeamUpdate");
    m_latestMpaApprovalTeamUpdateHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
