/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/MalwareScanner.h>
#include <aws/backup/model/ScanJobCreator.h>
#include <aws/backup/model/ScanMode.h>
#include <aws/backup/model/ScanResourceType.h>
#include <aws/backup/model/ScanResultInfo.h>
#include <aws/backup/model/ScanState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Backup {
namespace Model {

/**
 * <p>Contains metadata about a scan job, including information about the scanning
 * process, results, and associated resources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ScanJob">AWS API
 * Reference</a></p>
 */
class ScanJob {
 public:
  AWS_BACKUP_API ScanJob() = default;
  AWS_BACKUP_API ScanJob(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API ScanJob& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The account ID that owns the scan job.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  ScanJob& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
   * example,
   * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
   */
  inline const Aws::String& GetBackupVaultArn() const { return m_backupVaultArn; }
  inline bool BackupVaultArnHasBeenSet() const { return m_backupVaultArnHasBeenSet; }
  template <typename BackupVaultArnT = Aws::String>
  void SetBackupVaultArn(BackupVaultArnT&& value) {
    m_backupVaultArnHasBeenSet = true;
    m_backupVaultArn = std::forward<BackupVaultArnT>(value);
  }
  template <typename BackupVaultArnT = Aws::String>
  ScanJob& WithBackupVaultArn(BackupVaultArnT&& value) {
    SetBackupVaultArn(std::forward<BackupVaultArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of a logical container where backups are stored. Backup vaults are
   * identified by names that are unique to the account used to create them and the
   * Amazon Web Services Region where they are created.</p>
   */
  inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
  inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
  template <typename BackupVaultNameT = Aws::String>
  void SetBackupVaultName(BackupVaultNameT&& value) {
    m_backupVaultNameHasBeenSet = true;
    m_backupVaultName = std::forward<BackupVaultNameT>(value);
  }
  template <typename BackupVaultNameT = Aws::String>
  ScanJob& WithBackupVaultName(BackupVaultNameT&& value) {
    SetBackupVaultName(std::forward<BackupVaultNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that a scan job is completed, in Unix format and
   * Coordinated Universal Time (UTC). The value of <code>CompletionDate</code> is
   * accurate to milliseconds. For example, the value 1516925490.087 represents
   * Friday, January 26, 2018 12:11:30.087 AM.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletionDate() const { return m_completionDate; }
  inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }
  template <typename CompletionDateT = Aws::Utils::DateTime>
  void SetCompletionDate(CompletionDateT&& value) {
    m_completionDateHasBeenSet = true;
    m_completionDate = std::forward<CompletionDateT>(value);
  }
  template <typename CompletionDateT = Aws::Utils::DateTime>
  ScanJob& WithCompletionDate(CompletionDateT&& value) {
    SetCompletionDate(std::forward<CompletionDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains identifying information about the creation of a scan job.</p>
   */
  inline const ScanJobCreator& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = ScanJobCreator>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = ScanJobCreator>
  ScanJob& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that a scan job is created, in Unix format and Coordinated
   * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
   * milliseconds. For example, the value 1516925490.087 represents Friday, January
   * 26, 2018 12:11:30.087 AM.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
  inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
  template <typename CreationDateT = Aws::Utils::DateTime>
  void SetCreationDate(CreationDateT&& value) {
    m_creationDateHasBeenSet = true;
    m_creationDate = std::forward<CreationDateT>(value);
  }
  template <typename CreationDateT = Aws::Utils::DateTime>
  ScanJob& WithCreationDate(CreationDateT&& value) {
    SetCreationDate(std::forward<CreationDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the IAM role ARN used to create the scan job; for example,
   * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
   */
  inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
  inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
  template <typename IamRoleArnT = Aws::String>
  void SetIamRoleArn(IamRoleArnT&& value) {
    m_iamRoleArnHasBeenSet = true;
    m_iamRoleArn = std::forward<IamRoleArnT>(value);
  }
  template <typename IamRoleArnT = Aws::String>
  ScanJob& WithIamRoleArn(IamRoleArnT&& value) {
    SetIamRoleArn(std::forward<IamRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scanning engine used for the scan job. Currently only
   * <code>GUARDDUTY</code> is supported.</p>
   */
  inline MalwareScanner GetMalwareScanner() const { return m_malwareScanner; }
  inline bool MalwareScannerHasBeenSet() const { return m_malwareScannerHasBeenSet; }
  inline void SetMalwareScanner(MalwareScanner value) {
    m_malwareScannerHasBeenSet = true;
    m_malwareScanner = value;
  }
  inline ScanJob& WithMalwareScanner(MalwareScanner value) {
    SetMalwareScanner(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An ARN that uniquely identifies the recovery point being scanned; for
   * example,
   * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
   */
  inline const Aws::String& GetRecoveryPointArn() const { return m_recoveryPointArn; }
  inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }
  template <typename RecoveryPointArnT = Aws::String>
  void SetRecoveryPointArn(RecoveryPointArnT&& value) {
    m_recoveryPointArnHasBeenSet = true;
    m_recoveryPointArn = std::forward<RecoveryPointArnT>(value);
  }
  template <typename RecoveryPointArnT = Aws::String>
  ScanJob& WithRecoveryPointArn(RecoveryPointArnT&& value) {
    SetRecoveryPointArn(std::forward<RecoveryPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An ARN that uniquely identifies the source resource of the recovery point
   * being scanned.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  ScanJob& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The non-unique name of the resource that belongs to the specified backup.</p>
   */
  inline const Aws::String& GetResourceName() const { return m_resourceName; }
  inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
  template <typename ResourceNameT = Aws::String>
  void SetResourceName(ResourceNameT&& value) {
    m_resourceNameHasBeenSet = true;
    m_resourceName = std::forward<ResourceNameT>(value);
  }
  template <typename ResourceNameT = Aws::String>
  ScanJob& WithResourceName(ResourceNameT&& value) {
    SetResourceName(std::forward<ResourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of Amazon Web Services resource being scanned; for example, an
   * Amazon Elastic Block Store (Amazon EBS) volume or an Amazon Relational Database
   * Service (Amazon RDS) database.</p>
   */
  inline ScanResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(ScanResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline ScanJob& WithResourceType(ScanResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An ARN that uniquely identifies the base recovery point for scanning. This
   * field is populated when an incremental scan job has taken place.</p>
   */
  inline const Aws::String& GetScanBaseRecoveryPointArn() const { return m_scanBaseRecoveryPointArn; }
  inline bool ScanBaseRecoveryPointArnHasBeenSet() const { return m_scanBaseRecoveryPointArnHasBeenSet; }
  template <typename ScanBaseRecoveryPointArnT = Aws::String>
  void SetScanBaseRecoveryPointArn(ScanBaseRecoveryPointArnT&& value) {
    m_scanBaseRecoveryPointArnHasBeenSet = true;
    m_scanBaseRecoveryPointArn = std::forward<ScanBaseRecoveryPointArnT>(value);
  }
  template <typename ScanBaseRecoveryPointArnT = Aws::String>
  ScanJob& WithScanBaseRecoveryPointArn(ScanBaseRecoveryPointArnT&& value) {
    SetScanBaseRecoveryPointArn(std::forward<ScanBaseRecoveryPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scan ID generated by the malware scanner for the corresponding scan
   * job.</p>
   */
  inline const Aws::String& GetScanId() const { return m_scanId; }
  inline bool ScanIdHasBeenSet() const { return m_scanIdHasBeenSet; }
  template <typename ScanIdT = Aws::String>
  void SetScanId(ScanIdT&& value) {
    m_scanIdHasBeenSet = true;
    m_scanId = std::forward<ScanIdT>(value);
  }
  template <typename ScanIdT = Aws::String>
  ScanJob& WithScanId(ScanIdT&& value) {
    SetScanId(std::forward<ScanIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier that identifies the scan job request to Backup.</p>
   */
  inline const Aws::String& GetScanJobId() const { return m_scanJobId; }
  inline bool ScanJobIdHasBeenSet() const { return m_scanJobIdHasBeenSet; }
  template <typename ScanJobIdT = Aws::String>
  void SetScanJobId(ScanJobIdT&& value) {
    m_scanJobIdHasBeenSet = true;
    m_scanJobId = std::forward<ScanJobIdT>(value);
  }
  template <typename ScanJobIdT = Aws::String>
  ScanJob& WithScanJobId(ScanJobIdT&& value) {
    SetScanJobId(std::forward<ScanJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the scan type use for the scan job.</p> <p>Includes:</p> <p>
   * <code>FULL_SCAN</code> will scan the entire data lineage within the backup.</p>
   * <p> <code>INCREMENTAL_SCAN</code> will scan the data difference between the
   * target recovery point and base recovery point ARN.</p>
   */
  inline ScanMode GetScanMode() const { return m_scanMode; }
  inline bool ScanModeHasBeenSet() const { return m_scanModeHasBeenSet; }
  inline void SetScanMode(ScanMode value) {
    m_scanModeHasBeenSet = true;
    m_scanMode = value;
  }
  inline ScanJob& WithScanMode(ScanMode value) {
    SetScanMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains the scan results information, including the status of threats found
   * during scanning.</p>
   */
  inline const ScanResultInfo& GetScanResult() const { return m_scanResult; }
  inline bool ScanResultHasBeenSet() const { return m_scanResultHasBeenSet; }
  template <typename ScanResultT = ScanResultInfo>
  void SetScanResult(ScanResultT&& value) {
    m_scanResultHasBeenSet = true;
    m_scanResult = std::forward<ScanResultT>(value);
  }
  template <typename ScanResultT = ScanResultInfo>
  ScanJob& WithScanResult(ScanResultT&& value) {
    SetScanResult(std::forward<ScanResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the scanner IAM role ARN used for the scan job.</p>
   */
  inline const Aws::String& GetScannerRoleArn() const { return m_scannerRoleArn; }
  inline bool ScannerRoleArnHasBeenSet() const { return m_scannerRoleArnHasBeenSet; }
  template <typename ScannerRoleArnT = Aws::String>
  void SetScannerRoleArn(ScannerRoleArnT&& value) {
    m_scannerRoleArnHasBeenSet = true;
    m_scannerRoleArn = std::forward<ScannerRoleArnT>(value);
  }
  template <typename ScannerRoleArnT = Aws::String>
  ScanJob& WithScannerRoleArn(ScannerRoleArnT&& value) {
    SetScannerRoleArn(std::forward<ScannerRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the scan job.</p> <p>Valid values: <code>CREATED</code>
   * | <code>RUNNING</code> | <code>COMPLETED</code> |
   * <code>COMPLETED_WITH_ISSUES</code> | <code>FAILED</code> |
   * <code>CANCELED</code>.</p>
   */
  inline ScanState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ScanState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ScanJob& WithState(ScanState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed message explaining the status of the scan job.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  ScanJob& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;
  bool m_accountIdHasBeenSet = false;

  Aws::String m_backupVaultArn;
  bool m_backupVaultArnHasBeenSet = false;

  Aws::String m_backupVaultName;
  bool m_backupVaultNameHasBeenSet = false;

  Aws::Utils::DateTime m_completionDate{};
  bool m_completionDateHasBeenSet = false;

  ScanJobCreator m_createdBy;
  bool m_createdByHasBeenSet = false;

  Aws::Utils::DateTime m_creationDate{};
  bool m_creationDateHasBeenSet = false;

  Aws::String m_iamRoleArn;
  bool m_iamRoleArnHasBeenSet = false;

  MalwareScanner m_malwareScanner{MalwareScanner::NOT_SET};
  bool m_malwareScannerHasBeenSet = false;

  Aws::String m_recoveryPointArn;
  bool m_recoveryPointArnHasBeenSet = false;

  Aws::String m_resourceArn;
  bool m_resourceArnHasBeenSet = false;

  Aws::String m_resourceName;
  bool m_resourceNameHasBeenSet = false;

  ScanResourceType m_resourceType{ScanResourceType::NOT_SET};
  bool m_resourceTypeHasBeenSet = false;

  Aws::String m_scanBaseRecoveryPointArn;
  bool m_scanBaseRecoveryPointArnHasBeenSet = false;

  Aws::String m_scanId;
  bool m_scanIdHasBeenSet = false;

  Aws::String m_scanJobId;
  bool m_scanJobIdHasBeenSet = false;

  ScanMode m_scanMode{ScanMode::NOT_SET};
  bool m_scanModeHasBeenSet = false;

  ScanResultInfo m_scanResult;
  bool m_scanResultHasBeenSet = false;

  Aws::String m_scannerRoleArn;
  bool m_scannerRoleArnHasBeenSet = false;

  ScanState m_state{ScanState::NOT_SET};
  bool m_stateHasBeenSet = false;

  Aws::String m_statusMessage;
  bool m_statusMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
