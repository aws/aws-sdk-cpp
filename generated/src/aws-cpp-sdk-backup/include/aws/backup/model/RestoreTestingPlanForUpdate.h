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
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RestoreTestingPlanForUpdate">AWS
   * API Reference</a></p>
   */
  class RestoreTestingPlanForUpdate
  {
  public:
    AWS_BACKUP_API RestoreTestingPlanForUpdate();
    AWS_BACKUP_API RestoreTestingPlanForUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreTestingPlanForUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Required: <code>Algorithm</code>; <code>RecoveryPointTypes</code>;
     * <code>IncludeVaults</code> (<i>one or more</i>).</p> <p>Optional:
     * <i>SelectionWindowDays</i> (<i>'30' if not specified</i>);
     * <code>ExcludeVaults</code> (defaults to empty list if not listed).</p>
     */
    inline const RestoreTestingRecoveryPointSelection& GetRecoveryPointSelection() const{ return m_recoveryPointSelection; }

    /**
     * <p>Required: <code>Algorithm</code>; <code>RecoveryPointTypes</code>;
     * <code>IncludeVaults</code> (<i>one or more</i>).</p> <p>Optional:
     * <i>SelectionWindowDays</i> (<i>'30' if not specified</i>);
     * <code>ExcludeVaults</code> (defaults to empty list if not listed).</p>
     */
    inline bool RecoveryPointSelectionHasBeenSet() const { return m_recoveryPointSelectionHasBeenSet; }

    /**
     * <p>Required: <code>Algorithm</code>; <code>RecoveryPointTypes</code>;
     * <code>IncludeVaults</code> (<i>one or more</i>).</p> <p>Optional:
     * <i>SelectionWindowDays</i> (<i>'30' if not specified</i>);
     * <code>ExcludeVaults</code> (defaults to empty list if not listed).</p>
     */
    inline void SetRecoveryPointSelection(const RestoreTestingRecoveryPointSelection& value) { m_recoveryPointSelectionHasBeenSet = true; m_recoveryPointSelection = value; }

    /**
     * <p>Required: <code>Algorithm</code>; <code>RecoveryPointTypes</code>;
     * <code>IncludeVaults</code> (<i>one or more</i>).</p> <p>Optional:
     * <i>SelectionWindowDays</i> (<i>'30' if not specified</i>);
     * <code>ExcludeVaults</code> (defaults to empty list if not listed).</p>
     */
    inline void SetRecoveryPointSelection(RestoreTestingRecoveryPointSelection&& value) { m_recoveryPointSelectionHasBeenSet = true; m_recoveryPointSelection = std::move(value); }

    /**
     * <p>Required: <code>Algorithm</code>; <code>RecoveryPointTypes</code>;
     * <code>IncludeVaults</code> (<i>one or more</i>).</p> <p>Optional:
     * <i>SelectionWindowDays</i> (<i>'30' if not specified</i>);
     * <code>ExcludeVaults</code> (defaults to empty list if not listed).</p>
     */
    inline RestoreTestingPlanForUpdate& WithRecoveryPointSelection(const RestoreTestingRecoveryPointSelection& value) { SetRecoveryPointSelection(value); return *this;}

    /**
     * <p>Required: <code>Algorithm</code>; <code>RecoveryPointTypes</code>;
     * <code>IncludeVaults</code> (<i>one or more</i>).</p> <p>Optional:
     * <i>SelectionWindowDays</i> (<i>'30' if not specified</i>);
     * <code>ExcludeVaults</code> (defaults to empty list if not listed).</p>
     */
    inline RestoreTestingPlanForUpdate& WithRecoveryPointSelection(RestoreTestingRecoveryPointSelection&& value) { SetRecoveryPointSelection(std::move(value)); return *this;}


    /**
     * <p>A CRON expression in specified timezone when a restore testing plan is
     * executed.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>A CRON expression in specified timezone when a restore testing plan is
     * executed.</p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>A CRON expression in specified timezone when a restore testing plan is
     * executed.</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>A CRON expression in specified timezone when a restore testing plan is
     * executed.</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>A CRON expression in specified timezone when a restore testing plan is
     * executed.</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>A CRON expression in specified timezone when a restore testing plan is
     * executed.</p>
     */
    inline RestoreTestingPlanForUpdate& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>A CRON expression in specified timezone when a restore testing plan is
     * executed.</p>
     */
    inline RestoreTestingPlanForUpdate& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>A CRON expression in specified timezone when a restore testing plan is
     * executed.</p>
     */
    inline RestoreTestingPlanForUpdate& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


    /**
     * <p>Optional. This is the timezone in which the schedule expression is set. By
     * default, ScheduleExpressions are in UTC. You can modify this to a specified
     * timezone.</p>
     */
    inline const Aws::String& GetScheduleExpressionTimezone() const{ return m_scheduleExpressionTimezone; }

    /**
     * <p>Optional. This is the timezone in which the schedule expression is set. By
     * default, ScheduleExpressions are in UTC. You can modify this to a specified
     * timezone.</p>
     */
    inline bool ScheduleExpressionTimezoneHasBeenSet() const { return m_scheduleExpressionTimezoneHasBeenSet; }

    /**
     * <p>Optional. This is the timezone in which the schedule expression is set. By
     * default, ScheduleExpressions are in UTC. You can modify this to a specified
     * timezone.</p>
     */
    inline void SetScheduleExpressionTimezone(const Aws::String& value) { m_scheduleExpressionTimezoneHasBeenSet = true; m_scheduleExpressionTimezone = value; }

    /**
     * <p>Optional. This is the timezone in which the schedule expression is set. By
     * default, ScheduleExpressions are in UTC. You can modify this to a specified
     * timezone.</p>
     */
    inline void SetScheduleExpressionTimezone(Aws::String&& value) { m_scheduleExpressionTimezoneHasBeenSet = true; m_scheduleExpressionTimezone = std::move(value); }

    /**
     * <p>Optional. This is the timezone in which the schedule expression is set. By
     * default, ScheduleExpressions are in UTC. You can modify this to a specified
     * timezone.</p>
     */
    inline void SetScheduleExpressionTimezone(const char* value) { m_scheduleExpressionTimezoneHasBeenSet = true; m_scheduleExpressionTimezone.assign(value); }

    /**
     * <p>Optional. This is the timezone in which the schedule expression is set. By
     * default, ScheduleExpressions are in UTC. You can modify this to a specified
     * timezone.</p>
     */
    inline RestoreTestingPlanForUpdate& WithScheduleExpressionTimezone(const Aws::String& value) { SetScheduleExpressionTimezone(value); return *this;}

    /**
     * <p>Optional. This is the timezone in which the schedule expression is set. By
     * default, ScheduleExpressions are in UTC. You can modify this to a specified
     * timezone.</p>
     */
    inline RestoreTestingPlanForUpdate& WithScheduleExpressionTimezone(Aws::String&& value) { SetScheduleExpressionTimezone(std::move(value)); return *this;}

    /**
     * <p>Optional. This is the timezone in which the schedule expression is set. By
     * default, ScheduleExpressions are in UTC. You can modify this to a specified
     * timezone.</p>
     */
    inline RestoreTestingPlanForUpdate& WithScheduleExpressionTimezone(const char* value) { SetScheduleExpressionTimezone(value); return *this;}


    /**
     * <p>Defaults to 24 hours.</p> <p>A value in hours after a restore test is
     * scheduled before a job will be canceled if it doesn't start successfully. This
     * value is optional. If this value is included, this parameter has a maximum value
     * of 168 hours (one week).</p>
     */
    inline int GetStartWindowHours() const{ return m_startWindowHours; }

    /**
     * <p>Defaults to 24 hours.</p> <p>A value in hours after a restore test is
     * scheduled before a job will be canceled if it doesn't start successfully. This
     * value is optional. If this value is included, this parameter has a maximum value
     * of 168 hours (one week).</p>
     */
    inline bool StartWindowHoursHasBeenSet() const { return m_startWindowHoursHasBeenSet; }

    /**
     * <p>Defaults to 24 hours.</p> <p>A value in hours after a restore test is
     * scheduled before a job will be canceled if it doesn't start successfully. This
     * value is optional. If this value is included, this parameter has a maximum value
     * of 168 hours (one week).</p>
     */
    inline void SetStartWindowHours(int value) { m_startWindowHoursHasBeenSet = true; m_startWindowHours = value; }

    /**
     * <p>Defaults to 24 hours.</p> <p>A value in hours after a restore test is
     * scheduled before a job will be canceled if it doesn't start successfully. This
     * value is optional. If this value is included, this parameter has a maximum value
     * of 168 hours (one week).</p>
     */
    inline RestoreTestingPlanForUpdate& WithStartWindowHours(int value) { SetStartWindowHours(value); return *this;}

  private:

    RestoreTestingRecoveryPointSelection m_recoveryPointSelection;
    bool m_recoveryPointSelectionHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    Aws::String m_scheduleExpressionTimezone;
    bool m_scheduleExpressionTimezoneHasBeenSet = false;

    int m_startWindowHours;
    bool m_startWindowHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
