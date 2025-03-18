/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/SchedulingConfigEndBehavior.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/model/ScheduleMaintenanceWindow.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Over-the-air (OTA) task scheduling config.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/OtaTaskSchedulingConfig">AWS
   * API Reference</a></p>
   */
  class OtaTaskSchedulingConfig
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskSchedulingConfig() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskSchedulingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskSchedulingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the end behavior for all task executions after a task reaches the
     * selected <code>endTime</code>. If <code>endTime</code> is not selected when
     * creating the task, then <code>endBehavior</code> does not apply.</p>
     */
    inline SchedulingConfigEndBehavior GetEndBehavior() const { return m_endBehavior; }
    inline bool EndBehaviorHasBeenSet() const { return m_endBehaviorHasBeenSet; }
    inline void SetEndBehavior(SchedulingConfigEndBehavior value) { m_endBehaviorHasBeenSet = true; m_endBehavior = value; }
    inline OtaTaskSchedulingConfig& WithEndBehavior(SchedulingConfigEndBehavior value) { SetEndBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time an over-the-air (OTA) task will stop.</p>
     */
    inline const Aws::String& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::String>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::String>
    OtaTaskSchedulingConfig& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maintenance window list for over-the-air (OTA) task scheduling config.</p>
     */
    inline const Aws::Vector<ScheduleMaintenanceWindow>& GetMaintenanceWindows() const { return m_maintenanceWindows; }
    inline bool MaintenanceWindowsHasBeenSet() const { return m_maintenanceWindowsHasBeenSet; }
    template<typename MaintenanceWindowsT = Aws::Vector<ScheduleMaintenanceWindow>>
    void SetMaintenanceWindows(MaintenanceWindowsT&& value) { m_maintenanceWindowsHasBeenSet = true; m_maintenanceWindows = std::forward<MaintenanceWindowsT>(value); }
    template<typename MaintenanceWindowsT = Aws::Vector<ScheduleMaintenanceWindow>>
    OtaTaskSchedulingConfig& WithMaintenanceWindows(MaintenanceWindowsT&& value) { SetMaintenanceWindows(std::forward<MaintenanceWindowsT>(value)); return *this;}
    template<typename MaintenanceWindowsT = ScheduleMaintenanceWindow>
    OtaTaskSchedulingConfig& AddMaintenanceWindows(MaintenanceWindowsT&& value) { m_maintenanceWindowsHasBeenSet = true; m_maintenanceWindows.emplace_back(std::forward<MaintenanceWindowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time an over-the-air (OTA) task will start.</p>
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    OtaTaskSchedulingConfig& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}
  private:

    SchedulingConfigEndBehavior m_endBehavior{SchedulingConfigEndBehavior::NOT_SET};
    bool m_endBehaviorHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Vector<ScheduleMaintenanceWindow> m_maintenanceWindows;
    bool m_maintenanceWindowsHasBeenSet = false;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
