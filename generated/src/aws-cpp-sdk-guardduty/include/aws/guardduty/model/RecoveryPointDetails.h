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
 * <p>Contains details about the backup recovery point.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/RecoveryPointDetails">AWS
 * API Reference</a></p>
 */
class RecoveryPointDetails {
 public:
  AWS_GUARDDUTY_API RecoveryPointDetails() = default;
  AWS_GUARDDUTY_API RecoveryPointDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API RecoveryPointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the recovery point.</p>
   */
  inline const Aws::String& GetRecoveryPointArn() const { return m_recoveryPointArn; }
  inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }
  template <typename RecoveryPointArnT = Aws::String>
  void SetRecoveryPointArn(RecoveryPointArnT&& value) {
    m_recoveryPointArnHasBeenSet = true;
    m_recoveryPointArn = std::forward<RecoveryPointArnT>(value);
  }
  template <typename RecoveryPointArnT = Aws::String>
  RecoveryPointDetails& WithRecoveryPointArn(RecoveryPointArnT&& value) {
    SetRecoveryPointArn(std::forward<RecoveryPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the backup vault containing the recovery point.</p>
   */
  inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
  inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
  template <typename BackupVaultNameT = Aws::String>
  void SetBackupVaultName(BackupVaultNameT&& value) {
    m_backupVaultNameHasBeenSet = true;
    m_backupVaultName = std::forward<BackupVaultNameT>(value);
  }
  template <typename BackupVaultNameT = Aws::String>
  RecoveryPointDetails& WithBackupVaultName(BackupVaultNameT&& value) {
    SetBackupVaultName(std::forward<BackupVaultNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recoveryPointArn;
  bool m_recoveryPointArnHasBeenSet = false;

  Aws::String m_backupVaultName;
  bool m_backupVaultNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
