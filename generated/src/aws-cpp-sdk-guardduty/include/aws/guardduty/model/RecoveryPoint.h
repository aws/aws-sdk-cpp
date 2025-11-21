/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
 * <p>Contains information about the recovery point configuration for scanning
 * backup data from Amazon Web Services Backup.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/RecoveryPoint">AWS
 * API Reference</a></p>
 */
class RecoveryPoint {
 public:
  AWS_GUARDDUTY_API RecoveryPoint() = default;
  AWS_GUARDDUTY_API RecoveryPoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API RecoveryPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the Amazon Web Services Backup vault that contains the name of
   * the recovery point to be scanned.</p>
   */
  inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
  inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
  template <typename BackupVaultNameT = Aws::String>
  void SetBackupVaultName(BackupVaultNameT&& value) {
    m_backupVaultNameHasBeenSet = true;
    m_backupVaultName = std::forward<BackupVaultNameT>(value);
  }
  template <typename BackupVaultNameT = Aws::String>
  RecoveryPoint& WithBackupVaultName(BackupVaultNameT&& value) {
    SetBackupVaultName(std::forward<BackupVaultNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_backupVaultName;
  bool m_backupVaultNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
