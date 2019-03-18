/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes a time-based instance's auto scaling schedule. The schedule
   * consists of a set of key-value pairs.</p> <ul> <li> <p>The key is the time
   * period (a UTC hour) and must be an integer from 0 - 23.</p> </li> <li> <p>The
   * value indicates whether the instance should be online or offline for the
   * specified period, and must be set to "on" or "off"</p> </li> </ul> <p>The
   * default setting for all time periods is off, so you use the following parameters
   * primarily to specify the online periods. You don't have to explicitly specify
   * offline periods unless you want to change an online period to an offline
   * period.</p> <p>The following example specifies that the instance should be
   * online for four hours, from UTC 1200 - 1600. It will be off for the remainder of
   * the day.</p> <p> <code> { "12":"on", "13":"on", "14":"on", "15":"on" } </code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/WeeklyAutoScalingSchedule">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API WeeklyAutoScalingSchedule
  {
  public:
    WeeklyAutoScalingSchedule();
    WeeklyAutoScalingSchedule(Aws::Utils::Json::JsonView jsonValue);
    WeeklyAutoScalingSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The schedule for Monday.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMonday() const{ return m_monday; }

    /**
     * <p>The schedule for Monday.</p>
     */
    inline bool MondayHasBeenSet() const { return m_mondayHasBeenSet; }

    /**
     * <p>The schedule for Monday.</p>
     */
    inline void SetMonday(const Aws::Map<Aws::String, Aws::String>& value) { m_mondayHasBeenSet = true; m_monday = value; }

    /**
     * <p>The schedule for Monday.</p>
     */
    inline void SetMonday(Aws::Map<Aws::String, Aws::String>&& value) { m_mondayHasBeenSet = true; m_monday = std::move(value); }

    /**
     * <p>The schedule for Monday.</p>
     */
    inline WeeklyAutoScalingSchedule& WithMonday(const Aws::Map<Aws::String, Aws::String>& value) { SetMonday(value); return *this;}

    /**
     * <p>The schedule for Monday.</p>
     */
    inline WeeklyAutoScalingSchedule& WithMonday(Aws::Map<Aws::String, Aws::String>&& value) { SetMonday(std::move(value)); return *this;}

    /**
     * <p>The schedule for Monday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddMonday(const Aws::String& key, const Aws::String& value) { m_mondayHasBeenSet = true; m_monday.emplace(key, value); return *this; }

    /**
     * <p>The schedule for Monday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddMonday(Aws::String&& key, const Aws::String& value) { m_mondayHasBeenSet = true; m_monday.emplace(std::move(key), value); return *this; }

    /**
     * <p>The schedule for Monday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddMonday(const Aws::String& key, Aws::String&& value) { m_mondayHasBeenSet = true; m_monday.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The schedule for Monday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddMonday(Aws::String&& key, Aws::String&& value) { m_mondayHasBeenSet = true; m_monday.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The schedule for Monday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddMonday(const char* key, Aws::String&& value) { m_mondayHasBeenSet = true; m_monday.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The schedule for Monday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddMonday(Aws::String&& key, const char* value) { m_mondayHasBeenSet = true; m_monday.emplace(std::move(key), value); return *this; }

    /**
     * <p>The schedule for Monday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddMonday(const char* key, const char* value) { m_mondayHasBeenSet = true; m_monday.emplace(key, value); return *this; }


    /**
     * <p>The schedule for Tuesday.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTuesday() const{ return m_tuesday; }

    /**
     * <p>The schedule for Tuesday.</p>
     */
    inline bool TuesdayHasBeenSet() const { return m_tuesdayHasBeenSet; }

    /**
     * <p>The schedule for Tuesday.</p>
     */
    inline void SetTuesday(const Aws::Map<Aws::String, Aws::String>& value) { m_tuesdayHasBeenSet = true; m_tuesday = value; }

    /**
     * <p>The schedule for Tuesday.</p>
     */
    inline void SetTuesday(Aws::Map<Aws::String, Aws::String>&& value) { m_tuesdayHasBeenSet = true; m_tuesday = std::move(value); }

    /**
     * <p>The schedule for Tuesday.</p>
     */
    inline WeeklyAutoScalingSchedule& WithTuesday(const Aws::Map<Aws::String, Aws::String>& value) { SetTuesday(value); return *this;}

    /**
     * <p>The schedule for Tuesday.</p>
     */
    inline WeeklyAutoScalingSchedule& WithTuesday(Aws::Map<Aws::String, Aws::String>&& value) { SetTuesday(std::move(value)); return *this;}

    /**
     * <p>The schedule for Tuesday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddTuesday(const Aws::String& key, const Aws::String& value) { m_tuesdayHasBeenSet = true; m_tuesday.emplace(key, value); return *this; }

    /**
     * <p>The schedule for Tuesday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddTuesday(Aws::String&& key, const Aws::String& value) { m_tuesdayHasBeenSet = true; m_tuesday.emplace(std::move(key), value); return *this; }

    /**
     * <p>The schedule for Tuesday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddTuesday(const Aws::String& key, Aws::String&& value) { m_tuesdayHasBeenSet = true; m_tuesday.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The schedule for Tuesday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddTuesday(Aws::String&& key, Aws::String&& value) { m_tuesdayHasBeenSet = true; m_tuesday.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The schedule for Tuesday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddTuesday(const char* key, Aws::String&& value) { m_tuesdayHasBeenSet = true; m_tuesday.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The schedule for Tuesday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddTuesday(Aws::String&& key, const char* value) { m_tuesdayHasBeenSet = true; m_tuesday.emplace(std::move(key), value); return *this; }

    /**
     * <p>The schedule for Tuesday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddTuesday(const char* key, const char* value) { m_tuesdayHasBeenSet = true; m_tuesday.emplace(key, value); return *this; }


    /**
     * <p>The schedule for Wednesday.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetWednesday() const{ return m_wednesday; }

    /**
     * <p>The schedule for Wednesday.</p>
     */
    inline bool WednesdayHasBeenSet() const { return m_wednesdayHasBeenSet; }

    /**
     * <p>The schedule for Wednesday.</p>
     */
    inline void SetWednesday(const Aws::Map<Aws::String, Aws::String>& value) { m_wednesdayHasBeenSet = true; m_wednesday = value; }

    /**
     * <p>The schedule for Wednesday.</p>
     */
    inline void SetWednesday(Aws::Map<Aws::String, Aws::String>&& value) { m_wednesdayHasBeenSet = true; m_wednesday = std::move(value); }

    /**
     * <p>The schedule for Wednesday.</p>
     */
    inline WeeklyAutoScalingSchedule& WithWednesday(const Aws::Map<Aws::String, Aws::String>& value) { SetWednesday(value); return *this;}

    /**
     * <p>The schedule for Wednesday.</p>
     */
    inline WeeklyAutoScalingSchedule& WithWednesday(Aws::Map<Aws::String, Aws::String>&& value) { SetWednesday(std::move(value)); return *this;}

    /**
     * <p>The schedule for Wednesday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddWednesday(const Aws::String& key, const Aws::String& value) { m_wednesdayHasBeenSet = true; m_wednesday.emplace(key, value); return *this; }

    /**
     * <p>The schedule for Wednesday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddWednesday(Aws::String&& key, const Aws::String& value) { m_wednesdayHasBeenSet = true; m_wednesday.emplace(std::move(key), value); return *this; }

    /**
     * <p>The schedule for Wednesday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddWednesday(const Aws::String& key, Aws::String&& value) { m_wednesdayHasBeenSet = true; m_wednesday.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The schedule for Wednesday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddWednesday(Aws::String&& key, Aws::String&& value) { m_wednesdayHasBeenSet = true; m_wednesday.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The schedule for Wednesday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddWednesday(const char* key, Aws::String&& value) { m_wednesdayHasBeenSet = true; m_wednesday.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The schedule for Wednesday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddWednesday(Aws::String&& key, const char* value) { m_wednesdayHasBeenSet = true; m_wednesday.emplace(std::move(key), value); return *this; }

    /**
     * <p>The schedule for Wednesday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddWednesday(const char* key, const char* value) { m_wednesdayHasBeenSet = true; m_wednesday.emplace(key, value); return *this; }


    /**
     * <p>The schedule for Thursday.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetThursday() const{ return m_thursday; }

    /**
     * <p>The schedule for Thursday.</p>
     */
    inline bool ThursdayHasBeenSet() const { return m_thursdayHasBeenSet; }

    /**
     * <p>The schedule for Thursday.</p>
     */
    inline void SetThursday(const Aws::Map<Aws::String, Aws::String>& value) { m_thursdayHasBeenSet = true; m_thursday = value; }

    /**
     * <p>The schedule for Thursday.</p>
     */
    inline void SetThursday(Aws::Map<Aws::String, Aws::String>&& value) { m_thursdayHasBeenSet = true; m_thursday = std::move(value); }

    /**
     * <p>The schedule for Thursday.</p>
     */
    inline WeeklyAutoScalingSchedule& WithThursday(const Aws::Map<Aws::String, Aws::String>& value) { SetThursday(value); return *this;}

    /**
     * <p>The schedule for Thursday.</p>
     */
    inline WeeklyAutoScalingSchedule& WithThursday(Aws::Map<Aws::String, Aws::String>&& value) { SetThursday(std::move(value)); return *this;}

    /**
     * <p>The schedule for Thursday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddThursday(const Aws::String& key, const Aws::String& value) { m_thursdayHasBeenSet = true; m_thursday.emplace(key, value); return *this; }

    /**
     * <p>The schedule for Thursday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddThursday(Aws::String&& key, const Aws::String& value) { m_thursdayHasBeenSet = true; m_thursday.emplace(std::move(key), value); return *this; }

    /**
     * <p>The schedule for Thursday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddThursday(const Aws::String& key, Aws::String&& value) { m_thursdayHasBeenSet = true; m_thursday.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The schedule for Thursday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddThursday(Aws::String&& key, Aws::String&& value) { m_thursdayHasBeenSet = true; m_thursday.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The schedule for Thursday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddThursday(const char* key, Aws::String&& value) { m_thursdayHasBeenSet = true; m_thursday.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The schedule for Thursday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddThursday(Aws::String&& key, const char* value) { m_thursdayHasBeenSet = true; m_thursday.emplace(std::move(key), value); return *this; }

    /**
     * <p>The schedule for Thursday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddThursday(const char* key, const char* value) { m_thursdayHasBeenSet = true; m_thursday.emplace(key, value); return *this; }


    /**
     * <p>The schedule for Friday.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFriday() const{ return m_friday; }

    /**
     * <p>The schedule for Friday.</p>
     */
    inline bool FridayHasBeenSet() const { return m_fridayHasBeenSet; }

    /**
     * <p>The schedule for Friday.</p>
     */
    inline void SetFriday(const Aws::Map<Aws::String, Aws::String>& value) { m_fridayHasBeenSet = true; m_friday = value; }

    /**
     * <p>The schedule for Friday.</p>
     */
    inline void SetFriday(Aws::Map<Aws::String, Aws::String>&& value) { m_fridayHasBeenSet = true; m_friday = std::move(value); }

    /**
     * <p>The schedule for Friday.</p>
     */
    inline WeeklyAutoScalingSchedule& WithFriday(const Aws::Map<Aws::String, Aws::String>& value) { SetFriday(value); return *this;}

    /**
     * <p>The schedule for Friday.</p>
     */
    inline WeeklyAutoScalingSchedule& WithFriday(Aws::Map<Aws::String, Aws::String>&& value) { SetFriday(std::move(value)); return *this;}

    /**
     * <p>The schedule for Friday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddFriday(const Aws::String& key, const Aws::String& value) { m_fridayHasBeenSet = true; m_friday.emplace(key, value); return *this; }

    /**
     * <p>The schedule for Friday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddFriday(Aws::String&& key, const Aws::String& value) { m_fridayHasBeenSet = true; m_friday.emplace(std::move(key), value); return *this; }

    /**
     * <p>The schedule for Friday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddFriday(const Aws::String& key, Aws::String&& value) { m_fridayHasBeenSet = true; m_friday.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The schedule for Friday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddFriday(Aws::String&& key, Aws::String&& value) { m_fridayHasBeenSet = true; m_friday.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The schedule for Friday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddFriday(const char* key, Aws::String&& value) { m_fridayHasBeenSet = true; m_friday.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The schedule for Friday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddFriday(Aws::String&& key, const char* value) { m_fridayHasBeenSet = true; m_friday.emplace(std::move(key), value); return *this; }

    /**
     * <p>The schedule for Friday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddFriday(const char* key, const char* value) { m_fridayHasBeenSet = true; m_friday.emplace(key, value); return *this; }


    /**
     * <p>The schedule for Saturday.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSaturday() const{ return m_saturday; }

    /**
     * <p>The schedule for Saturday.</p>
     */
    inline bool SaturdayHasBeenSet() const { return m_saturdayHasBeenSet; }

    /**
     * <p>The schedule for Saturday.</p>
     */
    inline void SetSaturday(const Aws::Map<Aws::String, Aws::String>& value) { m_saturdayHasBeenSet = true; m_saturday = value; }

    /**
     * <p>The schedule for Saturday.</p>
     */
    inline void SetSaturday(Aws::Map<Aws::String, Aws::String>&& value) { m_saturdayHasBeenSet = true; m_saturday = std::move(value); }

    /**
     * <p>The schedule for Saturday.</p>
     */
    inline WeeklyAutoScalingSchedule& WithSaturday(const Aws::Map<Aws::String, Aws::String>& value) { SetSaturday(value); return *this;}

    /**
     * <p>The schedule for Saturday.</p>
     */
    inline WeeklyAutoScalingSchedule& WithSaturday(Aws::Map<Aws::String, Aws::String>&& value) { SetSaturday(std::move(value)); return *this;}

    /**
     * <p>The schedule for Saturday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddSaturday(const Aws::String& key, const Aws::String& value) { m_saturdayHasBeenSet = true; m_saturday.emplace(key, value); return *this; }

    /**
     * <p>The schedule for Saturday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddSaturday(Aws::String&& key, const Aws::String& value) { m_saturdayHasBeenSet = true; m_saturday.emplace(std::move(key), value); return *this; }

    /**
     * <p>The schedule for Saturday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddSaturday(const Aws::String& key, Aws::String&& value) { m_saturdayHasBeenSet = true; m_saturday.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The schedule for Saturday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddSaturday(Aws::String&& key, Aws::String&& value) { m_saturdayHasBeenSet = true; m_saturday.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The schedule for Saturday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddSaturday(const char* key, Aws::String&& value) { m_saturdayHasBeenSet = true; m_saturday.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The schedule for Saturday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddSaturday(Aws::String&& key, const char* value) { m_saturdayHasBeenSet = true; m_saturday.emplace(std::move(key), value); return *this; }

    /**
     * <p>The schedule for Saturday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddSaturday(const char* key, const char* value) { m_saturdayHasBeenSet = true; m_saturday.emplace(key, value); return *this; }


    /**
     * <p>The schedule for Sunday.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSunday() const{ return m_sunday; }

    /**
     * <p>The schedule for Sunday.</p>
     */
    inline bool SundayHasBeenSet() const { return m_sundayHasBeenSet; }

    /**
     * <p>The schedule for Sunday.</p>
     */
    inline void SetSunday(const Aws::Map<Aws::String, Aws::String>& value) { m_sundayHasBeenSet = true; m_sunday = value; }

    /**
     * <p>The schedule for Sunday.</p>
     */
    inline void SetSunday(Aws::Map<Aws::String, Aws::String>&& value) { m_sundayHasBeenSet = true; m_sunday = std::move(value); }

    /**
     * <p>The schedule for Sunday.</p>
     */
    inline WeeklyAutoScalingSchedule& WithSunday(const Aws::Map<Aws::String, Aws::String>& value) { SetSunday(value); return *this;}

    /**
     * <p>The schedule for Sunday.</p>
     */
    inline WeeklyAutoScalingSchedule& WithSunday(Aws::Map<Aws::String, Aws::String>&& value) { SetSunday(std::move(value)); return *this;}

    /**
     * <p>The schedule for Sunday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddSunday(const Aws::String& key, const Aws::String& value) { m_sundayHasBeenSet = true; m_sunday.emplace(key, value); return *this; }

    /**
     * <p>The schedule for Sunday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddSunday(Aws::String&& key, const Aws::String& value) { m_sundayHasBeenSet = true; m_sunday.emplace(std::move(key), value); return *this; }

    /**
     * <p>The schedule for Sunday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddSunday(const Aws::String& key, Aws::String&& value) { m_sundayHasBeenSet = true; m_sunday.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The schedule for Sunday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddSunday(Aws::String&& key, Aws::String&& value) { m_sundayHasBeenSet = true; m_sunday.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The schedule for Sunday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddSunday(const char* key, Aws::String&& value) { m_sundayHasBeenSet = true; m_sunday.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The schedule for Sunday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddSunday(Aws::String&& key, const char* value) { m_sundayHasBeenSet = true; m_sunday.emplace(std::move(key), value); return *this; }

    /**
     * <p>The schedule for Sunday.</p>
     */
    inline WeeklyAutoScalingSchedule& AddSunday(const char* key, const char* value) { m_sundayHasBeenSet = true; m_sunday.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_monday;
    bool m_mondayHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tuesday;
    bool m_tuesdayHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_wednesday;
    bool m_wednesdayHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_thursday;
    bool m_thursdayHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_friday;
    bool m_fridayHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_saturday;
    bool m_saturdayHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_sunday;
    bool m_sundayHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
