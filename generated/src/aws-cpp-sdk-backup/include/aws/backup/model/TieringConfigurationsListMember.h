/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
 * <p>This contains metadata about a tiering configuration returned in a
 * list.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/TieringConfigurationsListMember">AWS
 * API Reference</a></p>
 */
class TieringConfigurationsListMember {
 public:
  AWS_BACKUP_API TieringConfigurationsListMember() = default;
  AWS_BACKUP_API TieringConfigurationsListMember(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API TieringConfigurationsListMember& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An Amazon Resource Name (ARN) that uniquely identifies the tiering
   * configuration.</p>
   */
  inline const Aws::String& GetTieringConfigurationArn() const { return m_tieringConfigurationArn; }
  inline bool TieringConfigurationArnHasBeenSet() const { return m_tieringConfigurationArnHasBeenSet; }
  template <typename TieringConfigurationArnT = Aws::String>
  void SetTieringConfigurationArn(TieringConfigurationArnT&& value) {
    m_tieringConfigurationArnHasBeenSet = true;
    m_tieringConfigurationArn = std::forward<TieringConfigurationArnT>(value);
  }
  template <typename TieringConfigurationArnT = Aws::String>
  TieringConfigurationsListMember& WithTieringConfigurationArn(TieringConfigurationArnT&& value) {
    SetTieringConfigurationArn(std::forward<TieringConfigurationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique name of the tiering configuration.</p>
   */
  inline const Aws::String& GetTieringConfigurationName() const { return m_tieringConfigurationName; }
  inline bool TieringConfigurationNameHasBeenSet() const { return m_tieringConfigurationNameHasBeenSet; }
  template <typename TieringConfigurationNameT = Aws::String>
  void SetTieringConfigurationName(TieringConfigurationNameT&& value) {
    m_tieringConfigurationNameHasBeenSet = true;
    m_tieringConfigurationName = std::forward<TieringConfigurationNameT>(value);
  }
  template <typename TieringConfigurationNameT = Aws::String>
  TieringConfigurationsListMember& WithTieringConfigurationName(TieringConfigurationNameT&& value) {
    SetTieringConfigurationName(std::forward<TieringConfigurationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the backup vault where the tiering configuration applies. Use
   * <code>*</code> to apply to all backup vaults.</p>
   */
  inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
  inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
  template <typename BackupVaultNameT = Aws::String>
  void SetBackupVaultName(BackupVaultNameT&& value) {
    m_backupVaultNameHasBeenSet = true;
    m_backupVaultName = std::forward<BackupVaultNameT>(value);
  }
  template <typename BackupVaultNameT = Aws::String>
  TieringConfigurationsListMember& WithBackupVaultName(BackupVaultNameT&& value) {
    SetBackupVaultName(std::forward<BackupVaultNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time a tiering configuration was created, in Unix format and
   * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
   * accurate to milliseconds. For example, the value 1516925490.087 represents
   * Friday, January 26, 2018 12:11:30.087AM.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  TieringConfigurationsListMember& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time a tiering configuration was updated, in Unix format and
   * Coordinated Universal Time (UTC). The value of <code>LastUpdatedTime</code> is
   * accurate to milliseconds. For example, the value 1516925490.087 represents
   * Friday, January 26, 2018 12:11:30.087AM.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  void SetLastUpdatedTime(LastUpdatedTimeT&& value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value);
  }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  TieringConfigurationsListMember& WithLastUpdatedTime(LastUpdatedTimeT&& value) {
    SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tieringConfigurationArn;
  bool m_tieringConfigurationArnHasBeenSet = false;

  Aws::String m_tieringConfigurationName;
  bool m_tieringConfigurationNameHasBeenSet = false;

  Aws::String m_backupVaultName;
  bool m_backupVaultNameHasBeenSet = false;

  Aws::Utils::DateTime m_creationTime{};
  bool m_creationTimeHasBeenSet = false;

  Aws::Utils::DateTime m_lastUpdatedTime{};
  bool m_lastUpdatedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
