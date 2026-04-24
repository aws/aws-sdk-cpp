/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/ResourceSelection.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>This contains metadata about a tiering configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/TieringConfiguration">AWS
 * API Reference</a></p>
 */
class TieringConfiguration {
 public:
  AWS_BACKUP_API TieringConfiguration() = default;
  AWS_BACKUP_API TieringConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API TieringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique name of the tiering configuration. This cannot be changed after
   * creation, and it must consist of only alphanumeric characters and
   * underscores.</p>
   */
  inline const Aws::String& GetTieringConfigurationName() const { return m_tieringConfigurationName; }
  inline bool TieringConfigurationNameHasBeenSet() const { return m_tieringConfigurationNameHasBeenSet; }
  template <typename TieringConfigurationNameT = Aws::String>
  void SetTieringConfigurationName(TieringConfigurationNameT&& value) {
    m_tieringConfigurationNameHasBeenSet = true;
    m_tieringConfigurationName = std::forward<TieringConfigurationNameT>(value);
  }
  template <typename TieringConfigurationNameT = Aws::String>
  TieringConfiguration& WithTieringConfigurationName(TieringConfigurationNameT&& value) {
    SetTieringConfigurationName(std::forward<TieringConfigurationNameT>(value));
    return *this;
  }
  ///@}

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
  TieringConfiguration& WithTieringConfigurationArn(TieringConfigurationArnT&& value) {
    SetTieringConfigurationArn(std::forward<TieringConfigurationArnT>(value));
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
  TieringConfiguration& WithBackupVaultName(BackupVaultNameT&& value) {
    SetBackupVaultName(std::forward<BackupVaultNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of resource selection objects that specify which resources are
   * included in the tiering configuration and their tiering settings.</p>
   */
  inline const Aws::Vector<ResourceSelection>& GetResourceSelection() const { return m_resourceSelection; }
  inline bool ResourceSelectionHasBeenSet() const { return m_resourceSelectionHasBeenSet; }
  template <typename ResourceSelectionT = Aws::Vector<ResourceSelection>>
  void SetResourceSelection(ResourceSelectionT&& value) {
    m_resourceSelectionHasBeenSet = true;
    m_resourceSelection = std::forward<ResourceSelectionT>(value);
  }
  template <typename ResourceSelectionT = Aws::Vector<ResourceSelection>>
  TieringConfiguration& WithResourceSelection(ResourceSelectionT&& value) {
    SetResourceSelection(std::forward<ResourceSelectionT>(value));
    return *this;
  }
  template <typename ResourceSelectionT = ResourceSelection>
  TieringConfiguration& AddResourceSelection(ResourceSelectionT&& value) {
    m_resourceSelectionHasBeenSet = true;
    m_resourceSelection.emplace_back(std::forward<ResourceSelectionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This is a unique string that identifies the request and allows failed
   * requests to be retried without the risk of running the operation twice.</p>
   */
  inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
  inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
  template <typename CreatorRequestIdT = Aws::String>
  void SetCreatorRequestId(CreatorRequestIdT&& value) {
    m_creatorRequestIdHasBeenSet = true;
    m_creatorRequestId = std::forward<CreatorRequestIdT>(value);
  }
  template <typename CreatorRequestIdT = Aws::String>
  TieringConfiguration& WithCreatorRequestId(CreatorRequestIdT&& value) {
    SetCreatorRequestId(std::forward<CreatorRequestIdT>(value));
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
  TieringConfiguration& WithCreationTime(CreationTimeT&& value) {
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
  TieringConfiguration& WithLastUpdatedTime(LastUpdatedTimeT&& value) {
    SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tieringConfigurationName;

  Aws::String m_tieringConfigurationArn;

  Aws::String m_backupVaultName;

  Aws::Vector<ResourceSelection> m_resourceSelection;

  Aws::String m_creatorRequestId;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastUpdatedTime{};
  bool m_tieringConfigurationNameHasBeenSet = false;
  bool m_tieringConfigurationArnHasBeenSet = false;
  bool m_backupVaultNameHasBeenSet = false;
  bool m_resourceSelectionHasBeenSet = false;
  bool m_creatorRequestIdHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
