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
    AWS_BACKUP_API RestoreTestingPlanForGet() = default;
    AWS_BACKUP_API RestoreTestingPlanForGet(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreTestingPlanForGet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time that a restore testing plan was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    RestoreTestingPlanForGet& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This identifies the request and allows failed requests to be retried without
     * the risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    RestoreTestingPlanForGet& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time a restore test was run with the specified restore testing plan.
     * A date and time, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastExecutionDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastExecutionTime() const { return m_lastExecutionTime; }
    inline bool LastExecutionTimeHasBeenSet() const { return m_lastExecutionTimeHasBeenSet; }
    template<typename LastExecutionTimeT = Aws::Utils::DateTime>
    void SetLastExecutionTime(LastExecutionTimeT&& value) { m_lastExecutionTimeHasBeenSet = true; m_lastExecutionTime = std::forward<LastExecutionTimeT>(value); }
    template<typename LastExecutionTimeT = Aws::Utils::DateTime>
    RestoreTestingPlanForGet& WithLastExecutionTime(LastExecutionTimeT&& value) { SetLastExecutionTime(std::forward<LastExecutionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the restore testing plan was updated. This update is
     * in Unix format and Coordinated Universal Time (UTC). The value of
     * <code>LastUpdateTime</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    RestoreTestingPlanForGet& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified criteria to assign a set of resources, such as recovery point
     * types or backup vaults.</p>
     */
    inline const RestoreTestingRecoveryPointSelection& GetRecoveryPointSelection() const { return m_recoveryPointSelection; }
    inline bool RecoveryPointSelectionHasBeenSet() const { return m_recoveryPointSelectionHasBeenSet; }
    template<typename RecoveryPointSelectionT = RestoreTestingRecoveryPointSelection>
    void SetRecoveryPointSelection(RecoveryPointSelectionT&& value) { m_recoveryPointSelectionHasBeenSet = true; m_recoveryPointSelection = std::forward<RecoveryPointSelectionT>(value); }
    template<typename RecoveryPointSelectionT = RestoreTestingRecoveryPointSelection>
    RestoreTestingPlanForGet& WithRecoveryPointSelection(RecoveryPointSelectionT&& value) { SetRecoveryPointSelection(std::forward<RecoveryPointSelectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a restore testing
     * plan.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanArn() const { return m_restoreTestingPlanArn; }
    inline bool RestoreTestingPlanArnHasBeenSet() const { return m_restoreTestingPlanArnHasBeenSet; }
    template<typename RestoreTestingPlanArnT = Aws::String>
    void SetRestoreTestingPlanArn(RestoreTestingPlanArnT&& value) { m_restoreTestingPlanArnHasBeenSet = true; m_restoreTestingPlanArn = std::forward<RestoreTestingPlanArnT>(value); }
    template<typename RestoreTestingPlanArnT = Aws::String>
    RestoreTestingPlanForGet& WithRestoreTestingPlanArn(RestoreTestingPlanArnT&& value) { SetRestoreTestingPlanArn(std::forward<RestoreTestingPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The restore testing plan name.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const { return m_restoreTestingPlanName; }
    inline bool RestoreTestingPlanNameHasBeenSet() const { return m_restoreTestingPlanNameHasBeenSet; }
    template<typename RestoreTestingPlanNameT = Aws::String>
    void SetRestoreTestingPlanName(RestoreTestingPlanNameT&& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = std::forward<RestoreTestingPlanNameT>(value); }
    template<typename RestoreTestingPlanNameT = Aws::String>
    RestoreTestingPlanForGet& WithRestoreTestingPlanName(RestoreTestingPlanNameT&& value) { SetRestoreTestingPlanName(std::forward<RestoreTestingPlanNameT>(value)); return *this;}
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
    RestoreTestingPlanForGet& WithScheduleExpression(ScheduleExpressionT&& value) { SetScheduleExpression(std::forward<ScheduleExpressionT>(value)); return *this;}
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
    RestoreTestingPlanForGet& WithScheduleExpressionTimezone(ScheduleExpressionTimezoneT&& value) { SetScheduleExpressionTimezone(std::forward<ScheduleExpressionTimezoneT>(value)); return *this;}
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
    inline RestoreTestingPlanForGet& WithStartWindowHours(int value) { SetStartWindowHours(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastExecutionTime{};
    bool m_lastExecutionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
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

    int m_startWindowHours{0};
    bool m_startWindowHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
