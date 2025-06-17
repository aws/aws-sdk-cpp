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
#include <aws/backup/model/LatestMpaApprovalTeamUpdate.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{
  class DescribeBackupVaultResult
  {
  public:
    AWS_BACKUP_API DescribeBackupVaultResult() = default;
    AWS_BACKUP_API DescribeBackupVaultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeBackupVaultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created.</p>
     */
    inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
    template<typename BackupVaultNameT = Aws::String>
    void SetBackupVaultName(BackupVaultNameT&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::forward<BackupVaultNameT>(value); }
    template<typename BackupVaultNameT = Aws::String>
    DescribeBackupVaultResult& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const { return m_backupVaultArn; }
    template<typename BackupVaultArnT = Aws::String>
    void SetBackupVaultArn(BackupVaultArnT&& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = std::forward<BackupVaultArnT>(value); }
    template<typename BackupVaultArnT = Aws::String>
    DescribeBackupVaultResult& WithBackupVaultArn(BackupVaultArnT&& value) { SetBackupVaultArn(std::forward<BackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of vault described.</p>
     */
    inline VaultType GetVaultType() const { return m_vaultType; }
    inline void SetVaultType(VaultType value) { m_vaultTypeHasBeenSet = true; m_vaultType = value; }
    inline DescribeBackupVaultResult& WithVaultType(VaultType value) { SetVaultType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the vault.-&gt;</p>
     */
    inline VaultState GetVaultState() const { return m_vaultState; }
    inline void SetVaultState(VaultState value) { m_vaultStateHasBeenSet = true; m_vaultState = value; }
    inline DescribeBackupVaultResult& WithVaultState(VaultState value) { SetVaultState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    DescribeBackupVaultResult& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a backup vault is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    DescribeBackupVaultResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice. This parameter is
     * optional. If used, this parameter must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    DescribeBackupVaultResult& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of recovery points that are stored in a backup vault.</p>
     * <p>Recovery point count value displayed in the console can be an approximation.
     * Use <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_ListRecoveryPointsByBackupVault.html">
     * <code>ListRecoveryPointsByBackupVault</code> </a> API to obtain the exact
     * count.</p>
     */
    inline long long GetNumberOfRecoveryPoints() const { return m_numberOfRecoveryPoints; }
    inline void SetNumberOfRecoveryPoints(long long value) { m_numberOfRecoveryPointsHasBeenSet = true; m_numberOfRecoveryPoints = value; }
    inline DescribeBackupVaultResult& WithNumberOfRecoveryPoints(long long value) { SetNumberOfRecoveryPoints(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean that indicates whether Backup Vault Lock is currently protecting
     * the backup vault. <code>True</code> means that Vault Lock causes delete or
     * update operations on the recovery points stored in the vault to fail.</p>
     */
    inline bool GetLocked() const { return m_locked; }
    inline void SetLocked(bool value) { m_lockedHasBeenSet = true; m_locked = value; }
    inline DescribeBackupVaultResult& WithLocked(bool value) { SetLocked(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Backup Vault Lock setting that specifies the minimum retention period
     * that the vault retains its recovery points. If this parameter is not specified,
     * Vault Lock will not enforce a minimum retention period.</p> <p>If specified, any
     * backup or copy job to the vault must have a lifecycle policy with a retention
     * period equal to or longer than the minimum retention period. If the job's
     * retention period is shorter than that minimum retention period, then the vault
     * fails the backup or copy job, and you should either modify your lifecycle
     * settings or use a different vault. Recovery points already stored in the vault
     * prior to Vault Lock are not affected.</p>
     */
    inline long long GetMinRetentionDays() const { return m_minRetentionDays; }
    inline void SetMinRetentionDays(long long value) { m_minRetentionDaysHasBeenSet = true; m_minRetentionDays = value; }
    inline DescribeBackupVaultResult& WithMinRetentionDays(long long value) { SetMinRetentionDays(value); return *this;}
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
    inline void SetMaxRetentionDays(long long value) { m_maxRetentionDaysHasBeenSet = true; m_maxRetentionDays = value; }
    inline DescribeBackupVaultResult& WithMaxRetentionDays(long long value) { SetMaxRetentionDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when Backup Vault Lock configuration cannot be changed or
     * deleted.</p> <p>If you applied Vault Lock to your vault without specifying a
     * lock date, you can change any of your Vault Lock settings, or delete Vault Lock
     * from the vault entirely, at any time.</p> <p>This value is in Unix format,
     * Coordinated Universal Time (UTC), and accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLockDate() const { return m_lockDate; }
    template<typename LockDateT = Aws::Utils::DateTime>
    void SetLockDate(LockDateT&& value) { m_lockDateHasBeenSet = true; m_lockDate = std::forward<LockDateT>(value); }
    template<typename LockDateT = Aws::Utils::DateTime>
    DescribeBackupVaultResult& WithLockDate(LockDateT&& value) { SetLockDate(std::forward<LockDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the source backup vault from which this restore access backup
     * vault was created.</p>
     */
    inline const Aws::String& GetSourceBackupVaultArn() const { return m_sourceBackupVaultArn; }
    template<typename SourceBackupVaultArnT = Aws::String>
    void SetSourceBackupVaultArn(SourceBackupVaultArnT&& value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn = std::forward<SourceBackupVaultArnT>(value); }
    template<typename SourceBackupVaultArnT = Aws::String>
    DescribeBackupVaultResult& WithSourceBackupVaultArn(SourceBackupVaultArnT&& value) { SetSourceBackupVaultArn(std::forward<SourceBackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the MPA approval team associated with this backup vault.</p>
     */
    inline const Aws::String& GetMpaApprovalTeamArn() const { return m_mpaApprovalTeamArn; }
    template<typename MpaApprovalTeamArnT = Aws::String>
    void SetMpaApprovalTeamArn(MpaApprovalTeamArnT&& value) { m_mpaApprovalTeamArnHasBeenSet = true; m_mpaApprovalTeamArn = std::forward<MpaApprovalTeamArnT>(value); }
    template<typename MpaApprovalTeamArnT = Aws::String>
    DescribeBackupVaultResult& WithMpaApprovalTeamArn(MpaApprovalTeamArnT&& value) { SetMpaApprovalTeamArn(std::forward<MpaApprovalTeamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the MPA session associated with this backup vault.</p>
     */
    inline const Aws::String& GetMpaSessionArn() const { return m_mpaSessionArn; }
    template<typename MpaSessionArnT = Aws::String>
    void SetMpaSessionArn(MpaSessionArnT&& value) { m_mpaSessionArnHasBeenSet = true; m_mpaSessionArn = std::forward<MpaSessionArnT>(value); }
    template<typename MpaSessionArnT = Aws::String>
    DescribeBackupVaultResult& WithMpaSessionArn(MpaSessionArnT&& value) { SetMpaSessionArn(std::forward<MpaSessionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the latest update to the MPA approval team association for
     * this backup vault.</p>
     */
    inline const LatestMpaApprovalTeamUpdate& GetLatestMpaApprovalTeamUpdate() const { return m_latestMpaApprovalTeamUpdate; }
    template<typename LatestMpaApprovalTeamUpdateT = LatestMpaApprovalTeamUpdate>
    void SetLatestMpaApprovalTeamUpdate(LatestMpaApprovalTeamUpdateT&& value) { m_latestMpaApprovalTeamUpdateHasBeenSet = true; m_latestMpaApprovalTeamUpdate = std::forward<LatestMpaApprovalTeamUpdateT>(value); }
    template<typename LatestMpaApprovalTeamUpdateT = LatestMpaApprovalTeamUpdate>
    DescribeBackupVaultResult& WithLatestMpaApprovalTeamUpdate(LatestMpaApprovalTeamUpdateT&& value) { SetLatestMpaApprovalTeamUpdate(std::forward<LatestMpaApprovalTeamUpdateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBackupVaultResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

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

    Aws::String m_sourceBackupVaultArn;
    bool m_sourceBackupVaultArnHasBeenSet = false;

    Aws::String m_mpaApprovalTeamArn;
    bool m_mpaApprovalTeamArnHasBeenSet = false;

    Aws::String m_mpaSessionArn;
    bool m_mpaSessionArnHasBeenSet = false;

    LatestMpaApprovalTeamUpdate m_latestMpaApprovalTeamUpdate;
    bool m_latestMpaApprovalTeamUpdateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
