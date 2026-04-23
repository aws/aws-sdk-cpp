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
#include <aws/mediaconvert/model/AncillarySourceSettings.h>
#include <aws/mediaconvert/model/DvbSubSourceSettings.h>
#include <aws/mediaconvert/model/EmbeddedSourceSettings.h>
#include <aws/mediaconvert/model/FileSourceSettings.h>
#include <aws/mediaconvert/model/CaptionSourceType.h>
#include <aws/mediaconvert/model/TeletextSourceSettings.h>
#include <aws/mediaconvert/model/TrackSourceSettings.h>
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
   * Source settings (SourceSettings) contains the group of settings for captions in
   * the input.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CaptionSourceSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API CaptionSourceSettings
  {
  public:
    CaptionSourceSettings();
    CaptionSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    CaptionSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Settings for ancillary captions source.
     */
    inline const AncillarySourceSettings& GetAncillarySourceSettings() const{ return m_ancillarySourceSettings; }

    /**
     * Settings for ancillary captions source.
     */
    inline bool AncillarySourceSettingsHasBeenSet() const { return m_ancillarySourceSettingsHasBeenSet; }

    /**
     * Settings for ancillary captions source.
     */
    inline void SetAncillarySourceSettings(const AncillarySourceSettings& value) { m_ancillarySourceSettingsHasBeenSet = true; m_ancillarySourceSettings = value; }

    /**
     * Settings for ancillary captions source.
     */
    inline void SetAncillarySourceSettings(AncillarySourceSettings&& value) { m_ancillarySourceSettingsHasBeenSet = true; m_ancillarySourceSettings = std::move(value); }

    /**
     * Settings for ancillary captions source.
     */
    inline CaptionSourceSettings& WithAncillarySourceSettings(const AncillarySourceSettings& value) { SetAncillarySourceSettings(value); return *this;}

    /**
     * Settings for ancillary captions source.
     */
    inline CaptionSourceSettings& WithAncillarySourceSettings(AncillarySourceSettings&& value) { SetAncillarySourceSettings(std::move(value)); return *this;}


    /**
     * DVB Sub Source Settings
     */
    inline const DvbSubSourceSettings& GetDvbSubSourceSettings() const{ return m_dvbSubSourceSettings; }

    /**
     * DVB Sub Source Settings
     */
    inline bool DvbSubSourceSettingsHasBeenSet() const { return m_dvbSubSourceSettingsHasBeenSet; }

    /**
     * DVB Sub Source Settings
     */
    inline void SetDvbSubSourceSettings(const DvbSubSourceSettings& value) { m_dvbSubSourceSettingsHasBeenSet = true; m_dvbSubSourceSettings = value; }

    /**
     * DVB Sub Source Settings
     */
    inline void SetDvbSubSourceSettings(DvbSubSourceSettings&& value) { m_dvbSubSourceSettingsHasBeenSet = true; m_dvbSubSourceSettings = std::move(value); }

    /**
     * DVB Sub Source Settings
     */
    inline CaptionSourceSettings& WithDvbSubSourceSettings(const DvbSubSourceSettings& value) { SetDvbSubSourceSettings(value); return *this;}

    /**
     * DVB Sub Source Settings
     */
    inline CaptionSourceSettings& WithDvbSubSourceSettings(DvbSubSourceSettings&& value) { SetDvbSubSourceSettings(std::move(value)); return *this;}


    /**
     * Settings for embedded captions Source
     */
    inline const EmbeddedSourceSettings& GetEmbeddedSourceSettings() const{ return m_embeddedSourceSettings; }

    /**
     * Settings for embedded captions Source
     */
    inline bool EmbeddedSourceSettingsHasBeenSet() const { return m_embeddedSourceSettingsHasBeenSet; }

    /**
     * Settings for embedded captions Source
     */
    inline void SetEmbeddedSourceSettings(const EmbeddedSourceSettings& value) { m_embeddedSourceSettingsHasBeenSet = true; m_embeddedSourceSettings = value; }

    /**
     * Settings for embedded captions Source
     */
    inline void SetEmbeddedSourceSettings(EmbeddedSourceSettings&& value) { m_embeddedSourceSettingsHasBeenSet = true; m_embeddedSourceSettings = std::move(value); }

    /**
     * Settings for embedded captions Source
     */
    inline CaptionSourceSettings& WithEmbeddedSourceSettings(const EmbeddedSourceSettings& value) { SetEmbeddedSourceSettings(value); return *this;}

    /**
     * Settings for embedded captions Source
     */
    inline CaptionSourceSettings& WithEmbeddedSourceSettings(EmbeddedSourceSettings&& value) { SetEmbeddedSourceSettings(std::move(value)); return *this;}


    /**
     * Settings for File-based Captions in Source
     */
    inline const FileSourceSettings& GetFileSourceSettings() const{ return m_fileSourceSettings; }

    /**
     * Settings for File-based Captions in Source
     */
    inline bool FileSourceSettingsHasBeenSet() const { return m_fileSourceSettingsHasBeenSet; }

    /**
     * Settings for File-based Captions in Source
     */
    inline void SetFileSourceSettings(const FileSourceSettings& value) { m_fileSourceSettingsHasBeenSet = true; m_fileSourceSettings = value; }

    /**
     * Settings for File-based Captions in Source
     */
    inline void SetFileSourceSettings(FileSourceSettings&& value) { m_fileSourceSettingsHasBeenSet = true; m_fileSourceSettings = std::move(value); }

    /**
     * Settings for File-based Captions in Source
     */
    inline CaptionSourceSettings& WithFileSourceSettings(const FileSourceSettings& value) { SetFileSourceSettings(value); return *this;}

    /**
     * Settings for File-based Captions in Source
     */
    inline CaptionSourceSettings& WithFileSourceSettings(FileSourceSettings&& value) { SetFileSourceSettings(std::move(value)); return *this;}


    /**
     * Use Source (SourceType) to identify the format of your input captions.  The
     * service cannot auto-detect caption format.
     */
    inline const CaptionSourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * Use Source (SourceType) to identify the format of your input captions.  The
     * service cannot auto-detect caption format.
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * Use Source (SourceType) to identify the format of your input captions.  The
     * service cannot auto-detect caption format.
     */
    inline void SetSourceType(const CaptionSourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * Use Source (SourceType) to identify the format of your input captions.  The
     * service cannot auto-detect caption format.
     */
    inline void SetSourceType(CaptionSourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * Use Source (SourceType) to identify the format of your input captions.  The
     * service cannot auto-detect caption format.
     */
    inline CaptionSourceSettings& WithSourceType(const CaptionSourceType& value) { SetSourceType(value); return *this;}

    /**
     * Use Source (SourceType) to identify the format of your input captions.  The
     * service cannot auto-detect caption format.
     */
    inline CaptionSourceSettings& WithSourceType(CaptionSourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * Settings specific to Teletext caption sources, including Page number.
     */
    inline const TeletextSourceSettings& GetTeletextSourceSettings() const{ return m_teletextSourceSettings; }

    /**
     * Settings specific to Teletext caption sources, including Page number.
     */
    inline bool TeletextSourceSettingsHasBeenSet() const { return m_teletextSourceSettingsHasBeenSet; }

    /**
     * Settings specific to Teletext caption sources, including Page number.
     */
    inline void SetTeletextSourceSettings(const TeletextSourceSettings& value) { m_teletextSourceSettingsHasBeenSet = true; m_teletextSourceSettings = value; }

    /**
     * Settings specific to Teletext caption sources, including Page number.
     */
    inline void SetTeletextSourceSettings(TeletextSourceSettings&& value) { m_teletextSourceSettingsHasBeenSet = true; m_teletextSourceSettings = std::move(value); }

    /**
     * Settings specific to Teletext caption sources, including Page number.
     */
    inline CaptionSourceSettings& WithTeletextSourceSettings(const TeletextSourceSettings& value) { SetTeletextSourceSettings(value); return *this;}

    /**
     * Settings specific to Teletext caption sources, including Page number.
     */
    inline CaptionSourceSettings& WithTeletextSourceSettings(TeletextSourceSettings&& value) { SetTeletextSourceSettings(std::move(value)); return *this;}


    /**
     * Settings specific to caption sources that are specfied by track number. Sources
     * include IMSC in IMF.
     */
    inline const TrackSourceSettings& GetTrackSourceSettings() const{ return m_trackSourceSettings; }

    /**
     * Settings specific to caption sources that are specfied by track number. Sources
     * include IMSC in IMF.
     */
    inline bool TrackSourceSettingsHasBeenSet() const { return m_trackSourceSettingsHasBeenSet; }

    /**
     * Settings specific to caption sources that are specfied by track number. Sources
     * include IMSC in IMF.
     */
    inline void SetTrackSourceSettings(const TrackSourceSettings& value) { m_trackSourceSettingsHasBeenSet = true; m_trackSourceSettings = value; }

    /**
     * Settings specific to caption sources that are specfied by track number. Sources
     * include IMSC in IMF.
     */
    inline void SetTrackSourceSettings(TrackSourceSettings&& value) { m_trackSourceSettingsHasBeenSet = true; m_trackSourceSettings = std::move(value); }

    /**
     * Settings specific to caption sources that are specfied by track number. Sources
     * include IMSC in IMF.
     */
    inline CaptionSourceSettings& WithTrackSourceSettings(const TrackSourceSettings& value) { SetTrackSourceSettings(value); return *this;}

    /**
     * Settings specific to caption sources that are specfied by track number. Sources
     * include IMSC in IMF.
     */
    inline CaptionSourceSettings& WithTrackSourceSettings(TrackSourceSettings&& value) { SetTrackSourceSettings(std::move(value)); return *this;}

  private:

    AncillarySourceSettings m_ancillarySourceSettings;
    bool m_ancillarySourceSettingsHasBeenSet;

    DvbSubSourceSettings m_dvbSubSourceSettings;
    bool m_dvbSubSourceSettingsHasBeenSet;

    EmbeddedSourceSettings m_embeddedSourceSettings;
    bool m_embeddedSourceSettingsHasBeenSet;

    FileSourceSettings m_fileSourceSettings;
    bool m_fileSourceSettingsHasBeenSet;

    CaptionSourceType m_sourceType;
    bool m_sourceTypeHasBeenSet;

    TeletextSourceSettings m_teletextSourceSettings;
    bool m_teletextSourceSettingsHasBeenSet;

    TrackSourceSettings m_trackSourceSettings;
    bool m_trackSourceSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
