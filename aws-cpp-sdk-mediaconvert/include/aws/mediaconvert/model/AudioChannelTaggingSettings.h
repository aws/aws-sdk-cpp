/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AudioChannelTag.h>
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
   * When you mimic a multi-channel audio layout with multiple mono-channel tracks,
   * you can tag each channel layout manually. For example, you would tag the tracks
   * that contain your left, right, and center audio with Left (L), Right (R), and
   * Center (C), respectively. When you don't specify a value, MediaConvert labels
   * your track as Center (C) by default. To use audio layout tagging, your output
   * must be in a QuickTime (.mov) container; your audio codec must be AAC, WAV, or
   * AIFF; and you must set up your audio track to have only one channel.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AudioChannelTaggingSettings">AWS
   * API Reference</a></p>
   */
  class AudioChannelTaggingSettings
  {
  public:
    AWS_MEDIACONVERT_API AudioChannelTaggingSettings();
    AWS_MEDIACONVERT_API AudioChannelTaggingSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AudioChannelTaggingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * You can add a tag for this mono-channel audio track to mimic its placement in a
     * multi-channel layout.  For example, if this track is the left surround channel,
     * choose Left surround (LS).
     */
    inline const AudioChannelTag& GetChannelTag() const{ return m_channelTag; }

    /**
     * You can add a tag for this mono-channel audio track to mimic its placement in a
     * multi-channel layout.  For example, if this track is the left surround channel,
     * choose Left surround (LS).
     */
    inline bool ChannelTagHasBeenSet() const { return m_channelTagHasBeenSet; }

    /**
     * You can add a tag for this mono-channel audio track to mimic its placement in a
     * multi-channel layout.  For example, if this track is the left surround channel,
     * choose Left surround (LS).
     */
    inline void SetChannelTag(const AudioChannelTag& value) { m_channelTagHasBeenSet = true; m_channelTag = value; }

    /**
     * You can add a tag for this mono-channel audio track to mimic its placement in a
     * multi-channel layout.  For example, if this track is the left surround channel,
     * choose Left surround (LS).
     */
    inline void SetChannelTag(AudioChannelTag&& value) { m_channelTagHasBeenSet = true; m_channelTag = std::move(value); }

    /**
     * You can add a tag for this mono-channel audio track to mimic its placement in a
     * multi-channel layout.  For example, if this track is the left surround channel,
     * choose Left surround (LS).
     */
    inline AudioChannelTaggingSettings& WithChannelTag(const AudioChannelTag& value) { SetChannelTag(value); return *this;}

    /**
     * You can add a tag for this mono-channel audio track to mimic its placement in a
     * multi-channel layout.  For example, if this track is the left surround channel,
     * choose Left surround (LS).
     */
    inline AudioChannelTaggingSettings& WithChannelTag(AudioChannelTag&& value) { SetChannelTag(std::move(value)); return *this;}

  private:

    AudioChannelTag m_channelTag;
    bool m_channelTagHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
