/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediatailor/model/SlateSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediatailor/model/ResponseOutputItem.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The configuration parameters for a channel. For information about MediaTailor
   * channels, see <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-channels.html">Working
   * with channels</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/Channel">AWS
   * API Reference</a></p>
   */
  class Channel
  {
  public:
    AWS_MEDIATAILOR_API Channel();
    AWS_MEDIATAILOR_API Channel(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline Channel& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline Channel& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline Channel& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline Channel& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline Channel& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline Channel& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>Returns the state whether the channel is running or not.</p>
     */
    inline const Aws::String& GetChannelState() const{ return m_channelState; }

    /**
     * <p>Returns the state whether the channel is running or not.</p>
     */
    inline bool ChannelStateHasBeenSet() const { return m_channelStateHasBeenSet; }

    /**
     * <p>Returns the state whether the channel is running or not.</p>
     */
    inline void SetChannelState(const Aws::String& value) { m_channelStateHasBeenSet = true; m_channelState = value; }

    /**
     * <p>Returns the state whether the channel is running or not.</p>
     */
    inline void SetChannelState(Aws::String&& value) { m_channelStateHasBeenSet = true; m_channelState = std::move(value); }

    /**
     * <p>Returns the state whether the channel is running or not.</p>
     */
    inline void SetChannelState(const char* value) { m_channelStateHasBeenSet = true; m_channelState.assign(value); }

    /**
     * <p>Returns the state whether the channel is running or not.</p>
     */
    inline Channel& WithChannelState(const Aws::String& value) { SetChannelState(value); return *this;}

    /**
     * <p>Returns the state whether the channel is running or not.</p>
     */
    inline Channel& WithChannelState(Aws::String&& value) { SetChannelState(std::move(value)); return *this;}

    /**
     * <p>Returns the state whether the channel is running or not.</p>
     */
    inline Channel& WithChannelState(const char* value) { SetChannelState(value); return *this;}


    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline Channel& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline Channel& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The slate used to fill gaps between programs in the schedule. You must
     * configure filler slate if your channel uses the <code>LINEAR</code>
     * <code>PlaybackMode</code>. MediaTailor doesn't support filler slate for channels
     * using the <code>LOOP</code> <code>PlaybackMode</code>.</p>
     */
    inline const SlateSource& GetFillerSlate() const{ return m_fillerSlate; }

    /**
     * <p>The slate used to fill gaps between programs in the schedule. You must
     * configure filler slate if your channel uses the <code>LINEAR</code>
     * <code>PlaybackMode</code>. MediaTailor doesn't support filler slate for channels
     * using the <code>LOOP</code> <code>PlaybackMode</code>.</p>
     */
    inline bool FillerSlateHasBeenSet() const { return m_fillerSlateHasBeenSet; }

    /**
     * <p>The slate used to fill gaps between programs in the schedule. You must
     * configure filler slate if your channel uses the <code>LINEAR</code>
     * <code>PlaybackMode</code>. MediaTailor doesn't support filler slate for channels
     * using the <code>LOOP</code> <code>PlaybackMode</code>.</p>
     */
    inline void SetFillerSlate(const SlateSource& value) { m_fillerSlateHasBeenSet = true; m_fillerSlate = value; }

    /**
     * <p>The slate used to fill gaps between programs in the schedule. You must
     * configure filler slate if your channel uses the <code>LINEAR</code>
     * <code>PlaybackMode</code>. MediaTailor doesn't support filler slate for channels
     * using the <code>LOOP</code> <code>PlaybackMode</code>.</p>
     */
    inline void SetFillerSlate(SlateSource&& value) { m_fillerSlateHasBeenSet = true; m_fillerSlate = std::move(value); }

    /**
     * <p>The slate used to fill gaps between programs in the schedule. You must
     * configure filler slate if your channel uses the <code>LINEAR</code>
     * <code>PlaybackMode</code>. MediaTailor doesn't support filler slate for channels
     * using the <code>LOOP</code> <code>PlaybackMode</code>.</p>
     */
    inline Channel& WithFillerSlate(const SlateSource& value) { SetFillerSlate(value); return *this;}

    /**
     * <p>The slate used to fill gaps between programs in the schedule. You must
     * configure filler slate if your channel uses the <code>LINEAR</code>
     * <code>PlaybackMode</code>. MediaTailor doesn't support filler slate for channels
     * using the <code>LOOP</code> <code>PlaybackMode</code>.</p>
     */
    inline Channel& WithFillerSlate(SlateSource&& value) { SetFillerSlate(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the channel was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp of when the channel was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The timestamp of when the channel was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The timestamp of when the channel was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp of when the channel was last modified.</p>
     */
    inline Channel& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp of when the channel was last modified.</p>
     */
    inline Channel& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The channel's output properties.</p>
     */
    inline const Aws::Vector<ResponseOutputItem>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline void SetOutputs(const Aws::Vector<ResponseOutputItem>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline void SetOutputs(Aws::Vector<ResponseOutputItem>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>The channel's output properties.</p>
     */
    inline Channel& WithOutputs(const Aws::Vector<ResponseOutputItem>& value) { SetOutputs(value); return *this;}

    /**
     * <p>The channel's output properties.</p>
     */
    inline Channel& WithOutputs(Aws::Vector<ResponseOutputItem>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>The channel's output properties.</p>
     */
    inline Channel& AddOutputs(const ResponseOutputItem& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline Channel& AddOutputs(ResponseOutputItem&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of playback mode for this channel.</p> <p> <code>LINEAR</code> -
     * Programs play back-to-back only once.</p> <p> <code>LOOP</code> - Programs play
     * back-to-back in an endless loop. When the last program in the schedule plays,
     * playback loops back to the first program in the schedule.</p>
     */
    inline const Aws::String& GetPlaybackMode() const{ return m_playbackMode; }

    /**
     * <p>The type of playback mode for this channel.</p> <p> <code>LINEAR</code> -
     * Programs play back-to-back only once.</p> <p> <code>LOOP</code> - Programs play
     * back-to-back in an endless loop. When the last program in the schedule plays,
     * playback loops back to the first program in the schedule.</p>
     */
    inline bool PlaybackModeHasBeenSet() const { return m_playbackModeHasBeenSet; }

    /**
     * <p>The type of playback mode for this channel.</p> <p> <code>LINEAR</code> -
     * Programs play back-to-back only once.</p> <p> <code>LOOP</code> - Programs play
     * back-to-back in an endless loop. When the last program in the schedule plays,
     * playback loops back to the first program in the schedule.</p>
     */
    inline void SetPlaybackMode(const Aws::String& value) { m_playbackModeHasBeenSet = true; m_playbackMode = value; }

    /**
     * <p>The type of playback mode for this channel.</p> <p> <code>LINEAR</code> -
     * Programs play back-to-back only once.</p> <p> <code>LOOP</code> - Programs play
     * back-to-back in an endless loop. When the last program in the schedule plays,
     * playback loops back to the first program in the schedule.</p>
     */
    inline void SetPlaybackMode(Aws::String&& value) { m_playbackModeHasBeenSet = true; m_playbackMode = std::move(value); }

    /**
     * <p>The type of playback mode for this channel.</p> <p> <code>LINEAR</code> -
     * Programs play back-to-back only once.</p> <p> <code>LOOP</code> - Programs play
     * back-to-back in an endless loop. When the last program in the schedule plays,
     * playback loops back to the first program in the schedule.</p>
     */
    inline void SetPlaybackMode(const char* value) { m_playbackModeHasBeenSet = true; m_playbackMode.assign(value); }

    /**
     * <p>The type of playback mode for this channel.</p> <p> <code>LINEAR</code> -
     * Programs play back-to-back only once.</p> <p> <code>LOOP</code> - Programs play
     * back-to-back in an endless loop. When the last program in the schedule plays,
     * playback loops back to the first program in the schedule.</p>
     */
    inline Channel& WithPlaybackMode(const Aws::String& value) { SetPlaybackMode(value); return *this;}

    /**
     * <p>The type of playback mode for this channel.</p> <p> <code>LINEAR</code> -
     * Programs play back-to-back only once.</p> <p> <code>LOOP</code> - Programs play
     * back-to-back in an endless loop. When the last program in the schedule plays,
     * playback loops back to the first program in the schedule.</p>
     */
    inline Channel& WithPlaybackMode(Aws::String&& value) { SetPlaybackMode(std::move(value)); return *this;}

    /**
     * <p>The type of playback mode for this channel.</p> <p> <code>LINEAR</code> -
     * Programs play back-to-back only once.</p> <p> <code>LOOP</code> - Programs play
     * back-to-back in an endless loop. When the last program in the schedule plays,
     * playback loops back to the first program in the schedule.</p>
     */
    inline Channel& WithPlaybackMode(const char* value) { SetPlaybackMode(value); return *this;}


    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline Channel& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline Channel& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline Channel& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline Channel& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline Channel& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline Channel& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline Channel& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline Channel& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline Channel& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The tier for this channel. STANDARD tier channels can contain live
     * programs.</p>
     */
    inline const Aws::String& GetTier() const{ return m_tier; }

    /**
     * <p>The tier for this channel. STANDARD tier channels can contain live
     * programs.</p>
     */
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }

    /**
     * <p>The tier for this channel. STANDARD tier channels can contain live
     * programs.</p>
     */
    inline void SetTier(const Aws::String& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>The tier for this channel. STANDARD tier channels can contain live
     * programs.</p>
     */
    inline void SetTier(Aws::String&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }

    /**
     * <p>The tier for this channel. STANDARD tier channels can contain live
     * programs.</p>
     */
    inline void SetTier(const char* value) { m_tierHasBeenSet = true; m_tier.assign(value); }

    /**
     * <p>The tier for this channel. STANDARD tier channels can contain live
     * programs.</p>
     */
    inline Channel& WithTier(const Aws::String& value) { SetTier(value); return *this;}

    /**
     * <p>The tier for this channel. STANDARD tier channels can contain live
     * programs.</p>
     */
    inline Channel& WithTier(Aws::String&& value) { SetTier(std::move(value)); return *this;}

    /**
     * <p>The tier for this channel. STANDARD tier channels can contain live
     * programs.</p>
     */
    inline Channel& WithTier(const char* value) { SetTier(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_channelState;
    bool m_channelStateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    SlateSource m_fillerSlate;
    bool m_fillerSlateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Vector<ResponseOutputItem> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_playbackMode;
    bool m_playbackModeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_tier;
    bool m_tierHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
