﻿/*
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
#include <aws/medialive/model/Scte35ReturnToNetworkScheduleActionSettings.h>
#include <aws/medialive/model/Scte35SpliceInsertScheduleActionSettings.h>
#include <aws/medialive/model/Scte35TimeSignalScheduleActionSettings.h>
#include <aws/medialive/model/StaticImageActivateScheduleActionSettings.h>
#include <aws/medialive/model/StaticImageDeactivateScheduleActionSettings.h>
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
   * Settings for a single schedule action.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API ScheduleActionSettings
  {
  public:
    ScheduleActionSettings();
    ScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    ScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * SCTE-35 Return to Network Settings
     */
    inline const Scte35ReturnToNetworkScheduleActionSettings& GetScte35ReturnToNetworkSettings() const{ return m_scte35ReturnToNetworkSettings; }

    /**
     * SCTE-35 Return to Network Settings
     */
    inline void SetScte35ReturnToNetworkSettings(const Scte35ReturnToNetworkScheduleActionSettings& value) { m_scte35ReturnToNetworkSettingsHasBeenSet = true; m_scte35ReturnToNetworkSettings = value; }

    /**
     * SCTE-35 Return to Network Settings
     */
    inline void SetScte35ReturnToNetworkSettings(Scte35ReturnToNetworkScheduleActionSettings&& value) { m_scte35ReturnToNetworkSettingsHasBeenSet = true; m_scte35ReturnToNetworkSettings = std::move(value); }

    /**
     * SCTE-35 Return to Network Settings
     */
    inline ScheduleActionSettings& WithScte35ReturnToNetworkSettings(const Scte35ReturnToNetworkScheduleActionSettings& value) { SetScte35ReturnToNetworkSettings(value); return *this;}

    /**
     * SCTE-35 Return to Network Settings
     */
    inline ScheduleActionSettings& WithScte35ReturnToNetworkSettings(Scte35ReturnToNetworkScheduleActionSettings&& value) { SetScte35ReturnToNetworkSettings(std::move(value)); return *this;}


    /**
     * SCTE-35 Splice Insert Settings
     */
    inline const Scte35SpliceInsertScheduleActionSettings& GetScte35SpliceInsertSettings() const{ return m_scte35SpliceInsertSettings; }

    /**
     * SCTE-35 Splice Insert Settings
     */
    inline void SetScte35SpliceInsertSettings(const Scte35SpliceInsertScheduleActionSettings& value) { m_scte35SpliceInsertSettingsHasBeenSet = true; m_scte35SpliceInsertSettings = value; }

    /**
     * SCTE-35 Splice Insert Settings
     */
    inline void SetScte35SpliceInsertSettings(Scte35SpliceInsertScheduleActionSettings&& value) { m_scte35SpliceInsertSettingsHasBeenSet = true; m_scte35SpliceInsertSettings = std::move(value); }

    /**
     * SCTE-35 Splice Insert Settings
     */
    inline ScheduleActionSettings& WithScte35SpliceInsertSettings(const Scte35SpliceInsertScheduleActionSettings& value) { SetScte35SpliceInsertSettings(value); return *this;}

    /**
     * SCTE-35 Splice Insert Settings
     */
    inline ScheduleActionSettings& WithScte35SpliceInsertSettings(Scte35SpliceInsertScheduleActionSettings&& value) { SetScte35SpliceInsertSettings(std::move(value)); return *this;}


    /**
     * SCTE-35 Time Signal Settings
     */
    inline const Scte35TimeSignalScheduleActionSettings& GetScte35TimeSignalSettings() const{ return m_scte35TimeSignalSettings; }

    /**
     * SCTE-35 Time Signal Settings
     */
    inline void SetScte35TimeSignalSettings(const Scte35TimeSignalScheduleActionSettings& value) { m_scte35TimeSignalSettingsHasBeenSet = true; m_scte35TimeSignalSettings = value; }

    /**
     * SCTE-35 Time Signal Settings
     */
    inline void SetScte35TimeSignalSettings(Scte35TimeSignalScheduleActionSettings&& value) { m_scte35TimeSignalSettingsHasBeenSet = true; m_scte35TimeSignalSettings = std::move(value); }

    /**
     * SCTE-35 Time Signal Settings
     */
    inline ScheduleActionSettings& WithScte35TimeSignalSettings(const Scte35TimeSignalScheduleActionSettings& value) { SetScte35TimeSignalSettings(value); return *this;}

    /**
     * SCTE-35 Time Signal Settings
     */
    inline ScheduleActionSettings& WithScte35TimeSignalSettings(Scte35TimeSignalScheduleActionSettings&& value) { SetScte35TimeSignalSettings(std::move(value)); return *this;}


    /**
     * Static Image Activate
     */
    inline const StaticImageActivateScheduleActionSettings& GetStaticImageActivateSettings() const{ return m_staticImageActivateSettings; }

    /**
     * Static Image Activate
     */
    inline void SetStaticImageActivateSettings(const StaticImageActivateScheduleActionSettings& value) { m_staticImageActivateSettingsHasBeenSet = true; m_staticImageActivateSettings = value; }

    /**
     * Static Image Activate
     */
    inline void SetStaticImageActivateSettings(StaticImageActivateScheduleActionSettings&& value) { m_staticImageActivateSettingsHasBeenSet = true; m_staticImageActivateSettings = std::move(value); }

    /**
     * Static Image Activate
     */
    inline ScheduleActionSettings& WithStaticImageActivateSettings(const StaticImageActivateScheduleActionSettings& value) { SetStaticImageActivateSettings(value); return *this;}

    /**
     * Static Image Activate
     */
    inline ScheduleActionSettings& WithStaticImageActivateSettings(StaticImageActivateScheduleActionSettings&& value) { SetStaticImageActivateSettings(std::move(value)); return *this;}


    /**
     * Static Image Deactivate
     */
    inline const StaticImageDeactivateScheduleActionSettings& GetStaticImageDeactivateSettings() const{ return m_staticImageDeactivateSettings; }

    /**
     * Static Image Deactivate
     */
    inline void SetStaticImageDeactivateSettings(const StaticImageDeactivateScheduleActionSettings& value) { m_staticImageDeactivateSettingsHasBeenSet = true; m_staticImageDeactivateSettings = value; }

    /**
     * Static Image Deactivate
     */
    inline void SetStaticImageDeactivateSettings(StaticImageDeactivateScheduleActionSettings&& value) { m_staticImageDeactivateSettingsHasBeenSet = true; m_staticImageDeactivateSettings = std::move(value); }

    /**
     * Static Image Deactivate
     */
    inline ScheduleActionSettings& WithStaticImageDeactivateSettings(const StaticImageDeactivateScheduleActionSettings& value) { SetStaticImageDeactivateSettings(value); return *this;}

    /**
     * Static Image Deactivate
     */
    inline ScheduleActionSettings& WithStaticImageDeactivateSettings(StaticImageDeactivateScheduleActionSettings&& value) { SetStaticImageDeactivateSettings(std::move(value)); return *this;}

  private:

    Scte35ReturnToNetworkScheduleActionSettings m_scte35ReturnToNetworkSettings;
    bool m_scte35ReturnToNetworkSettingsHasBeenSet;

    Scte35SpliceInsertScheduleActionSettings m_scte35SpliceInsertSettings;
    bool m_scte35SpliceInsertSettingsHasBeenSet;

    Scte35TimeSignalScheduleActionSettings m_scte35TimeSignalSettings;
    bool m_scte35TimeSignalSettingsHasBeenSet;

    StaticImageActivateScheduleActionSettings m_staticImageActivateSettings;
    bool m_staticImageActivateSettingsHasBeenSet;

    StaticImageDeactivateScheduleActionSettings m_staticImageDeactivateSettings;
    bool m_staticImageDeactivateSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
