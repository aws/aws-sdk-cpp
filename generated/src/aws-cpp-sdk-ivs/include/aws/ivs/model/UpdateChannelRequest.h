/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/model/ContainerFormat.h>
#include <aws/ivs/model/ChannelLatencyMode.h>
#include <aws/ivs/model/MultitrackInputConfiguration.h>
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


    ///@{
    /**
     * <p>ARN of the channel to be updated.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline UpdateChannelRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateChannelRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateChannelRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the channel is private (enabled for playback authorization).</p>
     */
    inline bool GetAuthorized() const{ return m_authorized; }
    inline bool AuthorizedHasBeenSet() const { return m_authorizedHasBeenSet; }
    inline void SetAuthorized(bool value) { m_authorizedHasBeenSet = true; m_authorized = value; }
    inline UpdateChannelRequest& WithAuthorized(bool value) { SetAuthorized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates which content-packaging format is used (MPEG-TS or fMP4). If
     * <code>multitrackInputConfiguration</code> is specified and <code>enabled</code>
     * is <code>true</code>, then <code>containerFormat</code> is required and must be
     * set to <code>FRAGMENTED_MP4</code>. Otherwise, <code>containerFormat</code> may
     * be set to <code>TS</code> or <code>FRAGMENTED_MP4</code>. Default:
     * <code>TS</code>.</p>
     */
    inline const ContainerFormat& GetContainerFormat() const{ return m_containerFormat; }
    inline bool ContainerFormatHasBeenSet() const { return m_containerFormatHasBeenSet; }
    inline void SetContainerFormat(const ContainerFormat& value) { m_containerFormatHasBeenSet = true; m_containerFormat = value; }
    inline void SetContainerFormat(ContainerFormat&& value) { m_containerFormatHasBeenSet = true; m_containerFormat = std::move(value); }
    inline UpdateChannelRequest& WithContainerFormat(const ContainerFormat& value) { SetContainerFormat(value); return *this;}
    inline UpdateChannelRequest& WithContainerFormat(ContainerFormat&& value) { SetContainerFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the channel allows insecure RTMP and SRT ingest. Default:
     * <code>false</code>.</p>
     */
    inline bool GetInsecureIngest() const{ return m_insecureIngest; }
    inline bool InsecureIngestHasBeenSet() const { return m_insecureIngestHasBeenSet; }
    inline void SetInsecureIngest(bool value) { m_insecureIngestHasBeenSet = true; m_insecureIngest = value; }
    inline UpdateChannelRequest& WithInsecureIngest(bool value) { SetInsecureIngest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Channel latency mode. Use <code>NORMAL</code> to broadcast and deliver live
     * video up to Full HD. Use <code>LOW</code> for near-real-time interaction with
     * viewers.</p>
     */
    inline const ChannelLatencyMode& GetLatencyMode() const{ return m_latencyMode; }
    inline bool LatencyModeHasBeenSet() const { return m_latencyModeHasBeenSet; }
    inline void SetLatencyMode(const ChannelLatencyMode& value) { m_latencyModeHasBeenSet = true; m_latencyMode = value; }
    inline void SetLatencyMode(ChannelLatencyMode&& value) { m_latencyModeHasBeenSet = true; m_latencyMode = std::move(value); }
    inline UpdateChannelRequest& WithLatencyMode(const ChannelLatencyMode& value) { SetLatencyMode(value); return *this;}
    inline UpdateChannelRequest& WithLatencyMode(ChannelLatencyMode&& value) { SetLatencyMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object specifying multitrack input configuration. Default: no multitrack
     * input configuration is specified.</p>
     */
    inline const MultitrackInputConfiguration& GetMultitrackInputConfiguration() const{ return m_multitrackInputConfiguration; }
    inline bool MultitrackInputConfigurationHasBeenSet() const { return m_multitrackInputConfigurationHasBeenSet; }
    inline void SetMultitrackInputConfiguration(const MultitrackInputConfiguration& value) { m_multitrackInputConfigurationHasBeenSet = true; m_multitrackInputConfiguration = value; }
    inline void SetMultitrackInputConfiguration(MultitrackInputConfiguration&& value) { m_multitrackInputConfigurationHasBeenSet = true; m_multitrackInputConfiguration = std::move(value); }
    inline UpdateChannelRequest& WithMultitrackInputConfiguration(const MultitrackInputConfiguration& value) { SetMultitrackInputConfiguration(value); return *this;}
    inline UpdateChannelRequest& WithMultitrackInputConfiguration(MultitrackInputConfiguration&& value) { SetMultitrackInputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Channel name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateChannelRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateChannelRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateChannelRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Playback-restriction-policy ARN. A valid ARN value here both specifies the
     * ARN and enables playback restriction. If this is set to an empty string,
     * playback restriction policy is disabled.</p>
     */
    inline const Aws::String& GetPlaybackRestrictionPolicyArn() const{ return m_playbackRestrictionPolicyArn; }
    inline bool PlaybackRestrictionPolicyArnHasBeenSet() const { return m_playbackRestrictionPolicyArnHasBeenSet; }
    inline void SetPlaybackRestrictionPolicyArn(const Aws::String& value) { m_playbackRestrictionPolicyArnHasBeenSet = true; m_playbackRestrictionPolicyArn = value; }
    inline void SetPlaybackRestrictionPolicyArn(Aws::String&& value) { m_playbackRestrictionPolicyArnHasBeenSet = true; m_playbackRestrictionPolicyArn = std::move(value); }
    inline void SetPlaybackRestrictionPolicyArn(const char* value) { m_playbackRestrictionPolicyArnHasBeenSet = true; m_playbackRestrictionPolicyArn.assign(value); }
    inline UpdateChannelRequest& WithPlaybackRestrictionPolicyArn(const Aws::String& value) { SetPlaybackRestrictionPolicyArn(value); return *this;}
    inline UpdateChannelRequest& WithPlaybackRestrictionPolicyArn(Aws::String&& value) { SetPlaybackRestrictionPolicyArn(std::move(value)); return *this;}
    inline UpdateChannelRequest& WithPlaybackRestrictionPolicyArn(const char* value) { SetPlaybackRestrictionPolicyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional transcode preset for the channel. This is selectable only for
     * <code>ADVANCED_HD</code> and <code>ADVANCED_SD</code> channel types. For those
     * channel types, the default <code>preset</code> is
     * <code>HIGHER_BANDWIDTH_DELIVERY</code>. For other channel types
     * (<code>BASIC</code> and <code>STANDARD</code>), <code>preset</code> is the empty
     * string (<code>""</code>).</p>
     */
    inline const TranscodePreset& GetPreset() const{ return m_preset; }
    inline bool PresetHasBeenSet() const { return m_presetHasBeenSet; }
    inline void SetPreset(const TranscodePreset& value) { m_presetHasBeenSet = true; m_preset = value; }
    inline void SetPreset(TranscodePreset&& value) { m_presetHasBeenSet = true; m_preset = std::move(value); }
    inline UpdateChannelRequest& WithPreset(const TranscodePreset& value) { SetPreset(value); return *this;}
    inline UpdateChannelRequest& WithPreset(TranscodePreset&& value) { SetPreset(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recording-configuration ARN. A valid ARN value here both specifies the ARN
     * and enables recording. If this is set to an empty string, recording is
     * disabled.</p>
     */
    inline const Aws::String& GetRecordingConfigurationArn() const{ return m_recordingConfigurationArn; }
    inline bool RecordingConfigurationArnHasBeenSet() const { return m_recordingConfigurationArnHasBeenSet; }
    inline void SetRecordingConfigurationArn(const Aws::String& value) { m_recordingConfigurationArnHasBeenSet = true; m_recordingConfigurationArn = value; }
    inline void SetRecordingConfigurationArn(Aws::String&& value) { m_recordingConfigurationArnHasBeenSet = true; m_recordingConfigurationArn = std::move(value); }
    inline void SetRecordingConfigurationArn(const char* value) { m_recordingConfigurationArnHasBeenSet = true; m_recordingConfigurationArn.assign(value); }
    inline UpdateChannelRequest& WithRecordingConfigurationArn(const Aws::String& value) { SetRecordingConfigurationArn(value); return *this;}
    inline UpdateChannelRequest& WithRecordingConfigurationArn(Aws::String&& value) { SetRecordingConfigurationArn(std::move(value)); return *this;}
    inline UpdateChannelRequest& WithRecordingConfigurationArn(const char* value) { SetRecordingConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Channel type, which determines the allowable resolution and bitrate. <i>If
     * you exceed the allowable input resolution or bitrate, the stream probably will
     * disconnect immediately.</i> Default: <code>STANDARD</code>. For details, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/LowLatencyAPIReference/channel-types.html">Channel
     * Types</a>.</p>
     */
    inline const ChannelType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ChannelType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ChannelType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline UpdateChannelRequest& WithType(const ChannelType& value) { SetType(value); return *this;}
    inline UpdateChannelRequest& WithType(ChannelType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    bool m_authorized;
    bool m_authorizedHasBeenSet = false;

    ContainerFormat m_containerFormat;
    bool m_containerFormatHasBeenSet = false;

    bool m_insecureIngest;
    bool m_insecureIngestHasBeenSet = false;

    ChannelLatencyMode m_latencyMode;
    bool m_latencyModeHasBeenSet = false;

    MultitrackInputConfiguration m_multitrackInputConfiguration;
    bool m_multitrackInputConfigurationHasBeenSet = false;

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
