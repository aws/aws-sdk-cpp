/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/VaultType.h>
#include <aws/backup/model/VaultState.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains metadata about a backup vault.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/BackupVaultListMember">AWS
   * API Reference</a></p>
   */
  class BackupVaultListMember
  {
  public:
    AWS_BACKUP_API BackupVaultListMember() = default;
    AWS_BACKUP_API BackupVaultListMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API BackupVaultListMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    BackupVaultListMember& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const { return m_backupVaultArn; }
    inline bool BackupVaultArnHasBeenSet() const { return m_backupVaultArnHasBeenSet; }
    template<typename BackupVaultArnT = Aws::String>
    void SetBackupVaultArn(BackupVaultArnT&& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = std::forward<BackupVaultArnT>(value); }
    template<typename BackupVaultArnT = Aws::String>
    BackupVaultListMember& WithBackupVaultArn(BackupVaultArnT&& value) { SetBackupVaultArn(std::forward<BackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of vault in which the described recovery point is stored.</p>
     */
    inline VaultType GetVaultType() const { return m_vaultType; }
    inline bool VaultTypeHasBeenSet() const { return m_vaultTypeHasBeenSet; }
    inline void SetVaultType(VaultType value) { m_vaultTypeHasBeenSet = true; m_vaultType = value; }
    inline BackupVaultListMember& WithVaultType(VaultType value) { SetVaultType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the vault.</p>
     */
    inline VaultState GetVaultState() const { return m_vaultState; }
    inline bool VaultStateHasBeenSet() const { return m_vaultStateHasBeenSet; }
    inline void SetVaultState(VaultState value) { m_vaultStateHasBeenSet = true; m_vaultState = value; }
    inline BackupVaultListMember& WithVaultState(VaultState value) { SetVaultState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a resource backup is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    BackupVaultListMember& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A server-side encryption key you can specify to encrypt your backups from
     * services that support full Backup management; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.
     * If you specify a key, you must specify its ARN, not its alias. If you do not
     * specify a key, Backup creates a KMS key for you by default.</p> <p>To learn
     * which Backup services support full Backup management and how Backup handles
     * encryption for backups from services that do not yet support full Backup, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/encryption.html">
     * Encryption for backups in Backup</a> </p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    BackupVaultListMember& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice. This parameter is
     * optional.</p> <p>If used, this parameter must contain 1 to 50 alphanumeric or
     * '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    BackupVaultListMember& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of recovery points that are stored in a backup vault.</p>
     */
    inline long long GetNumberOfRecoveryPoints() const { return m_numberOfRecoveryPoints; }
    inline bool NumberOfRecoveryPointsHasBeenSet() const { return m_numberOfRecoveryPointsHasBeenSet; }
    inline void SetNumberOfRecoveryPoints(long long value) { m_numberOfRecoveryPointsHasBeenSet = true; m_numberOfRecoveryPoints = value; }
    inline BackupVaultListMember& WithNumberOfRecoveryPoints(long long value) { SetNumberOfRecoveryPoints(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether Backup Vault Lock applies to the
     * selected backup vault. If <code>true</code>, Vault Lock prevents delete and
     * update operations on the recovery points in the selected vault.</p>
     */
    inline bool GetLocked() const { return m_locked; }
    inline bool LockedHasBeenSet() const { return m_lockedHasBeenSet; }
    inline void SetLocked(bool value) { m_lockedHasBeenSet = true; m_locked = value; }
    inline BackupVaultListMember& WithLocked(bool value) { SetLocked(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Backup Vault Lock setting that specifies the minimum retention period
     * that the vault retains its recovery points. If this parameter is not specified,
     * Vault Lock does not enforce a minimum retention period.</p> <p>If specified, any
     * backup or copy job to the vault must have a lifecycle policy with a retention
     * period equal to or longer than the minimum retention period. If the job's
     * retention period is shorter than that minimum retention period, then the vault
     * fails the backup or copy job, and you should either modify your lifecycle
     * settings or use a different vault. Recovery points already stored in the vault
     * prior to Vault Lock are not affected.</p>
     */
    inline long long GetMinRetentionDays() const { return m_minRetentionDays; }
    inline bool MinRetentionDaysHasBeenSet() const { return m_minRetentionDaysHasBeenSet; }
    inline void SetMinRetentionDays(long long value) { m_minRetentionDaysHasBeenSet = true; m_minRetentionDays = value; }
    inline BackupVaultListMember& WithMinRetentionDays(long long value) { SetMinRetentionDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Backup Vault Lock setting that specifies the maximum retention period
     * that the vault retains its recovery points. If this parameter is not specified,
     * Vault Lock does not enforce a maximum retention period on the recovery points in
     * the vault (allowing indefinite storage).</p> <p>If specified, any backup or copy
     * job to the vault must have a lifecycle policy with a retention period equal to
     * or shorter than the maximum retention period. If the job's retention period is
     * longer than that maximum retention period, then the vault fails the backup or
     * copy job, and you should either modify your lifecycle settings or use a
     * different vault. Recovery points already stored in the vault prior to Vault Lock
     * are not affected.</p>
     */
    inline long long GetMaxRetentionDays() const { return m_maxRetentionDays; }
    inline bool MaxRetentionDaysHasBeenSet() const { return m_maxRetentionDaysHasBeenSet; }
    inline void SetMaxRetentionDays(long long value) { m_maxRetentionDaysHasBeenSet = true; m_maxRetentionDays = value; }
    inline BackupVaultListMember& WithMaxRetentionDays(long long value) { SetMaxRetentionDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when Backup Vault Lock configuration becomes immutable,
     * meaning it cannot be changed or deleted.</p> <p>If you applied Vault Lock to
     * your vault without specifying a lock date, you can change your Vault Lock
     * settings, or delete Vault Lock from the vault entirely, at any time.</p> <p>This
     * value is in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLockDate() const { return m_lockDate; }
    inline bool LockDateHasBeenSet() const { return m_lockDateHasBeenSet; }
    template<typename LockDateT = Aws::Utils::DateTime>
    void SetLockDate(LockDateT&& value) { m_lockDateHasBeenSet = true; m_lockDate = std::forward<LockDateT>(value); }
    template<typename LockDateT = Aws::Utils::DateTime>
    BackupVaultListMember& WithLockDate(LockDateT&& value) { SetLockDate(std::forward<LockDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_backupVaultArn;
    bool m_backupVaultArnHasBeenSet = false;

    VaultType m_vaultType{VaultType::NOT_SET};
    bool m_vaultTypeHasBeenSet = false;

    VaultState m_vaultState{VaultState::NOT_SET};
    bool m_vaultStateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    long long m_numberOfRecoveryPoints{0};
    bool m_numberOfRecoveryPointsHasBeenSet = false;

    bool m_locked{false};
    bool m_lockedHasBeenSet = false;

    long long m_minRetentionDays{0};
    bool m_minRetentionDaysHasBeenSet = false;

    long long m_maxRetentionDays{0};
    bool m_maxRetentionDaysHasBeenSet = false;

    Aws::Utils::DateTime m_lockDate{};
    bool m_lockDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
