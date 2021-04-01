/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/CmfcAudioDuration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/CmfcAudioTrackType.h>
#include <aws/mediaconvert/model/CmfcDescriptiveVideoServiceFlag.h>
#include <aws/mediaconvert/model/CmfcIFrameOnlyManifest.h>
#include <aws/mediaconvert/model/CmfcScte35Esam.h>
#include <aws/mediaconvert/model/CmfcScte35Source.h>
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
   * Settings for MP4 segments in CMAF<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CmfcSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API CmfcSettings
  {
  public:
    CmfcSettings();
    CmfcSettings(Aws::Utils::Json::JsonView jsonValue);
    CmfcSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify this setting only when your output will be consumed by a downstream
     * repackaging workflow that is sensitive to very small duration differences
     * between video and audio. For this situation, choose Match video duration
     * (MATCH_VIDEO_DURATION). In all other cases, keep the default value, Default
     * codec duration (DEFAULT_CODEC_DURATION). When you choose Match video duration,
     * MediaConvert pads the output audio streams with silence or trims them to ensure
     * that the total duration of each audio stream is at least as long as the total
     * duration of the video stream. After padding or trimming, the audio stream
     * duration is no more than one frame longer than the video stream. MediaConvert
     * applies audio padding or trimming only to the end of the last segment of the
     * output. For unsegmented outputs, MediaConvert adds padding only to the end of
     * the file. When you keep the default value, any minor discrepancies between audio
     * and video duration will depend on your output audio codec.
     */
    inline const CmfcAudioDuration& GetAudioDuration() const{ return m_audioDuration; }

    /**
     * Specify this setting only when your output will be consumed by a downstream
     * repackaging workflow that is sensitive to very small duration differences
     * between video and audio. For this situation, choose Match video duration
     * (MATCH_VIDEO_DURATION). In all other cases, keep the default value, Default
     * codec duration (DEFAULT_CODEC_DURATION). When you choose Match video duration,
     * MediaConvert pads the output audio streams with silence or trims them to ensure
     * that the total duration of each audio stream is at least as long as the total
     * duration of the video stream. After padding or trimming, the audio stream
     * duration is no more than one frame longer than the video stream. MediaConvert
     * applies audio padding or trimming only to the end of the last segment of the
     * output. For unsegmented outputs, MediaConvert adds padding only to the end of
     * the file. When you keep the default value, any minor discrepancies between audio
     * and video duration will depend on your output audio codec.
     */
    inline bool AudioDurationHasBeenSet() const { return m_audioDurationHasBeenSet; }

    /**
     * Specify this setting only when your output will be consumed by a downstream
     * repackaging workflow that is sensitive to very small duration differences
     * between video and audio. For this situation, choose Match video duration
     * (MATCH_VIDEO_DURATION). In all other cases, keep the default value, Default
     * codec duration (DEFAULT_CODEC_DURATION). When you choose Match video duration,
     * MediaConvert pads the output audio streams with silence or trims them to ensure
     * that the total duration of each audio stream is at least as long as the total
     * duration of the video stream. After padding or trimming, the audio stream
     * duration is no more than one frame longer than the video stream. MediaConvert
     * applies audio padding or trimming only to the end of the last segment of the
     * output. For unsegmented outputs, MediaConvert adds padding only to the end of
     * the file. When you keep the default value, any minor discrepancies between audio
     * and video duration will depend on your output audio codec.
     */
    inline void SetAudioDuration(const CmfcAudioDuration& value) { m_audioDurationHasBeenSet = true; m_audioDuration = value; }

    /**
     * Specify this setting only when your output will be consumed by a downstream
     * repackaging workflow that is sensitive to very small duration differences
     * between video and audio. For this situation, choose Match video duration
     * (MATCH_VIDEO_DURATION). In all other cases, keep the default value, Default
     * codec duration (DEFAULT_CODEC_DURATION). When you choose Match video duration,
     * MediaConvert pads the output audio streams with silence or trims them to ensure
     * that the total duration of each audio stream is at least as long as the total
     * duration of the video stream. After padding or trimming, the audio stream
     * duration is no more than one frame longer than the video stream. MediaConvert
     * applies audio padding or trimming only to the end of the last segment of the
     * output. For unsegmented outputs, MediaConvert adds padding only to the end of
     * the file. When you keep the default value, any minor discrepancies between audio
     * and video duration will depend on your output audio codec.
     */
    inline void SetAudioDuration(CmfcAudioDuration&& value) { m_audioDurationHasBeenSet = true; m_audioDuration = std::move(value); }

    /**
     * Specify this setting only when your output will be consumed by a downstream
     * repackaging workflow that is sensitive to very small duration differences
     * between video and audio. For this situation, choose Match video duration
     * (MATCH_VIDEO_DURATION). In all other cases, keep the default value, Default
     * codec duration (DEFAULT_CODEC_DURATION). When you choose Match video duration,
     * MediaConvert pads the output audio streams with silence or trims them to ensure
     * that the total duration of each audio stream is at least as long as the total
     * duration of the video stream. After padding or trimming, the audio stream
     * duration is no more than one frame longer than the video stream. MediaConvert
     * applies audio padding or trimming only to the end of the last segment of the
     * output. For unsegmented outputs, MediaConvert adds padding only to the end of
     * the file. When you keep the default value, any minor discrepancies between audio
     * and video duration will depend on your output audio codec.
     */
    inline CmfcSettings& WithAudioDuration(const CmfcAudioDuration& value) { SetAudioDuration(value); return *this;}

    /**
     * Specify this setting only when your output will be consumed by a downstream
     * repackaging workflow that is sensitive to very small duration differences
     * between video and audio. For this situation, choose Match video duration
     * (MATCH_VIDEO_DURATION). In all other cases, keep the default value, Default
     * codec duration (DEFAULT_CODEC_DURATION). When you choose Match video duration,
     * MediaConvert pads the output audio streams with silence or trims them to ensure
     * that the total duration of each audio stream is at least as long as the total
     * duration of the video stream. After padding or trimming, the audio stream
     * duration is no more than one frame longer than the video stream. MediaConvert
     * applies audio padding or trimming only to the end of the last segment of the
     * output. For unsegmented outputs, MediaConvert adds padding only to the end of
     * the file. When you keep the default value, any minor discrepancies between audio
     * and video duration will depend on your output audio codec.
     */
    inline CmfcSettings& WithAudioDuration(CmfcAudioDuration&& value) { SetAudioDuration(std::move(value)); return *this;}


    /**
     * Specify the audio rendition group for this audio rendition. Specify up to one
     * value for each audio output in your output group. This value appears in your HLS
     * parent manifest in the EXT-X-MEDIA tag of TYPE=AUDIO, as the value for the
     * GROUP-ID attribute. For example, if you specify "audio_aac_1" for Audio group
     * ID, it appears in your manifest like this:
     * #EXT-X-MEDIA:TYPE=AUDIO,GROUP-ID="audio_aac_1". Related setting: To associate
     * the rendition group that this audio track belongs to with a video rendition,
     * include the same value that you provide here for that video output's setting
     * Audio rendition sets (audioRenditionSets).
     */
    inline const Aws::String& GetAudioGroupId() const{ return m_audioGroupId; }

    /**
     * Specify the audio rendition group for this audio rendition. Specify up to one
     * value for each audio output in your output group. This value appears in your HLS
     * parent manifest in the EXT-X-MEDIA tag of TYPE=AUDIO, as the value for the
     * GROUP-ID attribute. For example, if you specify "audio_aac_1" for Audio group
     * ID, it appears in your manifest like this:
     * #EXT-X-MEDIA:TYPE=AUDIO,GROUP-ID="audio_aac_1". Related setting: To associate
     * the rendition group that this audio track belongs to with a video rendition,
     * include the same value that you provide here for that video output's setting
     * Audio rendition sets (audioRenditionSets).
     */
    inline bool AudioGroupIdHasBeenSet() const { return m_audioGroupIdHasBeenSet; }

    /**
     * Specify the audio rendition group for this audio rendition. Specify up to one
     * value for each audio output in your output group. This value appears in your HLS
     * parent manifest in the EXT-X-MEDIA tag of TYPE=AUDIO, as the value for the
     * GROUP-ID attribute. For example, if you specify "audio_aac_1" for Audio group
     * ID, it appears in your manifest like this:
     * #EXT-X-MEDIA:TYPE=AUDIO,GROUP-ID="audio_aac_1". Related setting: To associate
     * the rendition group that this audio track belongs to with a video rendition,
     * include the same value that you provide here for that video output's setting
     * Audio rendition sets (audioRenditionSets).
     */
    inline void SetAudioGroupId(const Aws::String& value) { m_audioGroupIdHasBeenSet = true; m_audioGroupId = value; }

    /**
     * Specify the audio rendition group for this audio rendition. Specify up to one
     * value for each audio output in your output group. This value appears in your HLS
     * parent manifest in the EXT-X-MEDIA tag of TYPE=AUDIO, as the value for the
     * GROUP-ID attribute. For example, if you specify "audio_aac_1" for Audio group
     * ID, it appears in your manifest like this:
     * #EXT-X-MEDIA:TYPE=AUDIO,GROUP-ID="audio_aac_1". Related setting: To associate
     * the rendition group that this audio track belongs to with a video rendition,
     * include the same value that you provide here for that video output's setting
     * Audio rendition sets (audioRenditionSets).
     */
    inline void SetAudioGroupId(Aws::String&& value) { m_audioGroupIdHasBeenSet = true; m_audioGroupId = std::move(value); }

    /**
     * Specify the audio rendition group for this audio rendition. Specify up to one
     * value for each audio output in your output group. This value appears in your HLS
     * parent manifest in the EXT-X-MEDIA tag of TYPE=AUDIO, as the value for the
     * GROUP-ID attribute. For example, if you specify "audio_aac_1" for Audio group
     * ID, it appears in your manifest like this:
     * #EXT-X-MEDIA:TYPE=AUDIO,GROUP-ID="audio_aac_1". Related setting: To associate
     * the rendition group that this audio track belongs to with a video rendition,
     * include the same value that you provide here for that video output's setting
     * Audio rendition sets (audioRenditionSets).
     */
    inline void SetAudioGroupId(const char* value) { m_audioGroupIdHasBeenSet = true; m_audioGroupId.assign(value); }

    /**
     * Specify the audio rendition group for this audio rendition. Specify up to one
     * value for each audio output in your output group. This value appears in your HLS
     * parent manifest in the EXT-X-MEDIA tag of TYPE=AUDIO, as the value for the
     * GROUP-ID attribute. For example, if you specify "audio_aac_1" for Audio group
     * ID, it appears in your manifest like this:
     * #EXT-X-MEDIA:TYPE=AUDIO,GROUP-ID="audio_aac_1". Related setting: To associate
     * the rendition group that this audio track belongs to with a video rendition,
     * include the same value that you provide here for that video output's setting
     * Audio rendition sets (audioRenditionSets).
     */
    inline CmfcSettings& WithAudioGroupId(const Aws::String& value) { SetAudioGroupId(value); return *this;}

    /**
     * Specify the audio rendition group for this audio rendition. Specify up to one
     * value for each audio output in your output group. This value appears in your HLS
     * parent manifest in the EXT-X-MEDIA tag of TYPE=AUDIO, as the value for the
     * GROUP-ID attribute. For example, if you specify "audio_aac_1" for Audio group
     * ID, it appears in your manifest like this:
     * #EXT-X-MEDIA:TYPE=AUDIO,GROUP-ID="audio_aac_1". Related setting: To associate
     * the rendition group that this audio track belongs to with a video rendition,
     * include the same value that you provide here for that video output's setting
     * Audio rendition sets (audioRenditionSets).
     */
    inline CmfcSettings& WithAudioGroupId(Aws::String&& value) { SetAudioGroupId(std::move(value)); return *this;}

    /**
     * Specify the audio rendition group for this audio rendition. Specify up to one
     * value for each audio output in your output group. This value appears in your HLS
     * parent manifest in the EXT-X-MEDIA tag of TYPE=AUDIO, as the value for the
     * GROUP-ID attribute. For example, if you specify "audio_aac_1" for Audio group
     * ID, it appears in your manifest like this:
     * #EXT-X-MEDIA:TYPE=AUDIO,GROUP-ID="audio_aac_1". Related setting: To associate
     * the rendition group that this audio track belongs to with a video rendition,
     * include the same value that you provide here for that video output's setting
     * Audio rendition sets (audioRenditionSets).
     */
    inline CmfcSettings& WithAudioGroupId(const char* value) { SetAudioGroupId(value); return *this;}


    /**
     * List the audio rendition groups that you want included with this video
     * rendition. Use a comma-separated list. For example, say you want to include the
     * audio rendition groups that have the audio group IDs "audio_aac_1" and
     * "audio_dolby". Then you would specify this value: "audio_aac_1, audio_dolby".
     * Related setting: The rendition groups that you include in your comma-separated
     * list should all match values that you specify in the setting Audio group ID
     * (AudioGroupId) for audio renditions in the same output group as this video
     * rendition. Default behavior: If you don't specify anything here and for Audio
     * group ID, MediaConvert puts each audio variant in its own audio rendition group
     * and associates it with every video variant. Each value in your list appears in
     * your HLS parent manifest in the EXT-X-STREAM-INF tag as the value for the AUDIO
     * attribute. To continue the previous example, say that the file name for the
     * child manifest for your video rendition is "amazing_video_1.m3u8". Then, in your
     * parent manifest, each value will appear on separate lines, like this:
     * #EXT-X-STREAM-INF:AUDIO="audio_aac_1"... amazing_video_1.m3u8
     * #EXT-X-STREAM-INF:AUDIO="audio_dolby"... amazing_video_1.m3u8
     */
    inline const Aws::String& GetAudioRenditionSets() const{ return m_audioRenditionSets; }

    /**
     * List the audio rendition groups that you want included with this video
     * rendition. Use a comma-separated list. For example, say you want to include the
     * audio rendition groups that have the audio group IDs "audio_aac_1" and
     * "audio_dolby". Then you would specify this value: "audio_aac_1, audio_dolby".
     * Related setting: The rendition groups that you include in your comma-separated
     * list should all match values that you specify in the setting Audio group ID
     * (AudioGroupId) for audio renditions in the same output group as this video
     * rendition. Default behavior: If you don't specify anything here and for Audio
     * group ID, MediaConvert puts each audio variant in its own audio rendition group
     * and associates it with every video variant. Each value in your list appears in
     * your HLS parent manifest in the EXT-X-STREAM-INF tag as the value for the AUDIO
     * attribute. To continue the previous example, say that the file name for the
     * child manifest for your video rendition is "amazing_video_1.m3u8". Then, in your
     * parent manifest, each value will appear on separate lines, like this:
     * #EXT-X-STREAM-INF:AUDIO="audio_aac_1"... amazing_video_1.m3u8
     * #EXT-X-STREAM-INF:AUDIO="audio_dolby"... amazing_video_1.m3u8
     */
    inline bool AudioRenditionSetsHasBeenSet() const { return m_audioRenditionSetsHasBeenSet; }

    /**
     * List the audio rendition groups that you want included with this video
     * rendition. Use a comma-separated list. For example, say you want to include the
     * audio rendition groups that have the audio group IDs "audio_aac_1" and
     * "audio_dolby". Then you would specify this value: "audio_aac_1, audio_dolby".
     * Related setting: The rendition groups that you include in your comma-separated
     * list should all match values that you specify in the setting Audio group ID
     * (AudioGroupId) for audio renditions in the same output group as this video
     * rendition. Default behavior: If you don't specify anything here and for Audio
     * group ID, MediaConvert puts each audio variant in its own audio rendition group
     * and associates it with every video variant. Each value in your list appears in
     * your HLS parent manifest in the EXT-X-STREAM-INF tag as the value for the AUDIO
     * attribute. To continue the previous example, say that the file name for the
     * child manifest for your video rendition is "amazing_video_1.m3u8". Then, in your
     * parent manifest, each value will appear on separate lines, like this:
     * #EXT-X-STREAM-INF:AUDIO="audio_aac_1"... amazing_video_1.m3u8
     * #EXT-X-STREAM-INF:AUDIO="audio_dolby"... amazing_video_1.m3u8
     */
    inline void SetAudioRenditionSets(const Aws::String& value) { m_audioRenditionSetsHasBeenSet = true; m_audioRenditionSets = value; }

    /**
     * List the audio rendition groups that you want included with this video
     * rendition. Use a comma-separated list. For example, say you want to include the
     * audio rendition groups that have the audio group IDs "audio_aac_1" and
     * "audio_dolby". Then you would specify this value: "audio_aac_1, audio_dolby".
     * Related setting: The rendition groups that you include in your comma-separated
     * list should all match values that you specify in the setting Audio group ID
     * (AudioGroupId) for audio renditions in the same output group as this video
     * rendition. Default behavior: If you don't specify anything here and for Audio
     * group ID, MediaConvert puts each audio variant in its own audio rendition group
     * and associates it with every video variant. Each value in your list appears in
     * your HLS parent manifest in the EXT-X-STREAM-INF tag as the value for the AUDIO
     * attribute. To continue the previous example, say that the file name for the
     * child manifest for your video rendition is "amazing_video_1.m3u8". Then, in your
     * parent manifest, each value will appear on separate lines, like this:
     * #EXT-X-STREAM-INF:AUDIO="audio_aac_1"... amazing_video_1.m3u8
     * #EXT-X-STREAM-INF:AUDIO="audio_dolby"... amazing_video_1.m3u8
     */
    inline void SetAudioRenditionSets(Aws::String&& value) { m_audioRenditionSetsHasBeenSet = true; m_audioRenditionSets = std::move(value); }

    /**
     * List the audio rendition groups that you want included with this video
     * rendition. Use a comma-separated list. For example, say you want to include the
     * audio rendition groups that have the audio group IDs "audio_aac_1" and
     * "audio_dolby". Then you would specify this value: "audio_aac_1, audio_dolby".
     * Related setting: The rendition groups that you include in your comma-separated
     * list should all match values that you specify in the setting Audio group ID
     * (AudioGroupId) for audio renditions in the same output group as this video
     * rendition. Default behavior: If you don't specify anything here and for Audio
     * group ID, MediaConvert puts each audio variant in its own audio rendition group
     * and associates it with every video variant. Each value in your list appears in
     * your HLS parent manifest in the EXT-X-STREAM-INF tag as the value for the AUDIO
     * attribute. To continue the previous example, say that the file name for the
     * child manifest for your video rendition is "amazing_video_1.m3u8". Then, in your
     * parent manifest, each value will appear on separate lines, like this:
     * #EXT-X-STREAM-INF:AUDIO="audio_aac_1"... amazing_video_1.m3u8
     * #EXT-X-STREAM-INF:AUDIO="audio_dolby"... amazing_video_1.m3u8
     */
    inline void SetAudioRenditionSets(const char* value) { m_audioRenditionSetsHasBeenSet = true; m_audioRenditionSets.assign(value); }

    /**
     * List the audio rendition groups that you want included with this video
     * rendition. Use a comma-separated list. For example, say you want to include the
     * audio rendition groups that have the audio group IDs "audio_aac_1" and
     * "audio_dolby". Then you would specify this value: "audio_aac_1, audio_dolby".
     * Related setting: The rendition groups that you include in your comma-separated
     * list should all match values that you specify in the setting Audio group ID
     * (AudioGroupId) for audio renditions in the same output group as this video
     * rendition. Default behavior: If you don't specify anything here and for Audio
     * group ID, MediaConvert puts each audio variant in its own audio rendition group
     * and associates it with every video variant. Each value in your list appears in
     * your HLS parent manifest in the EXT-X-STREAM-INF tag as the value for the AUDIO
     * attribute. To continue the previous example, say that the file name for the
     * child manifest for your video rendition is "amazing_video_1.m3u8". Then, in your
     * parent manifest, each value will appear on separate lines, like this:
     * #EXT-X-STREAM-INF:AUDIO="audio_aac_1"... amazing_video_1.m3u8
     * #EXT-X-STREAM-INF:AUDIO="audio_dolby"... amazing_video_1.m3u8
     */
    inline CmfcSettings& WithAudioRenditionSets(const Aws::String& value) { SetAudioRenditionSets(value); return *this;}

    /**
     * List the audio rendition groups that you want included with this video
     * rendition. Use a comma-separated list. For example, say you want to include the
     * audio rendition groups that have the audio group IDs "audio_aac_1" and
     * "audio_dolby". Then you would specify this value: "audio_aac_1, audio_dolby".
     * Related setting: The rendition groups that you include in your comma-separated
     * list should all match values that you specify in the setting Audio group ID
     * (AudioGroupId) for audio renditions in the same output group as this video
     * rendition. Default behavior: If you don't specify anything here and for Audio
     * group ID, MediaConvert puts each audio variant in its own audio rendition group
     * and associates it with every video variant. Each value in your list appears in
     * your HLS parent manifest in the EXT-X-STREAM-INF tag as the value for the AUDIO
     * attribute. To continue the previous example, say that the file name for the
     * child manifest for your video rendition is "amazing_video_1.m3u8". Then, in your
     * parent manifest, each value will appear on separate lines, like this:
     * #EXT-X-STREAM-INF:AUDIO="audio_aac_1"... amazing_video_1.m3u8
     * #EXT-X-STREAM-INF:AUDIO="audio_dolby"... amazing_video_1.m3u8
     */
    inline CmfcSettings& WithAudioRenditionSets(Aws::String&& value) { SetAudioRenditionSets(std::move(value)); return *this;}

    /**
     * List the audio rendition groups that you want included with this video
     * rendition. Use a comma-separated list. For example, say you want to include the
     * audio rendition groups that have the audio group IDs "audio_aac_1" and
     * "audio_dolby". Then you would specify this value: "audio_aac_1, audio_dolby".
     * Related setting: The rendition groups that you include in your comma-separated
     * list should all match values that you specify in the setting Audio group ID
     * (AudioGroupId) for audio renditions in the same output group as this video
     * rendition. Default behavior: If you don't specify anything here and for Audio
     * group ID, MediaConvert puts each audio variant in its own audio rendition group
     * and associates it with every video variant. Each value in your list appears in
     * your HLS parent manifest in the EXT-X-STREAM-INF tag as the value for the AUDIO
     * attribute. To continue the previous example, say that the file name for the
     * child manifest for your video rendition is "amazing_video_1.m3u8". Then, in your
     * parent manifest, each value will appear on separate lines, like this:
     * #EXT-X-STREAM-INF:AUDIO="audio_aac_1"... amazing_video_1.m3u8
     * #EXT-X-STREAM-INF:AUDIO="audio_dolby"... amazing_video_1.m3u8
     */
    inline CmfcSettings& WithAudioRenditionSets(const char* value) { SetAudioRenditionSets(value); return *this;}


    /**
     * Use this setting to control the values that MediaConvert puts in your HLS parent
     * playlist to control how the client player selects which audio track to play. The
     * other options for this setting determine the values that MediaConvert writes for
     * the DEFAULT and AUTOSELECT attributes of the EXT-X-MEDIA entry for the audio
     * variant. For more information about these attributes, see the Apple
     * documentation article
     * https://developer.apple.com/documentation/http_live_streaming/example_playlists_for_http_live_streaming/adding_alternate_media_to_a_playlist.
     * Choose Alternate audio, auto select, default
     * (ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT) to set DEFAULT=YES and AUTOSELECT=YES.
     * Choose this value for only one variant in your output group. Choose Alternate
     * audio, auto select, not default (ALTERNATE_AUDIO_AUTO_SELECT) to set DEFAULT=NO
     * and AUTOSELECT=YES. Choose Alternate Audio, Not Auto Select to set DEFAULT=NO
     * and AUTOSELECT=NO. When you don't specify a value for this setting, MediaConvert
     * defaults to Alternate audio, auto select, default. When there is more than one
     * variant in your output group, you must explicitly choose a value for this
     * setting.
     */
    inline const CmfcAudioTrackType& GetAudioTrackType() const{ return m_audioTrackType; }

    /**
     * Use this setting to control the values that MediaConvert puts in your HLS parent
     * playlist to control how the client player selects which audio track to play. The
     * other options for this setting determine the values that MediaConvert writes for
     * the DEFAULT and AUTOSELECT attributes of the EXT-X-MEDIA entry for the audio
     * variant. For more information about these attributes, see the Apple
     * documentation article
     * https://developer.apple.com/documentation/http_live_streaming/example_playlists_for_http_live_streaming/adding_alternate_media_to_a_playlist.
     * Choose Alternate audio, auto select, default
     * (ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT) to set DEFAULT=YES and AUTOSELECT=YES.
     * Choose this value for only one variant in your output group. Choose Alternate
     * audio, auto select, not default (ALTERNATE_AUDIO_AUTO_SELECT) to set DEFAULT=NO
     * and AUTOSELECT=YES. Choose Alternate Audio, Not Auto Select to set DEFAULT=NO
     * and AUTOSELECT=NO. When you don't specify a value for this setting, MediaConvert
     * defaults to Alternate audio, auto select, default. When there is more than one
     * variant in your output group, you must explicitly choose a value for this
     * setting.
     */
    inline bool AudioTrackTypeHasBeenSet() const { return m_audioTrackTypeHasBeenSet; }

    /**
     * Use this setting to control the values that MediaConvert puts in your HLS parent
     * playlist to control how the client player selects which audio track to play. The
     * other options for this setting determine the values that MediaConvert writes for
     * the DEFAULT and AUTOSELECT attributes of the EXT-X-MEDIA entry for the audio
     * variant. For more information about these attributes, see the Apple
     * documentation article
     * https://developer.apple.com/documentation/http_live_streaming/example_playlists_for_http_live_streaming/adding_alternate_media_to_a_playlist.
     * Choose Alternate audio, auto select, default
     * (ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT) to set DEFAULT=YES and AUTOSELECT=YES.
     * Choose this value for only one variant in your output group. Choose Alternate
     * audio, auto select, not default (ALTERNATE_AUDIO_AUTO_SELECT) to set DEFAULT=NO
     * and AUTOSELECT=YES. Choose Alternate Audio, Not Auto Select to set DEFAULT=NO
     * and AUTOSELECT=NO. When you don't specify a value for this setting, MediaConvert
     * defaults to Alternate audio, auto select, default. When there is more than one
     * variant in your output group, you must explicitly choose a value for this
     * setting.
     */
    inline void SetAudioTrackType(const CmfcAudioTrackType& value) { m_audioTrackTypeHasBeenSet = true; m_audioTrackType = value; }

    /**
     * Use this setting to control the values that MediaConvert puts in your HLS parent
     * playlist to control how the client player selects which audio track to play. The
     * other options for this setting determine the values that MediaConvert writes for
     * the DEFAULT and AUTOSELECT attributes of the EXT-X-MEDIA entry for the audio
     * variant. For more information about these attributes, see the Apple
     * documentation article
     * https://developer.apple.com/documentation/http_live_streaming/example_playlists_for_http_live_streaming/adding_alternate_media_to_a_playlist.
     * Choose Alternate audio, auto select, default
     * (ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT) to set DEFAULT=YES and AUTOSELECT=YES.
     * Choose this value for only one variant in your output group. Choose Alternate
     * audio, auto select, not default (ALTERNATE_AUDIO_AUTO_SELECT) to set DEFAULT=NO
     * and AUTOSELECT=YES. Choose Alternate Audio, Not Auto Select to set DEFAULT=NO
     * and AUTOSELECT=NO. When you don't specify a value for this setting, MediaConvert
     * defaults to Alternate audio, auto select, default. When there is more than one
     * variant in your output group, you must explicitly choose a value for this
     * setting.
     */
    inline void SetAudioTrackType(CmfcAudioTrackType&& value) { m_audioTrackTypeHasBeenSet = true; m_audioTrackType = std::move(value); }

    /**
     * Use this setting to control the values that MediaConvert puts in your HLS parent
     * playlist to control how the client player selects which audio track to play. The
     * other options for this setting determine the values that MediaConvert writes for
     * the DEFAULT and AUTOSELECT attributes of the EXT-X-MEDIA entry for the audio
     * variant. For more information about these attributes, see the Apple
     * documentation article
     * https://developer.apple.com/documentation/http_live_streaming/example_playlists_for_http_live_streaming/adding_alternate_media_to_a_playlist.
     * Choose Alternate audio, auto select, default
     * (ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT) to set DEFAULT=YES and AUTOSELECT=YES.
     * Choose this value for only one variant in your output group. Choose Alternate
     * audio, auto select, not default (ALTERNATE_AUDIO_AUTO_SELECT) to set DEFAULT=NO
     * and AUTOSELECT=YES. Choose Alternate Audio, Not Auto Select to set DEFAULT=NO
     * and AUTOSELECT=NO. When you don't specify a value for this setting, MediaConvert
     * defaults to Alternate audio, auto select, default. When there is more than one
     * variant in your output group, you must explicitly choose a value for this
     * setting.
     */
    inline CmfcSettings& WithAudioTrackType(const CmfcAudioTrackType& value) { SetAudioTrackType(value); return *this;}

    /**
     * Use this setting to control the values that MediaConvert puts in your HLS parent
     * playlist to control how the client player selects which audio track to play. The
     * other options for this setting determine the values that MediaConvert writes for
     * the DEFAULT and AUTOSELECT attributes of the EXT-X-MEDIA entry for the audio
     * variant. For more information about these attributes, see the Apple
     * documentation article
     * https://developer.apple.com/documentation/http_live_streaming/example_playlists_for_http_live_streaming/adding_alternate_media_to_a_playlist.
     * Choose Alternate audio, auto select, default
     * (ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT) to set DEFAULT=YES and AUTOSELECT=YES.
     * Choose this value for only one variant in your output group. Choose Alternate
     * audio, auto select, not default (ALTERNATE_AUDIO_AUTO_SELECT) to set DEFAULT=NO
     * and AUTOSELECT=YES. Choose Alternate Audio, Not Auto Select to set DEFAULT=NO
     * and AUTOSELECT=NO. When you don't specify a value for this setting, MediaConvert
     * defaults to Alternate audio, auto select, default. When there is more than one
     * variant in your output group, you must explicitly choose a value for this
     * setting.
     */
    inline CmfcSettings& WithAudioTrackType(CmfcAudioTrackType&& value) { SetAudioTrackType(std::move(value)); return *this;}


    /**
     * Specify whether to flag this audio track as descriptive video service (DVS) in
     * your HLS parent manifest. When you choose Flag (FLAG), MediaConvert includes the
     * parameter CHARACTERISTICS="public.accessibility.describes-video" in the
     * EXT-X-MEDIA entry for this track. When you keep the default choice, Don't flag
     * (DONT_FLAG), MediaConvert leaves this parameter out. The DVS flag can help with
     * accessibility on Apple devices. For more information, see the Apple
     * documentation.
     */
    inline const CmfcDescriptiveVideoServiceFlag& GetDescriptiveVideoServiceFlag() const{ return m_descriptiveVideoServiceFlag; }

    /**
     * Specify whether to flag this audio track as descriptive video service (DVS) in
     * your HLS parent manifest. When you choose Flag (FLAG), MediaConvert includes the
     * parameter CHARACTERISTICS="public.accessibility.describes-video" in the
     * EXT-X-MEDIA entry for this track. When you keep the default choice, Don't flag
     * (DONT_FLAG), MediaConvert leaves this parameter out. The DVS flag can help with
     * accessibility on Apple devices. For more information, see the Apple
     * documentation.
     */
    inline bool DescriptiveVideoServiceFlagHasBeenSet() const { return m_descriptiveVideoServiceFlagHasBeenSet; }

    /**
     * Specify whether to flag this audio track as descriptive video service (DVS) in
     * your HLS parent manifest. When you choose Flag (FLAG), MediaConvert includes the
     * parameter CHARACTERISTICS="public.accessibility.describes-video" in the
     * EXT-X-MEDIA entry for this track. When you keep the default choice, Don't flag
     * (DONT_FLAG), MediaConvert leaves this parameter out. The DVS flag can help with
     * accessibility on Apple devices. For more information, see the Apple
     * documentation.
     */
    inline void SetDescriptiveVideoServiceFlag(const CmfcDescriptiveVideoServiceFlag& value) { m_descriptiveVideoServiceFlagHasBeenSet = true; m_descriptiveVideoServiceFlag = value; }

    /**
     * Specify whether to flag this audio track as descriptive video service (DVS) in
     * your HLS parent manifest. When you choose Flag (FLAG), MediaConvert includes the
     * parameter CHARACTERISTICS="public.accessibility.describes-video" in the
     * EXT-X-MEDIA entry for this track. When you keep the default choice, Don't flag
     * (DONT_FLAG), MediaConvert leaves this parameter out. The DVS flag can help with
     * accessibility on Apple devices. For more information, see the Apple
     * documentation.
     */
    inline void SetDescriptiveVideoServiceFlag(CmfcDescriptiveVideoServiceFlag&& value) { m_descriptiveVideoServiceFlagHasBeenSet = true; m_descriptiveVideoServiceFlag = std::move(value); }

    /**
     * Specify whether to flag this audio track as descriptive video service (DVS) in
     * your HLS parent manifest. When you choose Flag (FLAG), MediaConvert includes the
     * parameter CHARACTERISTICS="public.accessibility.describes-video" in the
     * EXT-X-MEDIA entry for this track. When you keep the default choice, Don't flag
     * (DONT_FLAG), MediaConvert leaves this parameter out. The DVS flag can help with
     * accessibility on Apple devices. For more information, see the Apple
     * documentation.
     */
    inline CmfcSettings& WithDescriptiveVideoServiceFlag(const CmfcDescriptiveVideoServiceFlag& value) { SetDescriptiveVideoServiceFlag(value); return *this;}

    /**
     * Specify whether to flag this audio track as descriptive video service (DVS) in
     * your HLS parent manifest. When you choose Flag (FLAG), MediaConvert includes the
     * parameter CHARACTERISTICS="public.accessibility.describes-video" in the
     * EXT-X-MEDIA entry for this track. When you keep the default choice, Don't flag
     * (DONT_FLAG), MediaConvert leaves this parameter out. The DVS flag can help with
     * accessibility on Apple devices. For more information, see the Apple
     * documentation.
     */
    inline CmfcSettings& WithDescriptiveVideoServiceFlag(CmfcDescriptiveVideoServiceFlag&& value) { SetDescriptiveVideoServiceFlag(std::move(value)); return *this;}


    /**
     * Choose Include (INCLUDE) to have MediaConvert generate an HLS child manifest
     * that lists only the I-frames for this rendition, in addition to your regular
     * manifest for this rendition. You might use this manifest as part of a workflow
     * that creates preview functions for your video. MediaConvert adds both the
     * I-frame only child manifest and the regular child manifest to the parent
     * manifest. When you don't need the I-frame only child manifest, keep the default
     * value Exclude (EXCLUDE).
     */
    inline const CmfcIFrameOnlyManifest& GetIFrameOnlyManifest() const{ return m_iFrameOnlyManifest; }

    /**
     * Choose Include (INCLUDE) to have MediaConvert generate an HLS child manifest
     * that lists only the I-frames for this rendition, in addition to your regular
     * manifest for this rendition. You might use this manifest as part of a workflow
     * that creates preview functions for your video. MediaConvert adds both the
     * I-frame only child manifest and the regular child manifest to the parent
     * manifest. When you don't need the I-frame only child manifest, keep the default
     * value Exclude (EXCLUDE).
     */
    inline bool IFrameOnlyManifestHasBeenSet() const { return m_iFrameOnlyManifestHasBeenSet; }

    /**
     * Choose Include (INCLUDE) to have MediaConvert generate an HLS child manifest
     * that lists only the I-frames for this rendition, in addition to your regular
     * manifest for this rendition. You might use this manifest as part of a workflow
     * that creates preview functions for your video. MediaConvert adds both the
     * I-frame only child manifest and the regular child manifest to the parent
     * manifest. When you don't need the I-frame only child manifest, keep the default
     * value Exclude (EXCLUDE).
     */
    inline void SetIFrameOnlyManifest(const CmfcIFrameOnlyManifest& value) { m_iFrameOnlyManifestHasBeenSet = true; m_iFrameOnlyManifest = value; }

    /**
     * Choose Include (INCLUDE) to have MediaConvert generate an HLS child manifest
     * that lists only the I-frames for this rendition, in addition to your regular
     * manifest for this rendition. You might use this manifest as part of a workflow
     * that creates preview functions for your video. MediaConvert adds both the
     * I-frame only child manifest and the regular child manifest to the parent
     * manifest. When you don't need the I-frame only child manifest, keep the default
     * value Exclude (EXCLUDE).
     */
    inline void SetIFrameOnlyManifest(CmfcIFrameOnlyManifest&& value) { m_iFrameOnlyManifestHasBeenSet = true; m_iFrameOnlyManifest = std::move(value); }

    /**
     * Choose Include (INCLUDE) to have MediaConvert generate an HLS child manifest
     * that lists only the I-frames for this rendition, in addition to your regular
     * manifest for this rendition. You might use this manifest as part of a workflow
     * that creates preview functions for your video. MediaConvert adds both the
     * I-frame only child manifest and the regular child manifest to the parent
     * manifest. When you don't need the I-frame only child manifest, keep the default
     * value Exclude (EXCLUDE).
     */
    inline CmfcSettings& WithIFrameOnlyManifest(const CmfcIFrameOnlyManifest& value) { SetIFrameOnlyManifest(value); return *this;}

    /**
     * Choose Include (INCLUDE) to have MediaConvert generate an HLS child manifest
     * that lists only the I-frames for this rendition, in addition to your regular
     * manifest for this rendition. You might use this manifest as part of a workflow
     * that creates preview functions for your video. MediaConvert adds both the
     * I-frame only child manifest and the regular child manifest to the parent
     * manifest. When you don't need the I-frame only child manifest, keep the default
     * value Exclude (EXCLUDE).
     */
    inline CmfcSettings& WithIFrameOnlyManifest(CmfcIFrameOnlyManifest&& value) { SetIFrameOnlyManifest(std::move(value)); return *this;}


    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline const CmfcScte35Esam& GetScte35Esam() const{ return m_scte35Esam; }

    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline bool Scte35EsamHasBeenSet() const { return m_scte35EsamHasBeenSet; }

    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline void SetScte35Esam(const CmfcScte35Esam& value) { m_scte35EsamHasBeenSet = true; m_scte35Esam = value; }

    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline void SetScte35Esam(CmfcScte35Esam&& value) { m_scte35EsamHasBeenSet = true; m_scte35Esam = std::move(value); }

    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline CmfcSettings& WithScte35Esam(const CmfcScte35Esam& value) { SetScte35Esam(value); return *this;}

    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline CmfcSettings& WithScte35Esam(CmfcScte35Esam&& value) { SetScte35Esam(std::move(value)); return *this;}


    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline const CmfcScte35Source& GetScte35Source() const{ return m_scte35Source; }

    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline bool Scte35SourceHasBeenSet() const { return m_scte35SourceHasBeenSet; }

    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline void SetScte35Source(const CmfcScte35Source& value) { m_scte35SourceHasBeenSet = true; m_scte35Source = value; }

    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline void SetScte35Source(CmfcScte35Source&& value) { m_scte35SourceHasBeenSet = true; m_scte35Source = std::move(value); }

    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline CmfcSettings& WithScte35Source(const CmfcScte35Source& value) { SetScte35Source(value); return *this;}

    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline CmfcSettings& WithScte35Source(CmfcScte35Source&& value) { SetScte35Source(std::move(value)); return *this;}

  private:

    CmfcAudioDuration m_audioDuration;
    bool m_audioDurationHasBeenSet;

    Aws::String m_audioGroupId;
    bool m_audioGroupIdHasBeenSet;

    Aws::String m_audioRenditionSets;
    bool m_audioRenditionSetsHasBeenSet;

    CmfcAudioTrackType m_audioTrackType;
    bool m_audioTrackTypeHasBeenSet;

    CmfcDescriptiveVideoServiceFlag m_descriptiveVideoServiceFlag;
    bool m_descriptiveVideoServiceFlagHasBeenSet;

    CmfcIFrameOnlyManifest m_iFrameOnlyManifest;
    bool m_iFrameOnlyManifestHasBeenSet;

    CmfcScte35Esam m_scte35Esam;
    bool m_scte35EsamHasBeenSet;

    CmfcScte35Source m_scte35Source;
    bool m_scte35SourceHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
