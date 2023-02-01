/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/model/AudioFeatures.h>
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
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   * <p>The configuration settings of the features available to a
   * meeting.&gt;</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/MeetingFeaturesConfiguration">AWS
   * API Reference</a></p>
   */
  class MeetingFeaturesConfiguration
  {
  public:
    AWS_CHIMESDKMEETINGS_API MeetingFeaturesConfiguration();
    AWS_CHIMESDKMEETINGS_API MeetingFeaturesConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API MeetingFeaturesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration settings for the audio features available to a meeting.
     * </p>
     */
    inline const AudioFeatures& GetAudio() const{ return m_audio; }

    /**
     * <p>The configuration settings for the audio features available to a meeting.
     * </p>
     */
    inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }

    /**
     * <p>The configuration settings for the audio features available to a meeting.
     * </p>
     */
    inline void SetAudio(const AudioFeatures& value) { m_audioHasBeenSet = true; m_audio = value; }

    /**
     * <p>The configuration settings for the audio features available to a meeting.
     * </p>
     */
    inline void SetAudio(AudioFeatures&& value) { m_audioHasBeenSet = true; m_audio = std::move(value); }

    /**
     * <p>The configuration settings for the audio features available to a meeting.
     * </p>
     */
    inline MeetingFeaturesConfiguration& WithAudio(const AudioFeatures& value) { SetAudio(value); return *this;}

    /**
     * <p>The configuration settings for the audio features available to a meeting.
     * </p>
     */
    inline MeetingFeaturesConfiguration& WithAudio(AudioFeatures&& value) { SetAudio(std::move(value)); return *this;}

  private:

    AudioFeatures m_audio;
    bool m_audioHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
