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
#include <aws/medialive/model/FixedModeScheduleActionStartSettings.h>
#include <aws/medialive/model/FollowModeScheduleActionStartSettings.h>
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
   * Settings to specify the start time for an action.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ScheduleActionStartSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API ScheduleActionStartSettings
  {
  public:
    ScheduleActionStartSettings();
    ScheduleActionStartSettings(Aws::Utils::Json::JsonView jsonValue);
    ScheduleActionStartSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Holds the start time for the action.
     */
    inline const FixedModeScheduleActionStartSettings& GetFixedModeScheduleActionStartSettings() const{ return m_fixedModeScheduleActionStartSettings; }

    /**
     * Holds the start time for the action.
     */
    inline bool FixedModeScheduleActionStartSettingsHasBeenSet() const { return m_fixedModeScheduleActionStartSettingsHasBeenSet; }

    /**
     * Holds the start time for the action.
     */
    inline void SetFixedModeScheduleActionStartSettings(const FixedModeScheduleActionStartSettings& value) { m_fixedModeScheduleActionStartSettingsHasBeenSet = true; m_fixedModeScheduleActionStartSettings = value; }

    /**
     * Holds the start time for the action.
     */
    inline void SetFixedModeScheduleActionStartSettings(FixedModeScheduleActionStartSettings&& value) { m_fixedModeScheduleActionStartSettingsHasBeenSet = true; m_fixedModeScheduleActionStartSettings = std::move(value); }

    /**
     * Holds the start time for the action.
     */
    inline ScheduleActionStartSettings& WithFixedModeScheduleActionStartSettings(const FixedModeScheduleActionStartSettings& value) { SetFixedModeScheduleActionStartSettings(value); return *this;}

    /**
     * Holds the start time for the action.
     */
    inline ScheduleActionStartSettings& WithFixedModeScheduleActionStartSettings(FixedModeScheduleActionStartSettings&& value) { SetFixedModeScheduleActionStartSettings(std::move(value)); return *this;}


    /**
     * Specifies an action to follow for scheduling this action.
     */
    inline const FollowModeScheduleActionStartSettings& GetFollowModeScheduleActionStartSettings() const{ return m_followModeScheduleActionStartSettings; }

    /**
     * Specifies an action to follow for scheduling this action.
     */
    inline bool FollowModeScheduleActionStartSettingsHasBeenSet() const { return m_followModeScheduleActionStartSettingsHasBeenSet; }

    /**
     * Specifies an action to follow for scheduling this action.
     */
    inline void SetFollowModeScheduleActionStartSettings(const FollowModeScheduleActionStartSettings& value) { m_followModeScheduleActionStartSettingsHasBeenSet = true; m_followModeScheduleActionStartSettings = value; }

    /**
     * Specifies an action to follow for scheduling this action.
     */
    inline void SetFollowModeScheduleActionStartSettings(FollowModeScheduleActionStartSettings&& value) { m_followModeScheduleActionStartSettingsHasBeenSet = true; m_followModeScheduleActionStartSettings = std::move(value); }

    /**
     * Specifies an action to follow for scheduling this action.
     */
    inline ScheduleActionStartSettings& WithFollowModeScheduleActionStartSettings(const FollowModeScheduleActionStartSettings& value) { SetFollowModeScheduleActionStartSettings(value); return *this;}

    /**
     * Specifies an action to follow for scheduling this action.
     */
    inline ScheduleActionStartSettings& WithFollowModeScheduleActionStartSettings(FollowModeScheduleActionStartSettings&& value) { SetFollowModeScheduleActionStartSettings(std::move(value)); return *this;}

  private:

    FixedModeScheduleActionStartSettings m_fixedModeScheduleActionStartSettings;
    bool m_fixedModeScheduleActionStartSettingsHasBeenSet;

    FollowModeScheduleActionStartSettings m_followModeScheduleActionStartSettings;
    bool m_followModeScheduleActionStartSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
