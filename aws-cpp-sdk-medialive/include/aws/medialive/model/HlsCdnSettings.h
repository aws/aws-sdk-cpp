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
#include <aws/medialive/model/HlsAkamaiSettings.h>
#include <aws/medialive/model/HlsBasicPutSettings.h>
#include <aws/medialive/model/HlsMediaStoreSettings.h>
#include <aws/medialive/model/HlsWebdavSettings.h>
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
   * Hls Cdn Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsCdnSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API HlsCdnSettings
  {
  public:
    HlsCdnSettings();
    HlsCdnSettings(Aws::Utils::Json::JsonView jsonValue);
    HlsCdnSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const HlsAkamaiSettings& GetHlsAkamaiSettings() const{ return m_hlsAkamaiSettings; }

    
    inline bool HlsAkamaiSettingsHasBeenSet() const { return m_hlsAkamaiSettingsHasBeenSet; }

    
    inline void SetHlsAkamaiSettings(const HlsAkamaiSettings& value) { m_hlsAkamaiSettingsHasBeenSet = true; m_hlsAkamaiSettings = value; }

    
    inline void SetHlsAkamaiSettings(HlsAkamaiSettings&& value) { m_hlsAkamaiSettingsHasBeenSet = true; m_hlsAkamaiSettings = std::move(value); }

    
    inline HlsCdnSettings& WithHlsAkamaiSettings(const HlsAkamaiSettings& value) { SetHlsAkamaiSettings(value); return *this;}

    
    inline HlsCdnSettings& WithHlsAkamaiSettings(HlsAkamaiSettings&& value) { SetHlsAkamaiSettings(std::move(value)); return *this;}


    
    inline const HlsBasicPutSettings& GetHlsBasicPutSettings() const{ return m_hlsBasicPutSettings; }

    
    inline bool HlsBasicPutSettingsHasBeenSet() const { return m_hlsBasicPutSettingsHasBeenSet; }

    
    inline void SetHlsBasicPutSettings(const HlsBasicPutSettings& value) { m_hlsBasicPutSettingsHasBeenSet = true; m_hlsBasicPutSettings = value; }

    
    inline void SetHlsBasicPutSettings(HlsBasicPutSettings&& value) { m_hlsBasicPutSettingsHasBeenSet = true; m_hlsBasicPutSettings = std::move(value); }

    
    inline HlsCdnSettings& WithHlsBasicPutSettings(const HlsBasicPutSettings& value) { SetHlsBasicPutSettings(value); return *this;}

    
    inline HlsCdnSettings& WithHlsBasicPutSettings(HlsBasicPutSettings&& value) { SetHlsBasicPutSettings(std::move(value)); return *this;}


    
    inline const HlsMediaStoreSettings& GetHlsMediaStoreSettings() const{ return m_hlsMediaStoreSettings; }

    
    inline bool HlsMediaStoreSettingsHasBeenSet() const { return m_hlsMediaStoreSettingsHasBeenSet; }

    
    inline void SetHlsMediaStoreSettings(const HlsMediaStoreSettings& value) { m_hlsMediaStoreSettingsHasBeenSet = true; m_hlsMediaStoreSettings = value; }

    
    inline void SetHlsMediaStoreSettings(HlsMediaStoreSettings&& value) { m_hlsMediaStoreSettingsHasBeenSet = true; m_hlsMediaStoreSettings = std::move(value); }

    
    inline HlsCdnSettings& WithHlsMediaStoreSettings(const HlsMediaStoreSettings& value) { SetHlsMediaStoreSettings(value); return *this;}

    
    inline HlsCdnSettings& WithHlsMediaStoreSettings(HlsMediaStoreSettings&& value) { SetHlsMediaStoreSettings(std::move(value)); return *this;}


    
    inline const HlsWebdavSettings& GetHlsWebdavSettings() const{ return m_hlsWebdavSettings; }

    
    inline bool HlsWebdavSettingsHasBeenSet() const { return m_hlsWebdavSettingsHasBeenSet; }

    
    inline void SetHlsWebdavSettings(const HlsWebdavSettings& value) { m_hlsWebdavSettingsHasBeenSet = true; m_hlsWebdavSettings = value; }

    
    inline void SetHlsWebdavSettings(HlsWebdavSettings&& value) { m_hlsWebdavSettingsHasBeenSet = true; m_hlsWebdavSettings = std::move(value); }

    
    inline HlsCdnSettings& WithHlsWebdavSettings(const HlsWebdavSettings& value) { SetHlsWebdavSettings(value); return *this;}

    
    inline HlsCdnSettings& WithHlsWebdavSettings(HlsWebdavSettings&& value) { SetHlsWebdavSettings(std::move(value)); return *this;}

  private:

    HlsAkamaiSettings m_hlsAkamaiSettings;
    bool m_hlsAkamaiSettingsHasBeenSet;

    HlsBasicPutSettings m_hlsBasicPutSettings;
    bool m_hlsBasicPutSettingsHasBeenSet;

    HlsMediaStoreSettings m_hlsMediaStoreSettings;
    bool m_hlsMediaStoreSettingsHasBeenSet;

    HlsWebdavSettings m_hlsWebdavSettings;
    bool m_hlsWebdavSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
