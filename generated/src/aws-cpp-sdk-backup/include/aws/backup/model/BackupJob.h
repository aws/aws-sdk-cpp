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
    AWS_BACKUP_API BackupJob() = default;
    AWS_BACKUP_API BackupJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API BackupJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account ID that owns the backup job.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    BackupJob& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies a request to Backup to back up a resource.</p>
     */
    inline const Aws::String& GetBackupJobId() const { return m_backupJobId; }
    inline bool BackupJobIdHasBeenSet() const { return m_backupJobIdHasBeenSet; }
    template<typename BackupJobIdT = Aws::String>
    void SetBackupJobId(BackupJobIdT&& value) { m_backupJobIdHasBeenSet = true; m_backupJobId = std::forward<BackupJobIdT>(value); }
    template<typename BackupJobIdT = Aws::String>
    BackupJob& WithBackupJobId(BackupJobIdT&& value) { SetBackupJobId(std::forward<BackupJobIdT>(value)); return *this;}
    ///@}

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
    BackupJob& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
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
    BackupJob& WithBackupVaultArn(BackupVaultArnT&& value) { SetBackupVaultArn(std::forward<BackupVaultArnT>(value)); return *this;}
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
    BackupJob& WithRecoveryPointArn(RecoveryPointArnT&& value) { SetRecoveryPointArn(std::forward<RecoveryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    BackupJob& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a backup job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    BackupJob& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a job to create a backup job is completed, in Unix format
     * and Coordinated Universal Time (UTC). The value of <code>CompletionDate</code>
     * is accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const { return m_completionDate; }
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }
    template<typename CompletionDateT = Aws::Utils::DateTime>
    void SetCompletionDate(CompletionDateT&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::forward<CompletionDateT>(value); }
    template<typename CompletionDateT = Aws::Utils::DateTime>
    BackupJob& WithCompletionDate(CompletionDateT&& value) { SetCompletionDate(std::forward<CompletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of a backup job.</p>
     */
    inline BackupJobState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(BackupJobState value) { m_stateHasBeenSet = true; m_state = value; }
    inline BackupJob& WithState(BackupJobState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed message explaining the status of the job to back up a
     * resource.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    BackupJob& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
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
    BackupJob& WithPercentDone(PercentDoneT&& value) { SetPercentDone(std::forward<PercentDoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of a backup (recovery point).</p> <p>This value can
     * render differently depending on the resource type as Backup pulls in data
     * information from other Amazon Web Services services. For example, the value
     * returned may show a value of <code>0</code>, which may differ from the
     * anticipated value.</p> <p>The expected behavior for values by resource type are
     * described as follows:</p> <ul> <li> <p>Amazon Aurora, Amazon DocumentDB, and
     * Amazon Neptune do not have this value populate from the operation
     * <code>GetBackupJobStatus</code>.</p> </li> <li> <p>For Amazon DynamoDB with
     * advanced features, this value refers to the size of the recovery point
     * (backup).</p> </li> <li> <p>Amazon EC2 and Amazon EBS show volume size
     * (provisioned storage) returned as part of this value. Amazon EBS does not return
     * backup size information; snapshot size will have the same value as the original
     * resource that was backed up.</p> </li> <li> <p>For Amazon EFS, this value refers
     * to the delta bytes transferred during a backup.</p> </li> <li> <p>Amazon FSx
     * does not populate this value from the operation <code>GetBackupJobStatus</code>
     * for FSx file systems.</p> </li> <li> <p>An Amazon RDS instance will show as
     * <code>0</code>.</p> </li> <li> <p>For virtual machines running VMware, this
     * value is passed to Backup through an asynchronous workflow, which can mean this
     * displayed value can under-represent the actual backup size.</p> </li> </ul>
     */
    inline long long GetBackupSizeInBytes() const { return m_backupSizeInBytes; }
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
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    BackupJob& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains identifying information about the creation of a backup job,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * used to create it.</p>
     */
    inline const RecoveryPointCreator& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = RecoveryPointCreator>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = RecoveryPointCreator>
    BackupJob& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a job to back up resources is expected to be completed, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>ExpectedCompletionDate</code> is accurate to milliseconds. For example,
     * the value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087
     * AM.</p>
     */
    inline const Aws::Utils::DateTime& GetExpectedCompletionDate() const { return m_expectedCompletionDate; }
    inline bool ExpectedCompletionDateHasBeenSet() const { return m_expectedCompletionDateHasBeenSet; }
    template<typename ExpectedCompletionDateT = Aws::Utils::DateTime>
    void SetExpectedCompletionDate(ExpectedCompletionDateT&& value) { m_expectedCompletionDateHasBeenSet = true; m_expectedCompletionDate = std::forward<ExpectedCompletionDateT>(value); }
    template<typename ExpectedCompletionDateT = Aws::Utils::DateTime>
    BackupJob& WithExpectedCompletionDate(ExpectedCompletionDateT&& value) { SetExpectedCompletionDate(std::forward<ExpectedCompletionDateT>(value)); return *this;}
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
    inline const Aws::Utils::DateTime& GetStartBy() const { return m_startBy; }
    inline bool StartByHasBeenSet() const { return m_startByHasBeenSet; }
    template<typename StartByT = Aws::Utils::DateTime>
    void SetStartBy(StartByT&& value) { m_startByHasBeenSet = true; m_startBy = std::forward<StartByT>(value); }
    template<typename StartByT = Aws::Utils::DateTime>
    BackupJob& WithStartBy(StartByT&& value) { SetStartBy(std::forward<StartByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource to be backed up; for example, an
     * Amazon Elastic Block Store (Amazon EBS) volume or an Amazon Relational Database
     * Service (Amazon RDS) database. For Windows Volume Shadow Copy Service (VSS)
     * backups, the only supported resource type is Amazon EC2.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    BackupJob& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size in bytes transferred to a backup vault at the time that the job
     * status was queried.</p>
     */
    inline long long GetBytesTransferred() const { return m_bytesTransferred; }
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
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupOptions() const { return m_backupOptions; }
    inline bool BackupOptionsHasBeenSet() const { return m_backupOptionsHasBeenSet; }
    template<typename BackupOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetBackupOptions(BackupOptionsT&& value) { m_backupOptionsHasBeenSet = true; m_backupOptions = std::forward<BackupOptionsT>(value); }
    template<typename BackupOptionsT = Aws::Map<Aws::String, Aws::String>>
    BackupJob& WithBackupOptions(BackupOptionsT&& value) { SetBackupOptions(std::forward<BackupOptionsT>(value)); return *this;}
    template<typename BackupOptionsKeyT = Aws::String, typename BackupOptionsValueT = Aws::String>
    BackupJob& AddBackupOptions(BackupOptionsKeyT&& key, BackupOptionsValueT&& value) {
      m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(std::forward<BackupOptionsKeyT>(key), std::forward<BackupOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Represents the type of backup for a backup job.</p>
     */
    inline const Aws::String& GetBackupType() const { return m_backupType; }
    inline bool BackupTypeHasBeenSet() const { return m_backupTypeHasBeenSet; }
    template<typename BackupTypeT = Aws::String>
    void SetBackupType(BackupTypeT&& value) { m_backupTypeHasBeenSet = true; m_backupType = std::forward<BackupTypeT>(value); }
    template<typename BackupTypeT = Aws::String>
    BackupJob& WithBackupType(BackupTypeT&& value) { SetBackupType(std::forward<BackupTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This uniquely identifies a request to Backup to back up a resource. The
     * return will be the parent (composite) job ID.</p>
     */
    inline const Aws::String& GetParentJobId() const { return m_parentJobId; }
    inline bool ParentJobIdHasBeenSet() const { return m_parentJobIdHasBeenSet; }
    template<typename ParentJobIdT = Aws::String>
    void SetParentJobId(ParentJobIdT&& value) { m_parentJobIdHasBeenSet = true; m_parentJobId = std::forward<ParentJobIdT>(value); }
    template<typename ParentJobIdT = Aws::String>
    BackupJob& WithParentJobId(ParentJobIdT&& value) { SetParentJobId(std::forward<ParentJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a boolean value indicating this is a parent (composite) backup
     * job.</p>
     */
    inline bool GetIsParent() const { return m_isParent; }
    inline bool IsParentHasBeenSet() const { return m_isParentHasBeenSet; }
    inline void SetIsParent(bool value) { m_isParentHasBeenSet = true; m_isParent = value; }
    inline BackupJob& WithIsParent(bool value) { SetIsParent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The non-unique name of the resource that belongs to the specified backup.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    BackupJob& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the backup job was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiationDate() const { return m_initiationDate; }
    inline bool InitiationDateHasBeenSet() const { return m_initiationDateHasBeenSet; }
    template<typename InitiationDateT = Aws::Utils::DateTime>
    void SetInitiationDate(InitiationDateT&& value) { m_initiationDateHasBeenSet = true; m_initiationDate = std::forward<InitiationDateT>(value); }
    template<typename InitiationDateT = Aws::Utils::DateTime>
    BackupJob& WithInitiationDate(InitiationDateT&& value) { SetInitiationDate(std::forward<InitiationDateT>(value)); return *this;}
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
    inline const Aws::String& GetMessageCategory() const { return m_messageCategory; }
    inline bool MessageCategoryHasBeenSet() const { return m_messageCategoryHasBeenSet; }
    template<typename MessageCategoryT = Aws::String>
    void SetMessageCategory(MessageCategoryT&& value) { m_messageCategoryHasBeenSet = true; m_messageCategory = std::forward<MessageCategoryT>(value); }
    template<typename MessageCategoryT = Aws::String>
    BackupJob& WithMessageCategory(MessageCategoryT&& value) { SetMessageCategory(std::forward<MessageCategoryT>(value)); return *this;}
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

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_completionDate{};
    bool m_completionDateHasBeenSet = false;

    BackupJobState m_state{BackupJobState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_percentDone;
    bool m_percentDoneHasBeenSet = false;

    long long m_backupSizeInBytes{0};
    bool m_backupSizeInBytesHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    RecoveryPointCreator m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_expectedCompletionDate{};
    bool m_expectedCompletionDateHasBeenSet = false;

    Aws::Utils::DateTime m_startBy{};
    bool m_startByHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    long long m_bytesTransferred{0};
    bool m_bytesTransferredHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_backupOptions;
    bool m_backupOptionsHasBeenSet = false;

    Aws::String m_backupType;
    bool m_backupTypeHasBeenSet = false;

    Aws::String m_parentJobId;
    bool m_parentJobIdHasBeenSet = false;

    bool m_isParent{false};
    bool m_isParentHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::Utils::DateTime m_initiationDate{};
    bool m_initiationDateHasBeenSet = false;

    Aws::String m_messageCategory;
    bool m_messageCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
