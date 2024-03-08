/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RestoreTestingRecoveryPointSelection.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RestoreTestingPlanForGet">AWS
   * API Reference</a></p>
   */
  class RestoreTestingPlanForGet
  {
  public:
    AWS_BACKUP_API RestoreTestingPlanForGet();
    AWS_BACKUP_API RestoreTestingPlanForGet(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreTestingPlanForGet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time that a restore testing plan was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that a restore testing plan was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that a restore testing plan was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that a restore testing plan was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that a restore testing plan was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline RestoreTestingPlanForGet& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that a restore testing plan was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline RestoreTestingPlanForGet& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline RestoreTestingPlanForGet& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline RestoreTestingPlanForGet& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline RestoreTestingPlanForGet& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>The last time a restore test was run with the specified restore testing plan.
     * A date and time, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastExecutionDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastExecutionTime() const{ return m_lastExecutionTime; }

    /**
     * <p>The last time a restore test was run with the specified restore testing plan.
     * A date and time, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastExecutionDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool LastExecutionTimeHasBeenSet() const { return m_lastExecutionTimeHasBeenSet; }

    /**
     * <p>The last time a restore test was run with the specified restore testing plan.
     * A date and time, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastExecutionDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLastExecutionTime(const Aws::Utils::DateTime& value) { m_lastExecutionTimeHasBeenSet = true; m_lastExecutionTime = value; }

    /**
     * <p>The last time a restore test was run with the specified restore testing plan.
     * A date and time, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastExecutionDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLastExecutionTime(Aws::Utils::DateTime&& value) { m_lastExecutionTimeHasBeenSet = true; m_lastExecutionTime = std::move(value); }

    /**
     * <p>The last time a restore test was run with the specified restore testing plan.
     * A date and time, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastExecutionDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline RestoreTestingPlanForGet& WithLastExecutionTime(const Aws::Utils::DateTime& value) { SetLastExecutionTime(value); return *this;}

    /**
     * <p>The last time a restore test was run with the specified restore testing plan.
     * A date and time, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastExecutionDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline RestoreTestingPlanForGet& WithLastExecutionTime(Aws::Utils::DateTime&& value) { SetLastExecutionTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the restore testing plan was updated. This update is
     * in Unix format and Coordinated Universal Time (UTC). The value of
     * <code>LastUpdateTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The date and time that the restore testing plan was updated. This update is
     * in Unix format and Coordinated Universal Time (UTC). The value of
     * <code>LastUpdateTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The date and time that the restore testing plan was updated. This update is
     * in Unix format and Coordinated Universal Time (UTC). The value of
     * <code>LastUpdateTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The date and time that the restore testing plan was updated. This update is
     * in Unix format and Coordinated Universal Time (UTC). The value of
     * <code>LastUpdateTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The date and time that the restore testing plan was updated. This update is
     * in Unix format and Coordinated Universal Time (UTC). The value of
     * <code>LastUpdateTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline RestoreTestingPlanForGet& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The date and time that the restore testing plan was updated. This update is
     * in Unix format and Coordinated Universal Time (UTC). The value of
     * <code>LastUpdateTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline RestoreTestingPlanForGet& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The specified criteria to assign a set of resources, such as recovery point
     * types or backup vaults.</p>
     */
    inline const RestoreTestingRecoveryPointSelection& GetRecoveryPointSelection() const{ return m_recoveryPointSelection; }

    /**
     * <p>The specified criteria to assign a set of resources, such as recovery point
     * types or backup vaults.</p>
     */
    inline bool RecoveryPointSelectionHasBeenSet() const { return m_recoveryPointSelectionHasBeenSet; }

    /**
     * <p>The specified criteria to assign a set of resources, such as recovery point
     * types or backup vaults.</p>
     */
    inline void SetRecoveryPointSelection(const RestoreTestingRecoveryPointSelection& value) { m_recoveryPointSelectionHasBeenSet = true; m_recoveryPointSelection = value; }

    /**
     * <p>The specified criteria to assign a set of resources, such as recovery point
     * types or backup vaults.</p>
     */
    inline void SetRecoveryPointSelection(RestoreTestingRecoveryPointSelection&& value) { m_recoveryPointSelectionHasBeenSet = true; m_recoveryPointSelection = std::move(value); }

    /**
     * <p>The specified criteria to assign a set of resources, such as recovery point
     * types or backup vaults.</p>
     */
    inline RestoreTestingPlanForGet& WithRecoveryPointSelection(const RestoreTestingRecoveryPointSelection& value) { SetRecoveryPointSelection(value); return *this;}

    /**
     * <p>The specified criteria to assign a set of resources, such as recovery point
     * types or backup vaults.</p>
     */
    inline RestoreTestingPlanForGet& WithRecoveryPointSelection(RestoreTestingRecoveryPointSelection&& value) { SetRecoveryPointSelection(std::move(value)); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a restore testing
     * plan.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanArn() const{ return m_restoreTestingPlanArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a restore testing
     * plan.</p>
     */
    inline bool RestoreTestingPlanArnHasBeenSet() const { return m_restoreTestingPlanArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a restore testing
     * plan.</p>
     */
    inline void SetRestoreTestingPlanArn(const Aws::String& value) { m_restoreTestingPlanArnHasBeenSet = true; m_restoreTestingPlanArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a restore testing
     * plan.</p>
     */
    inline void SetRestoreTestingPlanArn(Aws::String&& value) { m_restoreTestingPlanArnHasBeenSet = true; m_restoreTestingPlanArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a restore testing
     * plan.</p>
     */
    inline void SetRestoreTestingPlanArn(const char* value) { m_restoreTestingPlanArnHasBeenSet = true; m_restoreTestingPlanArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a restore testing
     * plan.</p>
     */
    inline RestoreTestingPlanForGet& WithRestoreTestingPlanArn(const Aws::String& value) { SetRestoreTestingPlanArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a restore testing
     * plan.</p>
     */
    inline RestoreTestingPlanForGet& WithRestoreTestingPlanArn(Aws::String&& value) { SetRestoreTestingPlanArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a restore testing
     * plan.</p>
     */
    inline RestoreTestingPlanForGet& WithRestoreTestingPlanArn(const char* value) { SetRestoreTestingPlanArn(value); return *this;}


    /**
     * <p>This is the restore testing plan name.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const{ return m_restoreTestingPlanName; }

    /**
     * <p>This is the restore testing plan name.</p>
     */
    inline bool RestoreTestingPlanNameHasBeenSet() const { return m_restoreTestingPlanNameHasBeenSet; }

    /**
     * <p>This is the restore testing plan name.</p>
     */
    inline void SetRestoreTestingPlanName(const Aws::String& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = value; }

    /**
     * <p>This is the restore testing plan name.</p>
     */
    inline void SetRestoreTestingPlanName(Aws::String&& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = std::move(value); }

    /**
     * <p>This is the restore testing plan name.</p>
     */
    inline void SetRestoreTestingPlanName(const char* value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName.assign(value); }

    /**
     * <p>This is the restore testing plan name.</p>
     */
    inline RestoreTestingPlanForGet& WithRestoreTestingPlanName(const Aws::String& value) { SetRestoreTestingPlanName(value); return *this;}

    /**
     * <p>This is the restore testing plan name.</p>
     */
    inline RestoreTestingPlanForGet& WithRestoreTestingPlanName(Aws::String&& value) { SetRestoreTestingPlanName(std::move(value)); return *this;}

    /**
     * <p>This is the restore testing plan name.</p>
     */
    inline RestoreTestingPlanForGet& WithRestoreTestingPlanName(const char* value) { SetRestoreTestingPlanName(value); return *this;}


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
    inline RestoreTestingPlanForGet& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>A CRON expression in specified timezone when a restore testing plan is
     * executed.</p>
     */
    inline RestoreTestingPlanForGet& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>A CRON expression in specified timezone when a restore testing plan is
     * executed.</p>
     */
    inline RestoreTestingPlanForGet& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


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
    inline RestoreTestingPlanForGet& WithScheduleExpressionTimezone(const Aws::String& value) { SetScheduleExpressionTimezone(value); return *this;}

    /**
     * <p>Optional. This is the timezone in which the schedule expression is set. By
     * default, ScheduleExpressions are in UTC. You can modify this to a specified
     * timezone.</p>
     */
    inline RestoreTestingPlanForGet& WithScheduleExpressionTimezone(Aws::String&& value) { SetScheduleExpressionTimezone(std::move(value)); return *this;}

    /**
     * <p>Optional. This is the timezone in which the schedule expression is set. By
     * default, ScheduleExpressions are in UTC. You can modify this to a specified
     * timezone.</p>
     */
    inline RestoreTestingPlanForGet& WithScheduleExpressionTimezone(const char* value) { SetScheduleExpressionTimezone(value); return *this;}


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
    inline RestoreTestingPlanForGet& WithStartWindowHours(int value) { SetStartWindowHours(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastExecutionTime;
    bool m_lastExecutionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    RestoreTestingRecoveryPointSelection m_recoveryPointSelection;
    bool m_recoveryPointSelectionHasBeenSet = false;

    Aws::String m_restoreTestingPlanArn;
    bool m_restoreTestingPlanArnHasBeenSet = false;

    Aws::String m_restoreTestingPlanName;
    bool m_restoreTestingPlanNameHasBeenSet = false;

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
