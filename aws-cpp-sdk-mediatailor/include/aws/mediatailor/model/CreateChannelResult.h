/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/ChannelState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediatailor/model/ResponseOutputItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaTailor
{
namespace Model
{
  class AWS_MEDIATAILOR_API CreateChannelResult
  {
  public:
    CreateChannelResult();
    CreateChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline CreateChannelResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline CreateChannelResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline CreateChannelResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelName = value; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelName = std::move(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const char* value) { m_channelName.assign(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline CreateChannelResult& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline CreateChannelResult& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline CreateChannelResult& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>Indicates whether the channel is in a running state or not.</p>
     */
    inline const ChannelState& GetChannelState() const{ return m_channelState; }

    /**
     * <p>Indicates whether the channel is in a running state or not.</p>
     */
    inline void SetChannelState(const ChannelState& value) { m_channelState = value; }

    /**
     * <p>Indicates whether the channel is in a running state or not.</p>
     */
    inline void SetChannelState(ChannelState&& value) { m_channelState = std::move(value); }

    /**
     * <p>Indicates whether the channel is in a running state or not.</p>
     */
    inline CreateChannelResult& WithChannelState(const ChannelState& value) { SetChannelState(value); return *this;}

    /**
     * <p>Indicates whether the channel is in a running state or not.</p>
     */
    inline CreateChannelResult& WithChannelState(ChannelState&& value) { SetChannelState(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline CreateChannelResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline CreateChannelResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the channel was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp of when the channel was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The timestamp of when the channel was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp of when the channel was last modified.</p>
     */
    inline CreateChannelResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp of when the channel was last modified.</p>
     */
    inline CreateChannelResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The channel's output properties.</p>
     */
    inline const Aws::Vector<ResponseOutputItem>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline void SetOutputs(const Aws::Vector<ResponseOutputItem>& value) { m_outputs = value; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline void SetOutputs(Aws::Vector<ResponseOutputItem>&& value) { m_outputs = std::move(value); }

    /**
     * <p>The channel's output properties.</p>
     */
    inline CreateChannelResult& WithOutputs(const Aws::Vector<ResponseOutputItem>& value) { SetOutputs(value); return *this;}

    /**
     * <p>The channel's output properties.</p>
     */
    inline CreateChannelResult& WithOutputs(Aws::Vector<ResponseOutputItem>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>The channel's output properties.</p>
     */
    inline CreateChannelResult& AddOutputs(const ResponseOutputItem& value) { m_outputs.push_back(value); return *this; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline CreateChannelResult& AddOutputs(ResponseOutputItem&& value) { m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of playback for this channel. The only supported value is LOOP.</p>
     */
    inline const Aws::String& GetPlaybackMode() const{ return m_playbackMode; }

    /**
     * <p>The type of playback for this channel. The only supported value is LOOP.</p>
     */
    inline void SetPlaybackMode(const Aws::String& value) { m_playbackMode = value; }

    /**
     * <p>The type of playback for this channel. The only supported value is LOOP.</p>
     */
    inline void SetPlaybackMode(Aws::String&& value) { m_playbackMode = std::move(value); }

    /**
     * <p>The type of playback for this channel. The only supported value is LOOP.</p>
     */
    inline void SetPlaybackMode(const char* value) { m_playbackMode.assign(value); }

    /**
     * <p>The type of playback for this channel. The only supported value is LOOP.</p>
     */
    inline CreateChannelResult& WithPlaybackMode(const Aws::String& value) { SetPlaybackMode(value); return *this;}

    /**
     * <p>The type of playback for this channel. The only supported value is LOOP.</p>
     */
    inline CreateChannelResult& WithPlaybackMode(Aws::String&& value) { SetPlaybackMode(std::move(value)); return *this;}

    /**
     * <p>The type of playback for this channel. The only supported value is LOOP.</p>
     */
    inline CreateChannelResult& WithPlaybackMode(const char* value) { SetPlaybackMode(value); return *this;}


    /**
     * <p>The tags assigned to the channel.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the channel.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags assigned to the channel.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the channel.</p>
     */
    inline CreateChannelResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the channel.</p>
     */
    inline CreateChannelResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the channel.</p>
     */
    inline CreateChannelResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the channel.</p>
     */
    inline CreateChannelResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the channel.</p>
     */
    inline CreateChannelResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the channel.</p>
     */
    inline CreateChannelResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the channel.</p>
     */
    inline CreateChannelResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the channel.</p>
     */
    inline CreateChannelResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the channel.</p>
     */
    inline CreateChannelResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::String m_channelName;

    ChannelState m_channelState;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Vector<ResponseOutputItem> m_outputs;

    Aws::String m_playbackMode;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
