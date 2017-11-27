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
    ContainerSettings(const Aws::Utils::Json::JsonValue& jsonValue);
    ContainerSettings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ContainerType& GetContainer() const{ return m_container; }

    
    inline void SetContainer(const ContainerType& value) { m_containerHasBeenSet = true; m_container = value; }

    
    inline void SetContainer(ContainerType&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }

    
    inline ContainerSettings& WithContainer(const ContainerType& value) { SetContainer(value); return *this;}

    
    inline ContainerSettings& WithContainer(ContainerType&& value) { SetContainer(std::move(value)); return *this;}


    
    inline const F4vSettings& GetF4vSettings() const{ return m_f4vSettings; }

    
    inline void SetF4vSettings(const F4vSettings& value) { m_f4vSettingsHasBeenSet = true; m_f4vSettings = value; }

    
    inline void SetF4vSettings(F4vSettings&& value) { m_f4vSettingsHasBeenSet = true; m_f4vSettings = std::move(value); }

    
    inline ContainerSettings& WithF4vSettings(const F4vSettings& value) { SetF4vSettings(value); return *this;}

    
    inline ContainerSettings& WithF4vSettings(F4vSettings&& value) { SetF4vSettings(std::move(value)); return *this;}


    
    inline const M2tsSettings& GetM2tsSettings() const{ return m_m2tsSettings; }

    
    inline void SetM2tsSettings(const M2tsSettings& value) { m_m2tsSettingsHasBeenSet = true; m_m2tsSettings = value; }

    
    inline void SetM2tsSettings(M2tsSettings&& value) { m_m2tsSettingsHasBeenSet = true; m_m2tsSettings = std::move(value); }

    
    inline ContainerSettings& WithM2tsSettings(const M2tsSettings& value) { SetM2tsSettings(value); return *this;}

    
    inline ContainerSettings& WithM2tsSettings(M2tsSettings&& value) { SetM2tsSettings(std::move(value)); return *this;}


    
    inline const M3u8Settings& GetM3u8Settings() const{ return m_m3u8Settings; }

    
    inline void SetM3u8Settings(const M3u8Settings& value) { m_m3u8SettingsHasBeenSet = true; m_m3u8Settings = value; }

    
    inline void SetM3u8Settings(M3u8Settings&& value) { m_m3u8SettingsHasBeenSet = true; m_m3u8Settings = std::move(value); }

    
    inline ContainerSettings& WithM3u8Settings(const M3u8Settings& value) { SetM3u8Settings(value); return *this;}

    
    inline ContainerSettings& WithM3u8Settings(M3u8Settings&& value) { SetM3u8Settings(std::move(value)); return *this;}


    
    inline const MovSettings& GetMovSettings() const{ return m_movSettings; }

    
    inline void SetMovSettings(const MovSettings& value) { m_movSettingsHasBeenSet = true; m_movSettings = value; }

    
    inline void SetMovSettings(MovSettings&& value) { m_movSettingsHasBeenSet = true; m_movSettings = std::move(value); }

    
    inline ContainerSettings& WithMovSettings(const MovSettings& value) { SetMovSettings(value); return *this;}

    
    inline ContainerSettings& WithMovSettings(MovSettings&& value) { SetMovSettings(std::move(value)); return *this;}


    
    inline const Mp4Settings& GetMp4Settings() const{ return m_mp4Settings; }

    
    inline void SetMp4Settings(const Mp4Settings& value) { m_mp4SettingsHasBeenSet = true; m_mp4Settings = value; }

    
    inline void SetMp4Settings(Mp4Settings&& value) { m_mp4SettingsHasBeenSet = true; m_mp4Settings = std::move(value); }

    
    inline ContainerSettings& WithMp4Settings(const Mp4Settings& value) { SetMp4Settings(value); return *this;}

    
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
