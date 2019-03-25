/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/SccDestinationFramerate.h>
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
   * Settings for SCC caption output.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/SccDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API SccDestinationSettings
  {
  public:
    SccDestinationSettings();
    SccDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    SccDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Set Framerate (SccDestinationFramerate) to make sure that the captions and the
     * video are synchronized in the output. Specify a frame rate that matches the
     * frame rate of the associated video. If the video frame rate is 29.97, choose
     * 29.97 dropframe (FRAMERATE_29_97_DROPFRAME) only if the video has
     * video_insertion=true and drop_frame_timecode=true; otherwise, choose 29.97
     * non-dropframe (FRAMERATE_29_97_NON_DROPFRAME).
     */
    inline const SccDestinationFramerate& GetFramerate() const{ return m_framerate; }

    /**
     * Set Framerate (SccDestinationFramerate) to make sure that the captions and the
     * video are synchronized in the output. Specify a frame rate that matches the
     * frame rate of the associated video. If the video frame rate is 29.97, choose
     * 29.97 dropframe (FRAMERATE_29_97_DROPFRAME) only if the video has
     * video_insertion=true and drop_frame_timecode=true; otherwise, choose 29.97
     * non-dropframe (FRAMERATE_29_97_NON_DROPFRAME).
     */
    inline bool FramerateHasBeenSet() const { return m_framerateHasBeenSet; }

    /**
     * Set Framerate (SccDestinationFramerate) to make sure that the captions and the
     * video are synchronized in the output. Specify a frame rate that matches the
     * frame rate of the associated video. If the video frame rate is 29.97, choose
     * 29.97 dropframe (FRAMERATE_29_97_DROPFRAME) only if the video has
     * video_insertion=true and drop_frame_timecode=true; otherwise, choose 29.97
     * non-dropframe (FRAMERATE_29_97_NON_DROPFRAME).
     */
    inline void SetFramerate(const SccDestinationFramerate& value) { m_framerateHasBeenSet = true; m_framerate = value; }

    /**
     * Set Framerate (SccDestinationFramerate) to make sure that the captions and the
     * video are synchronized in the output. Specify a frame rate that matches the
     * frame rate of the associated video. If the video frame rate is 29.97, choose
     * 29.97 dropframe (FRAMERATE_29_97_DROPFRAME) only if the video has
     * video_insertion=true and drop_frame_timecode=true; otherwise, choose 29.97
     * non-dropframe (FRAMERATE_29_97_NON_DROPFRAME).
     */
    inline void SetFramerate(SccDestinationFramerate&& value) { m_framerateHasBeenSet = true; m_framerate = std::move(value); }

    /**
     * Set Framerate (SccDestinationFramerate) to make sure that the captions and the
     * video are synchronized in the output. Specify a frame rate that matches the
     * frame rate of the associated video. If the video frame rate is 29.97, choose
     * 29.97 dropframe (FRAMERATE_29_97_DROPFRAME) only if the video has
     * video_insertion=true and drop_frame_timecode=true; otherwise, choose 29.97
     * non-dropframe (FRAMERATE_29_97_NON_DROPFRAME).
     */
    inline SccDestinationSettings& WithFramerate(const SccDestinationFramerate& value) { SetFramerate(value); return *this;}

    /**
     * Set Framerate (SccDestinationFramerate) to make sure that the captions and the
     * video are synchronized in the output. Specify a frame rate that matches the
     * frame rate of the associated video. If the video frame rate is 29.97, choose
     * 29.97 dropframe (FRAMERATE_29_97_DROPFRAME) only if the video has
     * video_insertion=true and drop_frame_timecode=true; otherwise, choose 29.97
     * non-dropframe (FRAMERATE_29_97_NON_DROPFRAME).
     */
    inline SccDestinationSettings& WithFramerate(SccDestinationFramerate&& value) { SetFramerate(std::move(value)); return *this;}

  private:

    SccDestinationFramerate m_framerate;
    bool m_framerateHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
