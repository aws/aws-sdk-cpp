/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/Timezone.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the schedule of the data source runs.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ScheduleConfiguration">AWS
   * API Reference</a></p>
   */
  class ScheduleConfiguration
  {
  public:
    AWS_DATAZONE_API ScheduleConfiguration() = default;
    AWS_DATAZONE_API ScheduleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ScheduleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schedule of the data source runs.</p>
     */
    inline const Aws::String& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Aws::String>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Aws::String>
    ScheduleConfiguration& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timezone of the data source run. </p>
     */
    inline Timezone GetTimezone() const { return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    inline void SetTimezone(Timezone value) { m_timezoneHasBeenSet = true; m_timezone = value; }
    inline ScheduleConfiguration& WithTimezone(Timezone value) { SetTimezone(value); return *this;}
    ///@}
  private:

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet = false;

    Timezone m_timezone{Timezone::NOT_SET};
    bool m_timezoneHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
