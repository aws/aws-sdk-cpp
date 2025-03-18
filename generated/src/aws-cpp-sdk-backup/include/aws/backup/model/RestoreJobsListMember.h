/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/RestoreJobStatus.h>
#include <aws/backup/model/RestoreJobCreator.h>
#include <aws/backup/model/RestoreValidationStatus.h>
#include <aws/backup/model/RestoreDeletionStatus.h>
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
   * <p>Contains metadata about a restore job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RestoreJobsListMember">AWS
   * API Reference</a></p>
   */
  class RestoreJobsListMember
  {
  public:
    AWS_BACKUP_API RestoreJobsListMember() = default;
    AWS_BACKUP_API RestoreJobsListMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreJobsListMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account ID that owns the restore job.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    RestoreJobsListMember& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline const Aws::String& GetRestoreJobId() const { return m_restoreJobId; }
    inline bool RestoreJobIdHasBeenSet() const { return m_restoreJobIdHasBeenSet; }
    template<typename RestoreJobIdT = Aws::String>
    void SetRestoreJobId(RestoreJobIdT&& value) { m_restoreJobIdHasBeenSet = true; m_restoreJobId = std::forward<RestoreJobIdT>(value); }
    template<typename RestoreJobIdT = Aws::String>
    RestoreJobsListMember& WithRestoreJobId(RestoreJobIdT&& value) { SetRestoreJobId(std::forward<RestoreJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const { return m_recoveryPointArn; }
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }
    template<typename RecoveryPointArnT = Aws::String>
    void SetRecoveryPointArn(RecoveryPointArnT&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::forward<RecoveryPointArnT>(value); }
    template<typename RecoveryPointArnT = Aws::String>
    RestoreJobsListMember& WithRecoveryPointArn(RecoveryPointArnT&& value) { SetRecoveryPointArn(std::forward<RecoveryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a restore job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    RestoreJobsListMember& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a job to restore a recovery point is completed, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const { return m_completionDate; }
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }
    template<typename CompletionDateT = Aws::Utils::DateTime>
    void SetCompletionDate(CompletionDateT&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::forward<CompletionDateT>(value); }
    template<typename CompletionDateT = Aws::Utils::DateTime>
    RestoreJobsListMember& WithCompletionDate(CompletionDateT&& value) { SetCompletionDate(std::forward<CompletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status code specifying the state of the job initiated by Backup to restore
     * a recovery point.</p>
     */
    inline RestoreJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RestoreJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RestoreJobsListMember& WithStatus(RestoreJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed message explaining the status of the job to restore a recovery
     * point.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    RestoreJobsListMember& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains an estimated percentage complete of a job at the time the job status
     * was queried.</p>
     */
    inline const Aws::String& GetPercentDone() const { return m_percentDone; }
    inline bool PercentDoneHasBeenSet() const { return m_percentDoneHasBeenSet; }
    template<typename PercentDoneT = Aws::String>
    void SetPercentDone(PercentDoneT&& value) { m_percentDoneHasBeenSet = true; m_percentDone = std::forward<PercentDoneT>(value); }
    template<typename PercentDoneT = Aws::String>
    RestoreJobsListMember& WithPercentDone(PercentDoneT&& value) { SetPercentDone(std::forward<PercentDoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of the restored resource.</p>
     */
    inline long long GetBackupSizeInBytes() const { return m_backupSizeInBytes; }
    inline bool BackupSizeInBytesHasBeenSet() const { return m_backupSizeInBytesHasBeenSet; }
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytesHasBeenSet = true; m_backupSizeInBytes = value; }
    inline RestoreJobsListMember& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN used to create the target recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    RestoreJobsListMember& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time in minutes that a job restoring a recovery point is
     * expected to take.</p>
     */
    inline long long GetExpectedCompletionTimeMinutes() const { return m_expectedCompletionTimeMinutes; }
    inline bool ExpectedCompletionTimeMinutesHasBeenSet() const { return m_expectedCompletionTimeMinutesHasBeenSet; }
    inline void SetExpectedCompletionTimeMinutes(long long value) { m_expectedCompletionTimeMinutesHasBeenSet = true; m_expectedCompletionTimeMinutes = value; }
    inline RestoreJobsListMember& WithExpectedCompletionTimeMinutes(long long value) { SetExpectedCompletionTimeMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline const Aws::String& GetCreatedResourceArn() const { return m_createdResourceArn; }
    inline bool CreatedResourceArnHasBeenSet() const { return m_createdResourceArnHasBeenSet; }
    template<typename CreatedResourceArnT = Aws::String>
    void SetCreatedResourceArn(CreatedResourceArnT&& value) { m_createdResourceArnHasBeenSet = true; m_createdResourceArn = std::forward<CreatedResourceArnT>(value); }
    template<typename CreatedResourceArnT = Aws::String>
    RestoreJobsListMember& WithCreatedResourceArn(CreatedResourceArnT&& value) { SetCreatedResourceArn(std::forward<CreatedResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type of the listed restore jobs; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database. For Windows Volume Shadow Copy Service (VSS) backups, the only
     * supported resource type is Amazon EC2.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    RestoreJobsListMember& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which a recovery point was created.</p>
     */
    inline const Aws::Utils::DateTime& GetRecoveryPointCreationDate() const { return m_recoveryPointCreationDate; }
    inline bool RecoveryPointCreationDateHasBeenSet() const { return m_recoveryPointCreationDateHasBeenSet; }
    template<typename RecoveryPointCreationDateT = Aws::Utils::DateTime>
    void SetRecoveryPointCreationDate(RecoveryPointCreationDateT&& value) { m_recoveryPointCreationDateHasBeenSet = true; m_recoveryPointCreationDate = std::forward<RecoveryPointCreationDateT>(value); }
    template<typename RecoveryPointCreationDateT = Aws::Utils::DateTime>
    RestoreJobsListMember& WithRecoveryPointCreationDate(RecoveryPointCreationDateT&& value) { SetRecoveryPointCreationDate(std::forward<RecoveryPointCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains identifying information about the creation of a restore job.</p>
     */
    inline const RestoreJobCreator& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = RestoreJobCreator>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = RestoreJobCreator>
    RestoreJobsListMember& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of validation run on the indicated restore job.</p>
     */
    inline RestoreValidationStatus GetValidationStatus() const { return m_validationStatus; }
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
    inline void SetValidationStatus(RestoreValidationStatus value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }
    inline RestoreJobsListMember& WithValidationStatus(RestoreValidationStatus value) { SetValidationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This describes the status of validation run on the indicated restore job.</p>
     */
    inline const Aws::String& GetValidationStatusMessage() const { return m_validationStatusMessage; }
    inline bool ValidationStatusMessageHasBeenSet() const { return m_validationStatusMessageHasBeenSet; }
    template<typename ValidationStatusMessageT = Aws::String>
    void SetValidationStatusMessage(ValidationStatusMessageT&& value) { m_validationStatusMessageHasBeenSet = true; m_validationStatusMessage = std::forward<ValidationStatusMessageT>(value); }
    template<typename ValidationStatusMessageT = Aws::String>
    RestoreJobsListMember& WithValidationStatusMessage(ValidationStatusMessageT&& value) { SetValidationStatusMessage(std::forward<ValidationStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This notes the status of the data generated by the restore test. The status
     * may be <code>Deleting</code>, <code>Failed</code>, or
     * <code>Successful</code>.</p>
     */
    inline RestoreDeletionStatus GetDeletionStatus() const { return m_deletionStatus; }
    inline bool DeletionStatusHasBeenSet() const { return m_deletionStatusHasBeenSet; }
    inline void SetDeletionStatus(RestoreDeletionStatus value) { m_deletionStatusHasBeenSet = true; m_deletionStatus = value; }
    inline RestoreJobsListMember& WithDeletionStatus(RestoreDeletionStatus value) { SetDeletionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This describes the restore job deletion status.</p>
     */
    inline const Aws::String& GetDeletionStatusMessage() const { return m_deletionStatusMessage; }
    inline bool DeletionStatusMessageHasBeenSet() const { return m_deletionStatusMessageHasBeenSet; }
    template<typename DeletionStatusMessageT = Aws::String>
    void SetDeletionStatusMessage(DeletionStatusMessageT&& value) { m_deletionStatusMessageHasBeenSet = true; m_deletionStatusMessage = std::forward<DeletionStatusMessageT>(value); }
    template<typename DeletionStatusMessageT = Aws::String>
    RestoreJobsListMember& WithDeletionStatusMessage(DeletionStatusMessageT&& value) { SetDeletionStatusMessage(std::forward<DeletionStatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_restoreJobId;
    bool m_restoreJobIdHasBeenSet = false;

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_completionDate{};
    bool m_completionDateHasBeenSet = false;

    RestoreJobStatus m_status{RestoreJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_percentDone;
    bool m_percentDoneHasBeenSet = false;

    long long m_backupSizeInBytes{0};
    bool m_backupSizeInBytesHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    long long m_expectedCompletionTimeMinutes{0};
    bool m_expectedCompletionTimeMinutesHasBeenSet = false;

    Aws::String m_createdResourceArn;
    bool m_createdResourceArnHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_recoveryPointCreationDate{};
    bool m_recoveryPointCreationDateHasBeenSet = false;

    RestoreJobCreator m_createdBy;
    bool m_createdByHasBeenSet = false;

    RestoreValidationStatus m_validationStatus{RestoreValidationStatus::NOT_SET};
    bool m_validationStatusHasBeenSet = false;

    Aws::String m_validationStatusMessage;
    bool m_validationStatusMessageHasBeenSet = false;

    RestoreDeletionStatus m_deletionStatus{RestoreDeletionStatus::NOT_SET};
    bool m_deletionStatusHasBeenSet = false;

    Aws::String m_deletionStatusMessage;
    bool m_deletionStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
