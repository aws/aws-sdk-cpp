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
 * <p>Contains information about the backup plan and rule that Backup used to
 * initiate the recovery point backup.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RecoveryPointCreator">AWS
 * API Reference</a></p>
 */
class RecoveryPointCreator {
 public:
  AWS_BACKUP_API RecoveryPointCreator() = default;
  AWS_BACKUP_API RecoveryPointCreator(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API RecoveryPointCreator& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Uniquely identifies a backup plan.</p>
   */
  inline const Aws::String& GetBackupPlanId() const { return m_backupPlanId; }
  inline bool BackupPlanIdHasBeenSet() const { return m_backupPlanIdHasBeenSet; }
  template <typename BackupPlanIdT = Aws::String>
  void SetBackupPlanId(BackupPlanIdT&& value) {
    m_backupPlanIdHasBeenSet = true;
    m_backupPlanId = std::forward<BackupPlanIdT>(value);
  }
  template <typename BackupPlanIdT = Aws::String>
  RecoveryPointCreator& WithBackupPlanId(BackupPlanIdT&& value) {
    SetBackupPlanId(std::forward<BackupPlanIdT>(value));
    return *this;
  }
  ///@}

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
  RecoveryPointCreator& WithBackupPlanArn(BackupPlanArnT&& value) {
    SetBackupPlanArn(std::forward<BackupPlanArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the backup plan that created this recovery point. This provides
   * human-readable context about which backup plan was responsible for the backup
   * job.</p>
   */
  inline const Aws::String& GetBackupPlanName() const { return m_backupPlanName; }
  inline bool BackupPlanNameHasBeenSet() const { return m_backupPlanNameHasBeenSet; }
  template <typename BackupPlanNameT = Aws::String>
  void SetBackupPlanName(BackupPlanNameT&& value) {
    m_backupPlanNameHasBeenSet = true;
    m_backupPlanName = std::forward<BackupPlanNameT>(value);
  }
  template <typename BackupPlanNameT = Aws::String>
  RecoveryPointCreator& WithBackupPlanName(BackupPlanNameT&& value) {
    SetBackupPlanName(std::forward<BackupPlanNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Version IDs are unique, randomly generated, Unicode, UTF-8 encoded strings
   * that are at most 1,024 bytes long. They cannot be edited.</p>
   */
  inline const Aws::String& GetBackupPlanVersion() const { return m_backupPlanVersion; }
  inline bool BackupPlanVersionHasBeenSet() const { return m_backupPlanVersionHasBeenSet; }
  template <typename BackupPlanVersionT = Aws::String>
  void SetBackupPlanVersion(BackupPlanVersionT&& value) {
    m_backupPlanVersionHasBeenSet = true;
    m_backupPlanVersion = std::forward<BackupPlanVersionT>(value);
  }
  template <typename BackupPlanVersionT = Aws::String>
  RecoveryPointCreator& WithBackupPlanVersion(BackupPlanVersionT&& value) {
    SetBackupPlanVersion(std::forward<BackupPlanVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Uniquely identifies a rule used to schedule the backup of a selection of
   * resources.</p>
   */
  inline const Aws::String& GetBackupRuleId() const { return m_backupRuleId; }
  inline bool BackupRuleIdHasBeenSet() const { return m_backupRuleIdHasBeenSet; }
  template <typename BackupRuleIdT = Aws::String>
  void SetBackupRuleId(BackupRuleIdT&& value) {
    m_backupRuleIdHasBeenSet = true;
    m_backupRuleId = std::forward<BackupRuleIdT>(value);
  }
  template <typename BackupRuleIdT = Aws::String>
  RecoveryPointCreator& WithBackupRuleId(BackupRuleIdT&& value) {
    SetBackupRuleId(std::forward<BackupRuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the backup rule within the backup plan that created this recovery
   * point. This helps identify which specific rule triggered the backup job.</p>
   */
  inline const Aws::String& GetBackupRuleName() const { return m_backupRuleName; }
  inline bool BackupRuleNameHasBeenSet() const { return m_backupRuleNameHasBeenSet; }
  template <typename BackupRuleNameT = Aws::String>
  void SetBackupRuleName(BackupRuleNameT&& value) {
    m_backupRuleNameHasBeenSet = true;
    m_backupRuleName = std::forward<BackupRuleNameT>(value);
  }
  template <typename BackupRuleNameT = Aws::String>
  RecoveryPointCreator& WithBackupRuleName(BackupRuleNameT&& value) {
    SetBackupRuleName(std::forward<BackupRuleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cron expression that defines the schedule for the backup rule. This shows
   * the frequency and timing of when backups are automatically triggered.</p>
   */
  inline const Aws::String& GetBackupRuleCron() const { return m_backupRuleCron; }
  inline bool BackupRuleCronHasBeenSet() const { return m_backupRuleCronHasBeenSet; }
  template <typename BackupRuleCronT = Aws::String>
  void SetBackupRuleCron(BackupRuleCronT&& value) {
    m_backupRuleCronHasBeenSet = true;
    m_backupRuleCron = std::forward<BackupRuleCronT>(value);
  }
  template <typename BackupRuleCronT = Aws::String>
  RecoveryPointCreator& WithBackupRuleCron(BackupRuleCronT&& value) {
    SetBackupRuleCron(std::forward<BackupRuleCronT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timezone used for the backup rule schedule. This provides context for
   * when backups are scheduled to run in the specified timezone.</p>
   */
  inline const Aws::String& GetBackupRuleTimezone() const { return m_backupRuleTimezone; }
  inline bool BackupRuleTimezoneHasBeenSet() const { return m_backupRuleTimezoneHasBeenSet; }
  template <typename BackupRuleTimezoneT = Aws::String>
  void SetBackupRuleTimezone(BackupRuleTimezoneT&& value) {
    m_backupRuleTimezoneHasBeenSet = true;
    m_backupRuleTimezone = std::forward<BackupRuleTimezoneT>(value);
  }
  template <typename BackupRuleTimezoneT = Aws::String>
  RecoveryPointCreator& WithBackupRuleTimezone(BackupRuleTimezoneT&& value) {
    SetBackupRuleTimezone(std::forward<BackupRuleTimezoneT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_backupPlanId;

  Aws::String m_backupPlanArn;

  Aws::String m_backupPlanName;

  Aws::String m_backupPlanVersion;

  Aws::String m_backupRuleId;

  Aws::String m_backupRuleName;

  Aws::String m_backupRuleCron;

  Aws::String m_backupRuleTimezone;
  bool m_backupPlanIdHasBeenSet = false;
  bool m_backupPlanArnHasBeenSet = false;
  bool m_backupPlanNameHasBeenSet = false;
  bool m_backupPlanVersionHasBeenSet = false;
  bool m_backupRuleIdHasBeenSet = false;
  bool m_backupRuleNameHasBeenSet = false;
  bool m_backupRuleCronHasBeenSet = false;
  bool m_backupRuleTimezoneHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
