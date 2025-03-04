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
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskSchedulingConfig();
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskSchedulingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskSchedulingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the end behavior for all task executions after a task reaches the
     * selected <code>endTime</code>. If <code>endTime</code> is not selected when
     * creating the task, then <code>endBehavior</code> does not apply.</p>
     */
    inline const SchedulingConfigEndBehavior& GetEndBehavior() const{ return m_endBehavior; }
    inline bool EndBehaviorHasBeenSet() const { return m_endBehaviorHasBeenSet; }
    inline void SetEndBehavior(const SchedulingConfigEndBehavior& value) { m_endBehaviorHasBeenSet = true; m_endBehavior = value; }
    inline void SetEndBehavior(SchedulingConfigEndBehavior&& value) { m_endBehaviorHasBeenSet = true; m_endBehavior = std::move(value); }
    inline OtaTaskSchedulingConfig& WithEndBehavior(const SchedulingConfigEndBehavior& value) { SetEndBehavior(value); return *this;}
    inline OtaTaskSchedulingConfig& WithEndBehavior(SchedulingConfigEndBehavior&& value) { SetEndBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time an over-the-air (OTA) task will stop.</p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }
    inline OtaTaskSchedulingConfig& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}
    inline OtaTaskSchedulingConfig& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}
    inline OtaTaskSchedulingConfig& WithEndTime(const char* value) { SetEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maintenance window list for over-the-air (OTA) task scheduling config.</p>
     */
    inline const Aws::Vector<ScheduleMaintenanceWindow>& GetMaintenanceWindows() const{ return m_maintenanceWindows; }
    inline bool MaintenanceWindowsHasBeenSet() const { return m_maintenanceWindowsHasBeenSet; }
    inline void SetMaintenanceWindows(const Aws::Vector<ScheduleMaintenanceWindow>& value) { m_maintenanceWindowsHasBeenSet = true; m_maintenanceWindows = value; }
    inline void SetMaintenanceWindows(Aws::Vector<ScheduleMaintenanceWindow>&& value) { m_maintenanceWindowsHasBeenSet = true; m_maintenanceWindows = std::move(value); }
    inline OtaTaskSchedulingConfig& WithMaintenanceWindows(const Aws::Vector<ScheduleMaintenanceWindow>& value) { SetMaintenanceWindows(value); return *this;}
    inline OtaTaskSchedulingConfig& WithMaintenanceWindows(Aws::Vector<ScheduleMaintenanceWindow>&& value) { SetMaintenanceWindows(std::move(value)); return *this;}
    inline OtaTaskSchedulingConfig& AddMaintenanceWindows(const ScheduleMaintenanceWindow& value) { m_maintenanceWindowsHasBeenSet = true; m_maintenanceWindows.push_back(value); return *this; }
    inline OtaTaskSchedulingConfig& AddMaintenanceWindows(ScheduleMaintenanceWindow&& value) { m_maintenanceWindowsHasBeenSet = true; m_maintenanceWindows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time an over-the-air (OTA) task will start.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }
    inline OtaTaskSchedulingConfig& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}
    inline OtaTaskSchedulingConfig& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}
    inline OtaTaskSchedulingConfig& WithStartTime(const char* value) { SetStartTime(value); return *this;}
    ///@}
  private:

    SchedulingConfigEndBehavior m_endBehavior;
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
