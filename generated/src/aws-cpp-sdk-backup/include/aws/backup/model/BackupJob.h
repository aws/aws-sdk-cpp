﻿/**
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
   * <p>Contains detailed information about a backup job.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/BackupJob">AWS
   * API Reference</a></p>
   */
  class BackupJob
  {
  public:
    AWS_BACKUP_API BackupJob();
    AWS_BACKUP_API BackupJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API BackupJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account ID that owns the backup job.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline BackupJob& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline BackupJob& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline BackupJob& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies a request to Backup to back up a resource.</p>
     */
    inline const Aws::String& GetBackupJobId() const{ return m_backupJobId; }
    inline bool BackupJobIdHasBeenSet() const { return m_backupJobIdHasBeenSet; }
    inline void SetBackupJobId(const Aws::String& value) { m_backupJobIdHasBeenSet = true; m_backupJobId = value; }
    inline void SetBackupJobId(Aws::String&& value) { m_backupJobIdHasBeenSet = true; m_backupJobId = std::move(value); }
    inline void SetBackupJobId(const char* value) { m_backupJobIdHasBeenSet = true; m_backupJobId.assign(value); }
    inline BackupJob& WithBackupJobId(const Aws::String& value) { SetBackupJobId(value); return *this;}
    inline BackupJob& WithBackupJobId(Aws::String&& value) { SetBackupJobId(std::move(value)); return *this;}
    inline BackupJob& WithBackupJobId(const char* value) { SetBackupJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }
    inline BackupJob& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}
    inline BackupJob& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}
    inline BackupJob& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }
    inline bool BackupVaultArnHasBeenSet() const { return m_backupVaultArnHasBeenSet; }
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = value; }
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = std::move(value); }
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn.assign(value); }
    inline BackupJob& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}
    inline BackupJob& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}
    inline BackupJob& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = value; }
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::move(value); }
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn.assign(value); }
    inline BackupJob& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}
    inline BackupJob& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}
    inline BackupJob& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline BackupJob& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline BackupJob& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline BackupJob& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a backup job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline BackupJob& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline BackupJob& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a job to create a backup job is completed, in Unix format
     * and Coordinated Universal Time (UTC). The value of <code>CompletionDate</code>
     * is accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const{ return m_completionDate; }
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }
    inline void SetCompletionDate(const Aws::Utils::DateTime& value) { m_completionDateHasBeenSet = true; m_completionDate = value; }
    inline void SetCompletionDate(Aws::Utils::DateTime&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::move(value); }
    inline BackupJob& WithCompletionDate(const Aws::Utils::DateTime& value) { SetCompletionDate(value); return *this;}
    inline BackupJob& WithCompletionDate(Aws::Utils::DateTime&& value) { SetCompletionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of a backup job.</p>
     */
    inline const BackupJobState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const BackupJobState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(BackupJobState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline BackupJob& WithState(const BackupJobState& value) { SetState(value); return *this;}
    inline BackupJob& WithState(BackupJobState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed message explaining the status of the job to back up a
     * resource.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline BackupJob& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline BackupJob& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline BackupJob& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains an estimated percentage complete of a job at the time the job status
     * was queried.</p>
     */
    inline const Aws::String& GetPercentDone() const{ return m_percentDone; }
    inline bool PercentDoneHasBeenSet() const { return m_percentDoneHasBeenSet; }
    inline void SetPercentDone(const Aws::String& value) { m_percentDoneHasBeenSet = true; m_percentDone = value; }
    inline void SetPercentDone(Aws::String&& value) { m_percentDoneHasBeenSet = true; m_percentDone = std::move(value); }
    inline void SetPercentDone(const char* value) { m_percentDoneHasBeenSet = true; m_percentDone.assign(value); }
    inline BackupJob& WithPercentDone(const Aws::String& value) { SetPercentDone(value); return *this;}
    inline BackupJob& WithPercentDone(Aws::String&& value) { SetPercentDone(std::move(value)); return *this;}
    inline BackupJob& WithPercentDone(const char* value) { SetPercentDone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline long long GetBackupSizeInBytes() const{ return m_backupSizeInBytes; }
    inline bool BackupSizeInBytesHasBeenSet() const { return m_backupSizeInBytesHasBeenSet; }
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytesHasBeenSet = true; m_backupSizeInBytes = value; }
    inline BackupJob& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point. IAM
     * roles other than the default role must include either <code>AWSBackup</code> or
     * <code>AwsBackup</code> in the role name. For example,
     * <code>arn:aws:iam::123456789012:role/AWSBackupRDSAccess</code>. Role names
     * without those strings lack permissions to perform backup jobs.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline BackupJob& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline BackupJob& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline BackupJob& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains identifying information about the creation of a backup job,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * used to create it.</p>
     */
    inline const RecoveryPointCreator& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const RecoveryPointCreator& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(RecoveryPointCreator&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline BackupJob& WithCreatedBy(const RecoveryPointCreator& value) { SetCreatedBy(value); return *this;}
    inline BackupJob& WithCreatedBy(RecoveryPointCreator&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a job to back up resources is expected to be completed, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>ExpectedCompletionDate</code> is accurate to milliseconds. For example,
     * the value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087
     * AM.</p>
     */
    inline const Aws::Utils::DateTime& GetExpectedCompletionDate() const{ return m_expectedCompletionDate; }
    inline bool ExpectedCompletionDateHasBeenSet() const { return m_expectedCompletionDateHasBeenSet; }
    inline void SetExpectedCompletionDate(const Aws::Utils::DateTime& value) { m_expectedCompletionDateHasBeenSet = true; m_expectedCompletionDate = value; }
    inline void SetExpectedCompletionDate(Aws::Utils::DateTime&& value) { m_expectedCompletionDateHasBeenSet = true; m_expectedCompletionDate = std::move(value); }
    inline BackupJob& WithExpectedCompletionDate(const Aws::Utils::DateTime& value) { SetExpectedCompletionDate(value); return *this;}
    inline BackupJob& WithExpectedCompletionDate(Aws::Utils::DateTime&& value) { SetExpectedCompletionDate(std::move(value)); return *this;}
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
    inline bool StartByHasBeenSet() const { return m_startByHasBeenSet; }
    inline void SetStartBy(const Aws::Utils::DateTime& value) { m_startByHasBeenSet = true; m_startBy = value; }
    inline void SetStartBy(Aws::Utils::DateTime&& value) { m_startByHasBeenSet = true; m_startBy = std::move(value); }
    inline BackupJob& WithStartBy(const Aws::Utils::DateTime& value) { SetStartBy(value); return *this;}
    inline BackupJob& WithStartBy(Aws::Utils::DateTime&& value) { SetStartBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource to be backed up; for example, an
     * Amazon Elastic Block Store (Amazon EBS) volume or an Amazon Relational Database
     * Service (Amazon RDS) database. For Windows Volume Shadow Copy Service (VSS)
     * backups, the only supported resource type is Amazon EC2.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline BackupJob& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline BackupJob& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline BackupJob& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size in bytes transferred to a backup vault at the time that the job
     * status was queried.</p>
     */
    inline long long GetBytesTransferred() const{ return m_bytesTransferred; }
    inline bool BytesTransferredHasBeenSet() const { return m_bytesTransferredHasBeenSet; }
    inline void SetBytesTransferred(long long value) { m_bytesTransferredHasBeenSet = true; m_bytesTransferred = value; }
    inline BackupJob& WithBytesTransferred(long long value) { SetBytesTransferred(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the backup option for a selected resource. This option is only
     * available for Windows Volume Shadow Copy Service (VSS) backup jobs.</p> <p>Valid
     * values: Set to <code>"WindowsVSS":"enabled"</code> to enable the
     * <code>WindowsVSS</code> backup option and create a Windows VSS backup. Set to
     * <code>"WindowsVSS":"disabled"</code> to create a regular backup. If you specify
     * an invalid option, you get an <code>InvalidParameterValueException</code>
     * exception.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupOptions() const{ return m_backupOptions; }
    inline bool BackupOptionsHasBeenSet() const { return m_backupOptionsHasBeenSet; }
    inline void SetBackupOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_backupOptionsHasBeenSet = true; m_backupOptions = value; }
    inline void SetBackupOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_backupOptionsHasBeenSet = true; m_backupOptions = std::move(value); }
    inline BackupJob& WithBackupOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetBackupOptions(value); return *this;}
    inline BackupJob& WithBackupOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetBackupOptions(std::move(value)); return *this;}
    inline BackupJob& AddBackupOptions(const Aws::String& key, const Aws::String& value) { m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(key, value); return *this; }
    inline BackupJob& AddBackupOptions(Aws::String&& key, const Aws::String& value) { m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(std::move(key), value); return *this; }
    inline BackupJob& AddBackupOptions(const Aws::String& key, Aws::String&& value) { m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(key, std::move(value)); return *this; }
    inline BackupJob& AddBackupOptions(Aws::String&& key, Aws::String&& value) { m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(std::move(key), std::move(value)); return *this; }
    inline BackupJob& AddBackupOptions(const char* key, Aws::String&& value) { m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(key, std::move(value)); return *this; }
    inline BackupJob& AddBackupOptions(Aws::String&& key, const char* value) { m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(std::move(key), value); return *this; }
    inline BackupJob& AddBackupOptions(const char* key, const char* value) { m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the type of backup for a backup job.</p>
     */
    inline const Aws::String& GetBackupType() const{ return m_backupType; }
    inline bool BackupTypeHasBeenSet() const { return m_backupTypeHasBeenSet; }
    inline void SetBackupType(const Aws::String& value) { m_backupTypeHasBeenSet = true; m_backupType = value; }
    inline void SetBackupType(Aws::String&& value) { m_backupTypeHasBeenSet = true; m_backupType = std::move(value); }
    inline void SetBackupType(const char* value) { m_backupTypeHasBeenSet = true; m_backupType.assign(value); }
    inline BackupJob& WithBackupType(const Aws::String& value) { SetBackupType(value); return *this;}
    inline BackupJob& WithBackupType(Aws::String&& value) { SetBackupType(std::move(value)); return *this;}
    inline BackupJob& WithBackupType(const char* value) { SetBackupType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This uniquely identifies a request to Backup to back up a resource. The
     * return will be the parent (composite) job ID.</p>
     */
    inline const Aws::String& GetParentJobId() const{ return m_parentJobId; }
    inline bool ParentJobIdHasBeenSet() const { return m_parentJobIdHasBeenSet; }
    inline void SetParentJobId(const Aws::String& value) { m_parentJobIdHasBeenSet = true; m_parentJobId = value; }
    inline void SetParentJobId(Aws::String&& value) { m_parentJobIdHasBeenSet = true; m_parentJobId = std::move(value); }
    inline void SetParentJobId(const char* value) { m_parentJobIdHasBeenSet = true; m_parentJobId.assign(value); }
    inline BackupJob& WithParentJobId(const Aws::String& value) { SetParentJobId(value); return *this;}
    inline BackupJob& WithParentJobId(Aws::String&& value) { SetParentJobId(std::move(value)); return *this;}
    inline BackupJob& WithParentJobId(const char* value) { SetParentJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a boolean value indicating this is a parent (composite) backup
     * job.</p>
     */
    inline bool GetIsParent() const{ return m_isParent; }
    inline bool IsParentHasBeenSet() const { return m_isParentHasBeenSet; }
    inline void SetIsParent(bool value) { m_isParentHasBeenSet = true; m_isParent = value; }
    inline BackupJob& WithIsParent(bool value) { SetIsParent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the non-unique name of the resource that belongs to the specified
     * backup.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline BackupJob& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline BackupJob& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline BackupJob& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the date on which the backup job was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiationDate() const{ return m_initiationDate; }
    inline bool InitiationDateHasBeenSet() const { return m_initiationDateHasBeenSet; }
    inline void SetInitiationDate(const Aws::Utils::DateTime& value) { m_initiationDateHasBeenSet = true; m_initiationDate = value; }
    inline void SetInitiationDate(Aws::Utils::DateTime&& value) { m_initiationDateHasBeenSet = true; m_initiationDate = std::move(value); }
    inline BackupJob& WithInitiationDate(const Aws::Utils::DateTime& value) { SetInitiationDate(value); return *this;}
    inline BackupJob& WithInitiationDate(Aws::Utils::DateTime&& value) { SetInitiationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is the job count for the specified message category.</p>
     * <p>Example strings may include <code>AccessDenied</code>, <code>SUCCESS</code>,
     * <code>AGGREGATE_ALL</code>, and <code>INVALIDPARAMETERS</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of MessageCategory strings.</p> <p>The the value ANY returns count of
     * all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates job counts
     * for all message categories and returns the sum.</p>
     */
    inline const Aws::String& GetMessageCategory() const{ return m_messageCategory; }
    inline bool MessageCategoryHasBeenSet() const { return m_messageCategoryHasBeenSet; }
    inline void SetMessageCategory(const Aws::String& value) { m_messageCategoryHasBeenSet = true; m_messageCategory = value; }
    inline void SetMessageCategory(Aws::String&& value) { m_messageCategoryHasBeenSet = true; m_messageCategory = std::move(value); }
    inline void SetMessageCategory(const char* value) { m_messageCategoryHasBeenSet = true; m_messageCategory.assign(value); }
    inline BackupJob& WithMessageCategory(const Aws::String& value) { SetMessageCategory(value); return *this;}
    inline BackupJob& WithMessageCategory(Aws::String&& value) { SetMessageCategory(std::move(value)); return *this;}
    inline BackupJob& WithMessageCategory(const char* value) { SetMessageCategory(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_backupJobId;
    bool m_backupJobIdHasBeenSet = false;

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_backupVaultArn;
    bool m_backupVaultArnHasBeenSet = false;

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_completionDate;
    bool m_completionDateHasBeenSet = false;

    BackupJobState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_percentDone;
    bool m_percentDoneHasBeenSet = false;

    long long m_backupSizeInBytes;
    bool m_backupSizeInBytesHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    RecoveryPointCreator m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_expectedCompletionDate;
    bool m_expectedCompletionDateHasBeenSet = false;

    Aws::Utils::DateTime m_startBy;
    bool m_startByHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    long long m_bytesTransferred;
    bool m_bytesTransferredHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_backupOptions;
    bool m_backupOptionsHasBeenSet = false;

    Aws::String m_backupType;
    bool m_backupTypeHasBeenSet = false;

    Aws::String m_parentJobId;
    bool m_parentJobIdHasBeenSet = false;

    bool m_isParent;
    bool m_isParentHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::Utils::DateTime m_initiationDate;
    bool m_initiationDateHasBeenSet = false;

    Aws::String m_messageCategory;
    bool m_messageCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
