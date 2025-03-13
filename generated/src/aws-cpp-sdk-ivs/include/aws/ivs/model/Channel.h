/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/model/ContainerFormat.h>
#include <aws/ivs/model/ChannelLatencyMode.h>
#include <aws/ivs/model/MultitrackInputConfiguration.h>
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
    AWS_IVS_API Channel() = default;
    AWS_IVS_API Channel(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Channel ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Channel& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the channel is private (enabled for playback authorization). Default:
     * <code>false</code>.</p>
     */
    inline bool GetAuthorized() const { return m_authorized; }
    inline bool AuthorizedHasBeenSet() const { return m_authorizedHasBeenSet; }
    inline void SetAuthorized(bool value) { m_authorizedHasBeenSet = true; m_authorized = value; }
    inline Channel& WithAuthorized(bool value) { SetAuthorized(value); return *this;}
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
    inline ContainerFormat GetContainerFormat() const { return m_containerFormat; }
    inline bool ContainerFormatHasBeenSet() const { return m_containerFormatHasBeenSet; }
    inline void SetContainerFormat(ContainerFormat value) { m_containerFormatHasBeenSet = true; m_containerFormat = value; }
    inline Channel& WithContainerFormat(ContainerFormat value) { SetContainerFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Channel ingest endpoint, part of the definition of an ingest server, used
     * when you set up streaming software.</p>
     */
    inline const Aws::String& GetIngestEndpoint() const { return m_ingestEndpoint; }
    inline bool IngestEndpointHasBeenSet() const { return m_ingestEndpointHasBeenSet; }
    template<typename IngestEndpointT = Aws::String>
    void SetIngestEndpoint(IngestEndpointT&& value) { m_ingestEndpointHasBeenSet = true; m_ingestEndpoint = std::forward<IngestEndpointT>(value); }
    template<typename IngestEndpointT = Aws::String>
    Channel& WithIngestEndpoint(IngestEndpointT&& value) { SetIngestEndpoint(std::forward<IngestEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the channel allows insecure RTMP ingest. Default:
     * <code>false</code>.</p>
     */
    inline bool GetInsecureIngest() const { return m_insecureIngest; }
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
    inline ChannelLatencyMode GetLatencyMode() const { return m_latencyMode; }
    inline bool LatencyModeHasBeenSet() const { return m_latencyModeHasBeenSet; }
    inline void SetLatencyMode(ChannelLatencyMode value) { m_latencyModeHasBeenSet = true; m_latencyMode = value; }
    inline Channel& WithLatencyMode(ChannelLatencyMode value) { SetLatencyMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object specifying multitrack input configuration. Default: no multitrack
     * input configuration is specified.</p>
     */
    inline const MultitrackInputConfiguration& GetMultitrackInputConfiguration() const { return m_multitrackInputConfiguration; }
    inline bool MultitrackInputConfigurationHasBeenSet() const { return m_multitrackInputConfigurationHasBeenSet; }
    template<typename MultitrackInputConfigurationT = MultitrackInputConfiguration>
    void SetMultitrackInputConfiguration(MultitrackInputConfigurationT&& value) { m_multitrackInputConfigurationHasBeenSet = true; m_multitrackInputConfiguration = std::forward<MultitrackInputConfigurationT>(value); }
    template<typename MultitrackInputConfigurationT = MultitrackInputConfiguration>
    Channel& WithMultitrackInputConfiguration(MultitrackInputConfigurationT&& value) { SetMultitrackInputConfiguration(std::forward<MultitrackInputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Channel name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Channel& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Playback-restriction-policy ARN. A valid ARN value here both specifies the
     * ARN and enables playback restriction. Default: "" (empty string, no playback
     * restriction policy is applied).</p>
     */
    inline const Aws::String& GetPlaybackRestrictionPolicyArn() const { return m_playbackRestrictionPolicyArn; }
    inline bool PlaybackRestrictionPolicyArnHasBeenSet() const { return m_playbackRestrictionPolicyArnHasBeenSet; }
    template<typename PlaybackRestrictionPolicyArnT = Aws::String>
    void SetPlaybackRestrictionPolicyArn(PlaybackRestrictionPolicyArnT&& value) { m_playbackRestrictionPolicyArnHasBeenSet = true; m_playbackRestrictionPolicyArn = std::forward<PlaybackRestrictionPolicyArnT>(value); }
    template<typename PlaybackRestrictionPolicyArnT = Aws::String>
    Channel& WithPlaybackRestrictionPolicyArn(PlaybackRestrictionPolicyArnT&& value) { SetPlaybackRestrictionPolicyArn(std::forward<PlaybackRestrictionPolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Channel playback URL.</p>
     */
    inline const Aws::String& GetPlaybackUrl() const { return m_playbackUrl; }
    inline bool PlaybackUrlHasBeenSet() const { return m_playbackUrlHasBeenSet; }
    template<typename PlaybackUrlT = Aws::String>
    void SetPlaybackUrl(PlaybackUrlT&& value) { m_playbackUrlHasBeenSet = true; m_playbackUrl = std::forward<PlaybackUrlT>(value); }
    template<typename PlaybackUrlT = Aws::String>
    Channel& WithPlaybackUrl(PlaybackUrlT&& value) { SetPlaybackUrl(std::forward<PlaybackUrlT>(value)); return *this;}
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
    inline TranscodePreset GetPreset() const { return m_preset; }
    inline bool PresetHasBeenSet() const { return m_presetHasBeenSet; }
    inline void SetPreset(TranscodePreset value) { m_presetHasBeenSet = true; m_preset = value; }
    inline Channel& WithPreset(TranscodePreset value) { SetPreset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recording-configuration ARN. A valid ARN value here both specifies the ARN
     * and enables recording. Default: "" (empty string, recording is disabled).</p>
     */
    inline const Aws::String& GetRecordingConfigurationArn() const { return m_recordingConfigurationArn; }
    inline bool RecordingConfigurationArnHasBeenSet() const { return m_recordingConfigurationArnHasBeenSet; }
    template<typename RecordingConfigurationArnT = Aws::String>
    void SetRecordingConfigurationArn(RecordingConfigurationArnT&& value) { m_recordingConfigurationArnHasBeenSet = true; m_recordingConfigurationArn = std::forward<RecordingConfigurationArnT>(value); }
    template<typename RecordingConfigurationArnT = Aws::String>
    Channel& WithRecordingConfigurationArn(RecordingConfigurationArnT&& value) { SetRecordingConfigurationArn(std::forward<RecordingConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the endpoint and optional passphrase for streaming with the SRT
     * protocol.</p>
     */
    inline const Srt& GetSrt() const { return m_srt; }
    inline bool SrtHasBeenSet() const { return m_srtHasBeenSet; }
    template<typename SrtT = Srt>
    void SetSrt(SrtT&& value) { m_srtHasBeenSet = true; m_srt = std::forward<SrtT>(value); }
    template<typename SrtT = Srt>
    Channel& WithSrt(SrtT&& value) { SetSrt(std::forward<SrtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags attached to the resource. Array of 1-50 maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/best-practices-and-strats.html">Best
     * practices and strategies</a> in <i>Tagging Amazon Web Services Resources and Tag
     * Editor</i> for details, including restrictions that apply to tags and "Tag
     * naming limits and requirements"; Amazon IVS has no service-specific constraints
     * beyond what is documented there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Channel& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Channel& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Channel type, which determines the allowable resolution and bitrate. <i>If
     * you exceed the allowable input resolution or bitrate, the stream probably will
     * disconnect immediately.</i> Default: <code>STANDARD</code>. For details, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/LowLatencyAPIReference/channel-types.html">Channel
     * Types</a>.</p>
     */
    inline ChannelType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ChannelType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Channel& WithType(ChannelType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    bool m_authorized{false};
    bool m_authorizedHasBeenSet = false;

    ContainerFormat m_containerFormat{ContainerFormat::NOT_SET};
    bool m_containerFormatHasBeenSet = false;

    Aws::String m_ingestEndpoint;
    bool m_ingestEndpointHasBeenSet = false;

    bool m_insecureIngest{false};
    bool m_insecureIngestHasBeenSet = false;

    ChannelLatencyMode m_latencyMode{ChannelLatencyMode::NOT_SET};
    bool m_latencyModeHasBeenSet = false;

    MultitrackInputConfiguration m_multitrackInputConfiguration;
    bool m_multitrackInputConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_playbackRestrictionPolicyArn;
    bool m_playbackRestrictionPolicyArnHasBeenSet = false;

    Aws::String m_playbackUrl;
    bool m_playbackUrlHasBeenSet = false;

    TranscodePreset m_preset{TranscodePreset::NOT_SET};
    bool m_presetHasBeenSet = false;

    Aws::String m_recordingConfigurationArn;
    bool m_recordingConfigurationArnHasBeenSet = false;

    Srt m_srt;
    bool m_srtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ChannelType m_type{ChannelType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
