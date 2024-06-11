﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/model/ChannelLatencyMode.h>
#include <aws/ivs/model/TranscodePreset.h>
#include <aws/ivs/model/Srt.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ivs/model/ChannelType.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>Object specifying a channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/Channel">AWS API
   * Reference</a></p>
   */
  class Channel
  {
  public:
    AWS_IVS_API Channel();
    AWS_IVS_API Channel(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Channel ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Channel& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Channel& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Channel& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the channel is private (enabled for playback authorization). Default:
     * <code>false</code>.</p>
     */
    inline bool GetAuthorized() const{ return m_authorized; }
    inline bool AuthorizedHasBeenSet() const { return m_authorizedHasBeenSet; }
    inline void SetAuthorized(bool value) { m_authorizedHasBeenSet = true; m_authorized = value; }
    inline Channel& WithAuthorized(bool value) { SetAuthorized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Channel ingest endpoint, part of the definition of an ingest server, used
     * when you set up streaming software.</p>
     */
    inline const Aws::String& GetIngestEndpoint() const{ return m_ingestEndpoint; }
    inline bool IngestEndpointHasBeenSet() const { return m_ingestEndpointHasBeenSet; }
    inline void SetIngestEndpoint(const Aws::String& value) { m_ingestEndpointHasBeenSet = true; m_ingestEndpoint = value; }
    inline void SetIngestEndpoint(Aws::String&& value) { m_ingestEndpointHasBeenSet = true; m_ingestEndpoint = std::move(value); }
    inline void SetIngestEndpoint(const char* value) { m_ingestEndpointHasBeenSet = true; m_ingestEndpoint.assign(value); }
    inline Channel& WithIngestEndpoint(const Aws::String& value) { SetIngestEndpoint(value); return *this;}
    inline Channel& WithIngestEndpoint(Aws::String&& value) { SetIngestEndpoint(std::move(value)); return *this;}
    inline Channel& WithIngestEndpoint(const char* value) { SetIngestEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the channel allows insecure RTMP ingest. Default:
     * <code>false</code>.</p>
     */
    inline bool GetInsecureIngest() const{ return m_insecureIngest; }
    inline bool InsecureIngestHasBeenSet() const { return m_insecureIngestHasBeenSet; }
    inline void SetInsecureIngest(bool value) { m_insecureIngestHasBeenSet = true; m_insecureIngest = value; }
    inline Channel& WithInsecureIngest(bool value) { SetInsecureIngest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Channel latency mode. Use <code>NORMAL</code> to broadcast and deliver live
     * video up to Full HD. Use <code>LOW</code> for near-real-time interaction with
     * viewers. Default: <code>LOW</code>.</p>
     */
    inline const ChannelLatencyMode& GetLatencyMode() const{ return m_latencyMode; }
    inline bool LatencyModeHasBeenSet() const { return m_latencyModeHasBeenSet; }
    inline void SetLatencyMode(const ChannelLatencyMode& value) { m_latencyModeHasBeenSet = true; m_latencyMode = value; }
    inline void SetLatencyMode(ChannelLatencyMode&& value) { m_latencyModeHasBeenSet = true; m_latencyMode = std::move(value); }
    inline Channel& WithLatencyMode(const ChannelLatencyMode& value) { SetLatencyMode(value); return *this;}
    inline Channel& WithLatencyMode(ChannelLatencyMode&& value) { SetLatencyMode(std::move(value)); return *this;}
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
    inline Channel& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Channel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Channel& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Playback-restriction-policy ARN. A valid ARN value here both specifies the
     * ARN and enables playback restriction. Default: "" (empty string, no playback
     * restriction policy is applied).</p>
     */
    inline const Aws::String& GetPlaybackRestrictionPolicyArn() const{ return m_playbackRestrictionPolicyArn; }
    inline bool PlaybackRestrictionPolicyArnHasBeenSet() const { return m_playbackRestrictionPolicyArnHasBeenSet; }
    inline void SetPlaybackRestrictionPolicyArn(const Aws::String& value) { m_playbackRestrictionPolicyArnHasBeenSet = true; m_playbackRestrictionPolicyArn = value; }
    inline void SetPlaybackRestrictionPolicyArn(Aws::String&& value) { m_playbackRestrictionPolicyArnHasBeenSet = true; m_playbackRestrictionPolicyArn = std::move(value); }
    inline void SetPlaybackRestrictionPolicyArn(const char* value) { m_playbackRestrictionPolicyArnHasBeenSet = true; m_playbackRestrictionPolicyArn.assign(value); }
    inline Channel& WithPlaybackRestrictionPolicyArn(const Aws::String& value) { SetPlaybackRestrictionPolicyArn(value); return *this;}
    inline Channel& WithPlaybackRestrictionPolicyArn(Aws::String&& value) { SetPlaybackRestrictionPolicyArn(std::move(value)); return *this;}
    inline Channel& WithPlaybackRestrictionPolicyArn(const char* value) { SetPlaybackRestrictionPolicyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Channel playback URL.</p>
     */
    inline const Aws::String& GetPlaybackUrl() const{ return m_playbackUrl; }
    inline bool PlaybackUrlHasBeenSet() const { return m_playbackUrlHasBeenSet; }
    inline void SetPlaybackUrl(const Aws::String& value) { m_playbackUrlHasBeenSet = true; m_playbackUrl = value; }
    inline void SetPlaybackUrl(Aws::String&& value) { m_playbackUrlHasBeenSet = true; m_playbackUrl = std::move(value); }
    inline void SetPlaybackUrl(const char* value) { m_playbackUrlHasBeenSet = true; m_playbackUrl.assign(value); }
    inline Channel& WithPlaybackUrl(const Aws::String& value) { SetPlaybackUrl(value); return *this;}
    inline Channel& WithPlaybackUrl(Aws::String&& value) { SetPlaybackUrl(std::move(value)); return *this;}
    inline Channel& WithPlaybackUrl(const char* value) { SetPlaybackUrl(value); return *this;}
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
    inline Channel& WithPreset(const TranscodePreset& value) { SetPreset(value); return *this;}
    inline Channel& WithPreset(TranscodePreset&& value) { SetPreset(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recording-configuration ARN. A valid ARN value here both specifies the ARN
     * and enables recording. Default: "" (empty string, recording is disabled).</p>
     */
    inline const Aws::String& GetRecordingConfigurationArn() const{ return m_recordingConfigurationArn; }
    inline bool RecordingConfigurationArnHasBeenSet() const { return m_recordingConfigurationArnHasBeenSet; }
    inline void SetRecordingConfigurationArn(const Aws::String& value) { m_recordingConfigurationArnHasBeenSet = true; m_recordingConfigurationArn = value; }
    inline void SetRecordingConfigurationArn(Aws::String&& value) { m_recordingConfigurationArnHasBeenSet = true; m_recordingConfigurationArn = std::move(value); }
    inline void SetRecordingConfigurationArn(const char* value) { m_recordingConfigurationArnHasBeenSet = true; m_recordingConfigurationArn.assign(value); }
    inline Channel& WithRecordingConfigurationArn(const Aws::String& value) { SetRecordingConfigurationArn(value); return *this;}
    inline Channel& WithRecordingConfigurationArn(Aws::String&& value) { SetRecordingConfigurationArn(std::move(value)); return *this;}
    inline Channel& WithRecordingConfigurationArn(const char* value) { SetRecordingConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the endpoint and optional passphrase for streaming with the SRT
     * protocol.</p>
     */
    inline const Srt& GetSrt() const{ return m_srt; }
    inline bool SrtHasBeenSet() const { return m_srtHasBeenSet; }
    inline void SetSrt(const Srt& value) { m_srtHasBeenSet = true; m_srt = value; }
    inline void SetSrt(Srt&& value) { m_srtHasBeenSet = true; m_srt = std::move(value); }
    inline Channel& WithSrt(const Srt& value) { SetSrt(value); return *this;}
    inline Channel& WithSrt(Srt&& value) { SetSrt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags attached to the resource. Array of 1-50 maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> for more information, including restrictions
     * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
     * service-specific constraints beyond what is documented there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Channel& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Channel& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Channel& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Channel& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Channel& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Channel& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Channel& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Channel& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Channel& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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
    inline Channel& WithType(const ChannelType& value) { SetType(value); return *this;}
    inline Channel& WithType(ChannelType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    bool m_authorized;
    bool m_authorizedHasBeenSet = false;

    Aws::String m_ingestEndpoint;
    bool m_ingestEndpointHasBeenSet = false;

    bool m_insecureIngest;
    bool m_insecureIngestHasBeenSet = false;

    ChannelLatencyMode m_latencyMode;
    bool m_latencyModeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_playbackRestrictionPolicyArn;
    bool m_playbackRestrictionPolicyArnHasBeenSet = false;

    Aws::String m_playbackUrl;
    bool m_playbackUrlHasBeenSet = false;

    TranscodePreset m_preset;
    bool m_presetHasBeenSet = false;

    Aws::String m_recordingConfigurationArn;
    bool m_recordingConfigurationArnHasBeenSet = false;

    Srt m_srt;
    bool m_srtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ChannelType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
