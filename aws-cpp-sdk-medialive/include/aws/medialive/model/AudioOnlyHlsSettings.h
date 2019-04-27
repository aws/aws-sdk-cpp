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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputLocation.h>
#include <aws/medialive/model/AudioOnlyHlsTrackType.h>
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
  class AWS_MEDIALIVE_API AudioOnlyHlsSettings
  {
  public:
    AudioOnlyHlsSettings();
    AudioOnlyHlsSettings(Aws::Utils::Json::JsonView jsonValue);
    AudioOnlyHlsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
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
     * For use with an audio only Stream. Must be a .jpg or .png file. If given, this
     * image will be used as the cover-art for the audio only output. Ideally, it
     * should be formatted for an iPhone screen for two reasons. The iPhone does not
     * resize the image, it crops a centered image on the top/bottom and left/right.
     * Additionally, this image file gets saved bit-for-bit into every 10-second
     * segment file, so will increase bandwidth by {image file size} * {segment count}
     * * {user count.}.
     */
    inline const InputLocation& GetAudioOnlyImage() const{ return m_audioOnlyImage; }

    /**
     * For use with an audio only Stream. Must be a .jpg or .png file. If given, this
     * image will be used as the cover-art for the audio only output. Ideally, it
     * should be formatted for an iPhone screen for two reasons. The iPhone does not
     * resize the image, it crops a centered image on the top/bottom and left/right.
     * Additionally, this image file gets saved bit-for-bit into every 10-second
     * segment file, so will increase bandwidth by {image file size} * {segment count}
     * * {user count.}.
     */
    inline bool AudioOnlyImageHasBeenSet() const { return m_audioOnlyImageHasBeenSet; }

    /**
     * For use with an audio only Stream. Must be a .jpg or .png file. If given, this
     * image will be used as the cover-art for the audio only output. Ideally, it
     * should be formatted for an iPhone screen for two reasons. The iPhone does not
     * resize the image, it crops a centered image on the top/bottom and left/right.
     * Additionally, this image file gets saved bit-for-bit into every 10-second
     * segment file, so will increase bandwidth by {image file size} * {segment count}
     * * {user count.}.
     */
    inline void SetAudioOnlyImage(const InputLocation& value) { m_audioOnlyImageHasBeenSet = true; m_audioOnlyImage = value; }

    /**
     * For use with an audio only Stream. Must be a .jpg or .png file. If given, this
     * image will be used as the cover-art for the audio only output. Ideally, it
     * should be formatted for an iPhone screen for two reasons. The iPhone does not
     * resize the image, it crops a centered image on the top/bottom and left/right.
     * Additionally, this image file gets saved bit-for-bit into every 10-second
     * segment file, so will increase bandwidth by {image file size} * {segment count}
     * * {user count.}.
     */
    inline void SetAudioOnlyImage(InputLocation&& value) { m_audioOnlyImageHasBeenSet = true; m_audioOnlyImage = std::move(value); }

    /**
     * For use with an audio only Stream. Must be a .jpg or .png file. If given, this
     * image will be used as the cover-art for the audio only output. Ideally, it
     * should be formatted for an iPhone screen for two reasons. The iPhone does not
     * resize the image, it crops a centered image on the top/bottom and left/right.
     * Additionally, this image file gets saved bit-for-bit into every 10-second
     * segment file, so will increase bandwidth by {image file size} * {segment count}
     * * {user count.}.
     */
    inline AudioOnlyHlsSettings& WithAudioOnlyImage(const InputLocation& value) { SetAudioOnlyImage(value); return *this;}

    /**
     * For use with an audio only Stream. Must be a .jpg or .png file. If given, this
     * image will be used as the cover-art for the audio only output. Ideally, it
     * should be formatted for an iPhone screen for two reasons. The iPhone does not
     * resize the image, it crops a centered image on the top/bottom and left/right.
     * Additionally, this image file gets saved bit-for-bit into every 10-second
     * segment file, so will increase bandwidth by {image file size} * {segment count}
     * * {user count.}.
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

  private:

    Aws::String m_audioGroupId;
    bool m_audioGroupIdHasBeenSet;

    InputLocation m_audioOnlyImage;
    bool m_audioOnlyImageHasBeenSet;

    AudioOnlyHlsTrackType m_audioTrackType;
    bool m_audioTrackTypeHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
