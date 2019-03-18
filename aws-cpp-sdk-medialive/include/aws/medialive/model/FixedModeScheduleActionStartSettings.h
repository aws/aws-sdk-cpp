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
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Start time for the action.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FixedModeScheduleActionStartSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API FixedModeScheduleActionStartSettings
  {
  public:
    FixedModeScheduleActionStartSettings();
    FixedModeScheduleActionStartSettings(Aws::Utils::Json::JsonView jsonValue);
    FixedModeScheduleActionStartSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Start time for the action to start in the channel. (Not the time for the action
     * to be added to the schedule: actions are always added to the schedule
     * immediately.) UTC format: yyyy-mm-ddThh:mm:ss.nnnZ. All the letters are digits
     * (for example, mm might be 01) except for the two constants "T" for time and "Z"
     * for "UTC format".
     */
    inline const Aws::String& GetTime() const{ return m_time; }

    /**
     * Start time for the action to start in the channel. (Not the time for the action
     * to be added to the schedule: actions are always added to the schedule
     * immediately.) UTC format: yyyy-mm-ddThh:mm:ss.nnnZ. All the letters are digits
     * (for example, mm might be 01) except for the two constants "T" for time and "Z"
     * for "UTC format".
     */
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }

    /**
     * Start time for the action to start in the channel. (Not the time for the action
     * to be added to the schedule: actions are always added to the schedule
     * immediately.) UTC format: yyyy-mm-ddThh:mm:ss.nnnZ. All the letters are digits
     * (for example, mm might be 01) except for the two constants "T" for time and "Z"
     * for "UTC format".
     */
    inline void SetTime(const Aws::String& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * Start time for the action to start in the channel. (Not the time for the action
     * to be added to the schedule: actions are always added to the schedule
     * immediately.) UTC format: yyyy-mm-ddThh:mm:ss.nnnZ. All the letters are digits
     * (for example, mm might be 01) except for the two constants "T" for time and "Z"
     * for "UTC format".
     */
    inline void SetTime(Aws::String&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }

    /**
     * Start time for the action to start in the channel. (Not the time for the action
     * to be added to the schedule: actions are always added to the schedule
     * immediately.) UTC format: yyyy-mm-ddThh:mm:ss.nnnZ. All the letters are digits
     * (for example, mm might be 01) except for the two constants "T" for time and "Z"
     * for "UTC format".
     */
    inline void SetTime(const char* value) { m_timeHasBeenSet = true; m_time.assign(value); }

    /**
     * Start time for the action to start in the channel. (Not the time for the action
     * to be added to the schedule: actions are always added to the schedule
     * immediately.) UTC format: yyyy-mm-ddThh:mm:ss.nnnZ. All the letters are digits
     * (for example, mm might be 01) except for the two constants "T" for time and "Z"
     * for "UTC format".
     */
    inline FixedModeScheduleActionStartSettings& WithTime(const Aws::String& value) { SetTime(value); return *this;}

    /**
     * Start time for the action to start in the channel. (Not the time for the action
     * to be added to the schedule: actions are always added to the schedule
     * immediately.) UTC format: yyyy-mm-ddThh:mm:ss.nnnZ. All the letters are digits
     * (for example, mm might be 01) except for the two constants "T" for time and "Z"
     * for "UTC format".
     */
    inline FixedModeScheduleActionStartSettings& WithTime(Aws::String&& value) { SetTime(std::move(value)); return *this;}

    /**
     * Start time for the action to start in the channel. (Not the time for the action
     * to be added to the schedule: actions are always added to the schedule
     * immediately.) UTC format: yyyy-mm-ddThh:mm:ss.nnnZ. All the letters are digits
     * (for example, mm might be 01) except for the two constants "T" for time and "Z"
     * for "UTC format".
     */
    inline FixedModeScheduleActionStartSettings& WithTime(const char* value) { SetTime(value); return *this;}

  private:

    Aws::String m_time;
    bool m_timeHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
