/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/HlsAkamaiSettings.h>
#include <aws/medialive/model/HlsBasicPutSettings.h>
#include <aws/medialive/model/HlsMediaStoreSettings.h>
#include <aws/medialive/model/HlsS3Settings.h>
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


    
    inline const HlsS3Settings& GetHlsS3Settings() const{ return m_hlsS3Settings; }

    
    inline bool HlsS3SettingsHasBeenSet() const { return m_hlsS3SettingsHasBeenSet; }

    
    inline void SetHlsS3Settings(const HlsS3Settings& value) { m_hlsS3SettingsHasBeenSet = true; m_hlsS3Settings = value; }

    
    inline void SetHlsS3Settings(HlsS3Settings&& value) { m_hlsS3SettingsHasBeenSet = true; m_hlsS3Settings = std::move(value); }

    
    inline HlsCdnSettings& WithHlsS3Settings(const HlsS3Settings& value) { SetHlsS3Settings(value); return *this;}

    
    inline HlsCdnSettings& WithHlsS3Settings(HlsS3Settings&& value) { SetHlsS3Settings(std::move(value)); return *this;}


    
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

    HlsS3Settings m_hlsS3Settings;
    bool m_hlsS3SettingsHasBeenSet;

    HlsWebdavSettings m_hlsWebdavSettings;
    bool m_hlsWebdavSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
