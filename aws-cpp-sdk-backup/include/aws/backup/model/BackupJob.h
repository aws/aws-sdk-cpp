/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/BackupJobState.h>
#include <aws/backup/model/RecoveryPointCreator.h>
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
  class AWS_BACKUP_API BackupJob
  {
  public:
    BackupJob();
    BackupJob(Aws::Utils::Json::JsonView jsonValue);
    BackupJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Uniquely identifies a request to AWS Backup to back up a resource.</p>
     */
    inline const Aws::String& GetBackupJobId() const{ return m_backupJobId; }

    /**
     * <p>Uniquely identifies a request to AWS Backup to back up a resource.</p>
     */
    inline bool BackupJobIdHasBeenSet() const { return m_backupJobIdHasBeenSet; }

    /**
     * <p>Uniquely identifies a request to AWS Backup to back up a resource.</p>
     */
    inline void SetBackupJobId(const Aws::String& value) { m_backupJobIdHasBeenSet = true; m_backupJobId = value; }

    /**
     * <p>Uniquely identifies a request to AWS Backup to back up a resource.</p>
     */
    inline void SetBackupJobId(Aws::String&& value) { m_backupJobIdHasBeenSet = true; m_backupJobId = std::move(value); }

    /**
     * <p>Uniquely identifies a request to AWS Backup to back up a resource.</p>
     */
    inline void SetBackupJobId(const char* value) { m_backupJobIdHasBeenSet = true; m_backupJobId.assign(value); }

    /**
     * <p>Uniquely identifies a request to AWS Backup to back up a resource.</p>
     */
    inline BackupJob& WithBackupJobId(const Aws::String& value) { SetBackupJobId(value); return *this;}

    /**
     * <p>Uniquely identifies a request to AWS Backup to back up a resource.</p>
     */
    inline BackupJob& WithBackupJobId(Aws::String&& value) { SetBackupJobId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a request to AWS Backup to back up a resource.</p>
     */
    inline BackupJob& WithBackupJobId(const char* value) { SetBackupJobId(value); return *this;}


    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline BackupJob& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline BackupJob& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline BackupJob& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline bool BackupVaultArnHasBeenSet() const { return m_backupVaultArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline BackupJob& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline BackupJob& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline BackupJob& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}


    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = value; }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline BackupJob& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline BackupJob& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline BackupJob& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}


    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline BackupJob& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline BackupJob& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline BackupJob& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The date and time a backup job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time a backup job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time a backup job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time a backup job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time a backup job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline BackupJob& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time a backup job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline BackupJob& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date and time a job to create a backup job is completed, in Unix format
     * and Coordinated Universal Time (UTC). The value of <code>CompletionDate</code>
     * is accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const{ return m_completionDate; }

    /**
     * <p>The date and time a job to create a backup job is completed, in Unix format
     * and Coordinated Universal Time (UTC). The value of <code>CompletionDate</code>
     * is accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }

    /**
     * <p>The date and time a job to create a backup job is completed, in Unix format
     * and Coordinated Universal Time (UTC). The value of <code>CompletionDate</code>
     * is accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCompletionDate(const Aws::Utils::DateTime& value) { m_completionDateHasBeenSet = true; m_completionDate = value; }

    /**
     * <p>The date and time a job to create a backup job is completed, in Unix format
     * and Coordinated Universal Time (UTC). The value of <code>CompletionDate</code>
     * is accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCompletionDate(Aws::Utils::DateTime&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::move(value); }

    /**
     * <p>The date and time a job to create a backup job is completed, in Unix format
     * and Coordinated Universal Time (UTC). The value of <code>CompletionDate</code>
     * is accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline BackupJob& WithCompletionDate(const Aws::Utils::DateTime& value) { SetCompletionDate(value); return *this;}

    /**
     * <p>The date and time a job to create a backup job is completed, in Unix format
     * and Coordinated Universal Time (UTC). The value of <code>CompletionDate</code>
     * is accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline BackupJob& WithCompletionDate(Aws::Utils::DateTime&& value) { SetCompletionDate(std::move(value)); return *this;}


    /**
     * <p>The current state of a resource recovery point.</p>
     */
    inline const BackupJobState& GetState() const{ return m_state; }

    /**
     * <p>The current state of a resource recovery point.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of a resource recovery point.</p>
     */
    inline void SetState(const BackupJobState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of a resource recovery point.</p>
     */
    inline void SetState(BackupJobState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of a resource recovery point.</p>
     */
    inline BackupJob& WithState(const BackupJobState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of a resource recovery point.</p>
     */
    inline BackupJob& WithState(BackupJobState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A detailed message explaining the status of the job to back up a
     * resource.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A detailed message explaining the status of the job to back up a
     * resource.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A detailed message explaining the status of the job to back up a
     * resource.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A detailed message explaining the status of the job to back up a
     * resource.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A detailed message explaining the status of the job to back up a
     * resource.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A detailed message explaining the status of the job to back up a
     * resource.</p>
     */
    inline BackupJob& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A detailed message explaining the status of the job to back up a
     * resource.</p>
     */
    inline BackupJob& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A detailed message explaining the status of the job to back up a
     * resource.</p>
     */
    inline BackupJob& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Contains an estimated percentage complete of a job at the time the job status
     * was queried.</p>
     */
    inline const Aws::String& GetPercentDone() const{ return m_percentDone; }

    /**
     * <p>Contains an estimated percentage complete of a job at the time the job status
     * was queried.</p>
     */
    inline bool PercentDoneHasBeenSet() const { return m_percentDoneHasBeenSet; }

    /**
     * <p>Contains an estimated percentage complete of a job at the time the job status
     * was queried.</p>
     */
    inline void SetPercentDone(const Aws::String& value) { m_percentDoneHasBeenSet = true; m_percentDone = value; }

    /**
     * <p>Contains an estimated percentage complete of a job at the time the job status
     * was queried.</p>
     */
    inline void SetPercentDone(Aws::String&& value) { m_percentDoneHasBeenSet = true; m_percentDone = std::move(value); }

    /**
     * <p>Contains an estimated percentage complete of a job at the time the job status
     * was queried.</p>
     */
    inline void SetPercentDone(const char* value) { m_percentDoneHasBeenSet = true; m_percentDone.assign(value); }

    /**
     * <p>Contains an estimated percentage complete of a job at the time the job status
     * was queried.</p>
     */
    inline BackupJob& WithPercentDone(const Aws::String& value) { SetPercentDone(value); return *this;}

    /**
     * <p>Contains an estimated percentage complete of a job at the time the job status
     * was queried.</p>
     */
    inline BackupJob& WithPercentDone(Aws::String&& value) { SetPercentDone(std::move(value)); return *this;}

    /**
     * <p>Contains an estimated percentage complete of a job at the time the job status
     * was queried.</p>
     */
    inline BackupJob& WithPercentDone(const char* value) { SetPercentDone(value); return *this;}


    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline long long GetBackupSizeInBytes() const{ return m_backupSizeInBytes; }

    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline bool BackupSizeInBytesHasBeenSet() const { return m_backupSizeInBytesHasBeenSet; }

    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytesHasBeenSet = true; m_backupSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline BackupJob& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}


    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline BackupJob& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline BackupJob& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline BackupJob& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>Contains identifying information about the creation of a backup job,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * used to create it.</p>
     */
    inline const RecoveryPointCreator& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>Contains identifying information about the creation of a backup job,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * used to create it.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>Contains identifying information about the creation of a backup job,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * used to create it.</p>
     */
    inline void SetCreatedBy(const RecoveryPointCreator& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>Contains identifying information about the creation of a backup job,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * used to create it.</p>
     */
    inline void SetCreatedBy(RecoveryPointCreator&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>Contains identifying information about the creation of a backup job,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * used to create it.</p>
     */
    inline BackupJob& WithCreatedBy(const RecoveryPointCreator& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>Contains identifying information about the creation of a backup job,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * used to create it.</p>
     */
    inline BackupJob& WithCreatedBy(RecoveryPointCreator&& value) { SetCreatedBy(std::move(value)); return *this;}


    /**
     * <p>The date and time a job to back up resources is expected to be completed, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>ExpectedCompletionDate</code> is accurate to milliseconds. For example,
     * the value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087
     * AM.</p>
     */
    inline const Aws::Utils::DateTime& GetExpectedCompletionDate() const{ return m_expectedCompletionDate; }

    /**
     * <p>The date and time a job to back up resources is expected to be completed, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>ExpectedCompletionDate</code> is accurate to milliseconds. For example,
     * the value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087
     * AM.</p>
     */
    inline bool ExpectedCompletionDateHasBeenSet() const { return m_expectedCompletionDateHasBeenSet; }

    /**
     * <p>The date and time a job to back up resources is expected to be completed, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>ExpectedCompletionDate</code> is accurate to milliseconds. For example,
     * the value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087
     * AM.</p>
     */
    inline void SetExpectedCompletionDate(const Aws::Utils::DateTime& value) { m_expectedCompletionDateHasBeenSet = true; m_expectedCompletionDate = value; }

    /**
     * <p>The date and time a job to back up resources is expected to be completed, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>ExpectedCompletionDate</code> is accurate to milliseconds. For example,
     * the value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087
     * AM.</p>
     */
    inline void SetExpectedCompletionDate(Aws::Utils::DateTime&& value) { m_expectedCompletionDateHasBeenSet = true; m_expectedCompletionDate = std::move(value); }

    /**
     * <p>The date and time a job to back up resources is expected to be completed, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>ExpectedCompletionDate</code> is accurate to milliseconds. For example,
     * the value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087
     * AM.</p>
     */
    inline BackupJob& WithExpectedCompletionDate(const Aws::Utils::DateTime& value) { SetExpectedCompletionDate(value); return *this;}

    /**
     * <p>The date and time a job to back up resources is expected to be completed, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>ExpectedCompletionDate</code> is accurate to milliseconds. For example,
     * the value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087
     * AM.</p>
     */
    inline BackupJob& WithExpectedCompletionDate(Aws::Utils::DateTime&& value) { SetExpectedCompletionDate(std::move(value)); return *this;}


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

    /**
     * <p>Specifies the time in Unix format and Coordinated Universal Time (UTC) when a
     * backup job must be started before it is canceled. The value is calculated by
     * adding the start window to the scheduled time. So if the scheduled time were
     * 6:00 PM and the start window is 2 hours, the <code>StartBy</code> time would be
     * 8:00 PM on the date specified. The value of <code>StartBy</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool StartByHasBeenSet() const { return m_startByHasBeenSet; }

    /**
     * <p>Specifies the time in Unix format and Coordinated Universal Time (UTC) when a
     * backup job must be started before it is canceled. The value is calculated by
     * adding the start window to the scheduled time. So if the scheduled time were
     * 6:00 PM and the start window is 2 hours, the <code>StartBy</code> time would be
     * 8:00 PM on the date specified. The value of <code>StartBy</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetStartBy(const Aws::Utils::DateTime& value) { m_startByHasBeenSet = true; m_startBy = value; }

    /**
     * <p>Specifies the time in Unix format and Coordinated Universal Time (UTC) when a
     * backup job must be started before it is canceled. The value is calculated by
     * adding the start window to the scheduled time. So if the scheduled time were
     * 6:00 PM and the start window is 2 hours, the <code>StartBy</code> time would be
     * 8:00 PM on the date specified. The value of <code>StartBy</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetStartBy(Aws::Utils::DateTime&& value) { m_startByHasBeenSet = true; m_startBy = std::move(value); }

    /**
     * <p>Specifies the time in Unix format and Coordinated Universal Time (UTC) when a
     * backup job must be started before it is canceled. The value is calculated by
     * adding the start window to the scheduled time. So if the scheduled time were
     * 6:00 PM and the start window is 2 hours, the <code>StartBy</code> time would be
     * 8:00 PM on the date specified. The value of <code>StartBy</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline BackupJob& WithStartBy(const Aws::Utils::DateTime& value) { SetStartBy(value); return *this;}

    /**
     * <p>Specifies the time in Unix format and Coordinated Universal Time (UTC) when a
     * backup job must be started before it is canceled. The value is calculated by
     * adding the start window to the scheduled time. So if the scheduled time were
     * 6:00 PM and the start window is 2 hours, the <code>StartBy</code> time would be
     * 8:00 PM on the date specified. The value of <code>StartBy</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline BackupJob& WithStartBy(Aws::Utils::DateTime&& value) { SetStartBy(std::move(value)); return *this;}


    /**
     * <p>The type of AWS resource to be backed-up; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of AWS resource to be backed-up; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of AWS resource to be backed-up; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of AWS resource to be backed-up; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of AWS resource to be backed-up; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of AWS resource to be backed-up; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database.</p>
     */
    inline BackupJob& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of AWS resource to be backed-up; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database.</p>
     */
    inline BackupJob& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of AWS resource to be backed-up; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database.</p>
     */
    inline BackupJob& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The size in bytes transferred to a backup vault at the time that the job
     * status was queried.</p>
     */
    inline long long GetBytesTransferred() const{ return m_bytesTransferred; }

    /**
     * <p>The size in bytes transferred to a backup vault at the time that the job
     * status was queried.</p>
     */
    inline bool BytesTransferredHasBeenSet() const { return m_bytesTransferredHasBeenSet; }

    /**
     * <p>The size in bytes transferred to a backup vault at the time that the job
     * status was queried.</p>
     */
    inline void SetBytesTransferred(long long value) { m_bytesTransferredHasBeenSet = true; m_bytesTransferred = value; }

    /**
     * <p>The size in bytes transferred to a backup vault at the time that the job
     * status was queried.</p>
     */
    inline BackupJob& WithBytesTransferred(long long value) { SetBytesTransferred(value); return *this;}

  private:

    Aws::String m_backupJobId;
    bool m_backupJobIdHasBeenSet;

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet;

    Aws::String m_backupVaultArn;
    bool m_backupVaultArnHasBeenSet;

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::Utils::DateTime m_completionDate;
    bool m_completionDateHasBeenSet;

    BackupJobState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    Aws::String m_percentDone;
    bool m_percentDoneHasBeenSet;

    long long m_backupSizeInBytes;
    bool m_backupSizeInBytesHasBeenSet;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet;

    RecoveryPointCreator m_createdBy;
    bool m_createdByHasBeenSet;

    Aws::Utils::DateTime m_expectedCompletionDate;
    bool m_expectedCompletionDateHasBeenSet;

    Aws::Utils::DateTime m_startBy;
    bool m_startByHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    long long m_bytesTransferred;
    bool m_bytesTransferredHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
