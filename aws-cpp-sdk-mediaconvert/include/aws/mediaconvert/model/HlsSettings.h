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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/HlsAudioTrackType.h>
#include <aws/mediaconvert/model/HlsIFrameOnlyManifest.h>
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
   * Settings for HLS output groups<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/HlsSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API HlsSettings
  {
  public:
    HlsSettings();
    HlsSettings(Aws::Utils::Json::JsonView jsonValue);
    HlsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specifies the group to which the audio Rendition belongs.
     */
    inline const Aws::String& GetAudioGroupId() const{ return m_audioGroupId; }

    /**
     * Specifies the group to which the audio Rendition belongs.
     */
    inline bool AudioGroupIdHasBeenSet() const { return m_audioGroupIdHasBeenSet; }

    /**
     * Specifies the group to which the audio Rendition belongs.
     */
    inline void SetAudioGroupId(const Aws::String& value) { m_audioGroupIdHasBeenSet = true; m_audioGroupId = value; }

    /**
     * Specifies the group to which the audio Rendition belongs.
     */
    inline void SetAudioGroupId(Aws::String&& value) { m_audioGroupIdHasBeenSet = true; m_audioGroupId = std::move(value); }

    /**
     * Specifies the group to which the audio Rendition belongs.
     */
    inline void SetAudioGroupId(const char* value) { m_audioGroupIdHasBeenSet = true; m_audioGroupId.assign(value); }

    /**
     * Specifies the group to which the audio Rendition belongs.
     */
    inline HlsSettings& WithAudioGroupId(const Aws::String& value) { SetAudioGroupId(value); return *this;}

    /**
     * Specifies the group to which the audio Rendition belongs.
     */
    inline HlsSettings& WithAudioGroupId(Aws::String&& value) { SetAudioGroupId(std::move(value)); return *this;}

    /**
     * Specifies the group to which the audio Rendition belongs.
     */
    inline HlsSettings& WithAudioGroupId(const char* value) { SetAudioGroupId(value); return *this;}


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
    inline HlsSettings& WithAudioRenditionSets(const Aws::String& value) { SetAudioRenditionSets(value); return *this;}

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline HlsSettings& WithAudioRenditionSets(Aws::String&& value) { SetAudioRenditionSets(std::move(value)); return *this;}

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline HlsSettings& WithAudioRenditionSets(const char* value) { SetAudioRenditionSets(value); return *this;}


    /**
     * Four types of audio-only tracks are supported: Audio-Only Variant Stream The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest. Alternate
     * Audio, Auto Select, Default Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES Alternate Audio, Auto Select, Not Default Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES Alternate Audio,
     * not Auto Select Alternate rendition that the client will not try to play back by
     * default. Represented as an EXT-X-MEDIA in the HLS manifest with DEFAULT=NO,
     * AUTOSELECT=NO
     */
    inline const HlsAudioTrackType& GetAudioTrackType() const{ return m_audioTrackType; }

    /**
     * Four types of audio-only tracks are supported: Audio-Only Variant Stream The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest. Alternate
     * Audio, Auto Select, Default Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES Alternate Audio, Auto Select, Not Default Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES Alternate Audio,
     * not Auto Select Alternate rendition that the client will not try to play back by
     * default. Represented as an EXT-X-MEDIA in the HLS manifest with DEFAULT=NO,
     * AUTOSELECT=NO
     */
    inline bool AudioTrackTypeHasBeenSet() const { return m_audioTrackTypeHasBeenSet; }

    /**
     * Four types of audio-only tracks are supported: Audio-Only Variant Stream The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest. Alternate
     * Audio, Auto Select, Default Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES Alternate Audio, Auto Select, Not Default Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES Alternate Audio,
     * not Auto Select Alternate rendition that the client will not try to play back by
     * default. Represented as an EXT-X-MEDIA in the HLS manifest with DEFAULT=NO,
     * AUTOSELECT=NO
     */
    inline void SetAudioTrackType(const HlsAudioTrackType& value) { m_audioTrackTypeHasBeenSet = true; m_audioTrackType = value; }

    /**
     * Four types of audio-only tracks are supported: Audio-Only Variant Stream The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest. Alternate
     * Audio, Auto Select, Default Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES Alternate Audio, Auto Select, Not Default Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES Alternate Audio,
     * not Auto Select Alternate rendition that the client will not try to play back by
     * default. Represented as an EXT-X-MEDIA in the HLS manifest with DEFAULT=NO,
     * AUTOSELECT=NO
     */
    inline void SetAudioTrackType(HlsAudioTrackType&& value) { m_audioTrackTypeHasBeenSet = true; m_audioTrackType = std::move(value); }

    /**
     * Four types of audio-only tracks are supported: Audio-Only Variant Stream The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest. Alternate
     * Audio, Auto Select, Default Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES Alternate Audio, Auto Select, Not Default Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES Alternate Audio,
     * not Auto Select Alternate rendition that the client will not try to play back by
     * default. Represented as an EXT-X-MEDIA in the HLS manifest with DEFAULT=NO,
     * AUTOSELECT=NO
     */
    inline HlsSettings& WithAudioTrackType(const HlsAudioTrackType& value) { SetAudioTrackType(value); return *this;}

    /**
     * Four types of audio-only tracks are supported: Audio-Only Variant Stream The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest. Alternate
     * Audio, Auto Select, Default Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES Alternate Audio, Auto Select, Not Default Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES Alternate Audio,
     * not Auto Select Alternate rendition that the client will not try to play back by
     * default. Represented as an EXT-X-MEDIA in the HLS manifest with DEFAULT=NO,
     * AUTOSELECT=NO
     */
    inline HlsSettings& WithAudioTrackType(HlsAudioTrackType&& value) { SetAudioTrackType(std::move(value)); return *this;}


    /**
     * When set to INCLUDE, writes I-Frame Only Manifest in addition to the HLS
     * manifest
     */
    inline const HlsIFrameOnlyManifest& GetIFrameOnlyManifest() const{ return m_iFrameOnlyManifest; }

    /**
     * When set to INCLUDE, writes I-Frame Only Manifest in addition to the HLS
     * manifest
     */
    inline bool IFrameOnlyManifestHasBeenSet() const { return m_iFrameOnlyManifestHasBeenSet; }

    /**
     * When set to INCLUDE, writes I-Frame Only Manifest in addition to the HLS
     * manifest
     */
    inline void SetIFrameOnlyManifest(const HlsIFrameOnlyManifest& value) { m_iFrameOnlyManifestHasBeenSet = true; m_iFrameOnlyManifest = value; }

    /**
     * When set to INCLUDE, writes I-Frame Only Manifest in addition to the HLS
     * manifest
     */
    inline void SetIFrameOnlyManifest(HlsIFrameOnlyManifest&& value) { m_iFrameOnlyManifestHasBeenSet = true; m_iFrameOnlyManifest = std::move(value); }

    /**
     * When set to INCLUDE, writes I-Frame Only Manifest in addition to the HLS
     * manifest
     */
    inline HlsSettings& WithIFrameOnlyManifest(const HlsIFrameOnlyManifest& value) { SetIFrameOnlyManifest(value); return *this;}

    /**
     * When set to INCLUDE, writes I-Frame Only Manifest in addition to the HLS
     * manifest
     */
    inline HlsSettings& WithIFrameOnlyManifest(HlsIFrameOnlyManifest&& value) { SetIFrameOnlyManifest(std::move(value)); return *this;}


    /**
     * String concatenated to end of segment filenames. Accepts "Format
     * Identifiers":#format_identifier_parameters.
     */
    inline const Aws::String& GetSegmentModifier() const{ return m_segmentModifier; }

    /**
     * String concatenated to end of segment filenames. Accepts "Format
     * Identifiers":#format_identifier_parameters.
     */
    inline bool SegmentModifierHasBeenSet() const { return m_segmentModifierHasBeenSet; }

    /**
     * String concatenated to end of segment filenames. Accepts "Format
     * Identifiers":#format_identifier_parameters.
     */
    inline void SetSegmentModifier(const Aws::String& value) { m_segmentModifierHasBeenSet = true; m_segmentModifier = value; }

    /**
     * String concatenated to end of segment filenames. Accepts "Format
     * Identifiers":#format_identifier_parameters.
     */
    inline void SetSegmentModifier(Aws::String&& value) { m_segmentModifierHasBeenSet = true; m_segmentModifier = std::move(value); }

    /**
     * String concatenated to end of segment filenames. Accepts "Format
     * Identifiers":#format_identifier_parameters.
     */
    inline void SetSegmentModifier(const char* value) { m_segmentModifierHasBeenSet = true; m_segmentModifier.assign(value); }

    /**
     * String concatenated to end of segment filenames. Accepts "Format
     * Identifiers":#format_identifier_parameters.
     */
    inline HlsSettings& WithSegmentModifier(const Aws::String& value) { SetSegmentModifier(value); return *this;}

    /**
     * String concatenated to end of segment filenames. Accepts "Format
     * Identifiers":#format_identifier_parameters.
     */
    inline HlsSettings& WithSegmentModifier(Aws::String&& value) { SetSegmentModifier(std::move(value)); return *this;}

    /**
     * String concatenated to end of segment filenames. Accepts "Format
     * Identifiers":#format_identifier_parameters.
     */
    inline HlsSettings& WithSegmentModifier(const char* value) { SetSegmentModifier(value); return *this;}

  private:

    Aws::String m_audioGroupId;
    bool m_audioGroupIdHasBeenSet;

    Aws::String m_audioRenditionSets;
    bool m_audioRenditionSetsHasBeenSet;

    HlsAudioTrackType m_audioTrackType;
    bool m_audioTrackTypeHasBeenSet;

    HlsIFrameOnlyManifest m_iFrameOnlyManifest;
    bool m_iFrameOnlyManifestHasBeenSet;

    Aws::String m_segmentModifier;
    bool m_segmentModifierHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
