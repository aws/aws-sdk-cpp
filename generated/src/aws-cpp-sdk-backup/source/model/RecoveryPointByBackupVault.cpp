/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RecoveryPointByBackupVault.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

RecoveryPointByBackupVault::RecoveryPointByBackupVault() : 
    m_recoveryPointArnHasBeenSet(false),
    m_backupVaultNameHasBeenSet(false),
    m_backupVaultArnHasBeenSet(false),
    m_sourceBackupVaultArnHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_status(RecoveryPointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_completionDateHasBeenSet(false),
    m_backupSizeInBytes(0),
    m_backupSizeInBytesHasBeenSet(false),
    m_calculatedLifecycleHasBeenSet(false),
    m_lifecycleHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false),
    m_isEncrypted(false),
    m_isEncryptedHasBeenSet(false),
    m_lastRestoreTimeHasBeenSet(false),
    m_parentRecoveryPointArnHasBeenSet(false),
    m_compositeMemberIdentifierHasBeenSet(false),
    m_isParent(false),
    m_isParentHasBeenSet(false)
{
}

RecoveryPointByBackupVault::RecoveryPointByBackupVault(JsonView jsonValue) : 
    m_recoveryPointArnHasBeenSet(false),
    m_backupVaultNameHasBeenSet(false),
    m_backupVaultArnHasBeenSet(false),
    m_sourceBackupVaultArnHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_status(RecoveryPointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_completionDateHasBeenSet(false),
    m_backupSizeInBytes(0),
    m_backupSizeInBytesHasBeenSet(false),
    m_calculatedLifecycleHasBeenSet(false),
    m_lifecycleHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false),
    m_isEncrypted(false),
    m_isEncryptedHasBeenSet(false),
    m_lastRestoreTimeHasBeenSet(false),
    m_parentRecoveryPointArnHasBeenSet(false),
    m_compositeMemberIdentifierHasBeenSet(false),
    m_isParent(false),
    m_isParentHasBeenSet(false)
{
  *this = jsonValue;
}

RecoveryPointByBackupVault& RecoveryPointByBackupVault::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue RecoveryPointByBackupVault::Jsonize() const
{
  JsonValue payload;

  if(m_recoveryPointArnHasBeenSet)
  {
   payload.WithString("RecoveryPointArn", m_recoveryPointArn);

  }

  if(m_backupVaultNameHasBeenSet)
  {
   payload.WithString("BackupVaultName", m_backupVaultName);

  }

  if(m_backupVaultArnHasBeenSet)
  {
   payload.WithString("BackupVaultArn", m_backupVaultArn);

  }

  if(m_sourceBackupVaultArnHasBeenSet)
  {
   payload.WithString("SourceBackupVaultArn", m_sourceBackupVaultArn);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RecoveryPointStatusMapper::GetNameForRecoveryPointStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_completionDateHasBeenSet)
  {
   payload.WithDouble("CompletionDate", m_completionDate.SecondsWithMSPrecision());
  }

  if(m_backupSizeInBytesHasBeenSet)
  {
   payload.WithInt64("BackupSizeInBytes", m_backupSizeInBytes);

  }

  if(m_calculatedLifecycleHasBeenSet)
  {
   payload.WithObject("CalculatedLifecycle", m_calculatedLifecycle.Jsonize());

  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithObject("Lifecycle", m_lifecycle.Jsonize());

  }

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("EncryptionKeyArn", m_encryptionKeyArn);

  }

  if(m_isEncryptedHasBeenSet)
  {
   payload.WithBool("IsEncrypted", m_isEncrypted);

  }

  if(m_lastRestoreTimeHasBeenSet)
  {
   payload.WithDouble("LastRestoreTime", m_lastRestoreTime.SecondsWithMSPrecision());
  }

  if(m_parentRecoveryPointArnHasBeenSet)
  {
   payload.WithString("ParentRecoveryPointArn", m_parentRecoveryPointArn);

  }

  if(m_compositeMemberIdentifierHasBeenSet)
  {
   payload.WithString("CompositeMemberIdentifier", m_compositeMemberIdentifier);

  }

  if(m_isParentHasBeenSet)
  {
   payload.WithBool("IsParent", m_isParent);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
