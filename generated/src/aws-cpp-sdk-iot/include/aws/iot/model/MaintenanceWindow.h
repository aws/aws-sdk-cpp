/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>An optional configuration within the <code>SchedulingConfig</code> to setup a
   * recurring maintenance window with a predetermined start time and duration for
   * the rollout of a job document to all devices in a target group for a
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/MaintenanceWindow">AWS
   * API Reference</a></p>
   */
  class MaintenanceWindow
  {
  public:
    AWS_IOT_API MaintenanceWindow();
    AWS_IOT_API MaintenanceWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MaintenanceWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Displays the start time of the next maintenance window.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Displays the start time of the next maintenance window.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Displays the start time of the next maintenance window.</p>
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Displays the start time of the next maintenance window.</p>
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Displays the start time of the next maintenance window.</p>
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * <p>Displays the start time of the next maintenance window.</p>
     */
    inline MaintenanceWindow& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p>Displays the start time of the next maintenance window.</p>
     */
    inline MaintenanceWindow& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>Displays the start time of the next maintenance window.</p>
     */
    inline MaintenanceWindow& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * <p>Displays the duration of the next maintenance window.</p>
     */
    inline int GetDurationInMinutes() const{ return m_durationInMinutes; }

    /**
     * <p>Displays the duration of the next maintenance window.</p>
     */
    inline bool DurationInMinutesHasBeenSet() const { return m_durationInMinutesHasBeenSet; }

    /**
     * <p>Displays the duration of the next maintenance window.</p>
     */
    inline void SetDurationInMinutes(int value) { m_durationInMinutesHasBeenSet = true; m_durationInMinutes = value; }

    /**
     * <p>Displays the duration of the next maintenance window.</p>
     */
    inline MaintenanceWindow& WithDurationInMinutes(int value) { SetDurationInMinutes(value); return *this;}

  private:

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    int m_durationInMinutes;
    bool m_durationInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
