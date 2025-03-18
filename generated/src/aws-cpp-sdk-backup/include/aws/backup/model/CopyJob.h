/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/CopyJobState.h>
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
   * <p>Contains detailed information about a copy job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CopyJob">AWS API
   * Reference</a></p>
   */
  class CopyJob
  {
  public:
    AWS_BACKUP_API CopyJob() = default;
    AWS_BACKUP_API CopyJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API CopyJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account ID that owns the copy job.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CopyJob& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline const Aws::String& GetCopyJobId() const { return m_copyJobId; }
    inline bool CopyJobIdHasBeenSet() const { return m_copyJobIdHasBeenSet; }
    template<typename CopyJobIdT = Aws::String>
    void SetCopyJobId(CopyJobIdT&& value) { m_copyJobIdHasBeenSet = true; m_copyJobId = std::forward<CopyJobIdT>(value); }
    template<typename CopyJobIdT = Aws::String>
    CopyJob& WithCopyJobId(CopyJobIdT&& value) { SetCopyJobId(std::forward<CopyJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source copy vault;
     * for example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.
     * </p>
     */
    inline const Aws::String& GetSourceBackupVaultArn() const { return m_sourceBackupVaultArn; }
    inline bool SourceBackupVaultArnHasBeenSet() const { return m_sourceBackupVaultArnHasBeenSet; }
    template<typename SourceBackupVaultArnT = Aws::String>
    void SetSourceBackupVaultArn(SourceBackupVaultArnT&& value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn = std::forward<SourceBackupVaultArnT>(value); }
    template<typename SourceBackupVaultArnT = Aws::String>
    CopyJob& WithSourceBackupVaultArn(SourceBackupVaultArnT&& value) { SetSourceBackupVaultArn(std::forward<SourceBackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a source recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetSourceRecoveryPointArn() const { return m_sourceRecoveryPointArn; }
    inline bool SourceRecoveryPointArnHasBeenSet() const { return m_sourceRecoveryPointArnHasBeenSet; }
    template<typename SourceRecoveryPointArnT = Aws::String>
    void SetSourceRecoveryPointArn(SourceRecoveryPointArnT&& value) { m_sourceRecoveryPointArnHasBeenSet = true; m_sourceRecoveryPointArn = std::forward<SourceRecoveryPointArnT>(value); }
    template<typename SourceRecoveryPointArnT = Aws::String>
    CopyJob& WithSourceRecoveryPointArn(SourceRecoveryPointArnT&& value) { SetSourceRecoveryPointArn(std::forward<SourceRecoveryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination copy
     * vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetDestinationBackupVaultArn() const { return m_destinationBackupVaultArn; }
    inline bool DestinationBackupVaultArnHasBeenSet() const { return m_destinationBackupVaultArnHasBeenSet; }
    template<typename DestinationBackupVaultArnT = Aws::String>
    void SetDestinationBackupVaultArn(DestinationBackupVaultArnT&& value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn = std::forward<DestinationBackupVaultArnT>(value); }
    template<typename DestinationBackupVaultArnT = Aws::String>
    CopyJob& WithDestinationBackupVaultArn(DestinationBackupVaultArnT&& value) { SetDestinationBackupVaultArn(std::forward<DestinationBackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a destination recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetDestinationRecoveryPointArn() const { return m_destinationRecoveryPointArn; }
    inline bool DestinationRecoveryPointArnHasBeenSet() const { return m_destinationRecoveryPointArnHasBeenSet; }
    template<typename DestinationRecoveryPointArnT = Aws::String>
    void SetDestinationRecoveryPointArn(DestinationRecoveryPointArnT&& value) { m_destinationRecoveryPointArnHasBeenSet = true; m_destinationRecoveryPointArn = std::forward<DestinationRecoveryPointArnT>(value); }
    template<typename DestinationRecoveryPointArnT = Aws::String>
    CopyJob& WithDestinationRecoveryPointArn(DestinationRecoveryPointArnT&& value) { SetDestinationRecoveryPointArn(std::forward<DestinationRecoveryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services resource to be copied; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    CopyJob& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a copy job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    CopyJob& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a copy job is completed, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CompletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const { return m_completionDate; }
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }
    template<typename CompletionDateT = Aws::Utils::DateTime>
    void SetCompletionDate(CompletionDateT&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::forward<CompletionDateT>(value); }
    template<typename CompletionDateT = Aws::Utils::DateTime>
    CopyJob& WithCompletionDate(CompletionDateT&& value) { SetCompletionDate(std::forward<CompletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of a copy job.</p>
     */
    inline CopyJobState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CopyJobState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CopyJob& WithState(CopyJobState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed message explaining the status of the job to copy a resource.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    CopyJob& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of a copy job.</p>
     */
    inline long long GetBackupSizeInBytes() const { return m_backupSizeInBytes; }
    inline bool BackupSizeInBytesHasBeenSet() const { return m_backupSizeInBytesHasBeenSet; }
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytesHasBeenSet = true; m_backupSizeInBytes = value; }
    inline CopyJob& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    CopyJob& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RecoveryPointCreator& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = RecoveryPointCreator>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = RecoveryPointCreator>
    CopyJob& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource to be copied; for example, an Amazon
     * Elastic Block Store (Amazon EBS) volume or an Amazon Relational Database Service
     * (Amazon RDS) database.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    CopyJob& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This uniquely identifies a request to Backup to copy a resource. The return
     * will be the parent (composite) job ID.</p>
     */
    inline const Aws::String& GetParentJobId() const { return m_parentJobId; }
    inline bool ParentJobIdHasBeenSet() const { return m_parentJobIdHasBeenSet; }
    template<typename ParentJobIdT = Aws::String>
    void SetParentJobId(ParentJobIdT&& value) { m_parentJobIdHasBeenSet = true; m_parentJobId = std::forward<ParentJobIdT>(value); }
    template<typename ParentJobIdT = Aws::String>
    CopyJob& WithParentJobId(ParentJobIdT&& value) { SetParentJobId(std::forward<ParentJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a boolean value indicating this is a parent (composite) copy job.</p>
     */
    inline bool GetIsParent() const { return m_isParent; }
    inline bool IsParentHasBeenSet() const { return m_isParentHasBeenSet; }
    inline void SetIsParent(bool value) { m_isParentHasBeenSet = true; m_isParent = value; }
    inline CopyJob& WithIsParent(bool value) { SetIsParent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a resource within a composite group, such as nested (child)
     * recovery point belonging to a composite (parent) stack. The ID is transferred
     * from the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resources-section-structure.html#resources-section-structure-syntax">
     * logical ID</a> within a stack.</p>
     */
    inline const Aws::String& GetCompositeMemberIdentifier() const { return m_compositeMemberIdentifier; }
    inline bool CompositeMemberIdentifierHasBeenSet() const { return m_compositeMemberIdentifierHasBeenSet; }
    template<typename CompositeMemberIdentifierT = Aws::String>
    void SetCompositeMemberIdentifier(CompositeMemberIdentifierT&& value) { m_compositeMemberIdentifierHasBeenSet = true; m_compositeMemberIdentifier = std::forward<CompositeMemberIdentifierT>(value); }
    template<typename CompositeMemberIdentifierT = Aws::String>
    CopyJob& WithCompositeMemberIdentifier(CompositeMemberIdentifierT&& value) { SetCompositeMemberIdentifier(std::forward<CompositeMemberIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of child (nested) copy jobs.</p>
     */
    inline long long GetNumberOfChildJobs() const { return m_numberOfChildJobs; }
    inline bool NumberOfChildJobsHasBeenSet() const { return m_numberOfChildJobsHasBeenSet; }
    inline void SetNumberOfChildJobs(long long value) { m_numberOfChildJobsHasBeenSet = true; m_numberOfChildJobs = value; }
    inline CopyJob& WithNumberOfChildJobs(long long value) { SetNumberOfChildJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This returns the statistics of the included child (nested) copy jobs.</p>
     */
    inline const Aws::Map<CopyJobState, long long>& GetChildJobsInState() const { return m_childJobsInState; }
    inline bool ChildJobsInStateHasBeenSet() const { return m_childJobsInStateHasBeenSet; }
    template<typename ChildJobsInStateT = Aws::Map<CopyJobState, long long>>
    void SetChildJobsInState(ChildJobsInStateT&& value) { m_childJobsInStateHasBeenSet = true; m_childJobsInState = std::forward<ChildJobsInStateT>(value); }
    template<typename ChildJobsInStateT = Aws::Map<CopyJobState, long long>>
    CopyJob& WithChildJobsInState(ChildJobsInStateT&& value) { SetChildJobsInState(std::forward<ChildJobsInStateT>(value)); return *this;}
    inline CopyJob& AddChildJobsInState(CopyJobState key, long long value) {
      m_childJobsInStateHasBeenSet = true; m_childJobsInState.emplace(key, value); return *this;
    }
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
    CopyJob& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is the job count for the specified message category.</p>
     * <p>Example strings may include <code>AccessDenied</code>, <code>SUCCESS</code>,
     * <code>AGGREGATE_ALL</code>, and <code>InvalidParameters</code>. See <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * for a list of MessageCategory strings.</p> <p>The the value ANY returns count of
     * all message categories.</p> <p> <code>AGGREGATE_ALL</code> aggregates job counts
     * for all message categories and returns the sum</p>
     */
    inline const Aws::String& GetMessageCategory() const { return m_messageCategory; }
    inline bool MessageCategoryHasBeenSet() const { return m_messageCategoryHasBeenSet; }
    template<typename MessageCategoryT = Aws::String>
    void SetMessageCategory(MessageCategoryT&& value) { m_messageCategoryHasBeenSet = true; m_messageCategory = std::forward<MessageCategoryT>(value); }
    template<typename MessageCategoryT = Aws::String>
    CopyJob& WithMessageCategory(MessageCategoryT&& value) { SetMessageCategory(std::forward<MessageCategoryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_copyJobId;
    bool m_copyJobIdHasBeenSet = false;

    Aws::String m_sourceBackupVaultArn;
    bool m_sourceBackupVaultArnHasBeenSet = false;

    Aws::String m_sourceRecoveryPointArn;
    bool m_sourceRecoveryPointArnHasBeenSet = false;

    Aws::String m_destinationBackupVaultArn;
    bool m_destinationBackupVaultArnHasBeenSet = false;

    Aws::String m_destinationRecoveryPointArn;
    bool m_destinationRecoveryPointArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_completionDate{};
    bool m_completionDateHasBeenSet = false;

    CopyJobState m_state{CopyJobState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    long long m_backupSizeInBytes{0};
    bool m_backupSizeInBytesHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    RecoveryPointCreator m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_parentJobId;
    bool m_parentJobIdHasBeenSet = false;

    bool m_isParent{false};
    bool m_isParentHasBeenSet = false;

    Aws::String m_compositeMemberIdentifier;
    bool m_compositeMemberIdentifierHasBeenSet = false;

    long long m_numberOfChildJobs{0};
    bool m_numberOfChildJobsHasBeenSet = false;

    Aws::Map<CopyJobState, long long> m_childJobsInState;
    bool m_childJobsInStateHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_messageCategory;
    bool m_messageCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
