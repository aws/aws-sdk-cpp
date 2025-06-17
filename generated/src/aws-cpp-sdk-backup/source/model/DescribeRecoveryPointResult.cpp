/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DescribeRecoveryPointResult.h>
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

DescribeRecoveryPointResult::DescribeRecoveryPointResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRecoveryPointResult& DescribeRecoveryPointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RecoveryPointArn"))
  {
    m_recoveryPointArn = jsonValue.GetString("RecoveryPointArn");
    m_recoveryPointArnHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("SourceBackupVaultArn"))
  {
    m_sourceBackupVaultArn = jsonValue.GetString("SourceBackupVaultArn");
    m_sourceBackupVaultArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");
    m_iamRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = RecoveryPointStatusMapper::GetRecoveryPointStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InitiationDate"))
  {
    m_initiationDate = jsonValue.GetDouble("InitiationDate");
    m_initiationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletionDate"))
  {
    m_completionDate = jsonValue.GetDouble("CompletionDate");
    m_completionDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackupSizeInBytes"))
  {
    m_backupSizeInBytes = jsonValue.GetInt64("BackupSizeInBytes");
    m_backupSizeInBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CalculatedLifecycle"))
  {
    m_calculatedLifecycle = jsonValue.GetObject("CalculatedLifecycle");
    m_calculatedLifecycleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = jsonValue.GetObject("Lifecycle");
    m_lifecycleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");
    m_encryptionKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsEncrypted"))
  {
    m_isEncrypted = jsonValue.GetBool("IsEncrypted");
    m_isEncryptedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StorageClass"))
  {
    m_storageClass = StorageClassMapper::GetStorageClassForName(jsonValue.GetString("StorageClass"));
    m_storageClassHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastRestoreTime"))
  {
    m_lastRestoreTime = jsonValue.GetDouble("LastRestoreTime");
    m_lastRestoreTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParentRecoveryPointArn"))
  {
    m_parentRecoveryPointArn = jsonValue.GetString("ParentRecoveryPointArn");
    m_parentRecoveryPointArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompositeMemberIdentifier"))
  {
    m_compositeMemberIdentifier = jsonValue.GetString("CompositeMemberIdentifier");
    m_compositeMemberIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsParent"))
  {
    m_isParent = jsonValue.GetBool("IsParent");
    m_isParentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceName"))
  {
    m_resourceName = jsonValue.GetString("ResourceName");
    m_resourceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VaultType"))
  {
    m_vaultType = VaultTypeMapper::GetVaultTypeForName(jsonValue.GetString("VaultType"));
    m_vaultTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexStatus"))
  {
    m_indexStatus = IndexStatusMapper::GetIndexStatusForName(jsonValue.GetString("IndexStatus"));
    m_indexStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexStatusMessage"))
  {
    m_indexStatusMessage = jsonValue.GetString("IndexStatusMessage");
    m_indexStatusMessageHasBeenSet = true;
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
