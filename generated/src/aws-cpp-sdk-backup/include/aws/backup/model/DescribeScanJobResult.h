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
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Backup {
namespace Model {
class DescribeScanJobResult {
 public:
  AWS_BACKUP_API DescribeScanJobResult() = default;
  AWS_BACKUP_API DescribeScanJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BACKUP_API DescribeScanJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Returns the account ID that owns the scan job.</p> <p>Pattern:
   * <code>^[0-9]{12}$</code> </p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  DescribeScanJobResult& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
   * example,
   * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>
   * </p>
   */
  inline const Aws::String& GetBackupVaultArn() const { return m_backupVaultArn; }
  template <typename BackupVaultArnT = Aws::String>
  void SetBackupVaultArn(BackupVaultArnT&& value) {
    m_backupVaultArnHasBeenSet = true;
    m_backupVaultArn = std::forward<BackupVaultArnT>(value);
  }
  template <typename BackupVaultArnT = Aws::String>
  DescribeScanJobResult& WithBackupVaultArn(BackupVaultArnT&& value) {
    SetBackupVaultArn(std::forward<BackupVaultArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of a logical container where backups are stored. Backup vaults are
   * identified by names that are unique to the account used to create them and the
   * Amazon Web Services Region where they are created.</p> <p>Pattern:
   * <code>^[a-zA-Z0-9\-\_\.]{2,50}$</code> </p>
   */
  inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
  template <typename BackupVaultNameT = Aws::String>
  void SetBackupVaultName(BackupVaultNameT&& value) {
    m_backupVaultNameHasBeenSet = true;
    m_backupVaultName = std::forward<BackupVaultNameT>(value);
  }
  template <typename BackupVaultNameT = Aws::String>
  DescribeScanJobResult& WithBackupVaultName(BackupVaultNameT&& value) {
    SetBackupVaultName(std::forward<BackupVaultNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that a backup index finished creation, in Unix format and
   * Coordinated Universal Time (UTC). The value of <code>CompletionDate</code> is
   * accurate to milliseconds. For example, the value 1516925490.087 represents
   * Friday, January 26, 2018 12:11:30.087 AM.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletionDate() const { return m_completionDate; }
  template <typename CompletionDateT = Aws::Utils::DateTime>
  void SetCompletionDate(CompletionDateT&& value) {
    m_completionDateHasBeenSet = true;
    m_completionDate = std::forward<CompletionDateT>(value);
  }
  template <typename CompletionDateT = Aws::Utils::DateTime>
  DescribeScanJobResult& WithCompletionDate(CompletionDateT&& value) {
    SetCompletionDate(std::forward<CompletionDateT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ScanJobCreator& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = ScanJobCreator>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = ScanJobCreator>
  DescribeScanJobResult& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that a backup index finished creation, in Unix format and
   * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
   * accurate to milliseconds. For example, the value 1516925490.087 represents
   * Friday, January 26, 2018 12:11:30.087 AM.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
  template <typename CreationDateT = Aws::Utils::DateTime>
  void SetCreationDate(CreationDateT&& value) {
    m_creationDateHasBeenSet = true;
    m_creationDate = std::forward<CreationDateT>(value);
  }
  template <typename CreationDateT = Aws::Utils::DateTime>
  DescribeScanJobResult& WithCreationDate(CreationDateT&& value) {
    SetCreationDate(std::forward<CreationDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
   * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
   */
  inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
  template <typename IamRoleArnT = Aws::String>
  void SetIamRoleArn(IamRoleArnT&& value) {
    m_iamRoleArnHasBeenSet = true;
    m_iamRoleArn = std::forward<IamRoleArnT>(value);
  }
  template <typename IamRoleArnT = Aws::String>
  DescribeScanJobResult& WithIamRoleArn(IamRoleArnT&& value) {
    SetIamRoleArn(std::forward<IamRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scanning engine used for the corresponding scan job. Currently only
   * <code>GUARDUTY</code> is supported.</p>
   */
  inline MalwareScanner GetMalwareScanner() const { return m_malwareScanner; }
  inline void SetMalwareScanner(MalwareScanner value) {
    m_malwareScannerHasBeenSet = true;
    m_malwareScanner = value;
  }
  inline DescribeScanJobResult& WithMalwareScanner(MalwareScanner value) {
    SetMalwareScanner(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An ARN that uniquely identifies the target recovery point for scanning.; for
   * example,
   * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
   */
  inline const Aws::String& GetRecoveryPointArn() const { return m_recoveryPointArn; }
  template <typename RecoveryPointArnT = Aws::String>
  void SetRecoveryPointArn(RecoveryPointArnT&& value) {
    m_recoveryPointArnHasBeenSet = true;
    m_recoveryPointArn = std::forward<RecoveryPointArnT>(value);
  }
  template <typename RecoveryPointArnT = Aws::String>
  DescribeScanJobResult& WithRecoveryPointArn(RecoveryPointArnT&& value) {
    SetRecoveryPointArn(std::forward<RecoveryPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An ARN that uniquely identifies the source resource of the corresponding
   * recovery point ARN.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  DescribeScanJobResult& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The non-unique name of the resource that belongs to the specified backup.</p>
   */
  inline const Aws::String& GetResourceName() const { return m_resourceName; }
  template <typename ResourceNameT = Aws::String>
  void SetResourceName(ResourceNameT&& value) {
    m_resourceNameHasBeenSet = true;
    m_resourceName = std::forward<ResourceNameT>(value);
  }
  template <typename ResourceNameT = Aws::String>
  DescribeScanJobResult& WithResourceName(ResourceNameT&& value) {
    SetResourceName(std::forward<ResourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of Amazon Web Services Resource to be backed up; for example, an
   * Amazon Elastic Block Store (Amazon EBS) volume.</p> <p>Pattern:
   * <code>^[a-zA-Z0-9\-\_\.]{1,50}$</code> </p>
   */
  inline ScanResourceType GetResourceType() const { return m_resourceType; }
  inline void SetResourceType(ScanResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline DescribeScanJobResult& WithResourceType(ScanResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An ARN that uniquely identifies the base recovery point for scanning. This
   * field will only be populated when an incremental scan job has taken place.</p>
   */
  inline const Aws::String& GetScanBaseRecoveryPointArn() const { return m_scanBaseRecoveryPointArn; }
  template <typename ScanBaseRecoveryPointArnT = Aws::String>
  void SetScanBaseRecoveryPointArn(ScanBaseRecoveryPointArnT&& value) {
    m_scanBaseRecoveryPointArnHasBeenSet = true;
    m_scanBaseRecoveryPointArn = std::forward<ScanBaseRecoveryPointArnT>(value);
  }
  template <typename ScanBaseRecoveryPointArnT = Aws::String>
  DescribeScanJobResult& WithScanBaseRecoveryPointArn(ScanBaseRecoveryPointArnT&& value) {
    SetScanBaseRecoveryPointArn(std::forward<ScanBaseRecoveryPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scan ID generated by Amazon GuardDuty for the corresponding Scan Job ID
   * request from Backup.</p>
   */
  inline const Aws::String& GetScanId() const { return m_scanId; }
  template <typename ScanIdT = Aws::String>
  void SetScanId(ScanIdT&& value) {
    m_scanIdHasBeenSet = true;
    m_scanId = std::forward<ScanIdT>(value);
  }
  template <typename ScanIdT = Aws::String>
  DescribeScanJobResult& WithScanId(ScanIdT&& value) {
    SetScanId(std::forward<ScanIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scan job ID that uniquely identified the request to Backup.</p>
   */
  inline const Aws::String& GetScanJobId() const { return m_scanJobId; }
  template <typename ScanJobIdT = Aws::String>
  void SetScanJobId(ScanJobIdT&& value) {
    m_scanJobIdHasBeenSet = true;
    m_scanJobId = std::forward<ScanJobIdT>(value);
  }
  template <typename ScanJobIdT = Aws::String>
  DescribeScanJobResult& WithScanJobId(ScanJobIdT&& value) {
    SetScanJobId(std::forward<ScanJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the scan type used for the scan job.</p>
   */
  inline ScanMode GetScanMode() const { return m_scanMode; }
  inline void SetScanMode(ScanMode value) {
    m_scanModeHasBeenSet = true;
    m_scanMode = value;
  }
  inline DescribeScanJobResult& WithScanMode(ScanMode value) {
    SetScanMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Contains the <code>ScanResultsStatus</code> for the scanning job and returns
   * <code>THREATS_FOUND</code> or <code>NO_THREATS_FOUND</code> for completed
   * jobs.</p>
   */
  inline const ScanResultInfo& GetScanResult() const { return m_scanResult; }
  template <typename ScanResultT = ScanResultInfo>
  void SetScanResult(ScanResultT&& value) {
    m_scanResultHasBeenSet = true;
    m_scanResult = std::forward<ScanResultT>(value);
  }
  template <typename ScanResultT = ScanResultInfo>
  DescribeScanJobResult& WithScanResult(ScanResultT&& value) {
    SetScanResult(std::forward<ScanResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the scanner IAM role ARN used to for the scan job.</p>
   */
  inline const Aws::String& GetScannerRoleArn() const { return m_scannerRoleArn; }
  template <typename ScannerRoleArnT = Aws::String>
  void SetScannerRoleArn(ScannerRoleArnT&& value) {
    m_scannerRoleArnHasBeenSet = true;
    m_scannerRoleArn = std::forward<ScannerRoleArnT>(value);
  }
  template <typename ScannerRoleArnT = Aws::String>
  DescribeScanJobResult& WithScannerRoleArn(ScannerRoleArnT&& value) {
    SetScannerRoleArn(std::forward<ScannerRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of a scan job.</p>
   */
  inline ScanState GetState() const { return m_state; }
  inline void SetState(ScanState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline DescribeScanJobResult& WithState(ScanState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed message explaining the status of the job to back up a
   * resource.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  DescribeScanJobResult& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeScanJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
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

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
