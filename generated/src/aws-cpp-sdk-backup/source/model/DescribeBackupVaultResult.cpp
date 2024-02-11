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

DescribeBackupVaultResult::DescribeBackupVaultResult() : 
    m_vaultType(VaultType::NOT_SET),
    m_numberOfRecoveryPoints(0),
    m_locked(false),
    m_minRetentionDays(0),
    m_maxRetentionDays(0)
{
}

DescribeBackupVaultResult::DescribeBackupVaultResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_vaultType(VaultType::NOT_SET),
    m_numberOfRecoveryPoints(0),
    m_locked(false),
    m_minRetentionDays(0),
    m_maxRetentionDays(0)
{
  *this = result;
}

DescribeBackupVaultResult& DescribeBackupVaultResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BackupVaultName"))
  {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");

  }

  if(jsonValue.ValueExists("BackupVaultArn"))
  {
    m_backupVaultArn = jsonValue.GetString("BackupVaultArn");

  }

  if(jsonValue.ValueExists("VaultType"))
  {
    m_vaultType = VaultTypeMapper::GetVaultTypeForName(jsonValue.GetString("VaultType"));

  }

  if(jsonValue.ValueExists("EncryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");

  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

  }

  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");

  }

  if(jsonValue.ValueExists("NumberOfRecoveryPoints"))
  {
    m_numberOfRecoveryPoints = jsonValue.GetInt64("NumberOfRecoveryPoints");

  }

  if(jsonValue.ValueExists("Locked"))
  {
    m_locked = jsonValue.GetBool("Locked");

  }

  if(jsonValue.ValueExists("MinRetentionDays"))
  {
    m_minRetentionDays = jsonValue.GetInt64("MinRetentionDays");

  }

  if(jsonValue.ValueExists("MaxRetentionDays"))
  {
    m_maxRetentionDays = jsonValue.GetInt64("MaxRetentionDays");

  }

  if(jsonValue.ValueExists("LockDate"))
  {
    m_lockDate = jsonValue.GetDouble("LockDate");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
