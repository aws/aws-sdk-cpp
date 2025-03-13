/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RecoveryPointByResource.h>
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

RecoveryPointByResource::RecoveryPointByResource(JsonView jsonValue)
{
  *this = jsonValue;
}

RecoveryPointByResource& RecoveryPointByResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecoveryPointArn"))
  {
    m_recoveryPointArn = jsonValue.GetString("RecoveryPointArn");
    m_recoveryPointArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");
    m_creationDateHasBeenSet = true;
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
  if(jsonValue.ValueExists("EncryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");
    m_encryptionKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackupSizeBytes"))
  {
    m_backupSizeBytes = jsonValue.GetInt64("BackupSizeBytes");
    m_backupSizeBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackupVaultName"))
  {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");
    m_backupVaultNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsParent"))
  {
    m_isParent = jsonValue.GetBool("IsParent");
    m_isParentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParentRecoveryPointArn"))
  {
    m_parentRecoveryPointArn = jsonValue.GetString("ParentRecoveryPointArn");
    m_parentRecoveryPointArnHasBeenSet = true;
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
  return *this;
}

JsonValue RecoveryPointByResource::Jsonize() const
{
  JsonValue payload;

  if(m_recoveryPointArnHasBeenSet)
  {
   payload.WithString("RecoveryPointArn", m_recoveryPointArn);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RecoveryPointStatusMapper::GetNameForRecoveryPointStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("EncryptionKeyArn", m_encryptionKeyArn);

  }

  if(m_backupSizeBytesHasBeenSet)
  {
   payload.WithInt64("BackupSizeBytes", m_backupSizeBytes);

  }

  if(m_backupVaultNameHasBeenSet)
  {
   payload.WithString("BackupVaultName", m_backupVaultName);

  }

  if(m_isParentHasBeenSet)
  {
   payload.WithBool("IsParent", m_isParent);

  }

  if(m_parentRecoveryPointArnHasBeenSet)
  {
   payload.WithString("ParentRecoveryPointArn", m_parentRecoveryPointArn);

  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("ResourceName", m_resourceName);

  }

  if(m_vaultTypeHasBeenSet)
  {
   payload.WithString("VaultType", VaultTypeMapper::GetNameForVaultType(m_vaultType));
  }

  if(m_indexStatusHasBeenSet)
  {
   payload.WithString("IndexStatus", IndexStatusMapper::GetNameForIndexStatus(m_indexStatus));
  }

  if(m_indexStatusMessageHasBeenSet)
  {
   payload.WithString("IndexStatusMessage", m_indexStatusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
