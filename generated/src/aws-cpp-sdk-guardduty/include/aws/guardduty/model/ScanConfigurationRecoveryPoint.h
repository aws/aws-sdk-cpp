/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ScanConfigurationContinuousScanDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains information about the recovery point configuration used in the
 * scan.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ScanConfigurationRecoveryPoint">AWS
 * API Reference</a></p>
 */
class ScanConfigurationRecoveryPoint {
 public:
  AWS_GUARDDUTY_API ScanConfigurationRecoveryPoint() = default;
  AWS_GUARDDUTY_API ScanConfigurationRecoveryPoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API ScanConfigurationRecoveryPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the Amazon Web Services Backup vault that contains the recovery
   * point for the scanned.</p>
   */
  inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
  inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
  template <typename BackupVaultNameT = Aws::String>
  void SetBackupVaultName(BackupVaultNameT&& value) {
    m_backupVaultNameHasBeenSet = true;
    m_backupVaultName = std::forward<BackupVaultNameT>(value);
  }
  template <typename BackupVaultNameT = Aws::String>
  ScanConfigurationRecoveryPoint& WithBackupVaultName(BackupVaultNameT&& value) {
    SetBackupVaultName(std::forward<BackupVaultNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time range within the continuous backup in Amazon Web Services Backup
   * that was scanned for a point-in-time recovery resource.</p>
   */
  inline const ScanConfigurationContinuousScanDetails& GetContinuousScanDetails() const { return m_continuousScanDetails; }
  inline bool ContinuousScanDetailsHasBeenSet() const { return m_continuousScanDetailsHasBeenSet; }
  template <typename ContinuousScanDetailsT = ScanConfigurationContinuousScanDetails>
  void SetContinuousScanDetails(ContinuousScanDetailsT&& value) {
    m_continuousScanDetailsHasBeenSet = true;
    m_continuousScanDetails = std::forward<ContinuousScanDetailsT>(value);
  }
  template <typename ContinuousScanDetailsT = ScanConfigurationContinuousScanDetails>
  ScanConfigurationRecoveryPoint& WithContinuousScanDetails(ContinuousScanDetailsT&& value) {
    SetContinuousScanDetails(std::forward<ContinuousScanDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_backupVaultName;

  ScanConfigurationContinuousScanDetails m_continuousScanDetails;
  bool m_backupVaultNameHasBeenSet = false;
  bool m_continuousScanDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
