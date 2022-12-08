/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/mediaconvert/model/WebvttHlsSourceSettings.h>
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
   * If your input captions are SCC, TTML, STL, SMI, SRT, or IMSC in an xml file,
   * specify the URI of the input captions source file. If your input captions are
   * IMSC in an IMF package, use TrackSourceSettings instead of
   * FileSoureSettings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CaptionSourceSettings">AWS
   * API Reference</a></p>
   */
  class CaptionSourceSettings
  {
  public:
    AWS_MEDIACONVERT_API CaptionSourceSettings();
    AWS_MEDIACONVERT_API CaptionSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API CaptionSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * If your input captions are SCC, SMI, SRT, STL, TTML, WebVTT, or IMSC 1.1 in an
     * xml file, specify the URI of the input caption source file. If your caption
     * source is IMSC in an IMF package, use TrackSourceSettings instead of
     * FileSoureSettings.
     */
    inline const FileSourceSettings& GetFileSourceSettings() const{ return m_fileSourceSettings; }

    /**
     * If your input captions are SCC, SMI, SRT, STL, TTML, WebVTT, or IMSC 1.1 in an
     * xml file, specify the URI of the input caption source file. If your caption
     * source is IMSC in an IMF package, use TrackSourceSettings instead of
     * FileSoureSettings.
     */
    inline bool FileSourceSettingsHasBeenSet() const { return m_fileSourceSettingsHasBeenSet; }

    /**
     * If your input captions are SCC, SMI, SRT, STL, TTML, WebVTT, or IMSC 1.1 in an
     * xml file, specify the URI of the input caption source file. If your caption
     * source is IMSC in an IMF package, use TrackSourceSettings instead of
     * FileSoureSettings.
     */
    inline void SetFileSourceSettings(const FileSourceSettings& value) { m_fileSourceSettingsHasBeenSet = true; m_fileSourceSettings = value; }

    /**
     * If your input captions are SCC, SMI, SRT, STL, TTML, WebVTT, or IMSC 1.1 in an
     * xml file, specify the URI of the input caption source file. If your caption
     * source is IMSC in an IMF package, use TrackSourceSettings instead of
     * FileSoureSettings.
     */
    inline void SetFileSourceSettings(FileSourceSettings&& value) { m_fileSourceSettingsHasBeenSet = true; m_fileSourceSettings = std::move(value); }

    /**
     * If your input captions are SCC, SMI, SRT, STL, TTML, WebVTT, or IMSC 1.1 in an
     * xml file, specify the URI of the input caption source file. If your caption
     * source is IMSC in an IMF package, use TrackSourceSettings instead of
     * FileSoureSettings.
     */
    inline CaptionSourceSettings& WithFileSourceSettings(const FileSourceSettings& value) { SetFileSourceSettings(value); return *this;}

    /**
     * If your input captions are SCC, SMI, SRT, STL, TTML, WebVTT, or IMSC 1.1 in an
     * xml file, specify the URI of the input caption source file. If your caption
     * source is IMSC in an IMF package, use TrackSourceSettings instead of
     * FileSoureSettings.
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
     * Settings specific to caption sources that are specified by track number.
     * Currently, this is only IMSC captions in an IMF package. If your caption source
     * is IMSC 1.1 in a separate xml file, use FileSourceSettings instead of
     * TrackSourceSettings.
     */
    inline const TrackSourceSettings& GetTrackSourceSettings() const{ return m_trackSourceSettings; }

    /**
     * Settings specific to caption sources that are specified by track number.
     * Currently, this is only IMSC captions in an IMF package. If your caption source
     * is IMSC 1.1 in a separate xml file, use FileSourceSettings instead of
     * TrackSourceSettings.
     */
    inline bool TrackSourceSettingsHasBeenSet() const { return m_trackSourceSettingsHasBeenSet; }

    /**
     * Settings specific to caption sources that are specified by track number.
     * Currently, this is only IMSC captions in an IMF package. If your caption source
     * is IMSC 1.1 in a separate xml file, use FileSourceSettings instead of
     * TrackSourceSettings.
     */
    inline void SetTrackSourceSettings(const TrackSourceSettings& value) { m_trackSourceSettingsHasBeenSet = true; m_trackSourceSettings = value; }

    /**
     * Settings specific to caption sources that are specified by track number.
     * Currently, this is only IMSC captions in an IMF package. If your caption source
     * is IMSC 1.1 in a separate xml file, use FileSourceSettings instead of
     * TrackSourceSettings.
     */
    inline void SetTrackSourceSettings(TrackSourceSettings&& value) { m_trackSourceSettingsHasBeenSet = true; m_trackSourceSettings = std::move(value); }

    /**
     * Settings specific to caption sources that are specified by track number.
     * Currently, this is only IMSC captions in an IMF package. If your caption source
     * is IMSC 1.1 in a separate xml file, use FileSourceSettings instead of
     * TrackSourceSettings.
     */
    inline CaptionSourceSettings& WithTrackSourceSettings(const TrackSourceSettings& value) { SetTrackSourceSettings(value); return *this;}

    /**
     * Settings specific to caption sources that are specified by track number.
     * Currently, this is only IMSC captions in an IMF package. If your caption source
     * is IMSC 1.1 in a separate xml file, use FileSourceSettings instead of
     * TrackSourceSettings.
     */
    inline CaptionSourceSettings& WithTrackSourceSettings(TrackSourceSettings&& value) { SetTrackSourceSettings(std::move(value)); return *this;}


    /**
     * Settings specific to WebVTT sources in HLS alternative rendition group. Specify
     * the properties (renditionGroupId, renditionName or renditionLanguageCode) to
     * identify the unique subtitle track among the alternative rendition groups
     * present in the HLS manifest. If no unique track is found, or multiple tracks
     * match the specified properties, the job fails. If there is only one subtitle
     * track in the rendition group, the settings can be left empty and the default
     * subtitle track will be chosen. If your caption source is a sidecar file, use
     * FileSourceSettings instead of WebvttHlsSourceSettings.
     */
    inline const WebvttHlsSourceSettings& GetWebvttHlsSourceSettings() const{ return m_webvttHlsSourceSettings; }

    /**
     * Settings specific to WebVTT sources in HLS alternative rendition group. Specify
     * the properties (renditionGroupId, renditionName or renditionLanguageCode) to
     * identify the unique subtitle track among the alternative rendition groups
     * present in the HLS manifest. If no unique track is found, or multiple tracks
     * match the specified properties, the job fails. If there is only one subtitle
     * track in the rendition group, the settings can be left empty and the default
     * subtitle track will be chosen. If your caption source is a sidecar file, use
     * FileSourceSettings instead of WebvttHlsSourceSettings.
     */
    inline bool WebvttHlsSourceSettingsHasBeenSet() const { return m_webvttHlsSourceSettingsHasBeenSet; }

    /**
     * Settings specific to WebVTT sources in HLS alternative rendition group. Specify
     * the properties (renditionGroupId, renditionName or renditionLanguageCode) to
     * identify the unique subtitle track among the alternative rendition groups
     * present in the HLS manifest. If no unique track is found, or multiple tracks
     * match the specified properties, the job fails. If there is only one subtitle
     * track in the rendition group, the settings can be left empty and the default
     * subtitle track will be chosen. If your caption source is a sidecar file, use
     * FileSourceSettings instead of WebvttHlsSourceSettings.
     */
    inline void SetWebvttHlsSourceSettings(const WebvttHlsSourceSettings& value) { m_webvttHlsSourceSettingsHasBeenSet = true; m_webvttHlsSourceSettings = value; }

    /**
     * Settings specific to WebVTT sources in HLS alternative rendition group. Specify
     * the properties (renditionGroupId, renditionName or renditionLanguageCode) to
     * identify the unique subtitle track among the alternative rendition groups
     * present in the HLS manifest. If no unique track is found, or multiple tracks
     * match the specified properties, the job fails. If there is only one subtitle
     * track in the rendition group, the settings can be left empty and the default
     * subtitle track will be chosen. If your caption source is a sidecar file, use
     * FileSourceSettings instead of WebvttHlsSourceSettings.
     */
    inline void SetWebvttHlsSourceSettings(WebvttHlsSourceSettings&& value) { m_webvttHlsSourceSettingsHasBeenSet = true; m_webvttHlsSourceSettings = std::move(value); }

    /**
     * Settings specific to WebVTT sources in HLS alternative rendition group. Specify
     * the properties (renditionGroupId, renditionName or renditionLanguageCode) to
     * identify the unique subtitle track among the alternative rendition groups
     * present in the HLS manifest. If no unique track is found, or multiple tracks
     * match the specified properties, the job fails. If there is only one subtitle
     * track in the rendition group, the settings can be left empty and the default
     * subtitle track will be chosen. If your caption source is a sidecar file, use
     * FileSourceSettings instead of WebvttHlsSourceSettings.
     */
    inline CaptionSourceSettings& WithWebvttHlsSourceSettings(const WebvttHlsSourceSettings& value) { SetWebvttHlsSourceSettings(value); return *this;}

    /**
     * Settings specific to WebVTT sources in HLS alternative rendition group. Specify
     * the properties (renditionGroupId, renditionName or renditionLanguageCode) to
     * identify the unique subtitle track among the alternative rendition groups
     * present in the HLS manifest. If no unique track is found, or multiple tracks
     * match the specified properties, the job fails. If there is only one subtitle
     * track in the rendition group, the settings can be left empty and the default
     * subtitle track will be chosen. If your caption source is a sidecar file, use
     * FileSourceSettings instead of WebvttHlsSourceSettings.
     */
    inline CaptionSourceSettings& WithWebvttHlsSourceSettings(WebvttHlsSourceSettings&& value) { SetWebvttHlsSourceSettings(std::move(value)); return *this;}

  private:

    AncillarySourceSettings m_ancillarySourceSettings;
    bool m_ancillarySourceSettingsHasBeenSet = false;

    DvbSubSourceSettings m_dvbSubSourceSettings;
    bool m_dvbSubSourceSettingsHasBeenSet = false;

    EmbeddedSourceSettings m_embeddedSourceSettings;
    bool m_embeddedSourceSettingsHasBeenSet = false;

    FileSourceSettings m_fileSourceSettings;
    bool m_fileSourceSettingsHasBeenSet = false;

    CaptionSourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    TeletextSourceSettings m_teletextSourceSettings;
    bool m_teletextSourceSettingsHasBeenSet = false;

    TrackSourceSettings m_trackSourceSettings;
    bool m_trackSourceSettingsHasBeenSet = false;

    WebvttHlsSourceSettings m_webvttHlsSourceSettings;
    bool m_webvttHlsSourceSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
