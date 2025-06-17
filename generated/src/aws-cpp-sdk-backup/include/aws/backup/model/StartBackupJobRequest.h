/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/Lifecycle.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/backup/model/Index.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class StartBackupJobRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API StartBackupJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBackupJob"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


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
    StartBackupJobRequest& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    StartBackupJobRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    StartBackupJobRequest& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartBackupJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    StartBackupJobRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. This value is optional, and the default is 8
     * hours. If this value is included, it must be at least 60 minutes to avoid
     * errors.</p> <p>This parameter has a maximum value of 100 years (52,560,000
     * minutes).</p> <p>During the start window, the backup job status remains in
     * <code>CREATED</code> status until it has successfully begun or until the start
     * window time has run out. If within the start window time Backup receives an
     * error that allows the job to be retried, Backup will automatically retry to
     * begin the job at least every 10 minutes until the backup successfully begins
     * (the job status changes to <code>RUNNING</code>) or until the job status changes
     * to <code>EXPIRED</code> (which is expected to occur when the start window time
     * is over).</p>
     */
    inline long long GetStartWindowMinutes() const { return m_startWindowMinutes; }
    inline bool StartWindowMinutesHasBeenSet() const { return m_startWindowMinutesHasBeenSet; }
    inline void SetStartWindowMinutes(long long value) { m_startWindowMinutesHasBeenSet = true; m_startWindowMinutes = value; }
    inline StartBackupJobRequest& WithStartWindowMinutes(long long value) { SetStartWindowMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value in minutes during which a successfully started backup must complete,
     * or else Backup will cancel the job. This value is optional. This value begins
     * counting down from when the backup was scheduled. It does not add additional
     * time for <code>StartWindowMinutes</code>, or if the backup started later than
     * scheduled.</p> <p>Like <code>StartWindowMinutes</code>, this parameter has a
     * maximum value of 100 years (52,560,000 minutes).</p>
     */
    inline long long GetCompleteWindowMinutes() const { return m_completeWindowMinutes; }
    inline bool CompleteWindowMinutesHasBeenSet() const { return m_completeWindowMinutesHasBeenSet; }
    inline void SetCompleteWindowMinutes(long long value) { m_completeWindowMinutesHasBeenSet = true; m_completeWindowMinutes = value; }
    inline StartBackupJobRequest& WithCompleteWindowMinutes(long long value) { SetCompleteWindowMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup will transition and expire backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “retention” setting must be 90 days greater than the
     * “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Resource types that can transition to cold storage are listed in the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/backup-feature-availability.html#features-by-resource">Feature
     * availability by resource</a> table. Backup ignores this expression for other
     * resource types.</p> <p>This parameter has a maximum value of 100 years (36,500
     * days).</p>
     */
    inline const Lifecycle& GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    template<typename LifecycleT = Lifecycle>
    void SetLifecycle(LifecycleT&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::forward<LifecycleT>(value); }
    template<typename LifecycleT = Lifecycle>
    StartBackupJobRequest& WithLifecycle(LifecycleT&& value) { SetLifecycle(std::forward<LifecycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRecoveryPointTags() const { return m_recoveryPointTags; }
    inline bool RecoveryPointTagsHasBeenSet() const { return m_recoveryPointTagsHasBeenSet; }
    template<typename RecoveryPointTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetRecoveryPointTags(RecoveryPointTagsT&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags = std::forward<RecoveryPointTagsT>(value); }
    template<typename RecoveryPointTagsT = Aws::Map<Aws::String, Aws::String>>
    StartBackupJobRequest& WithRecoveryPointTags(RecoveryPointTagsT&& value) { SetRecoveryPointTags(std::forward<RecoveryPointTagsT>(value)); return *this;}
    template<typename RecoveryPointTagsKeyT = Aws::String, typename RecoveryPointTagsValueT = Aws::String>
    StartBackupJobRequest& AddRecoveryPointTags(RecoveryPointTagsKeyT&& key, RecoveryPointTagsValueT&& value) {
      m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(std::forward<RecoveryPointTagsKeyT>(key), std::forward<RecoveryPointTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The backup option for a selected resource. This option is only available for
     * Windows Volume Shadow Copy Service (VSS) backup jobs.</p> <p>Valid values: Set
     * to <code>"WindowsVSS":"enabled"</code> to enable the <code>WindowsVSS</code>
     * backup option and create a Windows VSS backup. Set to
     * <code>"WindowsVSS""disabled"</code> to create a regular backup. The
     * <code>WindowsVSS</code> option is not enabled by default.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupOptions() const { return m_backupOptions; }
    inline bool BackupOptionsHasBeenSet() const { return m_backupOptionsHasBeenSet; }
    template<typename BackupOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetBackupOptions(BackupOptionsT&& value) { m_backupOptionsHasBeenSet = true; m_backupOptions = std::forward<BackupOptionsT>(value); }
    template<typename BackupOptionsT = Aws::Map<Aws::String, Aws::String>>
    StartBackupJobRequest& WithBackupOptions(BackupOptionsT&& value) { SetBackupOptions(std::forward<BackupOptionsT>(value)); return *this;}
    template<typename BackupOptionsKeyT = Aws::String, typename BackupOptionsValueT = Aws::String>
    StartBackupJobRequest& AddBackupOptions(BackupOptionsKeyT&& key, BackupOptionsValueT&& value) {
      m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(std::forward<BackupOptionsKeyT>(key), std::forward<BackupOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Include this parameter to enable index creation if your backup job has a
     * resource type that supports backup indexes.</p> <p>Resource types that support
     * backup indexes include:</p> <ul> <li> <p> <code>EBS</code> for Amazon Elastic
     * Block Store</p> </li> <li> <p> <code>S3</code> for Amazon Simple Storage Service
     * (Amazon S3)</p> </li> </ul> <p>Index can have 1 of 2 possible values, either
     * <code>ENABLED</code> or <code>DISABLED</code>.</p> <p>To create a backup index
     * for an eligible <code>ACTIVE</code> recovery point that does not yet have a
     * backup index, set value to <code>ENABLED</code>.</p> <p>To delete a backup
     * index, set value to <code>DISABLED</code>.</p>
     */
    inline Index GetIndex() const { return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(Index value) { m_indexHasBeenSet = true; m_index = value; }
    inline StartBackupJobRequest& WithIndex(Index value) { SetIndex(value); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_idempotencyTokenHasBeenSet = true;

    long long m_startWindowMinutes{0};
    bool m_startWindowMinutesHasBeenSet = false;

    long long m_completeWindowMinutes{0};
    bool m_completeWindowMinutesHasBeenSet = false;

    Lifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_recoveryPointTags;
    bool m_recoveryPointTagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_backupOptions;
    bool m_backupOptionsHasBeenSet = false;

    Index m_index{Index::NOT_SET};
    bool m_indexHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
