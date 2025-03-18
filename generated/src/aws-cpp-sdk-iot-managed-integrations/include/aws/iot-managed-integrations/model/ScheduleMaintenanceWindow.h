/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure representing scheduling maintenance window.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ScheduleMaintenanceWindow">AWS
   * API Reference</a></p>
   */
  class ScheduleMaintenanceWindow
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ScheduleMaintenanceWindow() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API ScheduleMaintenanceWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API ScheduleMaintenanceWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Displays the duration of the next maintenance window.</p>
     */
    inline int GetDurationInMinutes() const { return m_durationInMinutes; }
    inline bool DurationInMinutesHasBeenSet() const { return m_durationInMinutesHasBeenSet; }
    inline void SetDurationInMinutes(int value) { m_durationInMinutesHasBeenSet = true; m_durationInMinutes = value; }
    inline ScheduleMaintenanceWindow& WithDurationInMinutes(int value) { SetDurationInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the start time of the next maintenance window.</p>
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    ScheduleMaintenanceWindow& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}
  private:

    int m_durationInMinutes{0};
    bool m_durationInMinutesHasBeenSet = false;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
