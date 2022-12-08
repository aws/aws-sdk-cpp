/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/M3u8Settings.h>
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
   * Standard Hls Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StandardHlsSettings">AWS
   * API Reference</a></p>
   */
  class StandardHlsSettings
  {
  public:
    AWS_MEDIALIVE_API StandardHlsSettings();
    AWS_MEDIALIVE_API StandardHlsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API StandardHlsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline const Aws::String& GetAudioRenditionSets() const{ return m_audioRenditionSets; }

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline bool AudioRenditionSetsHasBeenSet() const { return m_audioRenditionSetsHasBeenSet; }

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline void SetAudioRenditionSets(const Aws::String& value) { m_audioRenditionSetsHasBeenSet = true; m_audioRenditionSets = value; }

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline void SetAudioRenditionSets(Aws::String&& value) { m_audioRenditionSetsHasBeenSet = true; m_audioRenditionSets = std::move(value); }

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline void SetAudioRenditionSets(const char* value) { m_audioRenditionSetsHasBeenSet = true; m_audioRenditionSets.assign(value); }

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline StandardHlsSettings& WithAudioRenditionSets(const Aws::String& value) { SetAudioRenditionSets(value); return *this;}

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline StandardHlsSettings& WithAudioRenditionSets(Aws::String&& value) { SetAudioRenditionSets(std::move(value)); return *this;}

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline StandardHlsSettings& WithAudioRenditionSets(const char* value) { SetAudioRenditionSets(value); return *this;}


    
    inline const M3u8Settings& GetM3u8Settings() const{ return m_m3u8Settings; }

    
    inline bool M3u8SettingsHasBeenSet() const { return m_m3u8SettingsHasBeenSet; }

    
    inline void SetM3u8Settings(const M3u8Settings& value) { m_m3u8SettingsHasBeenSet = true; m_m3u8Settings = value; }

    
    inline void SetM3u8Settings(M3u8Settings&& value) { m_m3u8SettingsHasBeenSet = true; m_m3u8Settings = std::move(value); }

    
    inline StandardHlsSettings& WithM3u8Settings(const M3u8Settings& value) { SetM3u8Settings(value); return *this;}

    
    inline StandardHlsSettings& WithM3u8Settings(M3u8Settings&& value) { SetM3u8Settings(std::move(value)); return *this;}

  private:

    Aws::String m_audioRenditionSets;
    bool m_audioRenditionSetsHasBeenSet = false;

    M3u8Settings m_m3u8Settings;
    bool m_m3u8SettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
