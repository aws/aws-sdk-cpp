/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/RestoreTestingRecoveryPointSelection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>This contains metadata about a restore testing plan.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RestoreTestingPlanForCreate">AWS
   * API Reference</a></p>
   */
  class RestoreTestingPlanForCreate
  {
  public:
    AWS_BACKUP_API RestoreTestingPlanForCreate() = default;
    AWS_BACKUP_API RestoreTestingPlanForCreate(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreTestingPlanForCreate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <code>RecoveryPointSelection</code> has five parameters (three required and
     * two optional). The values you specify determine which recovery point is included
     * in the restore test. You must indicate with <code>Algorithm</code> if you want
     * the latest recovery point within your <code>SelectionWindowDays</code> or if you
     * want a random recovery point, and you must indicate through
     * <code>IncludeVaults</code> from which vaults the recovery points can be
     * chosen.</p> <p> <code>Algorithm</code> (<i>required</i>) Valid values:
     * "<code>LATEST_WITHIN_WINDOW</code>" or "<code>RANDOM_WITHIN_WINDOW</code>".</p>
     * <p> <code>Recovery point types</code> (<i>required</i>) Valid values:
     * "<code>SNAPSHOT</code>" and/or "<code>CONTINUOUS</code>". Include
     * <code>SNAPSHOT</code> to restore only snapshot recovery points; include
     * <code>CONTINUOUS</code> to restore continuous recovery points (point in time
     * restore / PITR); use both to restore either a snapshot or a continuous recovery
     * point. The recovery point will be determined by the value for
     * <code>Algorithm</code>.</p> <p> <code>IncludeVaults</code> (<i>required</i>).
     * You must include one or more backup vaults. Use the wildcard ["*"] or specific
     * ARNs.</p> <p> <code>SelectionWindowDays</code> (<i>optional</i>) Value must be
     * an integer (in days) from 1 to 365. If not included, the value defaults to
     * <code>30</code>.</p> <p> <code>ExcludeVaults</code> (<i>optional</i>). You can
     * choose to input one or more specific backup vault ARNs to exclude those vaults'
     * contents from restore eligibility. Or, you can include a list of selectors. If
     * this parameter and its value are not included, it defaults to empty list.</p>
     */
    inline const RestoreTestingRecoveryPointSelection& GetRecoveryPointSelection() const { return m_recoveryPointSelection; }
    inline bool RecoveryPointSelectionHasBeenSet() const { return m_recoveryPointSelectionHasBeenSet; }
    template<typename RecoveryPointSelectionT = RestoreTestingRecoveryPointSelection>
    void SetRecoveryPointSelection(RecoveryPointSelectionT&& value) { m_recoveryPointSelectionHasBeenSet = true; m_recoveryPointSelection = std::forward<RecoveryPointSelectionT>(value); }
    template<typename RecoveryPointSelectionT = RestoreTestingRecoveryPointSelection>
    RestoreTestingPlanForCreate& WithRecoveryPointSelection(RecoveryPointSelectionT&& value) { SetRecoveryPointSelection(std::forward<RecoveryPointSelectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RestoreTestingPlanName is a unique string that is the name of the restore
     * testing plan. This cannot be changed after creation, and it must consist of only
     * alphanumeric characters and underscores.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const { return m_restoreTestingPlanName; }
    inline bool RestoreTestingPlanNameHasBeenSet() const { return m_restoreTestingPlanNameHasBeenSet; }
    template<typename RestoreTestingPlanNameT = Aws::String>
    void SetRestoreTestingPlanName(RestoreTestingPlanNameT&& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = std::forward<RestoreTestingPlanNameT>(value); }
    template<typename RestoreTestingPlanNameT = Aws::String>
    RestoreTestingPlanForCreate& WithRestoreTestingPlanName(RestoreTestingPlanNameT&& value) { SetRestoreTestingPlanName(std::forward<RestoreTestingPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A CRON expression in specified timezone when a restore testing plan is
     * executed. When no CRON expression is provided, Backup will use the default
     * expression <code>cron(0 5 ? * * *)</code>.</p>
     */
    inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    template<typename ScheduleExpressionT = Aws::String>
    void SetScheduleExpression(ScheduleExpressionT&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::forward<ScheduleExpressionT>(value); }
    template<typename ScheduleExpressionT = Aws::String>
    RestoreTestingPlanForCreate& WithScheduleExpression(ScheduleExpressionT&& value) { SetScheduleExpression(std::forward<ScheduleExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. This is the timezone in which the schedule expression is set. By
     * default, ScheduleExpressions are in UTC. You can modify this to a specified
     * timezone.</p>
     */
    inline const Aws::String& GetScheduleExpressionTimezone() const { return m_scheduleExpressionTimezone; }
    inline bool ScheduleExpressionTimezoneHasBeenSet() const { return m_scheduleExpressionTimezoneHasBeenSet; }
    template<typename ScheduleExpressionTimezoneT = Aws::String>
    void SetScheduleExpressionTimezone(ScheduleExpressionTimezoneT&& value) { m_scheduleExpressionTimezoneHasBeenSet = true; m_scheduleExpressionTimezone = std::forward<ScheduleExpressionTimezoneT>(value); }
    template<typename ScheduleExpressionTimezoneT = Aws::String>
    RestoreTestingPlanForCreate& WithScheduleExpressionTimezone(ScheduleExpressionTimezoneT&& value) { SetScheduleExpressionTimezone(std::forward<ScheduleExpressionTimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defaults to 24 hours.</p> <p>A value in hours after a restore test is
     * scheduled before a job will be canceled if it doesn't start successfully. This
     * value is optional. If this value is included, this parameter has a maximum value
     * of 168 hours (one week).</p>
     */
    inline int GetStartWindowHours() const { return m_startWindowHours; }
    inline bool StartWindowHoursHasBeenSet() const { return m_startWindowHoursHasBeenSet; }
    inline void SetStartWindowHours(int value) { m_startWindowHoursHasBeenSet = true; m_startWindowHours = value; }
    inline RestoreTestingPlanForCreate& WithStartWindowHours(int value) { SetStartWindowHours(value); return *this;}
    ///@}
  private:

    RestoreTestingRecoveryPointSelection m_recoveryPointSelection;
    bool m_recoveryPointSelectionHasBeenSet = false;

    Aws::String m_restoreTestingPlanName;
    bool m_restoreTestingPlanNameHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    Aws::String m_scheduleExpressionTimezone;
    bool m_scheduleExpressionTimezoneHasBeenSet = false;

    int m_startWindowHours{0};
    bool m_startWindowHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
