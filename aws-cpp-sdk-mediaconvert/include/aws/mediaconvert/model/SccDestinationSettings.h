/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * Settings related to SCC captions. SCC is a sidecar format that holds captions in
   * a file that is separate from the video container. Set up sidecar captions in the
   * same output group, but different output from your video. For more information,
   * see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/scc-srt-output-captions.html.
   * When you work directly in your JSON job specification, include this object and
   * any required children when you set destinationType to SCC.<p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/SccDestinationSettings">AWS
   * API Reference</a></p>
   */
  class SccDestinationSettings
  {
  public:
    AWS_MEDIACONVERT_API SccDestinationSettings();
    AWS_MEDIACONVERT_API SccDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API SccDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_framerateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
