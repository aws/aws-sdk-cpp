/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputLocation.h>
#include <aws/medialive/model/AudioOnlyHlsTrackType.h>
#include <aws/medialive/model/AudioOnlyHlsSegmentType.h>
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
   * Audio Only Hls Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioOnlyHlsSettings">AWS
   * API Reference</a></p>
   */
  class AudioOnlyHlsSettings
  {
  public:
    AWS_MEDIALIVE_API AudioOnlyHlsSettings();
    AWS_MEDIALIVE_API AudioOnlyHlsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioOnlyHlsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline AudioOnlyHlsSettings& WithAudioGroupId(const Aws::String& value) { SetAudioGroupId(value); return *this;}

    /**
     * Specifies the group to which the audio Rendition belongs.
     */
    inline AudioOnlyHlsSettings& WithAudioGroupId(Aws::String&& value) { SetAudioGroupId(std::move(value)); return *this;}

    /**
     * Specifies the group to which the audio Rendition belongs.
     */
    inline AudioOnlyHlsSettings& WithAudioGroupId(const char* value) { SetAudioGroupId(value); return *this;}


    /**
     * Optional. Specifies the .jpg or .png image to use as the cover art for an
     * audio-only output. We recommend a low bit-size file because the image increases
     * the output audio bandwidth.

The image is attached to the audio as an ID3 tag,
     * frame type APIC, picture type 0x10, as per the "ID3 tag version 2.4.0 - Native
     * Frames" standard.
     */
    inline const InputLocation& GetAudioOnlyImage() const{ return m_audioOnlyImage; }

    /**
     * Optional. Specifies the .jpg or .png image to use as the cover art for an
     * audio-only output. We recommend a low bit-size file because the image increases
     * the output audio bandwidth.

The image is attached to the audio as an ID3 tag,
     * frame type APIC, picture type 0x10, as per the "ID3 tag version 2.4.0 - Native
     * Frames" standard.
     */
    inline bool AudioOnlyImageHasBeenSet() const { return m_audioOnlyImageHasBeenSet; }

    /**
     * Optional. Specifies the .jpg or .png image to use as the cover art for an
     * audio-only output. We recommend a low bit-size file because the image increases
     * the output audio bandwidth.

The image is attached to the audio as an ID3 tag,
     * frame type APIC, picture type 0x10, as per the "ID3 tag version 2.4.0 - Native
     * Frames" standard.
     */
    inline void SetAudioOnlyImage(const InputLocation& value) { m_audioOnlyImageHasBeenSet = true; m_audioOnlyImage = value; }

    /**
     * Optional. Specifies the .jpg or .png image to use as the cover art for an
     * audio-only output. We recommend a low bit-size file because the image increases
     * the output audio bandwidth.

The image is attached to the audio as an ID3 tag,
     * frame type APIC, picture type 0x10, as per the "ID3 tag version 2.4.0 - Native
     * Frames" standard.
     */
    inline void SetAudioOnlyImage(InputLocation&& value) { m_audioOnlyImageHasBeenSet = true; m_audioOnlyImage = std::move(value); }

    /**
     * Optional. Specifies the .jpg or .png image to use as the cover art for an
     * audio-only output. We recommend a low bit-size file because the image increases
     * the output audio bandwidth.

The image is attached to the audio as an ID3 tag,
     * frame type APIC, picture type 0x10, as per the "ID3 tag version 2.4.0 - Native
     * Frames" standard.
     */
    inline AudioOnlyHlsSettings& WithAudioOnlyImage(const InputLocation& value) { SetAudioOnlyImage(value); return *this;}

    /**
     * Optional. Specifies the .jpg or .png image to use as the cover art for an
     * audio-only output. We recommend a low bit-size file because the image increases
     * the output audio bandwidth.

The image is attached to the audio as an ID3 tag,
     * frame type APIC, picture type 0x10, as per the "ID3 tag version 2.4.0 - Native
     * Frames" standard.
     */
    inline AudioOnlyHlsSettings& WithAudioOnlyImage(InputLocation&& value) { SetAudioOnlyImage(std::move(value)); return *this;}


    /**
     * Four types of audio-only tracks are supported:

Audio-Only Variant Stream
The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest.

Alternate
     * Audio, Auto Select, Default
Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES

Alternate Audio, Auto Select, Not Default
Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES

Alternate
     * Audio, not Auto Select
Alternate rendition that the client will not try to play
     * back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=NO, AUTOSELECT=NO
     */
    inline const AudioOnlyHlsTrackType& GetAudioTrackType() const{ return m_audioTrackType; }

    /**
     * Four types of audio-only tracks are supported:

Audio-Only Variant Stream
The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest.

Alternate
     * Audio, Auto Select, Default
Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES

Alternate Audio, Auto Select, Not Default
Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES

Alternate
     * Audio, not Auto Select
Alternate rendition that the client will not try to play
     * back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=NO, AUTOSELECT=NO
     */
    inline bool AudioTrackTypeHasBeenSet() const { return m_audioTrackTypeHasBeenSet; }

    /**
     * Four types of audio-only tracks are supported:

Audio-Only Variant Stream
The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest.

Alternate
     * Audio, Auto Select, Default
Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES

Alternate Audio, Auto Select, Not Default
Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES

Alternate
     * Audio, not Auto Select
Alternate rendition that the client will not try to play
     * back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=NO, AUTOSELECT=NO
     */
    inline void SetAudioTrackType(const AudioOnlyHlsTrackType& value) { m_audioTrackTypeHasBeenSet = true; m_audioTrackType = value; }

    /**
     * Four types of audio-only tracks are supported:

Audio-Only Variant Stream
The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest.

Alternate
     * Audio, Auto Select, Default
Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES

Alternate Audio, Auto Select, Not Default
Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES

Alternate
     * Audio, not Auto Select
Alternate rendition that the client will not try to play
     * back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=NO, AUTOSELECT=NO
     */
    inline void SetAudioTrackType(AudioOnlyHlsTrackType&& value) { m_audioTrackTypeHasBeenSet = true; m_audioTrackType = std::move(value); }

    /**
     * Four types of audio-only tracks are supported:

Audio-Only Variant Stream
The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest.

Alternate
     * Audio, Auto Select, Default
Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES

Alternate Audio, Auto Select, Not Default
Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES

Alternate
     * Audio, not Auto Select
Alternate rendition that the client will not try to play
     * back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=NO, AUTOSELECT=NO
     */
    inline AudioOnlyHlsSettings& WithAudioTrackType(const AudioOnlyHlsTrackType& value) { SetAudioTrackType(value); return *this;}

    /**
     * Four types of audio-only tracks are supported:

Audio-Only Variant Stream
The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest.

Alternate
     * Audio, Auto Select, Default
Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES

Alternate Audio, Auto Select, Not Default
Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES

Alternate
     * Audio, not Auto Select
Alternate rendition that the client will not try to play
     * back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=NO, AUTOSELECT=NO
     */
    inline AudioOnlyHlsSettings& WithAudioTrackType(AudioOnlyHlsTrackType&& value) { SetAudioTrackType(std::move(value)); return *this;}


    /**
     * Specifies the segment type.
     */
    inline const AudioOnlyHlsSegmentType& GetSegmentType() const{ return m_segmentType; }

    /**
     * Specifies the segment type.
     */
    inline bool SegmentTypeHasBeenSet() const { return m_segmentTypeHasBeenSet; }

    /**
     * Specifies the segment type.
     */
    inline void SetSegmentType(const AudioOnlyHlsSegmentType& value) { m_segmentTypeHasBeenSet = true; m_segmentType = value; }

    /**
     * Specifies the segment type.
     */
    inline void SetSegmentType(AudioOnlyHlsSegmentType&& value) { m_segmentTypeHasBeenSet = true; m_segmentType = std::move(value); }

    /**
     * Specifies the segment type.
     */
    inline AudioOnlyHlsSettings& WithSegmentType(const AudioOnlyHlsSegmentType& value) { SetSegmentType(value); return *this;}

    /**
     * Specifies the segment type.
     */
    inline AudioOnlyHlsSettings& WithSegmentType(AudioOnlyHlsSegmentType&& value) { SetSegmentType(std::move(value)); return *this;}

  private:

    Aws::String m_audioGroupId;
    bool m_audioGroupIdHasBeenSet = false;

    InputLocation m_audioOnlyImage;
    bool m_audioOnlyImageHasBeenSet = false;

    AudioOnlyHlsTrackType m_audioTrackType;
    bool m_audioTrackTypeHasBeenSet = false;

    AudioOnlyHlsSegmentType m_segmentType;
    bool m_segmentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
