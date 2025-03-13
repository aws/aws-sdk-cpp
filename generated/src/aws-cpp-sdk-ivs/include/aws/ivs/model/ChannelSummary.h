/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/model/ChannelLatencyMode.h>
#include <aws/ivs/model/TranscodePreset.h>
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
   * <p>Summary information about a channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ChannelSummary">AWS
   * API Reference</a></p>
   */
  class ChannelSummary
  {
  public:
    AWS_IVS_API ChannelSummary() = default;
    AWS_IVS_API ChannelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API ChannelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ChannelSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the channel is private (enabled for playback authorization). Default:
     * <code>false</code>.</p>
     */
    inline bool GetAuthorized() const { return m_authorized; }
    inline bool AuthorizedHasBeenSet() const { return m_authorizedHasBeenSet; }
    inline void SetAuthorized(bool value) { m_authorizedHasBeenSet = true; m_authorized = value; }
    inline ChannelSummary& WithAuthorized(bool value) { SetAuthorized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the channel allows insecure RTMP ingest. Default:
     * <code>false</code>.</p>
     */
    inline bool GetInsecureIngest() const { return m_insecureIngest; }
    inline bool InsecureIngestHasBeenSet() const { return m_insecureIngestHasBeenSet; }
    inline void SetInsecureIngest(bool value) { m_insecureIngestHasBeenSet = true; m_insecureIngest = value; }
    inline ChannelSummary& WithInsecureIngest(bool value) { SetInsecureIngest(value); return *this;}
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
    inline ChannelSummary& WithLatencyMode(ChannelLatencyMode value) { SetLatencyMode(value); return *this;}
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
    ChannelSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    ChannelSummary& WithPlaybackRestrictionPolicyArn(PlaybackRestrictionPolicyArnT&& value) { SetPlaybackRestrictionPolicyArn(std::forward<PlaybackRestrictionPolicyArnT>(value)); return *this;}
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
    inline ChannelSummary& WithPreset(TranscodePreset value) { SetPreset(value); return *this;}
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
    ChannelSummary& WithRecordingConfigurationArn(RecordingConfigurationArnT&& value) { SetRecordingConfigurationArn(std::forward<RecordingConfigurationArnT>(value)); return *this;}
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
    ChannelSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ChannelSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
    inline ChannelSummary& WithType(ChannelType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    bool m_authorized{false};
    bool m_authorizedHasBeenSet = false;

    bool m_insecureIngest{false};
    bool m_insecureIngestHasBeenSet = false;

    ChannelLatencyMode m_latencyMode{ChannelLatencyMode::NOT_SET};
    bool m_latencyModeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_playbackRestrictionPolicyArn;
    bool m_playbackRestrictionPolicyArnHasBeenSet = false;

    TranscodePreset m_preset{TranscodePreset::NOT_SET};
    bool m_presetHasBeenSet = false;

    Aws::String m_recordingConfigurationArn;
    bool m_recordingConfigurationArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ChannelType m_type{ChannelType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
