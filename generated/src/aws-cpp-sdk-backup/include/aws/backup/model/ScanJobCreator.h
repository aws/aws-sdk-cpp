/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
 * <p>Contains identifying information about the creation of a scan job, including
 * the backup plan and rule that initiated the scan.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ScanJobCreator">AWS
 * API Reference</a></p>
 */
class ScanJobCreator {
 public:
  AWS_BACKUP_API ScanJobCreator() = default;
  AWS_BACKUP_API ScanJobCreator(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API ScanJobCreator& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
   * example,
   * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
   */
  inline const Aws::String& GetBackupPlanArn() const { return m_backupPlanArn; }
  inline bool BackupPlanArnHasBeenSet() const { return m_backupPlanArnHasBeenSet; }
  template <typename BackupPlanArnT = Aws::String>
  void SetBackupPlanArn(BackupPlanArnT&& value) {
    m_backupPlanArnHasBeenSet = true;
    m_backupPlanArn = std::forward<BackupPlanArnT>(value);
  }
  template <typename BackupPlanArnT = Aws::String>
  ScanJobCreator& WithBackupPlanArn(BackupPlanArnT&& value) {
    SetBackupPlanArn(std::forward<BackupPlanArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the backup plan.</p>
   */
  inline const Aws::String& GetBackupPlanId() const { return m_backupPlanId; }
  inline bool BackupPlanIdHasBeenSet() const { return m_backupPlanIdHasBeenSet; }
  template <typename BackupPlanIdT = Aws::String>
  void SetBackupPlanId(BackupPlanIdT&& value) {
    m_backupPlanIdHasBeenSet = true;
    m_backupPlanId = std::forward<BackupPlanIdT>(value);
  }
  template <typename BackupPlanIdT = Aws::String>
  ScanJobCreator& WithBackupPlanId(BackupPlanIdT&& value) {
    SetBackupPlanId(std::forward<BackupPlanIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
   * 1,024 bytes long. Version IDs cannot be edited.</p>
   */
  inline const Aws::String& GetBackupPlanVersion() const { return m_backupPlanVersion; }
  inline bool BackupPlanVersionHasBeenSet() const { return m_backupPlanVersionHasBeenSet; }
  template <typename BackupPlanVersionT = Aws::String>
  void SetBackupPlanVersion(BackupPlanVersionT&& value) {
    m_backupPlanVersionHasBeenSet = true;
    m_backupPlanVersion = std::forward<BackupPlanVersionT>(value);
  }
  template <typename BackupPlanVersionT = Aws::String>
  ScanJobCreator& WithBackupPlanVersion(BackupPlanVersionT&& value) {
    SetBackupPlanVersion(std::forward<BackupPlanVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Uniquely identifies the backup rule that initiated the scan job.</p>
   */
  inline const Aws::String& GetBackupRuleId() const { return m_backupRuleId; }
  inline bool BackupRuleIdHasBeenSet() const { return m_backupRuleIdHasBeenSet; }
  template <typename BackupRuleIdT = Aws::String>
  void SetBackupRuleId(BackupRuleIdT&& value) {
    m_backupRuleIdHasBeenSet = true;
    m_backupRuleId = std::forward<BackupRuleIdT>(value);
  }
  template <typename BackupRuleIdT = Aws::String>
  ScanJobCreator& WithBackupRuleId(BackupRuleIdT&& value) {
    SetBackupRuleId(std::forward<BackupRuleIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_backupPlanArn;

  Aws::String m_backupPlanId;

  Aws::String m_backupPlanVersion;

  Aws::String m_backupRuleId;
  bool m_backupPlanArnHasBeenSet = false;
  bool m_backupPlanIdHasBeenSet = false;
  bool m_backupPlanVersionHasBeenSet = false;
  bool m_backupRuleIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
