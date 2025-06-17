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
#include <aws/backup/model/VaultType.h>
#include <aws/backup/model/IndexStatus.h>
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
   * <p>Contains detailed information about the recovery points stored in a backup
   * vault.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RecoveryPointByBackupVault">AWS
   * API Reference</a></p>
   */
  class RecoveryPointByBackupVault
  {
  public:
    AWS_BACKUP_API RecoveryPointByBackupVault() = default;
    AWS_BACKUP_API RecoveryPointByBackupVault(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RecoveryPointByBackupVault& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const { return m_recoveryPointArn; }
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }
    template<typename RecoveryPointArnT = Aws::String>
    void SetRecoveryPointArn(RecoveryPointArnT&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::forward<RecoveryPointArnT>(value); }
    template<typename RecoveryPointArnT = Aws::String>
    RecoveryPointByBackupVault& WithRecoveryPointArn(RecoveryPointArnT&& value) { SetRecoveryPointArn(std::forward<RecoveryPointArnT>(value)); return *this;}
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
    RecoveryPointByBackupVault& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const { return m_backupVaultArn; }
    inline bool BackupVaultArnHasBeenSet() const { return m_backupVaultArnHasBeenSet; }
    template<typename BackupVaultArnT = Aws::String>
    void SetBackupVaultArn(BackupVaultArnT&& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = std::forward<BackupVaultArnT>(value); }
    template<typename BackupVaultArnT = Aws::String>
    RecoveryPointByBackupVault& WithBackupVaultArn(BackupVaultArnT&& value) { SetBackupVaultArn(std::forward<BackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The backup vault where the recovery point was originally copied from. If the
     * recovery point is restored to the same account this value will be
     * <code>null</code>.</p>
     */
    inline const Aws::String& GetSourceBackupVaultArn() const { return m_sourceBackupVaultArn; }
    inline bool SourceBackupVaultArnHasBeenSet() const { return m_sourceBackupVaultArnHasBeenSet; }
    template<typename SourceBackupVaultArnT = Aws::String>
    void SetSourceBackupVaultArn(SourceBackupVaultArnT&& value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn = std::forward<SourceBackupVaultArnT>(value); }
    template<typename SourceBackupVaultArnT = Aws::String>
    RecoveryPointByBackupVault& WithSourceBackupVaultArn(SourceBackupVaultArnT&& value) { SetSourceBackupVaultArn(std::forward<SourceBackupVaultArnT>(value)); return *this;}
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
    RecoveryPointByBackupVault& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database. For Windows Volume Shadow
     * Copy Service (VSS) backups, the only supported resource type is Amazon EC2.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    RecoveryPointByBackupVault& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * that is used to create it.</p>
     */
    inline const RecoveryPointCreator& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = RecoveryPointCreator>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = RecoveryPointCreator>
    RecoveryPointByBackupVault& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    RecoveryPointByBackupVault& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status code specifying the state of the recovery point.</p>
     */
    inline RecoveryPointStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RecoveryPointStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RecoveryPointByBackupVault& WithStatus(RecoveryPointStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message explaining the current status of the recovery point.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    RecoveryPointByBackupVault& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a recovery point is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    RecoveryPointByBackupVault& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the backup job that created this recovery point was
     * initiated, in Unix format and Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetInitiationDate() const { return m_initiationDate; }
    inline bool InitiationDateHasBeenSet() const { return m_initiationDateHasBeenSet; }
    template<typename InitiationDateT = Aws::Utils::DateTime>
    void SetInitiationDate(InitiationDateT&& value) { m_initiationDateHasBeenSet = true; m_initiationDate = std::forward<InitiationDateT>(value); }
    template<typename InitiationDateT = Aws::Utils::DateTime>
    RecoveryPointByBackupVault& WithInitiationDate(InitiationDateT&& value) { SetInitiationDate(std::forward<InitiationDateT>(value)); return *this;}
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
    RecoveryPointByBackupVault& WithCompletionDate(CompletionDateT&& value) { SetCompletionDate(std::forward<CompletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline long long GetBackupSizeInBytes() const { return m_backupSizeInBytes; }
    inline bool BackupSizeInBytesHasBeenSet() const { return m_backupSizeInBytesHasBeenSet; }
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytesHasBeenSet = true; m_backupSizeInBytes = value; }
    inline RecoveryPointByBackupVault& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps.</p>
     */
    inline const CalculatedLifecycle& GetCalculatedLifecycle() const { return m_calculatedLifecycle; }
    inline bool CalculatedLifecycleHasBeenSet() const { return m_calculatedLifecycleHasBeenSet; }
    template<typename CalculatedLifecycleT = CalculatedLifecycle>
    void SetCalculatedLifecycle(CalculatedLifecycleT&& value) { m_calculatedLifecycleHasBeenSet = true; m_calculatedLifecycle = std::forward<CalculatedLifecycleT>(value); }
    template<typename CalculatedLifecycleT = CalculatedLifecycle>
    RecoveryPointByBackupVault& WithCalculatedLifecycle(CalculatedLifecycleT&& value) { SetCalculatedLifecycle(std::forward<CalculatedLifecycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “retention” setting must be 90 days greater than the
     * “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Resource types that can transition to cold storage are listed in the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/backup-feature-availability.html#features-by-resource">Feature
     * availability by resource</a> table. Backup ignores this expression for other
     * resource types.</p>
     */
    inline const Lifecycle& GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    template<typename LifecycleT = Lifecycle>
    void SetLifecycle(LifecycleT&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::forward<LifecycleT>(value); }
    template<typename LifecycleT = Lifecycle>
    RecoveryPointByBackupVault& WithLifecycle(LifecycleT&& value) { SetLifecycle(std::forward<LifecycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    RecoveryPointByBackupVault& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that is returned as <code>TRUE</code> if the specified
     * recovery point is encrypted, or <code>FALSE</code> if the recovery point is not
     * encrypted.</p>
     */
    inline bool GetIsEncrypted() const { return m_isEncrypted; }
    inline bool IsEncryptedHasBeenSet() const { return m_isEncryptedHasBeenSet; }
    inline void SetIsEncrypted(bool value) { m_isEncryptedHasBeenSet = true; m_isEncrypted = value; }
    inline RecoveryPointByBackupVault& WithIsEncrypted(bool value) { SetIsEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a recovery point was last restored, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastRestoreTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRestoreTime() const { return m_lastRestoreTime; }
    inline bool LastRestoreTimeHasBeenSet() const { return m_lastRestoreTimeHasBeenSet; }
    template<typename LastRestoreTimeT = Aws::Utils::DateTime>
    void SetLastRestoreTime(LastRestoreTimeT&& value) { m_lastRestoreTimeHasBeenSet = true; m_lastRestoreTime = std::forward<LastRestoreTimeT>(value); }
    template<typename LastRestoreTimeT = Aws::Utils::DateTime>
    RecoveryPointByBackupVault& WithLastRestoreTime(LastRestoreTimeT&& value) { SetLastRestoreTime(std::forward<LastRestoreTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the parent (composite) recovery point.</p>
     */
    inline const Aws::String& GetParentRecoveryPointArn() const { return m_parentRecoveryPointArn; }
    inline bool ParentRecoveryPointArnHasBeenSet() const { return m_parentRecoveryPointArnHasBeenSet; }
    template<typename ParentRecoveryPointArnT = Aws::String>
    void SetParentRecoveryPointArn(ParentRecoveryPointArnT&& value) { m_parentRecoveryPointArnHasBeenSet = true; m_parentRecoveryPointArn = std::forward<ParentRecoveryPointArnT>(value); }
    template<typename ParentRecoveryPointArnT = Aws::String>
    RecoveryPointByBackupVault& WithParentRecoveryPointArn(ParentRecoveryPointArnT&& value) { SetParentRecoveryPointArn(std::forward<ParentRecoveryPointArnT>(value)); return *this;}
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
    RecoveryPointByBackupVault& WithCompositeMemberIdentifier(CompositeMemberIdentifierT&& value) { SetCompositeMemberIdentifier(std::forward<CompositeMemberIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a boolean value indicating this is a parent (composite) recovery
     * point.</p>
     */
    inline bool GetIsParent() const { return m_isParent; }
    inline bool IsParentHasBeenSet() const { return m_isParentHasBeenSet; }
    inline void SetIsParent(bool value) { m_isParentHasBeenSet = true; m_isParent = value; }
    inline RecoveryPointByBackupVault& WithIsParent(bool value) { SetIsParent(value); return *this;}
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
    RecoveryPointByBackupVault& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of vault in which the described recovery point is stored.</p>
     */
    inline VaultType GetVaultType() const { return m_vaultType; }
    inline bool VaultTypeHasBeenSet() const { return m_vaultTypeHasBeenSet; }
    inline void SetVaultType(VaultType value) { m_vaultTypeHasBeenSet = true; m_vaultType = value; }
    inline RecoveryPointByBackupVault& WithVaultType(VaultType value) { SetVaultType(value); return *this;}
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
    inline bool IndexStatusHasBeenSet() const { return m_indexStatusHasBeenSet; }
    inline void SetIndexStatus(IndexStatus value) { m_indexStatusHasBeenSet = true; m_indexStatus = value; }
    inline RecoveryPointByBackupVault& WithIndexStatus(IndexStatus value) { SetIndexStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string in the form of a detailed message explaining the status of a backup
     * index associated with the recovery point.</p>
     */
    inline const Aws::String& GetIndexStatusMessage() const { return m_indexStatusMessage; }
    inline bool IndexStatusMessageHasBeenSet() const { return m_indexStatusMessageHasBeenSet; }
    template<typename IndexStatusMessageT = Aws::String>
    void SetIndexStatusMessage(IndexStatusMessageT&& value) { m_indexStatusMessageHasBeenSet = true; m_indexStatusMessage = std::forward<IndexStatusMessageT>(value); }
    template<typename IndexStatusMessageT = Aws::String>
    RecoveryPointByBackupVault& WithIndexStatusMessage(IndexStatusMessageT&& value) { SetIndexStatusMessage(std::forward<IndexStatusMessageT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
