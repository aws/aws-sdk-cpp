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
    AWS_BACKUP_API RecoveryPointByResource() = default;
    AWS_BACKUP_API RecoveryPointByResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RecoveryPointByResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const { return m_recoveryPointArn; }
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }
    template<typename RecoveryPointArnT = Aws::String>
    void SetRecoveryPointArn(RecoveryPointArnT&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::forward<RecoveryPointArnT>(value); }
    template<typename RecoveryPointArnT = Aws::String>
    RecoveryPointByResource& WithRecoveryPointArn(RecoveryPointArnT&& value) { SetRecoveryPointArn(std::forward<RecoveryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a recovery point is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    RecoveryPointByResource& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status code specifying the state of the recovery point.</p>
     */
    inline RecoveryPointStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RecoveryPointStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RecoveryPointByResource& WithStatus(RecoveryPointStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message explaining the current status of the recovery point.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    RecoveryPointByResource& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    RecoveryPointByResource& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline long long GetBackupSizeBytes() const { return m_backupSizeBytes; }
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
    inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    template<typename BackupVaultNameT = Aws::String>
    void SetBackupVaultName(BackupVaultNameT&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::forward<BackupVaultNameT>(value); }
    template<typename BackupVaultNameT = Aws::String>
    RecoveryPointByResource& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a boolean value indicating this is a parent (composite) recovery
     * point.</p>
     */
    inline bool GetIsParent() const { return m_isParent; }
    inline bool IsParentHasBeenSet() const { return m_isParentHasBeenSet; }
    inline void SetIsParent(bool value) { m_isParentHasBeenSet = true; m_isParent = value; }
    inline RecoveryPointByResource& WithIsParent(bool value) { SetIsParent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the parent (composite) recovery point.</p>
     */
    inline const Aws::String& GetParentRecoveryPointArn() const { return m_parentRecoveryPointArn; }
    inline bool ParentRecoveryPointArnHasBeenSet() const { return m_parentRecoveryPointArnHasBeenSet; }
    template<typename ParentRecoveryPointArnT = Aws::String>
    void SetParentRecoveryPointArn(ParentRecoveryPointArnT&& value) { m_parentRecoveryPointArnHasBeenSet = true; m_parentRecoveryPointArn = std::forward<ParentRecoveryPointArnT>(value); }
    template<typename ParentRecoveryPointArnT = Aws::String>
    RecoveryPointByResource& WithParentRecoveryPointArn(ParentRecoveryPointArnT&& value) { SetParentRecoveryPointArn(std::forward<ParentRecoveryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The non-unique name of the resource that belongs to the specified backup.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    RecoveryPointByResource& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of vault in which the described recovery point is stored.</p>
     */
    inline VaultType GetVaultType() const { return m_vaultType; }
    inline bool VaultTypeHasBeenSet() const { return m_vaultTypeHasBeenSet; }
    inline void SetVaultType(VaultType value) { m_vaultTypeHasBeenSet = true; m_vaultType = value; }
    inline RecoveryPointByResource& WithVaultType(VaultType value) { SetVaultType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the current status for the backup index associated with the specified
     * recovery point.</p> <p>Statuses are: <code>PENDING</code> | <code>ACTIVE</code>
     * | <code>FAILED</code> | <code>DELETING</code> </p> <p>A recovery point with an
     * index that has the status of <code>ACTIVE</code> can be included in a
     * search.</p>
     */
    inline IndexStatus GetIndexStatus() const { return m_indexStatus; }
    inline bool IndexStatusHasBeenSet() const { return m_indexStatusHasBeenSet; }
    inline void SetIndexStatus(IndexStatus value) { m_indexStatusHasBeenSet = true; m_indexStatus = value; }
    inline RecoveryPointByResource& WithIndexStatus(IndexStatus value) { SetIndexStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string in the form of a detailed message explaining the status of a backup
     * index associated with the recovery point.</p>
     */
    inline const Aws::String& GetIndexStatusMessage() const { return m_indexStatusMessage; }
    inline bool IndexStatusMessageHasBeenSet() const { return m_indexStatusMessageHasBeenSet; }
    template<typename IndexStatusMessageT = Aws::String>
    void SetIndexStatusMessage(IndexStatusMessageT&& value) { m_indexStatusMessageHasBeenSet = true; m_indexStatusMessage = std::forward<IndexStatusMessageT>(value); }
    template<typename IndexStatusMessageT = Aws::String>
    RecoveryPointByResource& WithIndexStatusMessage(IndexStatusMessageT&& value) { SetIndexStatusMessage(std::forward<IndexStatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    RecoveryPointStatus m_status{RecoveryPointStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    long long m_backupSizeBytes{0};
    bool m_backupSizeBytesHasBeenSet = false;

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    bool m_isParent{false};
    bool m_isParentHasBeenSet = false;

    Aws::String m_parentRecoveryPointArn;
    bool m_parentRecoveryPointArnHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    VaultType m_vaultType{VaultType::NOT_SET};
    bool m_vaultTypeHasBeenSet = false;

    IndexStatus m_indexStatus{IndexStatus::NOT_SET};
    bool m_indexStatusHasBeenSet = false;

    Aws::String m_indexStatusMessage;
    bool m_indexStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
