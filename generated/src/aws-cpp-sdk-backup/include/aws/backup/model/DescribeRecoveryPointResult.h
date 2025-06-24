/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RecoveryPointCreator.h>
#include <aws/backup/model/RecoveryPointStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/CalculatedLifecycle.h>
#include <aws/backup/model/Lifecycle.h>
#include <aws/backup/model/StorageClass.h>
#include <aws/backup/model/VaultType.h>
#include <aws/backup/model/IndexStatus.h>
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
  class DescribeRecoveryPointResult
  {
  public:
    AWS_BACKUP_API DescribeRecoveryPointResult() = default;
    AWS_BACKUP_API DescribeRecoveryPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeRecoveryPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const { return m_recoveryPointArn; }
    template<typename RecoveryPointArnT = Aws::String>
    void SetRecoveryPointArn(RecoveryPointArnT&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::forward<RecoveryPointArnT>(value); }
    template<typename RecoveryPointArnT = Aws::String>
    DescribeRecoveryPointResult& WithRecoveryPointArn(RecoveryPointArnT&& value) { SetRecoveryPointArn(std::forward<RecoveryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created.</p>
     */
    inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
    template<typename BackupVaultNameT = Aws::String>
    void SetBackupVaultName(BackupVaultNameT&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::forward<BackupVaultNameT>(value); }
    template<typename BackupVaultNameT = Aws::String>
    DescribeRecoveryPointResult& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const { return m_backupVaultArn; }
    template<typename BackupVaultArnT = Aws::String>
    void SetBackupVaultArn(BackupVaultArnT&& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = std::forward<BackupVaultArnT>(value); }
    template<typename BackupVaultArnT = Aws::String>
    DescribeRecoveryPointResult& WithBackupVaultArn(BackupVaultArnT&& value) { SetBackupVaultArn(std::forward<BackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the source vault where
     * the resource was originally backed up in; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>. If
     * the recovery is restored to the same Amazon Web Services account or Region, this
     * value will be <code>null</code>.</p>
     */
    inline const Aws::String& GetSourceBackupVaultArn() const { return m_sourceBackupVaultArn; }
    template<typename SourceBackupVaultArnT = Aws::String>
    void SetSourceBackupVaultArn(SourceBackupVaultArnT&& value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn = std::forward<SourceBackupVaultArnT>(value); }
    template<typename SourceBackupVaultArnT = Aws::String>
    DescribeRecoveryPointResult& WithSourceBackupVaultArn(SourceBackupVaultArnT&& value) { SetSourceBackupVaultArn(std::forward<SourceBackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a saved resource. The format of the ARN
     * depends on the resource type.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    DescribeRecoveryPointResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource to save as a recovery point; for
     * example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    DescribeRecoveryPointResult& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * used to create it.</p>
     */
    inline const RecoveryPointCreator& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = RecoveryPointCreator>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = RecoveryPointCreator>
    DescribeRecoveryPointResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
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
    DescribeRecoveryPointResult& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status code specifying the state of the recovery point. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/applicationstackbackups.html#cfnrecoverypointstatus">
     * Recovery point status</a> in the <i>Backup Developer Guide</i>.</p> <ul> <li>
     * <p> <code>CREATING</code> status indicates that an Backup job has been initiated
     * for a resource. The backup process has started and is actively processing a
     * backup job for the associated recovery point.</p> </li> <li> <p>
     * <code>AVAILABLE</code> status indicates that the backup was successfully created
     * for the recovery point. The backup process has completed without any issues, and
     * the recovery point is now ready for use.</p> </li> <li> <p> <code>PARTIAL</code>
     * status indicates a composite recovery point has one or more nested recovery
     * points that were not in the backup.</p> </li> <li> <p> <code>EXPIRED</code>
     * status indicates that the recovery point has exceeded its retention period, but
     * Backup lacks permission or is otherwise unable to delete it. To manually delete
     * these recovery points, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/gs-cleanup-resources.html#cleanup-backups">
     * Step 3: Delete the recovery points</a> in the <i>Clean up resources</i> section
     * of <i>Getting started</i>.</p> </li> <li> <p> <code>STOPPED</code> status occurs
     * on a continuous backup where a user has taken some action that causes the
     * continuous backup to be disabled. This can be caused by the removal of
     * permissions, turning off versioning, turning off events being sent to
     * EventBridge, or disabling the EventBridge rules that are put in place by Backup.
     * For recovery points of Amazon S3, Amazon RDS, and Amazon Aurora resources, this
     * status occurs when the retention period of a continuous backup rule is
     * changed.</p> <p>To resolve <code>STOPPED</code> status, ensure that all
     * requested permissions are in place and that versioning is enabled on the S3
     * bucket. Once these conditions are met, the next instance of a backup rule
     * running will result in a new continuous recovery point being created. The
     * recovery points with STOPPED status do not need to be deleted.</p> <p>For SAP
     * HANA on Amazon EC2 <code>STOPPED</code> status occurs due to user action,
     * application misconfiguration, or backup failure. To ensure that future
     * continuous backups succeed, refer to the recovery point status and check SAP
     * HANA for details.</p> </li> </ul>
     */
    inline RecoveryPointStatus GetStatus() const { return m_status; }
    inline void SetStatus(RecoveryPointStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeRecoveryPointResult& WithStatus(RecoveryPointStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status message explaining the status of the recovery point.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    DescribeRecoveryPointResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a recovery point is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    DescribeRecoveryPointResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the backup job that created this recovery point was
     * initiated, in Unix format and Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetInitiationDate() const { return m_initiationDate; }
    template<typename InitiationDateT = Aws::Utils::DateTime>
    void SetInitiationDate(InitiationDateT&& value) { m_initiationDateHasBeenSet = true; m_initiationDate = std::forward<InitiationDateT>(value); }
    template<typename InitiationDateT = Aws::Utils::DateTime>
    DescribeRecoveryPointResult& WithInitiationDate(InitiationDateT&& value) { SetInitiationDate(std::forward<InitiationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a job to create a recovery point is completed, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const { return m_completionDate; }
    template<typename CompletionDateT = Aws::Utils::DateTime>
    void SetCompletionDate(CompletionDateT&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::forward<CompletionDateT>(value); }
    template<typename CompletionDateT = Aws::Utils::DateTime>
    DescribeRecoveryPointResult& WithCompletionDate(CompletionDateT&& value) { SetCompletionDate(std::forward<CompletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline long long GetBackupSizeInBytes() const { return m_backupSizeInBytes; }
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytesHasBeenSet = true; m_backupSizeInBytes = value; }
    inline DescribeRecoveryPointResult& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps.</p>
     */
    inline const CalculatedLifecycle& GetCalculatedLifecycle() const { return m_calculatedLifecycle; }
    template<typename CalculatedLifecycleT = CalculatedLifecycle>
    void SetCalculatedLifecycle(CalculatedLifecycleT&& value) { m_calculatedLifecycleHasBeenSet = true; m_calculatedLifecycle = std::forward<CalculatedLifecycleT>(value); }
    template<typename CalculatedLifecycleT = CalculatedLifecycle>
    DescribeRecoveryPointResult& WithCalculatedLifecycle(CalculatedLifecycleT&& value) { SetCalculatedLifecycle(std::forward<CalculatedLifecycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
     * automatically according to the lifecycle that you define.</p> <p>Backups that
     * are transitioned to cold storage must be stored in cold storage for a minimum of
     * 90 days. Therefore, the “retention” setting must be 90 days greater than the
     * “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Resource types that can transition to cold storage are listed in the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/backup-feature-availability.html#features-by-resource">Feature
     * availability by resource</a> table. Backup ignores this expression for other
     * resource types.</p>
     */
    inline const Lifecycle& GetLifecycle() const { return m_lifecycle; }
    template<typename LifecycleT = Lifecycle>
    void SetLifecycle(LifecycleT&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::forward<LifecycleT>(value); }
    template<typename LifecycleT = Lifecycle>
    DescribeRecoveryPointResult& WithLifecycle(LifecycleT&& value) { SetLifecycle(std::forward<LifecycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server-side encryption key used to protect your backups; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    DescribeRecoveryPointResult& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that is returned as <code>TRUE</code> if the specified
     * recovery point is encrypted, or <code>FALSE</code> if the recovery point is not
     * encrypted.</p>
     */
    inline bool GetIsEncrypted() const { return m_isEncrypted; }
    inline void SetIsEncrypted(bool value) { m_isEncryptedHasBeenSet = true; m_isEncrypted = value; }
    inline DescribeRecoveryPointResult& WithIsEncrypted(bool value) { SetIsEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the storage class of the recovery point. Valid values are
     * <code>WARM</code> or <code>COLD</code>.</p>
     */
    inline StorageClass GetStorageClass() const { return m_storageClass; }
    inline void SetStorageClass(StorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline DescribeRecoveryPointResult& WithStorageClass(StorageClass value) { SetStorageClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a recovery point was last restored, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastRestoreTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRestoreTime() const { return m_lastRestoreTime; }
    template<typename LastRestoreTimeT = Aws::Utils::DateTime>
    void SetLastRestoreTime(LastRestoreTimeT&& value) { m_lastRestoreTimeHasBeenSet = true; m_lastRestoreTime = std::forward<LastRestoreTimeT>(value); }
    template<typename LastRestoreTimeT = Aws::Utils::DateTime>
    DescribeRecoveryPointResult& WithLastRestoreTime(LastRestoreTimeT&& value) { SetLastRestoreTime(std::forward<LastRestoreTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an ARN that uniquely identifies a parent (composite) recovery point;
     * for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetParentRecoveryPointArn() const { return m_parentRecoveryPointArn; }
    template<typename ParentRecoveryPointArnT = Aws::String>
    void SetParentRecoveryPointArn(ParentRecoveryPointArnT&& value) { m_parentRecoveryPointArnHasBeenSet = true; m_parentRecoveryPointArn = std::forward<ParentRecoveryPointArnT>(value); }
    template<typename ParentRecoveryPointArnT = Aws::String>
    DescribeRecoveryPointResult& WithParentRecoveryPointArn(ParentRecoveryPointArnT&& value) { SetParentRecoveryPointArn(std::forward<ParentRecoveryPointArnT>(value)); return *this;}
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
    template<typename CompositeMemberIdentifierT = Aws::String>
    void SetCompositeMemberIdentifier(CompositeMemberIdentifierT&& value) { m_compositeMemberIdentifierHasBeenSet = true; m_compositeMemberIdentifier = std::forward<CompositeMemberIdentifierT>(value); }
    template<typename CompositeMemberIdentifierT = Aws::String>
    DescribeRecoveryPointResult& WithCompositeMemberIdentifier(CompositeMemberIdentifierT&& value) { SetCompositeMemberIdentifier(std::forward<CompositeMemberIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This returns the boolean value that a recovery point is a parent (composite)
     * job.</p>
     */
    inline bool GetIsParent() const { return m_isParent; }
    inline void SetIsParent(bool value) { m_isParentHasBeenSet = true; m_isParent = value; }
    inline DescribeRecoveryPointResult& WithIsParent(bool value) { SetIsParent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource that belongs to the specified backup.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    DescribeRecoveryPointResult& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of vault in which the described recovery point is stored.</p>
     */
    inline VaultType GetVaultType() const { return m_vaultType; }
    inline void SetVaultType(VaultType value) { m_vaultTypeHasBeenSet = true; m_vaultType = value; }
    inline DescribeRecoveryPointResult& WithVaultType(VaultType value) { SetVaultType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the current status for the backup index associated with the specified
     * recovery point.</p> <p>Statuses are: <code>PENDING</code> | <code>ACTIVE</code>
     * | <code>FAILED</code> | <code>DELETING</code> </p> <p>A recovery point with an
     * index that has the status of <code>ACTIVE</code> can be included in a
     * search.</p>
     */
    inline IndexStatus GetIndexStatus() const { return m_indexStatus; }
    inline void SetIndexStatus(IndexStatus value) { m_indexStatusHasBeenSet = true; m_indexStatus = value; }
    inline DescribeRecoveryPointResult& WithIndexStatus(IndexStatus value) { SetIndexStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string in the form of a detailed message explaining the status of a backup
     * index associated with the recovery point.</p>
     */
    inline const Aws::String& GetIndexStatusMessage() const { return m_indexStatusMessage; }
    template<typename IndexStatusMessageT = Aws::String>
    void SetIndexStatusMessage(IndexStatusMessageT&& value) { m_indexStatusMessageHasBeenSet = true; m_indexStatusMessage = std::forward<IndexStatusMessageT>(value); }
    template<typename IndexStatusMessageT = Aws::String>
    DescribeRecoveryPointResult& WithIndexStatusMessage(IndexStatusMessageT&& value) { SetIndexStatusMessage(std::forward<IndexStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRecoveryPointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_backupVaultArn;
    bool m_backupVaultArnHasBeenSet = false;

    Aws::String m_sourceBackupVaultArn;
    bool m_sourceBackupVaultArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    RecoveryPointCreator m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    RecoveryPointStatus m_status{RecoveryPointStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_initiationDate{};
    bool m_initiationDateHasBeenSet = false;

    Aws::Utils::DateTime m_completionDate{};
    bool m_completionDateHasBeenSet = false;

    long long m_backupSizeInBytes{0};
    bool m_backupSizeInBytesHasBeenSet = false;

    CalculatedLifecycle m_calculatedLifecycle;
    bool m_calculatedLifecycleHasBeenSet = false;

    Lifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    bool m_isEncrypted{false};
    bool m_isEncryptedHasBeenSet = false;

    StorageClass m_storageClass{StorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;

    Aws::Utils::DateTime m_lastRestoreTime{};
    bool m_lastRestoreTimeHasBeenSet = false;

    Aws::String m_parentRecoveryPointArn;
    bool m_parentRecoveryPointArnHasBeenSet = false;

    Aws::String m_compositeMemberIdentifier;
    bool m_compositeMemberIdentifierHasBeenSet = false;

    bool m_isParent{false};
    bool m_isParentHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    VaultType m_vaultType{VaultType::NOT_SET};
    bool m_vaultTypeHasBeenSet = false;

    IndexStatus m_indexStatus{IndexStatus::NOT_SET};
    bool m_indexStatusHasBeenSet = false;

    Aws::String m_indexStatusMessage;
    bool m_indexStatusMessageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
