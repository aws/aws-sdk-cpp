/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/ResourceSelection.h>
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
 * <p>This contains metadata about a tiering configuration for update
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/TieringConfigurationInputForUpdate">AWS
 * API Reference</a></p>
 */
class TieringConfigurationInputForUpdate {
 public:
  AWS_BACKUP_API TieringConfigurationInputForUpdate() = default;
  AWS_BACKUP_API TieringConfigurationInputForUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API TieringConfigurationInputForUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  TieringConfigurationInputForUpdate& WithResourceSelection(ResourceSelectionT&& value) {
    SetResourceSelection(std::forward<ResourceSelectionT>(value));
    return *this;
  }
  template <typename ResourceSelectionT = ResourceSelection>
  TieringConfigurationInputForUpdate& AddResourceSelection(ResourceSelectionT&& value) {
    m_resourceSelectionHasBeenSet = true;
    m_resourceSelection.emplace_back(std::forward<ResourceSelectionT>(value));
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
  TieringConfigurationInputForUpdate& WithBackupVaultName(BackupVaultNameT&& value) {
    SetBackupVaultName(std::forward<BackupVaultNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ResourceSelection> m_resourceSelection;
  bool m_resourceSelectionHasBeenSet = false;

  Aws::String m_backupVaultName;
  bool m_backupVaultNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
