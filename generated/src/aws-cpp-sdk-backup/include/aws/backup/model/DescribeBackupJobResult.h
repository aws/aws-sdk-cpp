/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/BackupJobState.h>
#include <aws/backup/model/RecoveryPointCreator.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class DescribeBackupJobResult
  {
  public:
    AWS_BACKUP_API DescribeBackupJobResult();
    AWS_BACKUP_API DescribeBackupJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeBackupJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the account ID that owns the backup job.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline void SetAccountId(const Aws::String& value) { m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountId.assign(value); }
    inline DescribeBackupJobResult& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline DescribeBackupJobResult& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline DescribeBackupJobResult& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies a request to Backup to back up a resource.</p>
     */
    inline const Aws::String& GetBackupJobId() const{ return m_backupJobId; }
    inline void SetBackupJobId(const Aws::String& value) { m_backupJobId = value; }
    inline void SetBackupJobId(Aws::String&& value) { m_backupJobId = std::move(value); }
    inline void SetBackupJobId(const char* value) { m_backupJobId.assign(value); }
    inline DescribeBackupJobResult& WithBackupJobId(const Aws::String& value) { SetBackupJobId(value); return *this;}
    inline DescribeBackupJobResult& WithBackupJobId(Aws::String&& value) { SetBackupJobId(std::move(value)); return *this;}
    inline DescribeBackupJobResult& WithBackupJobId(const char* value) { SetBackupJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultName = value; }
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultName = std::move(value); }
    inline void SetBackupVaultName(const char* value) { m_backupVaultName.assign(value); }
    inline DescribeBackupJobResult& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}
    inline DescribeBackupJobResult& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}
    inline DescribeBackupJobResult& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArn = value; }
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArn = std::move(value); }
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArn.assign(value); }
    inline DescribeBackupJobResult& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}
    inline DescribeBackupJobResult& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}
    inline DescribeBackupJobResult& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}
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
    inline DescribeBackupJobResult& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}
    inline DescribeBackupJobResult& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}
    inline DescribeBackupJobResult& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a saved resource. The format of the ARN
     * depends on the resource type.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline DescribeBackupJobResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline DescribeBackupJobResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline DescribeBackupJobResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a backup job is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline DescribeBackupJobResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline DescribeBackupJobResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a job to create a backup job is completed, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const{ return m_completionDate; }
    inline void SetCompletionDate(const Aws::Utils::DateTime& value) { m_completionDate = value; }
    inline void SetCompletionDate(Aws::Utils::DateTime&& value) { m_completionDate = std::move(value); }
    inline DescribeBackupJobResult& WithCompletionDate(const Aws::Utils::DateTime& value) { SetCompletionDate(value); return *this;}
    inline DescribeBackupJobResult& WithCompletionDate(Aws::Utils::DateTime&& value) { SetCompletionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of a backup job.</p>
     */
    inline const BackupJobState& GetState() const{ return m_state; }
    inline void SetState(const BackupJobState& value) { m_state = value; }
    inline void SetState(BackupJobState&& value) { m_state = std::move(value); }
    inline DescribeBackupJobResult& WithState(const BackupJobState& value) { SetState(value); return *this;}
    inline DescribeBackupJobResult& WithState(BackupJobState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed message explaining the status of the job to back up a
     * resource.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline DescribeBackupJobResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline DescribeBackupJobResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline DescribeBackupJobResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
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
    inline DescribeBackupJobResult& WithPercentDone(const Aws::String& value) { SetPercentDone(value); return *this;}
    inline DescribeBackupJobResult& WithPercentDone(Aws::String&& value) { SetPercentDone(std::move(value)); return *this;}
    inline DescribeBackupJobResult& WithPercentDone(const char* value) { SetPercentDone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline long long GetBackupSizeInBytes() const{ return m_backupSizeInBytes; }
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytes = value; }
    inline DescribeBackupJobResult& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}
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
    inline DescribeBackupJobResult& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline DescribeBackupJobResult& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline DescribeBackupJobResult& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains identifying information about the creation of a backup job,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * that is used to create it.</p>
     */
    inline const RecoveryPointCreator& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const RecoveryPointCreator& value) { m_createdBy = value; }
    inline void SetCreatedBy(RecoveryPointCreator&& value) { m_createdBy = std::move(value); }
    inline DescribeBackupJobResult& WithCreatedBy(const RecoveryPointCreator& value) { SetCreatedBy(value); return *this;}
    inline DescribeBackupJobResult& WithCreatedBy(RecoveryPointCreator&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource to be backed up; for example, an
     * Amazon Elastic Block Store (Amazon EBS) volume or an Amazon Relational Database
     * Service (Amazon RDS) database.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline void SetResourceType(const Aws::String& value) { m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceType.assign(value); }
    inline DescribeBackupJobResult& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline DescribeBackupJobResult& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline DescribeBackupJobResult& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size in bytes transferred to a backup vault at the time that the job
     * status was queried.</p>
     */
    inline long long GetBytesTransferred() const{ return m_bytesTransferred; }
    inline void SetBytesTransferred(long long value) { m_bytesTransferred = value; }
    inline DescribeBackupJobResult& WithBytesTransferred(long long value) { SetBytesTransferred(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a job to back up resources is expected to be
     * completed, in Unix format and Coordinated Universal Time (UTC). The value of
     * <code>ExpectedCompletionDate</code> is accurate to milliseconds. For example,
     * the value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087
     * AM.</p>
     */
    inline const Aws::Utils::DateTime& GetExpectedCompletionDate() const{ return m_expectedCompletionDate; }
    inline void SetExpectedCompletionDate(const Aws::Utils::DateTime& value) { m_expectedCompletionDate = value; }
    inline void SetExpectedCompletionDate(Aws::Utils::DateTime&& value) { m_expectedCompletionDate = std::move(value); }
    inline DescribeBackupJobResult& WithExpectedCompletionDate(const Aws::Utils::DateTime& value) { SetExpectedCompletionDate(value); return *this;}
    inline DescribeBackupJobResult& WithExpectedCompletionDate(Aws::Utils::DateTime&& value) { SetExpectedCompletionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time in Unix format and Coordinated Universal Time (UTC) when a
     * backup job must be started before it is canceled. The value is calculated by
     * adding the start window to the scheduled time. So if the scheduled time were
     * 6:00 PM and the start window is 2 hours, the <code>StartBy</code> time would be
     * 8:00 PM on the date specified. The value of <code>StartBy</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetStartBy() const{ return m_startBy; }
    inline void SetStartBy(const Aws::Utils::DateTime& value) { m_startBy = value; }
    inline void SetStartBy(Aws::Utils::DateTime&& value) { m_startBy = std::move(value); }
    inline DescribeBackupJobResult& WithStartBy(const Aws::Utils::DateTime& value) { SetStartBy(value); return *this;}
    inline DescribeBackupJobResult& WithStartBy(Aws::Utils::DateTime&& value) { SetStartBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the options specified as part of backup plan or on-demand backup
     * job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupOptions() const{ return m_backupOptions; }
    inline void SetBackupOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_backupOptions = value; }
    inline void SetBackupOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_backupOptions = std::move(value); }
    inline DescribeBackupJobResult& WithBackupOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetBackupOptions(value); return *this;}
    inline DescribeBackupJobResult& WithBackupOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetBackupOptions(std::move(value)); return *this;}
    inline DescribeBackupJobResult& AddBackupOptions(const Aws::String& key, const Aws::String& value) { m_backupOptions.emplace(key, value); return *this; }
    inline DescribeBackupJobResult& AddBackupOptions(Aws::String&& key, const Aws::String& value) { m_backupOptions.emplace(std::move(key), value); return *this; }
    inline DescribeBackupJobResult& AddBackupOptions(const Aws::String& key, Aws::String&& value) { m_backupOptions.emplace(key, std::move(value)); return *this; }
    inline DescribeBackupJobResult& AddBackupOptions(Aws::String&& key, Aws::String&& value) { m_backupOptions.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeBackupJobResult& AddBackupOptions(const char* key, Aws::String&& value) { m_backupOptions.emplace(key, std::move(value)); return *this; }
    inline DescribeBackupJobResult& AddBackupOptions(Aws::String&& key, const char* value) { m_backupOptions.emplace(std::move(key), value); return *this; }
    inline DescribeBackupJobResult& AddBackupOptions(const char* key, const char* value) { m_backupOptions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the actual backup type selected for a backup job. For example, if
     * a successful Windows Volume Shadow Copy Service (VSS) backup was taken,
     * <code>BackupType</code> returns <code>"WindowsVSS"</code>. If
     * <code>BackupType</code> is empty, then the backup type was a regular backup.</p>
     */
    inline const Aws::String& GetBackupType() const{ return m_backupType; }
    inline void SetBackupType(const Aws::String& value) { m_backupType = value; }
    inline void SetBackupType(Aws::String&& value) { m_backupType = std::move(value); }
    inline void SetBackupType(const char* value) { m_backupType.assign(value); }
    inline DescribeBackupJobResult& WithBackupType(const Aws::String& value) { SetBackupType(value); return *this;}
    inline DescribeBackupJobResult& WithBackupType(Aws::String&& value) { SetBackupType(std::move(value)); return *this;}
    inline DescribeBackupJobResult& WithBackupType(const char* value) { SetBackupType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This returns the parent (composite) resource backup job ID.</p>
     */
    inline const Aws::String& GetParentJobId() const{ return m_parentJobId; }
    inline void SetParentJobId(const Aws::String& value) { m_parentJobId = value; }
    inline void SetParentJobId(Aws::String&& value) { m_parentJobId = std::move(value); }
    inline void SetParentJobId(const char* value) { m_parentJobId.assign(value); }
    inline DescribeBackupJobResult& WithParentJobId(const Aws::String& value) { SetParentJobId(value); return *this;}
    inline DescribeBackupJobResult& WithParentJobId(Aws::String&& value) { SetParentJobId(std::move(value)); return *this;}
    inline DescribeBackupJobResult& WithParentJobId(const char* value) { SetParentJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This returns the boolean value that a backup job is a parent (composite)
     * job.</p>
     */
    inline bool GetIsParent() const{ return m_isParent; }
    inline void SetIsParent(bool value) { m_isParent = value; }
    inline DescribeBackupJobResult& WithIsParent(bool value) { SetIsParent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This returns the number of child (nested) backup jobs.</p>
     */
    inline long long GetNumberOfChildJobs() const{ return m_numberOfChildJobs; }
    inline void SetNumberOfChildJobs(long long value) { m_numberOfChildJobs = value; }
    inline DescribeBackupJobResult& WithNumberOfChildJobs(long long value) { SetNumberOfChildJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This returns the statistics of the included child (nested) backup jobs.</p>
     */
    inline const Aws::Map<BackupJobState, long long>& GetChildJobsInState() const{ return m_childJobsInState; }
    inline void SetChildJobsInState(const Aws::Map<BackupJobState, long long>& value) { m_childJobsInState = value; }
    inline void SetChildJobsInState(Aws::Map<BackupJobState, long long>&& value) { m_childJobsInState = std::move(value); }
    inline DescribeBackupJobResult& WithChildJobsInState(const Aws::Map<BackupJobState, long long>& value) { SetChildJobsInState(value); return *this;}
    inline DescribeBackupJobResult& WithChildJobsInState(Aws::Map<BackupJobState, long long>&& value) { SetChildJobsInState(std::move(value)); return *this;}
    inline DescribeBackupJobResult& AddChildJobsInState(const BackupJobState& key, long long value) { m_childJobsInState.emplace(key, value); return *this; }
    inline DescribeBackupJobResult& AddChildJobsInState(BackupJobState&& key, long long value) { m_childJobsInState.emplace(std::move(key), value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The non-unique name of the resource that belongs to the specified backup.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline void SetResourceName(const Aws::String& value) { m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceName.assign(value); }
    inline DescribeBackupJobResult& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline DescribeBackupJobResult& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline DescribeBackupJobResult& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date a backup job was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiationDate() const{ return m_initiationDate; }
    inline void SetInitiationDate(const Aws::Utils::DateTime& value) { m_initiationDate = value; }
    inline void SetInitiationDate(Aws::Utils::DateTime&& value) { m_initiationDate = std::move(value); }
    inline DescribeBackupJobResult& WithInitiationDate(const Aws::Utils::DateTime& value) { SetInitiationDate(value); return *this;}
    inline DescribeBackupJobResult& WithInitiationDate(Aws::Utils::DateTime&& value) { SetInitiationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job count for the specified message category.</p> <p>Example strings may
     * include <code>AccessDenied</code>, <code>SUCCESS</code>,
     * <code>AGGREGATE_ALL</code>, and <code>INVALIDPARAMETERS</code>. View <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of accepted MessageCategory strings.</p>
     */
    inline const Aws::String& GetMessageCategory() const{ return m_messageCategory; }
    inline void SetMessageCategory(const Aws::String& value) { m_messageCategory = value; }
    inline void SetMessageCategory(Aws::String&& value) { m_messageCategory = std::move(value); }
    inline void SetMessageCategory(const char* value) { m_messageCategory.assign(value); }
    inline DescribeBackupJobResult& WithMessageCategory(const Aws::String& value) { SetMessageCategory(value); return *this;}
    inline DescribeBackupJobResult& WithMessageCategory(Aws::String&& value) { SetMessageCategory(std::move(value)); return *this;}
    inline DescribeBackupJobResult& WithMessageCategory(const char* value) { SetMessageCategory(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeBackupJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeBackupJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeBackupJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;

    Aws::String m_backupJobId;

    Aws::String m_backupVaultName;

    Aws::String m_backupVaultArn;

    Aws::String m_recoveryPointArn;

    Aws::String m_resourceArn;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_completionDate;

    BackupJobState m_state;

    Aws::String m_statusMessage;

    Aws::String m_percentDone;

    long long m_backupSizeInBytes;

    Aws::String m_iamRoleArn;

    RecoveryPointCreator m_createdBy;

    Aws::String m_resourceType;

    long long m_bytesTransferred;

    Aws::Utils::DateTime m_expectedCompletionDate;

    Aws::Utils::DateTime m_startBy;

    Aws::Map<Aws::String, Aws::String> m_backupOptions;

    Aws::String m_backupType;

    Aws::String m_parentJobId;

    bool m_isParent;

    long long m_numberOfChildJobs;

    Aws::Map<BackupJobState, long long> m_childJobsInState;

    Aws::String m_resourceName;

    Aws::Utils::DateTime m_initiationDate;

    Aws::String m_messageCategory;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
