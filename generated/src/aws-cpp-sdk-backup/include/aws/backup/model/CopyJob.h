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
    AWS_BACKUP_API CopyJob();
    AWS_BACKUP_API CopyJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API CopyJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account ID that owns the copy job.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline CopyJob& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline CopyJob& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline CopyJob& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline const Aws::String& GetCopyJobId() const{ return m_copyJobId; }
    inline bool CopyJobIdHasBeenSet() const { return m_copyJobIdHasBeenSet; }
    inline void SetCopyJobId(const Aws::String& value) { m_copyJobIdHasBeenSet = true; m_copyJobId = value; }
    inline void SetCopyJobId(Aws::String&& value) { m_copyJobIdHasBeenSet = true; m_copyJobId = std::move(value); }
    inline void SetCopyJobId(const char* value) { m_copyJobIdHasBeenSet = true; m_copyJobId.assign(value); }
    inline CopyJob& WithCopyJobId(const Aws::String& value) { SetCopyJobId(value); return *this;}
    inline CopyJob& WithCopyJobId(Aws::String&& value) { SetCopyJobId(std::move(value)); return *this;}
    inline CopyJob& WithCopyJobId(const char* value) { SetCopyJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source copy vault;
     * for example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.
     * </p>
     */
    inline const Aws::String& GetSourceBackupVaultArn() const{ return m_sourceBackupVaultArn; }
    inline bool SourceBackupVaultArnHasBeenSet() const { return m_sourceBackupVaultArnHasBeenSet; }
    inline void SetSourceBackupVaultArn(const Aws::String& value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn = value; }
    inline void SetSourceBackupVaultArn(Aws::String&& value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn = std::move(value); }
    inline void SetSourceBackupVaultArn(const char* value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn.assign(value); }
    inline CopyJob& WithSourceBackupVaultArn(const Aws::String& value) { SetSourceBackupVaultArn(value); return *this;}
    inline CopyJob& WithSourceBackupVaultArn(Aws::String&& value) { SetSourceBackupVaultArn(std::move(value)); return *this;}
    inline CopyJob& WithSourceBackupVaultArn(const char* value) { SetSourceBackupVaultArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a source recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetSourceRecoveryPointArn() const{ return m_sourceRecoveryPointArn; }
    inline bool SourceRecoveryPointArnHasBeenSet() const { return m_sourceRecoveryPointArnHasBeenSet; }
    inline void SetSourceRecoveryPointArn(const Aws::String& value) { m_sourceRecoveryPointArnHasBeenSet = true; m_sourceRecoveryPointArn = value; }
    inline void SetSourceRecoveryPointArn(Aws::String&& value) { m_sourceRecoveryPointArnHasBeenSet = true; m_sourceRecoveryPointArn = std::move(value); }
    inline void SetSourceRecoveryPointArn(const char* value) { m_sourceRecoveryPointArnHasBeenSet = true; m_sourceRecoveryPointArn.assign(value); }
    inline CopyJob& WithSourceRecoveryPointArn(const Aws::String& value) { SetSourceRecoveryPointArn(value); return *this;}
    inline CopyJob& WithSourceRecoveryPointArn(Aws::String&& value) { SetSourceRecoveryPointArn(std::move(value)); return *this;}
    inline CopyJob& WithSourceRecoveryPointArn(const char* value) { SetSourceRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination copy
     * vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetDestinationBackupVaultArn() const{ return m_destinationBackupVaultArn; }
    inline bool DestinationBackupVaultArnHasBeenSet() const { return m_destinationBackupVaultArnHasBeenSet; }
    inline void SetDestinationBackupVaultArn(const Aws::String& value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn = value; }
    inline void SetDestinationBackupVaultArn(Aws::String&& value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn = std::move(value); }
    inline void SetDestinationBackupVaultArn(const char* value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn.assign(value); }
    inline CopyJob& WithDestinationBackupVaultArn(const Aws::String& value) { SetDestinationBackupVaultArn(value); return *this;}
    inline CopyJob& WithDestinationBackupVaultArn(Aws::String&& value) { SetDestinationBackupVaultArn(std::move(value)); return *this;}
    inline CopyJob& WithDestinationBackupVaultArn(const char* value) { SetDestinationBackupVaultArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a destination recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetDestinationRecoveryPointArn() const{ return m_destinationRecoveryPointArn; }
    inline bool DestinationRecoveryPointArnHasBeenSet() const { return m_destinationRecoveryPointArnHasBeenSet; }
    inline void SetDestinationRecoveryPointArn(const Aws::String& value) { m_destinationRecoveryPointArnHasBeenSet = true; m_destinationRecoveryPointArn = value; }
    inline void SetDestinationRecoveryPointArn(Aws::String&& value) { m_destinationRecoveryPointArnHasBeenSet = true; m_destinationRecoveryPointArn = std::move(value); }
    inline void SetDestinationRecoveryPointArn(const char* value) { m_destinationRecoveryPointArnHasBeenSet = true; m_destinationRecoveryPointArn.assign(value); }
    inline CopyJob& WithDestinationRecoveryPointArn(const Aws::String& value) { SetDestinationRecoveryPointArn(value); return *this;}
    inline CopyJob& WithDestinationRecoveryPointArn(Aws::String&& value) { SetDestinationRecoveryPointArn(std::move(value)); return *this;}
    inline CopyJob& WithDestinationRecoveryPointArn(const char* value) { SetDestinationRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services resource to be copied; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline CopyJob& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline CopyJob& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline CopyJob& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a copy job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline CopyJob& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline CopyJob& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a copy job is completed, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CompletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const{ return m_completionDate; }
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }
    inline void SetCompletionDate(const Aws::Utils::DateTime& value) { m_completionDateHasBeenSet = true; m_completionDate = value; }
    inline void SetCompletionDate(Aws::Utils::DateTime&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::move(value); }
    inline CopyJob& WithCompletionDate(const Aws::Utils::DateTime& value) { SetCompletionDate(value); return *this;}
    inline CopyJob& WithCompletionDate(Aws::Utils::DateTime&& value) { SetCompletionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of a copy job.</p>
     */
    inline const CopyJobState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const CopyJobState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(CopyJobState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline CopyJob& WithState(const CopyJobState& value) { SetState(value); return *this;}
    inline CopyJob& WithState(CopyJobState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed message explaining the status of the job to copy a resource.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline CopyJob& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline CopyJob& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline CopyJob& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of a copy job.</p>
     */
    inline long long GetBackupSizeInBytes() const{ return m_backupSizeInBytes; }
    inline bool BackupSizeInBytesHasBeenSet() const { return m_backupSizeInBytesHasBeenSet; }
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytesHasBeenSet = true; m_backupSizeInBytes = value; }
    inline CopyJob& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline CopyJob& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline CopyJob& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline CopyJob& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const RecoveryPointCreator& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const RecoveryPointCreator& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(RecoveryPointCreator&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline CopyJob& WithCreatedBy(const RecoveryPointCreator& value) { SetCreatedBy(value); return *this;}
    inline CopyJob& WithCreatedBy(RecoveryPointCreator&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource to be copied; for example, an Amazon
     * Elastic Block Store (Amazon EBS) volume or an Amazon Relational Database Service
     * (Amazon RDS) database.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline CopyJob& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline CopyJob& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline CopyJob& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This uniquely identifies a request to Backup to copy a resource. The return
     * will be the parent (composite) job ID.</p>
     */
    inline const Aws::String& GetParentJobId() const{ return m_parentJobId; }
    inline bool ParentJobIdHasBeenSet() const { return m_parentJobIdHasBeenSet; }
    inline void SetParentJobId(const Aws::String& value) { m_parentJobIdHasBeenSet = true; m_parentJobId = value; }
    inline void SetParentJobId(Aws::String&& value) { m_parentJobIdHasBeenSet = true; m_parentJobId = std::move(value); }
    inline void SetParentJobId(const char* value) { m_parentJobIdHasBeenSet = true; m_parentJobId.assign(value); }
    inline CopyJob& WithParentJobId(const Aws::String& value) { SetParentJobId(value); return *this;}
    inline CopyJob& WithParentJobId(Aws::String&& value) { SetParentJobId(std::move(value)); return *this;}
    inline CopyJob& WithParentJobId(const char* value) { SetParentJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a boolean value indicating this is a parent (composite) copy job.</p>
     */
    inline bool GetIsParent() const{ return m_isParent; }
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
    inline const Aws::String& GetCompositeMemberIdentifier() const{ return m_compositeMemberIdentifier; }
    inline bool CompositeMemberIdentifierHasBeenSet() const { return m_compositeMemberIdentifierHasBeenSet; }
    inline void SetCompositeMemberIdentifier(const Aws::String& value) { m_compositeMemberIdentifierHasBeenSet = true; m_compositeMemberIdentifier = value; }
    inline void SetCompositeMemberIdentifier(Aws::String&& value) { m_compositeMemberIdentifierHasBeenSet = true; m_compositeMemberIdentifier = std::move(value); }
    inline void SetCompositeMemberIdentifier(const char* value) { m_compositeMemberIdentifierHasBeenSet = true; m_compositeMemberIdentifier.assign(value); }
    inline CopyJob& WithCompositeMemberIdentifier(const Aws::String& value) { SetCompositeMemberIdentifier(value); return *this;}
    inline CopyJob& WithCompositeMemberIdentifier(Aws::String&& value) { SetCompositeMemberIdentifier(std::move(value)); return *this;}
    inline CopyJob& WithCompositeMemberIdentifier(const char* value) { SetCompositeMemberIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of child (nested) copy jobs.</p>
     */
    inline long long GetNumberOfChildJobs() const{ return m_numberOfChildJobs; }
    inline bool NumberOfChildJobsHasBeenSet() const { return m_numberOfChildJobsHasBeenSet; }
    inline void SetNumberOfChildJobs(long long value) { m_numberOfChildJobsHasBeenSet = true; m_numberOfChildJobs = value; }
    inline CopyJob& WithNumberOfChildJobs(long long value) { SetNumberOfChildJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This returns the statistics of the included child (nested) copy jobs.</p>
     */
    inline const Aws::Map<CopyJobState, long long>& GetChildJobsInState() const{ return m_childJobsInState; }
    inline bool ChildJobsInStateHasBeenSet() const { return m_childJobsInStateHasBeenSet; }
    inline void SetChildJobsInState(const Aws::Map<CopyJobState, long long>& value) { m_childJobsInStateHasBeenSet = true; m_childJobsInState = value; }
    inline void SetChildJobsInState(Aws::Map<CopyJobState, long long>&& value) { m_childJobsInStateHasBeenSet = true; m_childJobsInState = std::move(value); }
    inline CopyJob& WithChildJobsInState(const Aws::Map<CopyJobState, long long>& value) { SetChildJobsInState(value); return *this;}
    inline CopyJob& WithChildJobsInState(Aws::Map<CopyJobState, long long>&& value) { SetChildJobsInState(std::move(value)); return *this;}
    inline CopyJob& AddChildJobsInState(const CopyJobState& key, long long value) { m_childJobsInStateHasBeenSet = true; m_childJobsInState.emplace(key, value); return *this; }
    inline CopyJob& AddChildJobsInState(CopyJobState&& key, long long value) { m_childJobsInStateHasBeenSet = true; m_childJobsInState.emplace(std::move(key), value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The non-unique name of the resource that belongs to the specified backup.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline CopyJob& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline CopyJob& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline CopyJob& WithResourceName(const char* value) { SetResourceName(value); return *this;}
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
    inline const Aws::String& GetMessageCategory() const{ return m_messageCategory; }
    inline bool MessageCategoryHasBeenSet() const { return m_messageCategoryHasBeenSet; }
    inline void SetMessageCategory(const Aws::String& value) { m_messageCategoryHasBeenSet = true; m_messageCategory = value; }
    inline void SetMessageCategory(Aws::String&& value) { m_messageCategoryHasBeenSet = true; m_messageCategory = std::move(value); }
    inline void SetMessageCategory(const char* value) { m_messageCategoryHasBeenSet = true; m_messageCategory.assign(value); }
    inline CopyJob& WithMessageCategory(const Aws::String& value) { SetMessageCategory(value); return *this;}
    inline CopyJob& WithMessageCategory(Aws::String&& value) { SetMessageCategory(std::move(value)); return *this;}
    inline CopyJob& WithMessageCategory(const char* value) { SetMessageCategory(value); return *this;}
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

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_completionDate;
    bool m_completionDateHasBeenSet = false;

    CopyJobState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    long long m_backupSizeInBytes;
    bool m_backupSizeInBytesHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    RecoveryPointCreator m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_parentJobId;
    bool m_parentJobIdHasBeenSet = false;

    bool m_isParent;
    bool m_isParentHasBeenSet = false;

    Aws::String m_compositeMemberIdentifier;
    bool m_compositeMemberIdentifierHasBeenSet = false;

    long long m_numberOfChildJobs;
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
