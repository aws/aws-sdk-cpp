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
    AWS_BACKUP_API DescribeRestoreJobResult();
    AWS_BACKUP_API DescribeRestoreJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeRestoreJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the account ID that owns the restore job.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline void SetAccountId(const Aws::String& value) { m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountId.assign(value); }
    inline DescribeRestoreJobResult& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline DescribeRestoreJobResult& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline DescribeRestoreJobResult& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline const Aws::String& GetRestoreJobId() const{ return m_restoreJobId; }
    inline void SetRestoreJobId(const Aws::String& value) { m_restoreJobId = value; }
    inline void SetRestoreJobId(Aws::String&& value) { m_restoreJobId = std::move(value); }
    inline void SetRestoreJobId(const char* value) { m_restoreJobId.assign(value); }
    inline DescribeRestoreJobResult& WithRestoreJobId(const Aws::String& value) { SetRestoreJobId(value); return *this;}
    inline DescribeRestoreJobResult& WithRestoreJobId(Aws::String&& value) { SetRestoreJobId(std::move(value)); return *this;}
    inline DescribeRestoreJobResult& WithRestoreJobId(const char* value) { SetRestoreJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArn = value; }
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArn = std::move(value); }
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArn.assign(value); }
    inline DescribeRestoreJobResult& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}
    inline DescribeRestoreJobResult& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}
    inline DescribeRestoreJobResult& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a restore job is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline DescribeRestoreJobResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline DescribeRestoreJobResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a job to restore a recovery point is completed, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const{ return m_completionDate; }
    inline void SetCompletionDate(const Aws::Utils::DateTime& value) { m_completionDate = value; }
    inline void SetCompletionDate(Aws::Utils::DateTime&& value) { m_completionDate = std::move(value); }
    inline DescribeRestoreJobResult& WithCompletionDate(const Aws::Utils::DateTime& value) { SetCompletionDate(value); return *this;}
    inline DescribeRestoreJobResult& WithCompletionDate(Aws::Utils::DateTime&& value) { SetCompletionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status code specifying the state of the job that is initiated by Backup to
     * restore a recovery point.</p>
     */
    inline const RestoreJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const RestoreJobStatus& value) { m_status = value; }
    inline void SetStatus(RestoreJobStatus&& value) { m_status = std::move(value); }
    inline DescribeRestoreJobResult& WithStatus(const RestoreJobStatus& value) { SetStatus(value); return *this;}
    inline DescribeRestoreJobResult& WithStatus(RestoreJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message showing the status of a job to restore a recovery point.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline DescribeRestoreJobResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline DescribeRestoreJobResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline DescribeRestoreJobResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains an estimated percentage that is complete of a job at the time the
     * job status was queried.</p>
     */
    inline const Aws::String& GetPercentDone() const{ return m_percentDone; }
    inline void SetPercentDone(const Aws::String& value) { m_percentDone = value; }
    inline void SetPercentDone(Aws::String&& value) { m_percentDone = std::move(value); }
    inline void SetPercentDone(const char* value) { m_percentDone.assign(value); }
    inline DescribeRestoreJobResult& WithPercentDone(const Aws::String& value) { SetPercentDone(value); return *this;}
    inline DescribeRestoreJobResult& WithPercentDone(Aws::String&& value) { SetPercentDone(std::move(value)); return *this;}
    inline DescribeRestoreJobResult& WithPercentDone(const char* value) { SetPercentDone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of the restored resource.</p>
     */
    inline long long GetBackupSizeInBytes() const{ return m_backupSizeInBytes; }
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytes = value; }
    inline DescribeRestoreJobResult& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArn.assign(value); }
    inline DescribeRestoreJobResult& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline DescribeRestoreJobResult& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline DescribeRestoreJobResult& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time in minutes that a job restoring a recovery point is
     * expected to take.</p>
     */
    inline long long GetExpectedCompletionTimeMinutes() const{ return m_expectedCompletionTimeMinutes; }
    inline void SetExpectedCompletionTimeMinutes(long long value) { m_expectedCompletionTimeMinutes = value; }
    inline DescribeRestoreJobResult& WithExpectedCompletionTimeMinutes(long long value) { SetExpectedCompletionTimeMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource that was created by the
     * restore job.</p> <p>The format of the ARN depends on the resource type of the
     * backed-up resource.</p>
     */
    inline const Aws::String& GetCreatedResourceArn() const{ return m_createdResourceArn; }
    inline void SetCreatedResourceArn(const Aws::String& value) { m_createdResourceArn = value; }
    inline void SetCreatedResourceArn(Aws::String&& value) { m_createdResourceArn = std::move(value); }
    inline void SetCreatedResourceArn(const char* value) { m_createdResourceArn.assign(value); }
    inline DescribeRestoreJobResult& WithCreatedResourceArn(const Aws::String& value) { SetCreatedResourceArn(value); return *this;}
    inline DescribeRestoreJobResult& WithCreatedResourceArn(Aws::String&& value) { SetCreatedResourceArn(std::move(value)); return *this;}
    inline DescribeRestoreJobResult& WithCreatedResourceArn(const char* value) { SetCreatedResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns metadata associated with a restore job listed by resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline void SetResourceType(const Aws::String& value) { m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceType.assign(value); }
    inline DescribeRestoreJobResult& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline DescribeRestoreJobResult& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline DescribeRestoreJobResult& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date of the recovery point made by the specifed restore job.</p>
     */
    inline const Aws::Utils::DateTime& GetRecoveryPointCreationDate() const{ return m_recoveryPointCreationDate; }
    inline void SetRecoveryPointCreationDate(const Aws::Utils::DateTime& value) { m_recoveryPointCreationDate = value; }
    inline void SetRecoveryPointCreationDate(Aws::Utils::DateTime&& value) { m_recoveryPointCreationDate = std::move(value); }
    inline DescribeRestoreJobResult& WithRecoveryPointCreationDate(const Aws::Utils::DateTime& value) { SetRecoveryPointCreationDate(value); return *this;}
    inline DescribeRestoreJobResult& WithRecoveryPointCreationDate(Aws::Utils::DateTime&& value) { SetRecoveryPointCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains identifying information about the creation of a restore job.</p>
     */
    inline const RestoreJobCreator& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const RestoreJobCreator& value) { m_createdBy = value; }
    inline void SetCreatedBy(RestoreJobCreator&& value) { m_createdBy = std::move(value); }
    inline DescribeRestoreJobResult& WithCreatedBy(const RestoreJobCreator& value) { SetCreatedBy(value); return *this;}
    inline DescribeRestoreJobResult& WithCreatedBy(RestoreJobCreator&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of validation run on the indicated restore job.</p>
     */
    inline const RestoreValidationStatus& GetValidationStatus() const{ return m_validationStatus; }
    inline void SetValidationStatus(const RestoreValidationStatus& value) { m_validationStatus = value; }
    inline void SetValidationStatus(RestoreValidationStatus&& value) { m_validationStatus = std::move(value); }
    inline DescribeRestoreJobResult& WithValidationStatus(const RestoreValidationStatus& value) { SetValidationStatus(value); return *this;}
    inline DescribeRestoreJobResult& WithValidationStatus(RestoreValidationStatus&& value) { SetValidationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetValidationStatusMessage() const{ return m_validationStatusMessage; }
    inline void SetValidationStatusMessage(const Aws::String& value) { m_validationStatusMessage = value; }
    inline void SetValidationStatusMessage(Aws::String&& value) { m_validationStatusMessage = std::move(value); }
    inline void SetValidationStatusMessage(const char* value) { m_validationStatusMessage.assign(value); }
    inline DescribeRestoreJobResult& WithValidationStatusMessage(const Aws::String& value) { SetValidationStatusMessage(value); return *this;}
    inline DescribeRestoreJobResult& WithValidationStatusMessage(Aws::String&& value) { SetValidationStatusMessage(std::move(value)); return *this;}
    inline DescribeRestoreJobResult& WithValidationStatusMessage(const char* value) { SetValidationStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the data generated by the restore test.</p>
     */
    inline const RestoreDeletionStatus& GetDeletionStatus() const{ return m_deletionStatus; }
    inline void SetDeletionStatus(const RestoreDeletionStatus& value) { m_deletionStatus = value; }
    inline void SetDeletionStatus(RestoreDeletionStatus&& value) { m_deletionStatus = std::move(value); }
    inline DescribeRestoreJobResult& WithDeletionStatus(const RestoreDeletionStatus& value) { SetDeletionStatus(value); return *this;}
    inline DescribeRestoreJobResult& WithDeletionStatus(RestoreDeletionStatus&& value) { SetDeletionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This describes the restore job deletion status.</p>
     */
    inline const Aws::String& GetDeletionStatusMessage() const{ return m_deletionStatusMessage; }
    inline void SetDeletionStatusMessage(const Aws::String& value) { m_deletionStatusMessage = value; }
    inline void SetDeletionStatusMessage(Aws::String&& value) { m_deletionStatusMessage = std::move(value); }
    inline void SetDeletionStatusMessage(const char* value) { m_deletionStatusMessage.assign(value); }
    inline DescribeRestoreJobResult& WithDeletionStatusMessage(const Aws::String& value) { SetDeletionStatusMessage(value); return *this;}
    inline DescribeRestoreJobResult& WithDeletionStatusMessage(Aws::String&& value) { SetDeletionStatusMessage(std::move(value)); return *this;}
    inline DescribeRestoreJobResult& WithDeletionStatusMessage(const char* value) { SetDeletionStatusMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRestoreJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRestoreJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRestoreJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;

    Aws::String m_restoreJobId;

    Aws::String m_recoveryPointArn;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_completionDate;

    RestoreJobStatus m_status;

    Aws::String m_statusMessage;

    Aws::String m_percentDone;

    long long m_backupSizeInBytes;

    Aws::String m_iamRoleArn;

    long long m_expectedCompletionTimeMinutes;

    Aws::String m_createdResourceArn;

    Aws::String m_resourceType;

    Aws::Utils::DateTime m_recoveryPointCreationDate;

    RestoreJobCreator m_createdBy;

    RestoreValidationStatus m_validationStatus;

    Aws::String m_validationStatusMessage;

    RestoreDeletionStatus m_deletionStatus;

    Aws::String m_deletionStatusMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
