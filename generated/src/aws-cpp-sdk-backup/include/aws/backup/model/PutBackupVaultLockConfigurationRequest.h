/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class PutBackupVaultLockConfigurationRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API PutBackupVaultLockConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutBackupVaultLockConfiguration"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Backup Vault Lock configuration that specifies the name of the backup
     * vault it protects.</p>
     */
    inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    template<typename BackupVaultNameT = Aws::String>
    void SetBackupVaultName(BackupVaultNameT&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::forward<BackupVaultNameT>(value); }
    template<typename BackupVaultNameT = Aws::String>
    PutBackupVaultLockConfigurationRequest& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Backup Vault Lock configuration that specifies the minimum retention
     * period that the vault retains its recovery points. This setting can be useful
     * if, for example, your organization's policies require you to retain certain data
     * for at least seven years (2555 days).</p> <p>This parameter is required when a
     * vault lock is created through CloudFormation; otherwise, this parameter is
     * optional. If this parameter is not specified, Vault Lock will not enforce a
     * minimum retention period.</p> <p>If this parameter is specified, any backup or
     * copy job to the vault must have a lifecycle policy with a retention period equal
     * to or longer than the minimum retention period. If the job's retention period is
     * shorter than that minimum retention period, then the vault fails that backup or
     * copy job, and you should either modify your lifecycle settings or use a
     * different vault. The shortest minimum retention period you can specify is 1 day.
     * Recovery points already saved in the vault prior to Vault Lock are not
     * affected.</p>
     */
    inline long long GetMinRetentionDays() const { return m_minRetentionDays; }
    inline bool MinRetentionDaysHasBeenSet() const { return m_minRetentionDaysHasBeenSet; }
    inline void SetMinRetentionDays(long long value) { m_minRetentionDaysHasBeenSet = true; m_minRetentionDays = value; }
    inline PutBackupVaultLockConfigurationRequest& WithMinRetentionDays(long long value) { SetMinRetentionDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Backup Vault Lock configuration that specifies the maximum retention
     * period that the vault retains its recovery points. This setting can be useful
     * if, for example, your organization's policies require you to destroy certain
     * data after retaining it for four years (1460 days).</p> <p>If this parameter is
     * not included, Vault Lock does not enforce a maximum retention period on the
     * recovery points in the vault. If this parameter is included without a value,
     * Vault Lock will not enforce a maximum retention period.</p> <p>If this parameter
     * is specified, any backup or copy job to the vault must have a lifecycle policy
     * with a retention period equal to or shorter than the maximum retention period.
     * If the job's retention period is longer than that maximum retention period, then
     * the vault fails the backup or copy job, and you should either modify your
     * lifecycle settings or use a different vault. The longest maximum retention
     * period you can specify is 36500 days (approximately 100 years). Recovery points
     * already saved in the vault prior to Vault Lock are not affected.</p>
     */
    inline long long GetMaxRetentionDays() const { return m_maxRetentionDays; }
    inline bool MaxRetentionDaysHasBeenSet() const { return m_maxRetentionDaysHasBeenSet; }
    inline void SetMaxRetentionDays(long long value) { m_maxRetentionDaysHasBeenSet = true; m_maxRetentionDays = value; }
    inline PutBackupVaultLockConfigurationRequest& WithMaxRetentionDays(long long value) { SetMaxRetentionDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Backup Vault Lock configuration that specifies the number of days before
     * the lock date. For example, setting <code>ChangeableForDays</code> to 30 on Jan.
     * 1, 2022 at 8pm UTC will set the lock date to Jan. 31, 2022 at 8pm UTC.</p>
     * <p>Backup enforces a 72-hour cooling-off period before Vault Lock takes effect
     * and becomes immutable. Therefore, you must set <code>ChangeableForDays</code> to
     * 3 or greater.</p> <p>Before the lock date, you can delete Vault Lock from the
     * vault using <code>DeleteBackupVaultLockConfiguration</code> or change the Vault
     * Lock configuration using <code>PutBackupVaultLockConfiguration</code>. On and
     * after the lock date, the Vault Lock becomes immutable and cannot be changed or
     * deleted.</p> <p>If this parameter is not specified, you can delete Vault Lock
     * from the vault using <code>DeleteBackupVaultLockConfiguration</code> or change
     * the Vault Lock configuration using <code>PutBackupVaultLockConfiguration</code>
     * at any time.</p>
     */
    inline long long GetChangeableForDays() const { return m_changeableForDays; }
    inline bool ChangeableForDaysHasBeenSet() const { return m_changeableForDaysHasBeenSet; }
    inline void SetChangeableForDays(long long value) { m_changeableForDaysHasBeenSet = true; m_changeableForDays = value; }
    inline PutBackupVaultLockConfigurationRequest& WithChangeableForDays(long long value) { SetChangeableForDays(value); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    long long m_minRetentionDays{0};
    bool m_minRetentionDaysHasBeenSet = false;

    long long m_maxRetentionDays{0};
    bool m_maxRetentionDaysHasBeenSet = false;

    long long m_changeableForDays{0};
    bool m_changeableForDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
