/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/BackupRule.h>
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
   * rule in a backup plan is a separate scheduled task and can back up a different
   * selection of Amazon Web Services resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/BackupPlan">AWS
   * API Reference</a></p>
   */
  class BackupPlan
  {
  public:
    AWS_BACKUP_API BackupPlan() = default;
    AWS_BACKUP_API BackupPlan(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API BackupPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The display name of a backup plan. Must contain only alphanumeric or '-_.'
     * special characters.</p> <p>If this is set in the console, it can contain 1 to 50
     * characters; if this is set through CLI or API, it can contain 1 to 200
     * characters.</p>
     */
    inline const Aws::String& GetBackupPlanName() const { return m_backupPlanName; }
    inline bool BackupPlanNameHasBeenSet() const { return m_backupPlanNameHasBeenSet; }
    template<typename BackupPlanNameT = Aws::String>
    void SetBackupPlanName(BackupPlanNameT&& value) { m_backupPlanNameHasBeenSet = true; m_backupPlanName = std::forward<BackupPlanNameT>(value); }
    template<typename BackupPlanNameT = Aws::String>
    BackupPlan& WithBackupPlanName(BackupPlanNameT&& value) { SetBackupPlanName(std::forward<BackupPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources. </p>
     */
    inline const Aws::Vector<BackupRule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<BackupRule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<BackupRule>>
    BackupPlan& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = BackupRule>
    BackupPlan& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains a list of <code>BackupOptions</code> for each resource type.</p>
     */
    inline const Aws::Vector<AdvancedBackupSetting>& GetAdvancedBackupSettings() const { return m_advancedBackupSettings; }
    inline bool AdvancedBackupSettingsHasBeenSet() const { return m_advancedBackupSettingsHasBeenSet; }
    template<typename AdvancedBackupSettingsT = Aws::Vector<AdvancedBackupSetting>>
    void SetAdvancedBackupSettings(AdvancedBackupSettingsT&& value) { m_advancedBackupSettingsHasBeenSet = true; m_advancedBackupSettings = std::forward<AdvancedBackupSettingsT>(value); }
    template<typename AdvancedBackupSettingsT = Aws::Vector<AdvancedBackupSetting>>
    BackupPlan& WithAdvancedBackupSettings(AdvancedBackupSettingsT&& value) { SetAdvancedBackupSettings(std::forward<AdvancedBackupSettingsT>(value)); return *this;}
    template<typename AdvancedBackupSettingsT = AdvancedBackupSetting>
    BackupPlan& AddAdvancedBackupSettings(AdvancedBackupSettingsT&& value) { m_advancedBackupSettingsHasBeenSet = true; m_advancedBackupSettings.emplace_back(std::forward<AdvancedBackupSettingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_backupPlanName;
    bool m_backupPlanNameHasBeenSet = false;

    Aws::Vector<BackupRule> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::Vector<AdvancedBackupSetting> m_advancedBackupSettings;
    bool m_advancedBackupSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
