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
#include <aws/medialive/model/ScheduleActionSettings.h>
#include <aws/medialive/model/ScheduleActionStartSettings.h>
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
   * Contains information on a single schedule action.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ScheduleAction">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API ScheduleAction
  {
  public:
    ScheduleAction();
    ScheduleAction(Aws::Utils::Json::JsonView jsonValue);
    ScheduleAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The name of the action, must be unique within the schedule. This name provides
     * the main reference to an action once it is added to the schedule. A name is
     * unique if it is no longer in the schedule. The schedule is automatically cleaned
     * up to remove actions with a start time of more than 1 hour ago (approximately)
     * so at that point a name can be reused.
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * The name of the action, must be unique within the schedule. This name provides
     * the main reference to an action once it is added to the schedule. A name is
     * unique if it is no longer in the schedule. The schedule is automatically cleaned
     * up to remove actions with a start time of more than 1 hour ago (approximately)
     * so at that point a name can be reused.
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * The name of the action, must be unique within the schedule. This name provides
     * the main reference to an action once it is added to the schedule. A name is
     * unique if it is no longer in the schedule. The schedule is automatically cleaned
     * up to remove actions with a start time of more than 1 hour ago (approximately)
     * so at that point a name can be reused.
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * The name of the action, must be unique within the schedule. This name provides
     * the main reference to an action once it is added to the schedule. A name is
     * unique if it is no longer in the schedule. The schedule is automatically cleaned
     * up to remove actions with a start time of more than 1 hour ago (approximately)
     * so at that point a name can be reused.
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * The name of the action, must be unique within the schedule. This name provides
     * the main reference to an action once it is added to the schedule. A name is
     * unique if it is no longer in the schedule. The schedule is automatically cleaned
     * up to remove actions with a start time of more than 1 hour ago (approximately)
     * so at that point a name can be reused.
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * The name of the action, must be unique within the schedule. This name provides
     * the main reference to an action once it is added to the schedule. A name is
     * unique if it is no longer in the schedule. The schedule is automatically cleaned
     * up to remove actions with a start time of more than 1 hour ago (approximately)
     * so at that point a name can be reused.
     */
    inline ScheduleAction& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * The name of the action, must be unique within the schedule. This name provides
     * the main reference to an action once it is added to the schedule. A name is
     * unique if it is no longer in the schedule. The schedule is automatically cleaned
     * up to remove actions with a start time of more than 1 hour ago (approximately)
     * so at that point a name can be reused.
     */
    inline ScheduleAction& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * The name of the action, must be unique within the schedule. This name provides
     * the main reference to an action once it is added to the schedule. A name is
     * unique if it is no longer in the schedule. The schedule is automatically cleaned
     * up to remove actions with a start time of more than 1 hour ago (approximately)
     * so at that point a name can be reused.
     */
    inline ScheduleAction& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * Settings for this schedule action.
     */
    inline const ScheduleActionSettings& GetScheduleActionSettings() const{ return m_scheduleActionSettings; }

    /**
     * Settings for this schedule action.
     */
    inline bool ScheduleActionSettingsHasBeenSet() const { return m_scheduleActionSettingsHasBeenSet; }

    /**
     * Settings for this schedule action.
     */
    inline void SetScheduleActionSettings(const ScheduleActionSettings& value) { m_scheduleActionSettingsHasBeenSet = true; m_scheduleActionSettings = value; }

    /**
     * Settings for this schedule action.
     */
    inline void SetScheduleActionSettings(ScheduleActionSettings&& value) { m_scheduleActionSettingsHasBeenSet = true; m_scheduleActionSettings = std::move(value); }

    /**
     * Settings for this schedule action.
     */
    inline ScheduleAction& WithScheduleActionSettings(const ScheduleActionSettings& value) { SetScheduleActionSettings(value); return *this;}

    /**
     * Settings for this schedule action.
     */
    inline ScheduleAction& WithScheduleActionSettings(ScheduleActionSettings&& value) { SetScheduleActionSettings(std::move(value)); return *this;}


    /**
     * The time for the action to start in the channel.
     */
    inline const ScheduleActionStartSettings& GetScheduleActionStartSettings() const{ return m_scheduleActionStartSettings; }

    /**
     * The time for the action to start in the channel.
     */
    inline bool ScheduleActionStartSettingsHasBeenSet() const { return m_scheduleActionStartSettingsHasBeenSet; }

    /**
     * The time for the action to start in the channel.
     */
    inline void SetScheduleActionStartSettings(const ScheduleActionStartSettings& value) { m_scheduleActionStartSettingsHasBeenSet = true; m_scheduleActionStartSettings = value; }

    /**
     * The time for the action to start in the channel.
     */
    inline void SetScheduleActionStartSettings(ScheduleActionStartSettings&& value) { m_scheduleActionStartSettingsHasBeenSet = true; m_scheduleActionStartSettings = std::move(value); }

    /**
     * The time for the action to start in the channel.
     */
    inline ScheduleAction& WithScheduleActionStartSettings(const ScheduleActionStartSettings& value) { SetScheduleActionStartSettings(value); return *this;}

    /**
     * The time for the action to start in the channel.
     */
    inline ScheduleAction& WithScheduleActionStartSettings(ScheduleActionStartSettings&& value) { SetScheduleActionStartSettings(std::move(value)); return *this;}

  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet;

    ScheduleActionSettings m_scheduleActionSettings;
    bool m_scheduleActionSettingsHasBeenSet;

    ScheduleActionStartSettings m_scheduleActionStartSettings;
    bool m_scheduleActionStartSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
