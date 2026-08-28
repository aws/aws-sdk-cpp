/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/BackupConfiguration.h>

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
 * <p>The backup status information for the data store.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DatastoreBackupStatus">AWS
 * API Reference</a></p>
 */
class DatastoreBackupStatus {
 public:
  AWS_HEALTHLAKE_API DatastoreBackupStatus() = default;
  AWS_HEALTHLAKE_API DatastoreBackupStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API DatastoreBackupStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The backup configuration for the data store.</p>
   */
  inline const BackupConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = BackupConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = BackupConfiguration>
  DatastoreBackupStatus& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time backup was enabled on the data store.</p>
   */
  inline const Aws::Utils::DateTime& GetBackupEnabledAt() const { return m_backupEnabledAt; }
  inline bool BackupEnabledAtHasBeenSet() const { return m_backupEnabledAtHasBeenSet; }
  template <typename BackupEnabledAtT = Aws::Utils::DateTime>
  void SetBackupEnabledAt(BackupEnabledAtT&& value) {
    m_backupEnabledAtHasBeenSet = true;
    m_backupEnabledAt = std::forward<BackupEnabledAtT>(value);
  }
  template <typename BackupEnabledAtT = Aws::Utils::DateTime>
  DatastoreBackupStatus& WithBackupEnabledAt(BackupEnabledAtT&& value) {
    SetBackupEnabledAt(std::forward<BackupEnabledAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The earliest point in time the data store can be restored to.</p>
   */
  inline const Aws::Utils::DateTime& GetEarliestRestorePoint() const { return m_earliestRestorePoint; }
  inline bool EarliestRestorePointHasBeenSet() const { return m_earliestRestorePointHasBeenSet; }
  template <typename EarliestRestorePointT = Aws::Utils::DateTime>
  void SetEarliestRestorePoint(EarliestRestorePointT&& value) {
    m_earliestRestorePointHasBeenSet = true;
    m_earliestRestorePoint = std::forward<EarliestRestorePointT>(value);
  }
  template <typename EarliestRestorePointT = Aws::Utils::DateTime>
  DatastoreBackupStatus& WithEarliestRestorePoint(EarliestRestorePointT&& value) {
    SetEarliestRestorePoint(std::forward<EarliestRestorePointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest point in time the data store can be restored to.</p>
   */
  inline const Aws::Utils::DateTime& GetLatestRestorePoint() const { return m_latestRestorePoint; }
  inline bool LatestRestorePointHasBeenSet() const { return m_latestRestorePointHasBeenSet; }
  template <typename LatestRestorePointT = Aws::Utils::DateTime>
  void SetLatestRestorePoint(LatestRestorePointT&& value) {
    m_latestRestorePointHasBeenSet = true;
    m_latestRestorePoint = std::forward<LatestRestorePointT>(value);
  }
  template <typename LatestRestorePointT = Aws::Utils::DateTime>
  DatastoreBackupStatus& WithLatestRestorePoint(LatestRestorePointT&& value) {
    SetLatestRestorePoint(std::forward<LatestRestorePointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the retained backup data is scheduled for permanent deletion.</p>
   */
  inline const Aws::Utils::DateTime& GetScheduledPermanentDeletionTime() const { return m_scheduledPermanentDeletionTime; }
  inline bool ScheduledPermanentDeletionTimeHasBeenSet() const { return m_scheduledPermanentDeletionTimeHasBeenSet; }
  template <typename ScheduledPermanentDeletionTimeT = Aws::Utils::DateTime>
  void SetScheduledPermanentDeletionTime(ScheduledPermanentDeletionTimeT&& value) {
    m_scheduledPermanentDeletionTimeHasBeenSet = true;
    m_scheduledPermanentDeletionTime = std::forward<ScheduledPermanentDeletionTimeT>(value);
  }
  template <typename ScheduledPermanentDeletionTimeT = Aws::Utils::DateTime>
  DatastoreBackupStatus& WithScheduledPermanentDeletionTime(ScheduledPermanentDeletionTimeT&& value) {
    SetScheduledPermanentDeletionTime(std::forward<ScheduledPermanentDeletionTimeT>(value));
    return *this;
  }
  ///@}
 private:
  BackupConfiguration m_configuration;

  Aws::Utils::DateTime m_backupEnabledAt{};

  Aws::Utils::DateTime m_earliestRestorePoint{};

  Aws::Utils::DateTime m_latestRestorePoint{};

  Aws::Utils::DateTime m_scheduledPermanentDeletionTime{};
  bool m_configurationHasBeenSet = false;
  bool m_backupEnabledAtHasBeenSet = false;
  bool m_earliestRestorePointHasBeenSet = false;
  bool m_latestRestorePointHasBeenSet = false;
  bool m_scheduledPermanentDeletionTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
