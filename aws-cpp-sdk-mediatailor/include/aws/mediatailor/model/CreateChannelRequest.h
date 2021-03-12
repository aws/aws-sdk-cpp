/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/PlaybackMode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediatailor/model/RequestOutputItem.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class AWS_MEDIATAILOR_API CreateChannelRequest : public MediaTailorRequest
  {
  public:
    CreateChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChannel"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline CreateChannelRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline CreateChannelRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline CreateChannelRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The channel's output properties.</p>
     */
    inline const Aws::Vector<RequestOutputItem>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline void SetOutputs(const Aws::Vector<RequestOutputItem>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline void SetOutputs(Aws::Vector<RequestOutputItem>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>The channel's output properties.</p>
     */
    inline CreateChannelRequest& WithOutputs(const Aws::Vector<RequestOutputItem>& value) { SetOutputs(value); return *this;}

    /**
     * <p>The channel's output properties.</p>
     */
    inline CreateChannelRequest& WithOutputs(Aws::Vector<RequestOutputItem>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>The channel's output properties.</p>
     */
    inline CreateChannelRequest& AddOutputs(const RequestOutputItem& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline CreateChannelRequest& AddOutputs(RequestOutputItem&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of playback mode for this channel. The only supported value is
     * LOOP.</p>
     */
    inline const PlaybackMode& GetPlaybackMode() const{ return m_playbackMode; }

    /**
     * <p>The type of playback mode for this channel. The only supported value is
     * LOOP.</p>
     */
    inline bool PlaybackModeHasBeenSet() const { return m_playbackModeHasBeenSet; }

    /**
     * <p>The type of playback mode for this channel. The only supported value is
     * LOOP.</p>
     */
    inline void SetPlaybackMode(const PlaybackMode& value) { m_playbackModeHasBeenSet = true; m_playbackMode = value; }

    /**
     * <p>The type of playback mode for this channel. The only supported value is
     * LOOP.</p>
     */
    inline void SetPlaybackMode(PlaybackMode&& value) { m_playbackModeHasBeenSet = true; m_playbackMode = std::move(value); }

    /**
     * <p>The type of playback mode for this channel. The only supported value is
     * LOOP.</p>
     */
    inline CreateChannelRequest& WithPlaybackMode(const PlaybackMode& value) { SetPlaybackMode(value); return *this;}

    /**
     * <p>The type of playback mode for this channel. The only supported value is
     * LOOP.</p>
     */
    inline CreateChannelRequest& WithPlaybackMode(PlaybackMode&& value) { SetPlaybackMode(std::move(value)); return *this;}


    /**
     * <p>The tags to assign to the channel.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the channel.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the channel.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the channel.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the channel.</p>
     */
    inline CreateChannelRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the channel.</p>
     */
    inline CreateChannelRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the channel.</p>
     */
    inline CreateChannelRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to assign to the channel.</p>
     */
    inline CreateChannelRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the channel.</p>
     */
    inline CreateChannelRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the channel.</p>
     */
    inline CreateChannelRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the channel.</p>
     */
    inline CreateChannelRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the channel.</p>
     */
    inline CreateChannelRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the channel.</p>
     */
    inline CreateChannelRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet;

    Aws::Vector<RequestOutputItem> m_outputs;
    bool m_outputsHasBeenSet;

    PlaybackMode m_playbackMode;
    bool m_playbackModeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
