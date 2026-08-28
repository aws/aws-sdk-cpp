/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/BackupStatus.h>
#include <aws/healthlake/model/BackupType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {

/**
 * <p>The backup configuration for the data store.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/BackupConfiguration">AWS
 * API Reference</a></p>
 */
class BackupConfiguration {
 public:
  AWS_HEALTHLAKE_API BackupConfiguration() = default;
  AWS_HEALTHLAKE_API BackupConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API BackupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The backup status of the data store.</p>
   */
  inline BackupStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(BackupStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline BackupConfiguration& WithStatus(BackupStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of backup.</p>
   */
  inline BackupType GetBackupType() const { return m_backupType; }
  inline bool BackupTypeHasBeenSet() const { return m_backupTypeHasBeenSet; }
  inline void SetBackupType(BackupType value) {
    m_backupTypeHasBeenSet = true;
    m_backupType = value;
  }
  inline BackupConfiguration& WithBackupType(BackupType value) {
    SetBackupType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of days backup data is retained.</p>
   */
  inline int GetRetentionPeriodInDays() const { return m_retentionPeriodInDays; }
  inline bool RetentionPeriodInDaysHasBeenSet() const { return m_retentionPeriodInDaysHasBeenSet; }
  inline void SetRetentionPeriodInDays(int value) {
    m_retentionPeriodInDaysHasBeenSet = true;
    m_retentionPeriodInDays = value;
  }
  inline BackupConfiguration& WithRetentionPeriodInDays(int value) {
    SetRetentionPeriodInDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether tags are included in backups.</p>
   */
  inline bool GetBackupTagsEnabled() const { return m_backupTagsEnabled; }
  inline bool BackupTagsEnabledHasBeenSet() const { return m_backupTagsEnabledHasBeenSet; }
  inline void SetBackupTagsEnabled(bool value) {
    m_backupTagsEnabledHasBeenSet = true;
    m_backupTagsEnabled = value;
  }
  inline BackupConfiguration& WithBackupTagsEnabled(bool value) {
    SetBackupTagsEnabled(value);
    return *this;
  }
  ///@}
 private:
  BackupStatus m_status{BackupStatus::NOT_SET};

  BackupType m_backupType{BackupType::NOT_SET};

  int m_retentionPeriodInDays{0};

  bool m_backupTagsEnabled{false};
  bool m_statusHasBeenSet = false;
  bool m_backupTypeHasBeenSet = false;
  bool m_retentionPeriodInDaysHasBeenSet = false;
  bool m_backupTagsEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
