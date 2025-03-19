/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/BackupRuleInput.h>
#include <aws/backup/model/AdvancedBackupSetting.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{

  /**
   * <p>Contains an optional backup plan display name and an array of
   * <code>BackupRule</code> objects, each of which specifies a backup rule. Each
   * rule in a backup plan is a separate scheduled task. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/BackupPlanInput">AWS
   * API Reference</a></p>
   */
  class BackupPlanInput
  {
  public:
    AWS_BACKUP_API BackupPlanInput() = default;
    AWS_BACKUP_API BackupPlanInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API BackupPlanInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The display name of a backup plan. Must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline const Aws::String& GetBackupPlanName() const { return m_backupPlanName; }
    inline bool BackupPlanNameHasBeenSet() const { return m_backupPlanNameHasBeenSet; }
    template<typename BackupPlanNameT = Aws::String>
    void SetBackupPlanName(BackupPlanNameT&& value) { m_backupPlanNameHasBeenSet = true; m_backupPlanName = std::forward<BackupPlanNameT>(value); }
    template<typename BackupPlanNameT = Aws::String>
    BackupPlanInput& WithBackupPlanName(BackupPlanNameT&& value) { SetBackupPlanName(std::forward<BackupPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources.</p>
     */
    inline const Aws::Vector<BackupRuleInput>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<BackupRuleInput>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<BackupRuleInput>>
    BackupPlanInput& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = BackupRuleInput>
    BackupPlanInput& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a list of <code>BackupOptions</code> for each resource type. These
     * settings are only available for Windows Volume Shadow Copy Service (VSS) backup
     * jobs.</p>
     */
    inline const Aws::Vector<AdvancedBackupSetting>& GetAdvancedBackupSettings() const { return m_advancedBackupSettings; }
    inline bool AdvancedBackupSettingsHasBeenSet() const { return m_advancedBackupSettingsHasBeenSet; }
    template<typename AdvancedBackupSettingsT = Aws::Vector<AdvancedBackupSetting>>
    void SetAdvancedBackupSettings(AdvancedBackupSettingsT&& value) { m_advancedBackupSettingsHasBeenSet = true; m_advancedBackupSettings = std::forward<AdvancedBackupSettingsT>(value); }
    template<typename AdvancedBackupSettingsT = Aws::Vector<AdvancedBackupSetting>>
    BackupPlanInput& WithAdvancedBackupSettings(AdvancedBackupSettingsT&& value) { SetAdvancedBackupSettings(std::forward<AdvancedBackupSettingsT>(value)); return *this;}
    template<typename AdvancedBackupSettingsT = AdvancedBackupSetting>
    BackupPlanInput& AddAdvancedBackupSettings(AdvancedBackupSettingsT&& value) { m_advancedBackupSettingsHasBeenSet = true; m_advancedBackupSettings.emplace_back(std::forward<AdvancedBackupSettingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_backupPlanName;
    bool m_backupPlanNameHasBeenSet = false;

    Aws::Vector<BackupRuleInput> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::Vector<AdvancedBackupSetting> m_advancedBackupSettings;
    bool m_advancedBackupSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
