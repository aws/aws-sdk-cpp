/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/RecoveryPointStatus.h>
#include <aws/backup/model/VaultType.h>
#include <aws/backup/model/IndexStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{

  /**
   * <p>Contains detailed information about a saved recovery point.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RecoveryPointByResource">AWS
   * API Reference</a></p>
   */
  class RecoveryPointByResource
  {
  public:
    AWS_BACKUP_API RecoveryPointByResource();
    AWS_BACKUP_API RecoveryPointByResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RecoveryPointByResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = value; }
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::move(value); }
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn.assign(value); }
    inline RecoveryPointByResource& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}
    inline RecoveryPointByResource& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}
    inline RecoveryPointByResource& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a recovery point is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline RecoveryPointByResource& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline RecoveryPointByResource& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status code specifying the state of the recovery point.</p>
     */
    inline const RecoveryPointStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RecoveryPointStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RecoveryPointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RecoveryPointByResource& WithStatus(const RecoveryPointStatus& value) { SetStatus(value); return *this;}
    inline RecoveryPointByResource& WithStatus(RecoveryPointStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message explaining the current status of the recovery point.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline RecoveryPointByResource& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline RecoveryPointByResource& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline RecoveryPointByResource& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }
    inline RecoveryPointByResource& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}
    inline RecoveryPointByResource& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}
    inline RecoveryPointByResource& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline long long GetBackupSizeBytes() const{ return m_backupSizeBytes; }
    inline bool BackupSizeBytesHasBeenSet() const { return m_backupSizeBytesHasBeenSet; }
    inline void SetBackupSizeBytes(long long value) { m_backupSizeBytesHasBeenSet = true; m_backupSizeBytes = value; }
    inline RecoveryPointByResource& WithBackupSizeBytes(long long value) { SetBackupSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }
    inline RecoveryPointByResource& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}
    inline RecoveryPointByResource& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}
    inline RecoveryPointByResource& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a boolean value indicating this is a parent (composite) recovery
     * point.</p>
     */
    inline bool GetIsParent() const{ return m_isParent; }
    inline bool IsParentHasBeenSet() const { return m_isParentHasBeenSet; }
    inline void SetIsParent(bool value) { m_isParentHasBeenSet = true; m_isParent = value; }
    inline RecoveryPointByResource& WithIsParent(bool value) { SetIsParent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the parent (composite) recovery point.</p>
     */
    inline const Aws::String& GetParentRecoveryPointArn() const{ return m_parentRecoveryPointArn; }
    inline bool ParentRecoveryPointArnHasBeenSet() const { return m_parentRecoveryPointArnHasBeenSet; }
    inline void SetParentRecoveryPointArn(const Aws::String& value) { m_parentRecoveryPointArnHasBeenSet = true; m_parentRecoveryPointArn = value; }
    inline void SetParentRecoveryPointArn(Aws::String&& value) { m_parentRecoveryPointArnHasBeenSet = true; m_parentRecoveryPointArn = std::move(value); }
    inline void SetParentRecoveryPointArn(const char* value) { m_parentRecoveryPointArnHasBeenSet = true; m_parentRecoveryPointArn.assign(value); }
    inline RecoveryPointByResource& WithParentRecoveryPointArn(const Aws::String& value) { SetParentRecoveryPointArn(value); return *this;}
    inline RecoveryPointByResource& WithParentRecoveryPointArn(Aws::String&& value) { SetParentRecoveryPointArn(std::move(value)); return *this;}
    inline RecoveryPointByResource& WithParentRecoveryPointArn(const char* value) { SetParentRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The non-unique name of the resource that belongs to the specified backup.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline RecoveryPointByResource& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline RecoveryPointByResource& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline RecoveryPointByResource& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of vault in which the described recovery point is stored.</p>
     */
    inline const VaultType& GetVaultType() const{ return m_vaultType; }
    inline bool VaultTypeHasBeenSet() const { return m_vaultTypeHasBeenSet; }
    inline void SetVaultType(const VaultType& value) { m_vaultTypeHasBeenSet = true; m_vaultType = value; }
    inline void SetVaultType(VaultType&& value) { m_vaultTypeHasBeenSet = true; m_vaultType = std::move(value); }
    inline RecoveryPointByResource& WithVaultType(const VaultType& value) { SetVaultType(value); return *this;}
    inline RecoveryPointByResource& WithVaultType(VaultType&& value) { SetVaultType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the current status for the backup index associated with the specified
     * recovery point.</p> <p>Statuses are: <code>PENDING</code> | <code>ACTIVE</code>
     * | <code>FAILED</code> | <code>DELETING</code> </p> <p>A recovery point with an
     * index that has the status of <code>ACTIVE</code> can be included in a
     * search.</p>
     */
    inline const IndexStatus& GetIndexStatus() const{ return m_indexStatus; }
    inline bool IndexStatusHasBeenSet() const { return m_indexStatusHasBeenSet; }
    inline void SetIndexStatus(const IndexStatus& value) { m_indexStatusHasBeenSet = true; m_indexStatus = value; }
    inline void SetIndexStatus(IndexStatus&& value) { m_indexStatusHasBeenSet = true; m_indexStatus = std::move(value); }
    inline RecoveryPointByResource& WithIndexStatus(const IndexStatus& value) { SetIndexStatus(value); return *this;}
    inline RecoveryPointByResource& WithIndexStatus(IndexStatus&& value) { SetIndexStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string in the form of a detailed message explaining the status of a backup
     * index associated with the recovery point.</p>
     */
    inline const Aws::String& GetIndexStatusMessage() const{ return m_indexStatusMessage; }
    inline bool IndexStatusMessageHasBeenSet() const { return m_indexStatusMessageHasBeenSet; }
    inline void SetIndexStatusMessage(const Aws::String& value) { m_indexStatusMessageHasBeenSet = true; m_indexStatusMessage = value; }
    inline void SetIndexStatusMessage(Aws::String&& value) { m_indexStatusMessageHasBeenSet = true; m_indexStatusMessage = std::move(value); }
    inline void SetIndexStatusMessage(const char* value) { m_indexStatusMessageHasBeenSet = true; m_indexStatusMessage.assign(value); }
    inline RecoveryPointByResource& WithIndexStatusMessage(const Aws::String& value) { SetIndexStatusMessage(value); return *this;}
    inline RecoveryPointByResource& WithIndexStatusMessage(Aws::String&& value) { SetIndexStatusMessage(std::move(value)); return *this;}
    inline RecoveryPointByResource& WithIndexStatusMessage(const char* value) { SetIndexStatusMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    RecoveryPointStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    long long m_backupSizeBytes;
    bool m_backupSizeBytesHasBeenSet = false;

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    bool m_isParent;
    bool m_isParentHasBeenSet = false;

    Aws::String m_parentRecoveryPointArn;
    bool m_parentRecoveryPointArnHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    VaultType m_vaultType;
    bool m_vaultTypeHasBeenSet = false;

    IndexStatus m_indexStatus;
    bool m_indexStatusHasBeenSet = false;

    Aws::String m_indexStatusMessage;
    bool m_indexStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
