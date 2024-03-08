/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/model/ChannelLatencyMode.h>
#include <aws/ivs/model/TranscodePreset.h>
#include <aws/ivs/model/ChannelType.h>
#include <utility>

namespace Aws
{
namespace IVS
{
namespace Model
{

  /**
   */
  class UpdateChannelRequest : public IVSRequest
  {
  public:
    AWS_IVS_API UpdateChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChannel"; }

    AWS_IVS_API Aws::String SerializePayload() const override;


    /**
     * <p>ARN of the channel to be updated.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>ARN of the channel to be updated.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>ARN of the channel to be updated.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>ARN of the channel to be updated.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>ARN of the channel to be updated.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>ARN of the channel to be updated.</p>
     */
    inline UpdateChannelRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>ARN of the channel to be updated.</p>
     */
    inline UpdateChannelRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the channel to be updated.</p>
     */
    inline UpdateChannelRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Whether the channel is private (enabled for playback authorization).</p>
     */
    inline bool GetAuthorized() const{ return m_authorized; }

    /**
     * <p>Whether the channel is private (enabled for playback authorization).</p>
     */
    inline bool AuthorizedHasBeenSet() const { return m_authorizedHasBeenSet; }

    /**
     * <p>Whether the channel is private (enabled for playback authorization).</p>
     */
    inline void SetAuthorized(bool value) { m_authorizedHasBeenSet = true; m_authorized = value; }

    /**
     * <p>Whether the channel is private (enabled for playback authorization).</p>
     */
    inline UpdateChannelRequest& WithAuthorized(bool value) { SetAuthorized(value); return *this;}


    /**
     * <p>Whether the channel allows insecure RTMP ingest. Default:
     * <code>false</code>.</p>
     */
    inline bool GetInsecureIngest() const{ return m_insecureIngest; }

    /**
     * <p>Whether the channel allows insecure RTMP ingest. Default:
     * <code>false</code>.</p>
     */
    inline bool InsecureIngestHasBeenSet() const { return m_insecureIngestHasBeenSet; }

    /**
     * <p>Whether the channel allows insecure RTMP ingest. Default:
     * <code>false</code>.</p>
     */
    inline void SetInsecureIngest(bool value) { m_insecureIngestHasBeenSet = true; m_insecureIngest = value; }

    /**
     * <p>Whether the channel allows insecure RTMP ingest. Default:
     * <code>false</code>.</p>
     */
    inline UpdateChannelRequest& WithInsecureIngest(bool value) { SetInsecureIngest(value); return *this;}


    /**
     * <p>Channel latency mode. Use <code>NORMAL</code> to broadcast and deliver live
     * video up to Full HD. Use <code>LOW</code> for near-real-time interaction with
     * viewers.</p>
     */
    inline const ChannelLatencyMode& GetLatencyMode() const{ return m_latencyMode; }

    /**
     * <p>Channel latency mode. Use <code>NORMAL</code> to broadcast and deliver live
     * video up to Full HD. Use <code>LOW</code> for near-real-time interaction with
     * viewers.</p>
     */
    inline bool LatencyModeHasBeenSet() const { return m_latencyModeHasBeenSet; }

    /**
     * <p>Channel latency mode. Use <code>NORMAL</code> to broadcast and deliver live
     * video up to Full HD. Use <code>LOW</code> for near-real-time interaction with
     * viewers.</p>
     */
    inline void SetLatencyMode(const ChannelLatencyMode& value) { m_latencyModeHasBeenSet = true; m_latencyMode = value; }

    /**
     * <p>Channel latency mode. Use <code>NORMAL</code> to broadcast and deliver live
     * video up to Full HD. Use <code>LOW</code> for near-real-time interaction with
     * viewers.</p>
     */
    inline void SetLatencyMode(ChannelLatencyMode&& value) { m_latencyModeHasBeenSet = true; m_latencyMode = std::move(value); }

    /**
     * <p>Channel latency mode. Use <code>NORMAL</code> to broadcast and deliver live
     * video up to Full HD. Use <code>LOW</code> for near-real-time interaction with
     * viewers.</p>
     */
    inline UpdateChannelRequest& WithLatencyMode(const ChannelLatencyMode& value) { SetLatencyMode(value); return *this;}

    /**
     * <p>Channel latency mode. Use <code>NORMAL</code> to broadcast and deliver live
     * video up to Full HD. Use <code>LOW</code> for near-real-time interaction with
     * viewers.</p>
     */
    inline UpdateChannelRequest& WithLatencyMode(ChannelLatencyMode&& value) { SetLatencyMode(std::move(value)); return *this;}


    /**
     * <p>Channel name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Channel name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Channel name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Channel name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Channel name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Channel name.</p>
     */
    inline UpdateChannelRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Channel name.</p>
     */
    inline UpdateChannelRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Channel name.</p>
     */
    inline UpdateChannelRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Playback-restriction-policy ARN. A valid ARN value here both specifies the
     * ARN and enables playback restriction. If this is set to an empty string,
     * playback restriction policy is disabled.</p>
     */
    inline const Aws::String& GetPlaybackRestrictionPolicyArn() const{ return m_playbackRestrictionPolicyArn; }

    /**
     * <p>Playback-restriction-policy ARN. A valid ARN value here both specifies the
     * ARN and enables playback restriction. If this is set to an empty string,
     * playback restriction policy is disabled.</p>
     */
    inline bool PlaybackRestrictionPolicyArnHasBeenSet() const { return m_playbackRestrictionPolicyArnHasBeenSet; }

    /**
     * <p>Playback-restriction-policy ARN. A valid ARN value here both specifies the
     * ARN and enables playback restriction. If this is set to an empty string,
     * playback restriction policy is disabled.</p>
     */
    inline void SetPlaybackRestrictionPolicyArn(const Aws::String& value) { m_playbackRestrictionPolicyArnHasBeenSet = true; m_playbackRestrictionPolicyArn = value; }

    /**
     * <p>Playback-restriction-policy ARN. A valid ARN value here both specifies the
     * ARN and enables playback restriction. If this is set to an empty string,
     * playback restriction policy is disabled.</p>
     */
    inline void SetPlaybackRestrictionPolicyArn(Aws::String&& value) { m_playbackRestrictionPolicyArnHasBeenSet = true; m_playbackRestrictionPolicyArn = std::move(value); }

    /**
     * <p>Playback-restriction-policy ARN. A valid ARN value here both specifies the
     * ARN and enables playback restriction. If this is set to an empty string,
     * playback restriction policy is disabled.</p>
     */
    inline void SetPlaybackRestrictionPolicyArn(const char* value) { m_playbackRestrictionPolicyArnHasBeenSet = true; m_playbackRestrictionPolicyArn.assign(value); }

    /**
     * <p>Playback-restriction-policy ARN. A valid ARN value here both specifies the
     * ARN and enables playback restriction. If this is set to an empty string,
     * playback restriction policy is disabled.</p>
     */
    inline UpdateChannelRequest& WithPlaybackRestrictionPolicyArn(const Aws::String& value) { SetPlaybackRestrictionPolicyArn(value); return *this;}

    /**
     * <p>Playback-restriction-policy ARN. A valid ARN value here both specifies the
     * ARN and enables playback restriction. If this is set to an empty string,
     * playback restriction policy is disabled.</p>
     */
    inline UpdateChannelRequest& WithPlaybackRestrictionPolicyArn(Aws::String&& value) { SetPlaybackRestrictionPolicyArn(std::move(value)); return *this;}

    /**
     * <p>Playback-restriction-policy ARN. A valid ARN value here both specifies the
     * ARN and enables playback restriction. If this is set to an empty string,
     * playback restriction policy is disabled.</p>
     */
    inline UpdateChannelRequest& WithPlaybackRestrictionPolicyArn(const char* value) { SetPlaybackRestrictionPolicyArn(value); return *this;}


    /**
     * <p>Optional transcode preset for the channel. This is selectable only for
     * <code>ADVANCED_HD</code> and <code>ADVANCED_SD</code> channel types. For those
     * channel types, the default <code>preset</code> is
     * <code>HIGHER_BANDWIDTH_DELIVERY</code>. For other channel types
     * (<code>BASIC</code> and <code>STANDARD</code>), <code>preset</code> is the empty
     * string (<code>""</code>).</p>
     */
    inline const TranscodePreset& GetPreset() const{ return m_preset; }

    /**
     * <p>Optional transcode preset for the channel. This is selectable only for
     * <code>ADVANCED_HD</code> and <code>ADVANCED_SD</code> channel types. For those
     * channel types, the default <code>preset</code> is
     * <code>HIGHER_BANDWIDTH_DELIVERY</code>. For other channel types
     * (<code>BASIC</code> and <code>STANDARD</code>), <code>preset</code> is the empty
     * string (<code>""</code>).</p>
     */
    inline bool PresetHasBeenSet() const { return m_presetHasBeenSet; }

    /**
     * <p>Optional transcode preset for the channel. This is selectable only for
     * <code>ADVANCED_HD</code> and <code>ADVANCED_SD</code> channel types. For those
     * channel types, the default <code>preset</code> is
     * <code>HIGHER_BANDWIDTH_DELIVERY</code>. For other channel types
     * (<code>BASIC</code> and <code>STANDARD</code>), <code>preset</code> is the empty
     * string (<code>""</code>).</p>
     */
    inline void SetPreset(const TranscodePreset& value) { m_presetHasBeenSet = true; m_preset = value; }

    /**
     * <p>Optional transcode preset for the channel. This is selectable only for
     * <code>ADVANCED_HD</code> and <code>ADVANCED_SD</code> channel types. For those
     * channel types, the default <code>preset</code> is
     * <code>HIGHER_BANDWIDTH_DELIVERY</code>. For other channel types
     * (<code>BASIC</code> and <code>STANDARD</code>), <code>preset</code> is the empty
     * string (<code>""</code>).</p>
     */
    inline void SetPreset(TranscodePreset&& value) { m_presetHasBeenSet = true; m_preset = std::move(value); }

    /**
     * <p>Optional transcode preset for the channel. This is selectable only for
     * <code>ADVANCED_HD</code> and <code>ADVANCED_SD</code> channel types. For those
     * channel types, the default <code>preset</code> is
     * <code>HIGHER_BANDWIDTH_DELIVERY</code>. For other channel types
     * (<code>BASIC</code> and <code>STANDARD</code>), <code>preset</code> is the empty
     * string (<code>""</code>).</p>
     */
    inline UpdateChannelRequest& WithPreset(const TranscodePreset& value) { SetPreset(value); return *this;}

    /**
     * <p>Optional transcode preset for the channel. This is selectable only for
     * <code>ADVANCED_HD</code> and <code>ADVANCED_SD</code> channel types. For those
     * channel types, the default <code>preset</code> is
     * <code>HIGHER_BANDWIDTH_DELIVERY</code>. For other channel types
     * (<code>BASIC</code> and <code>STANDARD</code>), <code>preset</code> is the empty
     * string (<code>""</code>).</p>
     */
    inline UpdateChannelRequest& WithPreset(TranscodePreset&& value) { SetPreset(std::move(value)); return *this;}


    /**
     * <p>Recording-configuration ARN. A valid ARN value here both specifies the ARN
     * and enables recording. If this is set to an empty string, recording is
     * disabled.</p>
     */
    inline const Aws::String& GetRecordingConfigurationArn() const{ return m_recordingConfigurationArn; }

    /**
     * <p>Recording-configuration ARN. A valid ARN value here both specifies the ARN
     * and enables recording. If this is set to an empty string, recording is
     * disabled.</p>
     */
    inline bool RecordingConfigurationArnHasBeenSet() const { return m_recordingConfigurationArnHasBeenSet; }

    /**
     * <p>Recording-configuration ARN. A valid ARN value here both specifies the ARN
     * and enables recording. If this is set to an empty string, recording is
     * disabled.</p>
     */
    inline void SetRecordingConfigurationArn(const Aws::String& value) { m_recordingConfigurationArnHasBeenSet = true; m_recordingConfigurationArn = value; }

    /**
     * <p>Recording-configuration ARN. A valid ARN value here both specifies the ARN
     * and enables recording. If this is set to an empty string, recording is
     * disabled.</p>
     */
    inline void SetRecordingConfigurationArn(Aws::String&& value) { m_recordingConfigurationArnHasBeenSet = true; m_recordingConfigurationArn = std::move(value); }

    /**
     * <p>Recording-configuration ARN. A valid ARN value here both specifies the ARN
     * and enables recording. If this is set to an empty string, recording is
     * disabled.</p>
     */
    inline void SetRecordingConfigurationArn(const char* value) { m_recordingConfigurationArnHasBeenSet = true; m_recordingConfigurationArn.assign(value); }

    /**
     * <p>Recording-configuration ARN. A valid ARN value here both specifies the ARN
     * and enables recording. If this is set to an empty string, recording is
     * disabled.</p>
     */
    inline UpdateChannelRequest& WithRecordingConfigurationArn(const Aws::String& value) { SetRecordingConfigurationArn(value); return *this;}

    /**
     * <p>Recording-configuration ARN. A valid ARN value here both specifies the ARN
     * and enables recording. If this is set to an empty string, recording is
     * disabled.</p>
     */
    inline UpdateChannelRequest& WithRecordingConfigurationArn(Aws::String&& value) { SetRecordingConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>Recording-configuration ARN. A valid ARN value here both specifies the ARN
     * and enables recording. If this is set to an empty string, recording is
     * disabled.</p>
     */
    inline UpdateChannelRequest& WithRecordingConfigurationArn(const char* value) { SetRecordingConfigurationArn(value); return *this;}


    /**
     * <p>Channel type, which determines the allowable resolution and bitrate. <i>If
     * you exceed the allowable input resolution or bitrate, the stream probably will
     * disconnect immediately.</i> Default: <code>STANDARD</code>. For details, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/LowLatencyAPIReference/channel-types.html">Channel
     * Types</a>.</p>
     */
    inline const ChannelType& GetType() const{ return m_type; }

    /**
     * <p>Channel type, which determines the allowable resolution and bitrate. <i>If
     * you exceed the allowable input resolution or bitrate, the stream probably will
     * disconnect immediately.</i> Default: <code>STANDARD</code>. For details, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/LowLatencyAPIReference/channel-types.html">Channel
     * Types</a>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Channel type, which determines the allowable resolution and bitrate. <i>If
     * you exceed the allowable input resolution or bitrate, the stream probably will
     * disconnect immediately.</i> Default: <code>STANDARD</code>. For details, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/LowLatencyAPIReference/channel-types.html">Channel
     * Types</a>.</p>
     */
    inline void SetType(const ChannelType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Channel type, which determines the allowable resolution and bitrate. <i>If
     * you exceed the allowable input resolution or bitrate, the stream probably will
     * disconnect immediately.</i> Default: <code>STANDARD</code>. For details, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/LowLatencyAPIReference/channel-types.html">Channel
     * Types</a>.</p>
     */
    inline void SetType(ChannelType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Channel type, which determines the allowable resolution and bitrate. <i>If
     * you exceed the allowable input resolution or bitrate, the stream probably will
     * disconnect immediately.</i> Default: <code>STANDARD</code>. For details, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/LowLatencyAPIReference/channel-types.html">Channel
     * Types</a>.</p>
     */
    inline UpdateChannelRequest& WithType(const ChannelType& value) { SetType(value); return *this;}

    /**
     * <p>Channel type, which determines the allowable resolution and bitrate. <i>If
     * you exceed the allowable input resolution or bitrate, the stream probably will
     * disconnect immediately.</i> Default: <code>STANDARD</code>. For details, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/LowLatencyAPIReference/channel-types.html">Channel
     * Types</a>.</p>
     */
    inline UpdateChannelRequest& WithType(ChannelType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    bool m_authorized;
    bool m_authorizedHasBeenSet = false;

    bool m_insecureIngest;
    bool m_insecureIngestHasBeenSet = false;

    ChannelLatencyMode m_latencyMode;
    bool m_latencyModeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_playbackRestrictionPolicyArn;
    bool m_playbackRestrictionPolicyArnHasBeenSet = false;

    TranscodePreset m_preset;
    bool m_presetHasBeenSet = false;

    Aws::String m_recordingConfigurationArn;
    bool m_recordingConfigurationArnHasBeenSet = false;

    ChannelType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
