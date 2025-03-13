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
  class DescribeRestoreJobResult
  {
  public:
    AWS_BACKUP_API DescribeRestoreJobResult() = default;
    AWS_BACKUP_API DescribeRestoreJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeRestoreJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the account ID that owns the restore job.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    DescribeRestoreJobResult& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline const Aws::String& GetRestoreJobId() const { return m_restoreJobId; }
    template<typename RestoreJobIdT = Aws::String>
    void SetRestoreJobId(RestoreJobIdT&& value) { m_restoreJobIdHasBeenSet = true; m_restoreJobId = std::forward<RestoreJobIdT>(value); }
    template<typename RestoreJobIdT = Aws::String>
    DescribeRestoreJobResult& WithRestoreJobId(RestoreJobIdT&& value) { SetRestoreJobId(std::forward<RestoreJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const { return m_recoveryPointArn; }
    template<typename RecoveryPointArnT = Aws::String>
    void SetRecoveryPointArn(RecoveryPointArnT&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::forward<RecoveryPointArnT>(value); }
    template<typename RecoveryPointArnT = Aws::String>
    DescribeRestoreJobResult& WithRecoveryPointArn(RecoveryPointArnT&& value) { SetRecoveryPointArn(std::forward<RecoveryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a restore job is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    DescribeRestoreJobResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a job to restore a recovery point is completed, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const { return m_completionDate; }
    template<typename CompletionDateT = Aws::Utils::DateTime>
    void SetCompletionDate(CompletionDateT&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::forward<CompletionDateT>(value); }
    template<typename CompletionDateT = Aws::Utils::DateTime>
    DescribeRestoreJobResult& WithCompletionDate(CompletionDateT&& value) { SetCompletionDate(std::forward<CompletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status code specifying the state of the job that is initiated by Backup to
     * restore a recovery point.</p>
     */
    inline RestoreJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(RestoreJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeRestoreJobResult& WithStatus(RestoreJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message showing the status of a job to restore a recovery point.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    DescribeRestoreJobResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains an estimated percentage that is complete of a job at the time the
     * job status was queried.</p>
     */
    inline const Aws::String& GetPercentDone() const { return m_percentDone; }
    template<typename PercentDoneT = Aws::String>
    void SetPercentDone(PercentDoneT&& value) { m_percentDoneHasBeenSet = true; m_percentDone = std::forward<PercentDoneT>(value); }
    template<typename PercentDoneT = Aws::String>
    DescribeRestoreJobResult& WithPercentDone(PercentDoneT&& value) { SetPercentDone(std::forward<PercentDoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of the restored resource.</p>
     */
    inline long long GetBackupSizeInBytes() const { return m_backupSizeInBytes; }
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytesHasBeenSet = true; m_backupSizeInBytes = value; }
    inline DescribeRestoreJobResult& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    DescribeRestoreJobResult& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time in minutes that a job restoring a recovery point is
     * expected to take.</p>
     */
    inline long long GetExpectedCompletionTimeMinutes() const { return m_expectedCompletionTimeMinutes; }
    inline void SetExpectedCompletionTimeMinutes(long long value) { m_expectedCompletionTimeMinutesHasBeenSet = true; m_expectedCompletionTimeMinutes = value; }
    inline DescribeRestoreJobResult& WithExpectedCompletionTimeMinutes(long long value) { SetExpectedCompletionTimeMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource that was created by the
     * restore job.</p> <p>The format of the ARN depends on the resource type of the
     * backed-up resource.</p>
     */
    inline const Aws::String& GetCreatedResourceArn() const { return m_createdResourceArn; }
    template<typename CreatedResourceArnT = Aws::String>
    void SetCreatedResourceArn(CreatedResourceArnT&& value) { m_createdResourceArnHasBeenSet = true; m_createdResourceArn = std::forward<CreatedResourceArnT>(value); }
    template<typename CreatedResourceArnT = Aws::String>
    DescribeRestoreJobResult& WithCreatedResourceArn(CreatedResourceArnT&& value) { SetCreatedResourceArn(std::forward<CreatedResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns metadata associated with a restore job listed by resource type.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    DescribeRestoreJobResult& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date of the recovery point made by the specifed restore job.</p>
     */
    inline const Aws::Utils::DateTime& GetRecoveryPointCreationDate() const { return m_recoveryPointCreationDate; }
    template<typename RecoveryPointCreationDateT = Aws::Utils::DateTime>
    void SetRecoveryPointCreationDate(RecoveryPointCreationDateT&& value) { m_recoveryPointCreationDateHasBeenSet = true; m_recoveryPointCreationDate = std::forward<RecoveryPointCreationDateT>(value); }
    template<typename RecoveryPointCreationDateT = Aws::Utils::DateTime>
    DescribeRestoreJobResult& WithRecoveryPointCreationDate(RecoveryPointCreationDateT&& value) { SetRecoveryPointCreationDate(std::forward<RecoveryPointCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains identifying information about the creation of a restore job.</p>
     */
    inline const RestoreJobCreator& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = RestoreJobCreator>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = RestoreJobCreator>
    DescribeRestoreJobResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of validation run on the indicated restore job.</p>
     */
    inline RestoreValidationStatus GetValidationStatus() const { return m_validationStatus; }
    inline void SetValidationStatus(RestoreValidationStatus value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }
    inline DescribeRestoreJobResult& WithValidationStatus(RestoreValidationStatus value) { SetValidationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetValidationStatusMessage() const { return m_validationStatusMessage; }
    template<typename ValidationStatusMessageT = Aws::String>
    void SetValidationStatusMessage(ValidationStatusMessageT&& value) { m_validationStatusMessageHasBeenSet = true; m_validationStatusMessage = std::forward<ValidationStatusMessageT>(value); }
    template<typename ValidationStatusMessageT = Aws::String>
    DescribeRestoreJobResult& WithValidationStatusMessage(ValidationStatusMessageT&& value) { SetValidationStatusMessage(std::forward<ValidationStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the data generated by the restore test.</p>
     */
    inline RestoreDeletionStatus GetDeletionStatus() const { return m_deletionStatus; }
    inline void SetDeletionStatus(RestoreDeletionStatus value) { m_deletionStatusHasBeenSet = true; m_deletionStatus = value; }
    inline DescribeRestoreJobResult& WithDeletionStatus(RestoreDeletionStatus value) { SetDeletionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This describes the restore job deletion status.</p>
     */
    inline const Aws::String& GetDeletionStatusMessage() const { return m_deletionStatusMessage; }
    template<typename DeletionStatusMessageT = Aws::String>
    void SetDeletionStatusMessage(DeletionStatusMessageT&& value) { m_deletionStatusMessageHasBeenSet = true; m_deletionStatusMessage = std::forward<DeletionStatusMessageT>(value); }
    template<typename DeletionStatusMessageT = Aws::String>
    DescribeRestoreJobResult& WithDeletionStatusMessage(DeletionStatusMessageT&& value) { SetDeletionStatusMessage(std::forward<DeletionStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRestoreJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
