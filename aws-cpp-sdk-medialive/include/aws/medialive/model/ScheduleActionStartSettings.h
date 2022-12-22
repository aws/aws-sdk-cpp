/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/FixedModeScheduleActionStartSettings.h>
#include <aws/medialive/model/FollowModeScheduleActionStartSettings.h>
#include <aws/medialive/model/ImmediateModeScheduleActionStartSettings.h>
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
   * Settings to specify when an action should occur. Only one of the options must be
   * selected.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ScheduleActionStartSettings">AWS
   * API Reference</a></p>
   */
  class ScheduleActionStartSettings
  {
  public:
    AWS_MEDIALIVE_API ScheduleActionStartSettings();
    AWS_MEDIALIVE_API ScheduleActionStartSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ScheduleActionStartSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Option for specifying the start time for an action.
     */
    inline const FixedModeScheduleActionStartSettings& GetFixedModeScheduleActionStartSettings() const{ return m_fixedModeScheduleActionStartSettings; }

    /**
     * Option for specifying the start time for an action.
     */
    inline bool FixedModeScheduleActionStartSettingsHasBeenSet() const { return m_fixedModeScheduleActionStartSettingsHasBeenSet; }

    /**
     * Option for specifying the start time for an action.
     */
    inline void SetFixedModeScheduleActionStartSettings(const FixedModeScheduleActionStartSettings& value) { m_fixedModeScheduleActionStartSettingsHasBeenSet = true; m_fixedModeScheduleActionStartSettings = value; }

    /**
     * Option for specifying the start time for an action.
     */
    inline void SetFixedModeScheduleActionStartSettings(FixedModeScheduleActionStartSettings&& value) { m_fixedModeScheduleActionStartSettingsHasBeenSet = true; m_fixedModeScheduleActionStartSettings = std::move(value); }

    /**
     * Option for specifying the start time for an action.
     */
    inline ScheduleActionStartSettings& WithFixedModeScheduleActionStartSettings(const FixedModeScheduleActionStartSettings& value) { SetFixedModeScheduleActionStartSettings(value); return *this;}

    /**
     * Option for specifying the start time for an action.
     */
    inline ScheduleActionStartSettings& WithFixedModeScheduleActionStartSettings(FixedModeScheduleActionStartSettings&& value) { SetFixedModeScheduleActionStartSettings(std::move(value)); return *this;}


    /**
     * Option for specifying an action as relative to another action.
     */
    inline const FollowModeScheduleActionStartSettings& GetFollowModeScheduleActionStartSettings() const{ return m_followModeScheduleActionStartSettings; }

    /**
     * Option for specifying an action as relative to another action.
     */
    inline bool FollowModeScheduleActionStartSettingsHasBeenSet() const { return m_followModeScheduleActionStartSettingsHasBeenSet; }

    /**
     * Option for specifying an action as relative to another action.
     */
    inline void SetFollowModeScheduleActionStartSettings(const FollowModeScheduleActionStartSettings& value) { m_followModeScheduleActionStartSettingsHasBeenSet = true; m_followModeScheduleActionStartSettings = value; }

    /**
     * Option for specifying an action as relative to another action.
     */
    inline void SetFollowModeScheduleActionStartSettings(FollowModeScheduleActionStartSettings&& value) { m_followModeScheduleActionStartSettingsHasBeenSet = true; m_followModeScheduleActionStartSettings = std::move(value); }

    /**
     * Option for specifying an action as relative to another action.
     */
    inline ScheduleActionStartSettings& WithFollowModeScheduleActionStartSettings(const FollowModeScheduleActionStartSettings& value) { SetFollowModeScheduleActionStartSettings(value); return *this;}

    /**
     * Option for specifying an action as relative to another action.
     */
    inline ScheduleActionStartSettings& WithFollowModeScheduleActionStartSettings(FollowModeScheduleActionStartSettings&& value) { SetFollowModeScheduleActionStartSettings(std::move(value)); return *this;}


    /**
     * Option for specifying an action that should be applied immediately.
     */
    inline const ImmediateModeScheduleActionStartSettings& GetImmediateModeScheduleActionStartSettings() const{ return m_immediateModeScheduleActionStartSettings; }

    /**
     * Option for specifying an action that should be applied immediately.
     */
    inline bool ImmediateModeScheduleActionStartSettingsHasBeenSet() const { return m_immediateModeScheduleActionStartSettingsHasBeenSet; }

    /**
     * Option for specifying an action that should be applied immediately.
     */
    inline void SetImmediateModeScheduleActionStartSettings(const ImmediateModeScheduleActionStartSettings& value) { m_immediateModeScheduleActionStartSettingsHasBeenSet = true; m_immediateModeScheduleActionStartSettings = value; }

    /**
     * Option for specifying an action that should be applied immediately.
     */
    inline void SetImmediateModeScheduleActionStartSettings(ImmediateModeScheduleActionStartSettings&& value) { m_immediateModeScheduleActionStartSettingsHasBeenSet = true; m_immediateModeScheduleActionStartSettings = std::move(value); }

    /**
     * Option for specifying an action that should be applied immediately.
     */
    inline ScheduleActionStartSettings& WithImmediateModeScheduleActionStartSettings(const ImmediateModeScheduleActionStartSettings& value) { SetImmediateModeScheduleActionStartSettings(value); return *this;}

    /**
     * Option for specifying an action that should be applied immediately.
     */
    inline ScheduleActionStartSettings& WithImmediateModeScheduleActionStartSettings(ImmediateModeScheduleActionStartSettings&& value) { SetImmediateModeScheduleActionStartSettings(std::move(value)); return *this;}

  private:

    FixedModeScheduleActionStartSettings m_fixedModeScheduleActionStartSettings;
    bool m_fixedModeScheduleActionStartSettingsHasBeenSet = false;

    FollowModeScheduleActionStartSettings m_followModeScheduleActionStartSettings;
    bool m_followModeScheduleActionStartSettingsHasBeenSet = false;

    ImmediateModeScheduleActionStartSettings m_immediateModeScheduleActionStartSettings;
    bool m_immediateModeScheduleActionStartSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
