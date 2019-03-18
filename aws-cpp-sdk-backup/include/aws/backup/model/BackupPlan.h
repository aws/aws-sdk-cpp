/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/BackupRule.h>
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
   * selection of AWS resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/BackupPlan">AWS
   * API Reference</a></p>
   */
  class AWS_BACKUP_API BackupPlan
  {
  public:
    BackupPlan();
    BackupPlan(Aws::Utils::Json::JsonView jsonValue);
    BackupPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The display name of a backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanName() const{ return m_backupPlanName; }

    /**
     * <p>The display name of a backup plan.</p>
     */
    inline bool BackupPlanNameHasBeenSet() const { return m_backupPlanNameHasBeenSet; }

    /**
     * <p>The display name of a backup plan.</p>
     */
    inline void SetBackupPlanName(const Aws::String& value) { m_backupPlanNameHasBeenSet = true; m_backupPlanName = value; }

    /**
     * <p>The display name of a backup plan.</p>
     */
    inline void SetBackupPlanName(Aws::String&& value) { m_backupPlanNameHasBeenSet = true; m_backupPlanName = std::move(value); }

    /**
     * <p>The display name of a backup plan.</p>
     */
    inline void SetBackupPlanName(const char* value) { m_backupPlanNameHasBeenSet = true; m_backupPlanName.assign(value); }

    /**
     * <p>The display name of a backup plan.</p>
     */
    inline BackupPlan& WithBackupPlanName(const Aws::String& value) { SetBackupPlanName(value); return *this;}

    /**
     * <p>The display name of a backup plan.</p>
     */
    inline BackupPlan& WithBackupPlanName(Aws::String&& value) { SetBackupPlanName(std::move(value)); return *this;}

    /**
     * <p>The display name of a backup plan.</p>
     */
    inline BackupPlan& WithBackupPlanName(const char* value) { SetBackupPlanName(value); return *this;}


    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources.</p>
     */
    inline const Aws::Vector<BackupRule>& GetRules() const{ return m_rules; }

    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources.</p>
     */
    inline void SetRules(const Aws::Vector<BackupRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources.</p>
     */
    inline void SetRules(Aws::Vector<BackupRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources.</p>
     */
    inline BackupPlan& WithRules(const Aws::Vector<BackupRule>& value) { SetRules(value); return *this;}

    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources.</p>
     */
    inline BackupPlan& WithRules(Aws::Vector<BackupRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources.</p>
     */
    inline BackupPlan& AddRules(const BackupRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>An array of <code>BackupRule</code> objects, each of which specifies a
     * scheduled task that is used to back up a selection of resources.</p>
     */
    inline BackupPlan& AddRules(BackupRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_backupPlanName;
    bool m_backupPlanNameHasBeenSet;

    Aws::Vector<BackupRule> m_rules;
    bool m_rulesHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
