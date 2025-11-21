/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/BackupRequest.h>
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/MalwareScanner.h>
#include <aws/backup/model/ScanMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Backup {
namespace Model {

/**
 */
class StartScanJobRequest : public BackupRequest {
 public:
  AWS_BACKUP_API StartScanJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartScanJob"; }

  AWS_BACKUP_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of a logical container where backups are stored. Backup vaults are
   * identified by names that are unique to the account used to create them and the
   * Amazon Web Services Region where they are created.</p> <p>Pattern:
   * <code>^[a-zA-Z0-9\-\_]{2,50}$</code> </p>
   */
  inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
  inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
  template <typename BackupVaultNameT = Aws::String>
  void SetBackupVaultName(BackupVaultNameT&& value) {
    m_backupVaultNameHasBeenSet = true;
    m_backupVaultName = std::forward<BackupVaultNameT>(value);
  }
  template <typename BackupVaultNameT = Aws::String>
  StartScanJobRequest& WithBackupVaultName(BackupVaultNameT&& value) {
    SetBackupVaultName(std::forward<BackupVaultNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the IAM role ARN used to create the target recovery point; for
   * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
   */
  inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
  inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
  template <typename IamRoleArnT = Aws::String>
  void SetIamRoleArn(IamRoleArnT&& value) {
    m_iamRoleArnHasBeenSet = true;
    m_iamRoleArn = std::forward<IamRoleArnT>(value);
  }
  template <typename IamRoleArnT = Aws::String>
  StartScanJobRequest& WithIamRoleArn(IamRoleArnT&& value) {
    SetIamRoleArn(std::forward<IamRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A customer-chosen string that you can use to distinguish between otherwise
   * identical calls to <code>StartScanJob</code>. Retrying a successful request with
   * the same idempotency token results in a success message with no action
   * taken.</p>
   */
  inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
  inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
  template <typename IdempotencyTokenT = Aws::String>
  void SetIdempotencyToken(IdempotencyTokenT&& value) {
    m_idempotencyTokenHasBeenSet = true;
    m_idempotencyToken = std::forward<IdempotencyTokenT>(value);
  }
  template <typename IdempotencyTokenT = Aws::String>
  StartScanJobRequest& WithIdempotencyToken(IdempotencyTokenT&& value) {
    SetIdempotencyToken(std::forward<IdempotencyTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the malware scanner used during the scan job. Currently only
   * supports <code>GUARDDUTY</code>.</p>
   */
  inline MalwareScanner GetMalwareScanner() const { return m_malwareScanner; }
  inline bool MalwareScannerHasBeenSet() const { return m_malwareScannerHasBeenSet; }
  inline void SetMalwareScanner(MalwareScanner value) {
    m_malwareScannerHasBeenSet = true;
    m_malwareScanner = value;
  }
  inline StartScanJobRequest& WithMalwareScanner(MalwareScanner value) {
    SetMalwareScanner(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point. This
   * is your target recovery point for a full scan. If you are running an incremental
   * scan, this will be your a recovery point which has been created after your base
   * recovery point selection.</p>
   */
  inline const Aws::String& GetRecoveryPointArn() const { return m_recoveryPointArn; }
  inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }
  template <typename RecoveryPointArnT = Aws::String>
  void SetRecoveryPointArn(RecoveryPointArnT&& value) {
    m_recoveryPointArnHasBeenSet = true;
    m_recoveryPointArn = std::forward<RecoveryPointArnT>(value);
  }
  template <typename RecoveryPointArnT = Aws::String>
  StartScanJobRequest& WithRecoveryPointArn(RecoveryPointArnT&& value) {
    SetRecoveryPointArn(std::forward<RecoveryPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An ARN that uniquely identifies the base recovery point to be used for
   * incremental scanning.</p>
   */
  inline const Aws::String& GetScanBaseRecoveryPointArn() const { return m_scanBaseRecoveryPointArn; }
  inline bool ScanBaseRecoveryPointArnHasBeenSet() const { return m_scanBaseRecoveryPointArnHasBeenSet; }
  template <typename ScanBaseRecoveryPointArnT = Aws::String>
  void SetScanBaseRecoveryPointArn(ScanBaseRecoveryPointArnT&& value) {
    m_scanBaseRecoveryPointArnHasBeenSet = true;
    m_scanBaseRecoveryPointArn = std::forward<ScanBaseRecoveryPointArnT>(value);
  }
  template <typename ScanBaseRecoveryPointArnT = Aws::String>
  StartScanJobRequest& WithScanBaseRecoveryPointArn(ScanBaseRecoveryPointArnT&& value) {
    SetScanBaseRecoveryPointArn(std::forward<ScanBaseRecoveryPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the scan type use for the scan job.</p> <p>Includes:</p> <ul> <li>
   * <p> <code>FULL_SCAN</code> will scan the entire data lineage within the
   * backup.</p> </li> <li> <p> <code>INCREMENTAL_SCAN</code> will scan the data
   * difference between the target recovery point and base recovery point ARN.</p>
   * </li> </ul>
   */
  inline ScanMode GetScanMode() const { return m_scanMode; }
  inline bool ScanModeHasBeenSet() const { return m_scanModeHasBeenSet; }
  inline void SetScanMode(ScanMode value) {
    m_scanModeHasBeenSet = true;
    m_scanMode = value;
  }
  inline StartScanJobRequest& WithScanMode(ScanMode value) {
    SetScanMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specified the IAM scanner role ARN.</p>
   */
  inline const Aws::String& GetScannerRoleArn() const { return m_scannerRoleArn; }
  inline bool ScannerRoleArnHasBeenSet() const { return m_scannerRoleArnHasBeenSet; }
  template <typename ScannerRoleArnT = Aws::String>
  void SetScannerRoleArn(ScannerRoleArnT&& value) {
    m_scannerRoleArnHasBeenSet = true;
    m_scannerRoleArn = std::forward<ScannerRoleArnT>(value);
  }
  template <typename ScannerRoleArnT = Aws::String>
  StartScanJobRequest& WithScannerRoleArn(ScannerRoleArnT&& value) {
    SetScannerRoleArn(std::forward<ScannerRoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_backupVaultName;
  bool m_backupVaultNameHasBeenSet = false;

  Aws::String m_iamRoleArn;
  bool m_iamRoleArnHasBeenSet = false;

  Aws::String m_idempotencyToken;
  bool m_idempotencyTokenHasBeenSet = false;

  MalwareScanner m_malwareScanner{MalwareScanner::NOT_SET};
  bool m_malwareScannerHasBeenSet = false;

  Aws::String m_recoveryPointArn;
  bool m_recoveryPointArnHasBeenSet = false;

  Aws::String m_scanBaseRecoveryPointArn;
  bool m_scanBaseRecoveryPointArnHasBeenSet = false;

  ScanMode m_scanMode{ScanMode::NOT_SET};
  bool m_scanModeHasBeenSet = false;

  Aws::String m_scannerRoleArn;
  bool m_scannerRoleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
