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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/ContainerType.h>
#include <aws/mediaconvert/model/F4vSettings.h>
#include <aws/mediaconvert/model/M2tsSettings.h>
#include <aws/mediaconvert/model/M3u8Settings.h>
#include <aws/mediaconvert/model/MovSettings.h>
#include <aws/mediaconvert/model/Mp4Settings.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Container specific settings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ContainerSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API ContainerSettings
  {
  public:
    ContainerSettings();
    ContainerSettings(Aws::Utils::Json::JsonView jsonValue);
    ContainerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Container for this output. Some containers require a container settings object.
     * If not specified, the default object will be created.
     */
    inline const ContainerType& GetContainer() const{ return m_container; }

    /**
     * Container for this output. Some containers require a container settings object.
     * If not specified, the default object will be created.
     */
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }

    /**
     * Container for this output. Some containers require a container settings object.
     * If not specified, the default object will be created.
     */
    inline void SetContainer(const ContainerType& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * Container for this output. Some containers require a container settings object.
     * If not specified, the default object will be created.
     */
    inline void SetContainer(ContainerType&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }

    /**
     * Container for this output. Some containers require a container settings object.
     * If not specified, the default object will be created.
     */
    inline ContainerSettings& WithContainer(const ContainerType& value) { SetContainer(value); return *this;}

    /**
     * Container for this output. Some containers require a container settings object.
     * If not specified, the default object will be created.
     */
    inline ContainerSettings& WithContainer(ContainerType&& value) { SetContainer(std::move(value)); return *this;}


    /**
     * Settings for F4v container
     */
    inline const F4vSettings& GetF4vSettings() const{ return m_f4vSettings; }

    /**
     * Settings for F4v container
     */
    inline bool F4vSettingsHasBeenSet() const { return m_f4vSettingsHasBeenSet; }

    /**
     * Settings for F4v container
     */
    inline void SetF4vSettings(const F4vSettings& value) { m_f4vSettingsHasBeenSet = true; m_f4vSettings = value; }

    /**
     * Settings for F4v container
     */
    inline void SetF4vSettings(F4vSettings&& value) { m_f4vSettingsHasBeenSet = true; m_f4vSettings = std::move(value); }

    /**
     * Settings for F4v container
     */
    inline ContainerSettings& WithF4vSettings(const F4vSettings& value) { SetF4vSettings(value); return *this;}

    /**
     * Settings for F4v container
     */
    inline ContainerSettings& WithF4vSettings(F4vSettings&& value) { SetF4vSettings(std::move(value)); return *this;}


    /**
     * MPEG-2 TS container settings. These apply to outputs in a File output group when
     * the output's container (ContainerType) is MPEG-2 Transport Stream (M2TS). In
     * these assets, data is organized by the program map table (PMT). Each transport
     * stream program contains subsets of data, including audio, video, and metadata.
     * Each of these subsets of data has a numerical label called a packet identifier
     * (PID). Each transport stream program corresponds to one MediaConvert output. The
     * PMT lists the types of data in a program along with their PID. Downstream
     * systems and players use the program map table to look up the PID for each type
     * of data it accesses and then uses the PIDs to locate specific data within the
     * asset.
     */
    inline const M2tsSettings& GetM2tsSettings() const{ return m_m2tsSettings; }

    /**
     * MPEG-2 TS container settings. These apply to outputs in a File output group when
     * the output's container (ContainerType) is MPEG-2 Transport Stream (M2TS). In
     * these assets, data is organized by the program map table (PMT). Each transport
     * stream program contains subsets of data, including audio, video, and metadata.
     * Each of these subsets of data has a numerical label called a packet identifier
     * (PID). Each transport stream program corresponds to one MediaConvert output. The
     * PMT lists the types of data in a program along with their PID. Downstream
     * systems and players use the program map table to look up the PID for each type
     * of data it accesses and then uses the PIDs to locate specific data within the
     * asset.
     */
    inline bool M2tsSettingsHasBeenSet() const { return m_m2tsSettingsHasBeenSet; }

    /**
     * MPEG-2 TS container settings. These apply to outputs in a File output group when
     * the output's container (ContainerType) is MPEG-2 Transport Stream (M2TS). In
     * these assets, data is organized by the program map table (PMT). Each transport
     * stream program contains subsets of data, including audio, video, and metadata.
     * Each of these subsets of data has a numerical label called a packet identifier
     * (PID). Each transport stream program corresponds to one MediaConvert output. The
     * PMT lists the types of data in a program along with their PID. Downstream
     * systems and players use the program map table to look up the PID for each type
     * of data it accesses and then uses the PIDs to locate specific data within the
     * asset.
     */
    inline void SetM2tsSettings(const M2tsSettings& value) { m_m2tsSettingsHasBeenSet = true; m_m2tsSettings = value; }

    /**
     * MPEG-2 TS container settings. These apply to outputs in a File output group when
     * the output's container (ContainerType) is MPEG-2 Transport Stream (M2TS). In
     * these assets, data is organized by the program map table (PMT). Each transport
     * stream program contains subsets of data, including audio, video, and metadata.
     * Each of these subsets of data has a numerical label called a packet identifier
     * (PID). Each transport stream program corresponds to one MediaConvert output. The
     * PMT lists the types of data in a program along with their PID. Downstream
     * systems and players use the program map table to look up the PID for each type
     * of data it accesses and then uses the PIDs to locate specific data within the
     * asset.
     */
    inline void SetM2tsSettings(M2tsSettings&& value) { m_m2tsSettingsHasBeenSet = true; m_m2tsSettings = std::move(value); }

    /**
     * MPEG-2 TS container settings. These apply to outputs in a File output group when
     * the output's container (ContainerType) is MPEG-2 Transport Stream (M2TS). In
     * these assets, data is organized by the program map table (PMT). Each transport
     * stream program contains subsets of data, including audio, video, and metadata.
     * Each of these subsets of data has a numerical label called a packet identifier
     * (PID). Each transport stream program corresponds to one MediaConvert output. The
     * PMT lists the types of data in a program along with their PID. Downstream
     * systems and players use the program map table to look up the PID for each type
     * of data it accesses and then uses the PIDs to locate specific data within the
     * asset.
     */
    inline ContainerSettings& WithM2tsSettings(const M2tsSettings& value) { SetM2tsSettings(value); return *this;}

    /**
     * MPEG-2 TS container settings. These apply to outputs in a File output group when
     * the output's container (ContainerType) is MPEG-2 Transport Stream (M2TS). In
     * these assets, data is organized by the program map table (PMT). Each transport
     * stream program contains subsets of data, including audio, video, and metadata.
     * Each of these subsets of data has a numerical label called a packet identifier
     * (PID). Each transport stream program corresponds to one MediaConvert output. The
     * PMT lists the types of data in a program along with their PID. Downstream
     * systems and players use the program map table to look up the PID for each type
     * of data it accesses and then uses the PIDs to locate specific data within the
     * asset.
     */
    inline ContainerSettings& WithM2tsSettings(M2tsSettings&& value) { SetM2tsSettings(std::move(value)); return *this;}


    /**
     * Settings for TS segments in HLS
     */
    inline const M3u8Settings& GetM3u8Settings() const{ return m_m3u8Settings; }

    /**
     * Settings for TS segments in HLS
     */
    inline bool M3u8SettingsHasBeenSet() const { return m_m3u8SettingsHasBeenSet; }

    /**
     * Settings for TS segments in HLS
     */
    inline void SetM3u8Settings(const M3u8Settings& value) { m_m3u8SettingsHasBeenSet = true; m_m3u8Settings = value; }

    /**
     * Settings for TS segments in HLS
     */
    inline void SetM3u8Settings(M3u8Settings&& value) { m_m3u8SettingsHasBeenSet = true; m_m3u8Settings = std::move(value); }

    /**
     * Settings for TS segments in HLS
     */
    inline ContainerSettings& WithM3u8Settings(const M3u8Settings& value) { SetM3u8Settings(value); return *this;}

    /**
     * Settings for TS segments in HLS
     */
    inline ContainerSettings& WithM3u8Settings(M3u8Settings&& value) { SetM3u8Settings(std::move(value)); return *this;}


    /**
     * Settings for MOV Container.
     */
    inline const MovSettings& GetMovSettings() const{ return m_movSettings; }

    /**
     * Settings for MOV Container.
     */
    inline bool MovSettingsHasBeenSet() const { return m_movSettingsHasBeenSet; }

    /**
     * Settings for MOV Container.
     */
    inline void SetMovSettings(const MovSettings& value) { m_movSettingsHasBeenSet = true; m_movSettings = value; }

    /**
     * Settings for MOV Container.
     */
    inline void SetMovSettings(MovSettings&& value) { m_movSettingsHasBeenSet = true; m_movSettings = std::move(value); }

    /**
     * Settings for MOV Container.
     */
    inline ContainerSettings& WithMovSettings(const MovSettings& value) { SetMovSettings(value); return *this;}

    /**
     * Settings for MOV Container.
     */
    inline ContainerSettings& WithMovSettings(MovSettings&& value) { SetMovSettings(std::move(value)); return *this;}


    /**
     * Settings for MP4 Container
     */
    inline const Mp4Settings& GetMp4Settings() const{ return m_mp4Settings; }

    /**
     * Settings for MP4 Container
     */
    inline bool Mp4SettingsHasBeenSet() const { return m_mp4SettingsHasBeenSet; }

    /**
     * Settings for MP4 Container
     */
    inline void SetMp4Settings(const Mp4Settings& value) { m_mp4SettingsHasBeenSet = true; m_mp4Settings = value; }

    /**
     * Settings for MP4 Container
     */
    inline void SetMp4Settings(Mp4Settings&& value) { m_mp4SettingsHasBeenSet = true; m_mp4Settings = std::move(value); }

    /**
     * Settings for MP4 Container
     */
    inline ContainerSettings& WithMp4Settings(const Mp4Settings& value) { SetMp4Settings(value); return *this;}

    /**
     * Settings for MP4 Container
     */
    inline ContainerSettings& WithMp4Settings(Mp4Settings&& value) { SetMp4Settings(std::move(value)); return *this;}

  private:

    ContainerType m_container;
    bool m_containerHasBeenSet;

    F4vSettings m_f4vSettings;
    bool m_f4vSettingsHasBeenSet;

    M2tsSettings m_m2tsSettings;
    bool m_m2tsSettingsHasBeenSet;

    M3u8Settings m_m3u8Settings;
    bool m_m3u8SettingsHasBeenSet;

    MovSettings m_movSettings;
    bool m_movSettingsHasBeenSet;

    Mp4Settings m_mp4Settings;
    bool m_mp4SettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
