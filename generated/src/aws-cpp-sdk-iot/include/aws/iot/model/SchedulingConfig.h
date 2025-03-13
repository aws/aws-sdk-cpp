/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/JobEndBehavior.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/MaintenanceWindow.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Specifies the date and time that a job will begin the rollout of the job
   * document to all devices in the target group. Additionally, you can specify the
   * end behavior for each job execution when it reaches the scheduled end
   * time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SchedulingConfig">AWS
   * API Reference</a></p>
   */
  class SchedulingConfig
  {
  public:
    AWS_IOT_API SchedulingConfig() = default;
    AWS_IOT_API SchedulingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API SchedulingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time a job will begin rollout of the job document to all devices in the
     * target group for a job. The <code>startTime</code> can be scheduled up to a year
     * in advance and must be scheduled a minimum of thirty minutes from the current
     * time. The date and time format for the <code>startTime</code> is YYYY-MM-DD for
     * the date and HH:MM for the time.</p> <p>For more information on the syntax for
     * <code>startTime</code> when using an API command or the Command Line Interface,
     * see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>.</p>
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    SchedulingConfig& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time a job will stop rollout of the job document to all devices in the
     * target group for a job. The <code>endTime</code> must take place no later than
     * two years from the current time and be scheduled a minimum of thirty minutes
     * from the current time. The minimum duration between <code>startTime</code> and
     * <code>endTime</code> is thirty minutes. The maximum duration between
     * <code>startTime</code> and <code>endTime</code> is two years. The date and time
     * format for the <code>endTime</code> is YYYY-MM-DD for the date and HH:MM for the
     * time.</p> <p>For more information on the syntax for <code>endTime</code> when
     * using an API command or the Command Line Interface, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>.</p>
     */
    inline const Aws::String& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::String>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::String>
    SchedulingConfig& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end behavior for all job executions after a job reaches the
     * selected <code>endTime</code>. If <code>endTime</code> is not selected when
     * creating the job, then <code>endBehavior</code> does not apply.</p>
     */
    inline JobEndBehavior GetEndBehavior() const { return m_endBehavior; }
    inline bool EndBehaviorHasBeenSet() const { return m_endBehaviorHasBeenSet; }
    inline void SetEndBehavior(JobEndBehavior value) { m_endBehaviorHasBeenSet = true; m_endBehavior = value; }
    inline SchedulingConfig& WithEndBehavior(JobEndBehavior value) { SetEndBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional configuration within the <code>SchedulingConfig</code> to setup a
     * recurring maintenance window with a predetermined start time and duration for
     * the rollout of a job document to all devices in a target group for a job.</p>
     */
    inline const Aws::Vector<MaintenanceWindow>& GetMaintenanceWindows() const { return m_maintenanceWindows; }
    inline bool MaintenanceWindowsHasBeenSet() const { return m_maintenanceWindowsHasBeenSet; }
    template<typename MaintenanceWindowsT = Aws::Vector<MaintenanceWindow>>
    void SetMaintenanceWindows(MaintenanceWindowsT&& value) { m_maintenanceWindowsHasBeenSet = true; m_maintenanceWindows = std::forward<MaintenanceWindowsT>(value); }
    template<typename MaintenanceWindowsT = Aws::Vector<MaintenanceWindow>>
    SchedulingConfig& WithMaintenanceWindows(MaintenanceWindowsT&& value) { SetMaintenanceWindows(std::forward<MaintenanceWindowsT>(value)); return *this;}
    template<typename MaintenanceWindowsT = MaintenanceWindow>
    SchedulingConfig& AddMaintenanceWindows(MaintenanceWindowsT&& value) { m_maintenanceWindowsHasBeenSet = true; m_maintenanceWindows.emplace_back(std::forward<MaintenanceWindowsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;

    JobEndBehavior m_endBehavior{JobEndBehavior::NOT_SET};
    bool m_endBehaviorHasBeenSet = false;

    Aws::Vector<MaintenanceWindow> m_maintenanceWindows;
    bool m_maintenanceWindowsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
