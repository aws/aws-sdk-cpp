/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/RefreshScheduleFrequency.h>
#include <aws/cloudtrail/model/RefreshScheduleStatus.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p> The schedule for a dashboard refresh. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/RefreshSchedule">AWS
   * API Reference</a></p>
   */
  class RefreshSchedule
  {
  public:
    AWS_CLOUDTRAIL_API RefreshSchedule();
    AWS_CLOUDTRAIL_API RefreshSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API RefreshSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The frequency at which you want the dashboard refreshed. </p>
     */
    inline const RefreshScheduleFrequency& GetFrequency() const{ return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(const RefreshScheduleFrequency& value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline void SetFrequency(RefreshScheduleFrequency&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }
    inline RefreshSchedule& WithFrequency(const RefreshScheduleFrequency& value) { SetFrequency(value); return *this;}
    inline RefreshSchedule& WithFrequency(RefreshScheduleFrequency&& value) { SetFrequency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether the refresh schedule is enabled. Set the value to
     * <code>ENABLED</code> to enable the refresh schedule, or to <code>DISABLED</code>
     * to turn off the refresh schedule. </p>
     */
    inline const RefreshScheduleStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RefreshScheduleStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RefreshScheduleStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RefreshSchedule& WithStatus(const RefreshScheduleStatus& value) { SetStatus(value); return *this;}
    inline RefreshSchedule& WithStatus(RefreshScheduleStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time of day in UTC to run the schedule; for hourly only refer to
     * minutes; default is 00:00. </p>
     */
    inline const Aws::String& GetTimeOfDay() const{ return m_timeOfDay; }
    inline bool TimeOfDayHasBeenSet() const { return m_timeOfDayHasBeenSet; }
    inline void SetTimeOfDay(const Aws::String& value) { m_timeOfDayHasBeenSet = true; m_timeOfDay = value; }
    inline void SetTimeOfDay(Aws::String&& value) { m_timeOfDayHasBeenSet = true; m_timeOfDay = std::move(value); }
    inline void SetTimeOfDay(const char* value) { m_timeOfDayHasBeenSet = true; m_timeOfDay.assign(value); }
    inline RefreshSchedule& WithTimeOfDay(const Aws::String& value) { SetTimeOfDay(value); return *this;}
    inline RefreshSchedule& WithTimeOfDay(Aws::String&& value) { SetTimeOfDay(std::move(value)); return *this;}
    inline RefreshSchedule& WithTimeOfDay(const char* value) { SetTimeOfDay(value); return *this;}
    ///@}
  private:

    RefreshScheduleFrequency m_frequency;
    bool m_frequencyHasBeenSet = false;

    RefreshScheduleStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_timeOfDay;
    bool m_timeOfDayHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
