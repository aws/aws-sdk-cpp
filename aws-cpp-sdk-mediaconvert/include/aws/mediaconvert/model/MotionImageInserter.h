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
#include <aws/mediaconvert/model/MotionImageInsertionFramerate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/MotionImageInsertionMode.h>
#include <aws/mediaconvert/model/MotionImageInsertionOffset.h>
#include <aws/mediaconvert/model/MotionImagePlayback.h>
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
   * Overlay motion graphics on top of your video at the time that you
   * specify.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MotionImageInserter">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API MotionImageInserter
  {
  public:
    MotionImageInserter();
    MotionImageInserter(Aws::Utils::Json::JsonView jsonValue);
    MotionImageInserter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * If your motion graphic asset is a .mov file, keep this setting unspecified. If
     * your motion graphic asset is a series of .png files, specify the frame rate of
     * the overlay in frames per second, as a fraction. For example, specify 24 fps as
     * 24/1. Make sure that the number of images in your series matches the frame rate
     * and your intended overlay duration. For example, if you want a 30-second overlay
     * at 30 fps, you should have 900 .png images. This overlay frame rate doesn't need
     * to match the frame rate of the underlying video.
     */
    inline const MotionImageInsertionFramerate& GetFramerate() const{ return m_framerate; }

    /**
     * If your motion graphic asset is a .mov file, keep this setting unspecified. If
     * your motion graphic asset is a series of .png files, specify the frame rate of
     * the overlay in frames per second, as a fraction. For example, specify 24 fps as
     * 24/1. Make sure that the number of images in your series matches the frame rate
     * and your intended overlay duration. For example, if you want a 30-second overlay
     * at 30 fps, you should have 900 .png images. This overlay frame rate doesn't need
     * to match the frame rate of the underlying video.
     */
    inline bool FramerateHasBeenSet() const { return m_framerateHasBeenSet; }

    /**
     * If your motion graphic asset is a .mov file, keep this setting unspecified. If
     * your motion graphic asset is a series of .png files, specify the frame rate of
     * the overlay in frames per second, as a fraction. For example, specify 24 fps as
     * 24/1. Make sure that the number of images in your series matches the frame rate
     * and your intended overlay duration. For example, if you want a 30-second overlay
     * at 30 fps, you should have 900 .png images. This overlay frame rate doesn't need
     * to match the frame rate of the underlying video.
     */
    inline void SetFramerate(const MotionImageInsertionFramerate& value) { m_framerateHasBeenSet = true; m_framerate = value; }

    /**
     * If your motion graphic asset is a .mov file, keep this setting unspecified. If
     * your motion graphic asset is a series of .png files, specify the frame rate of
     * the overlay in frames per second, as a fraction. For example, specify 24 fps as
     * 24/1. Make sure that the number of images in your series matches the frame rate
     * and your intended overlay duration. For example, if you want a 30-second overlay
     * at 30 fps, you should have 900 .png images. This overlay frame rate doesn't need
     * to match the frame rate of the underlying video.
     */
    inline void SetFramerate(MotionImageInsertionFramerate&& value) { m_framerateHasBeenSet = true; m_framerate = std::move(value); }

    /**
     * If your motion graphic asset is a .mov file, keep this setting unspecified. If
     * your motion graphic asset is a series of .png files, specify the frame rate of
     * the overlay in frames per second, as a fraction. For example, specify 24 fps as
     * 24/1. Make sure that the number of images in your series matches the frame rate
     * and your intended overlay duration. For example, if you want a 30-second overlay
     * at 30 fps, you should have 900 .png images. This overlay frame rate doesn't need
     * to match the frame rate of the underlying video.
     */
    inline MotionImageInserter& WithFramerate(const MotionImageInsertionFramerate& value) { SetFramerate(value); return *this;}

    /**
     * If your motion graphic asset is a .mov file, keep this setting unspecified. If
     * your motion graphic asset is a series of .png files, specify the frame rate of
     * the overlay in frames per second, as a fraction. For example, specify 24 fps as
     * 24/1. Make sure that the number of images in your series matches the frame rate
     * and your intended overlay duration. For example, if you want a 30-second overlay
     * at 30 fps, you should have 900 .png images. This overlay frame rate doesn't need
     * to match the frame rate of the underlying video.
     */
    inline MotionImageInserter& WithFramerate(MotionImageInsertionFramerate&& value) { SetFramerate(std::move(value)); return *this;}


    /**
     * Specify the .mov file or series of .png files that you want to overlay on your
     * video. For .png files, provide the file name of the first file in the series.
     * Make sure that the names of the .png files end with sequential numbers that
     * specify the order that they are played in. For example, overlay_000.png,
     * overlay_001.png, overlay_002.png, and so on. The sequence must start at zero,
     * and each image file name must have the same number of digits. Pad your initial
     * file names with enough zeros to complete the sequence. For example, if the first
     * image is overlay_0.png, there can be only 10 images in the sequence, with the
     * last image being overlay_9.png. But if the first image is overlay_00.png, there
     * can be 100 images in the sequence.
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * Specify the .mov file or series of .png files that you want to overlay on your
     * video. For .png files, provide the file name of the first file in the series.
     * Make sure that the names of the .png files end with sequential numbers that
     * specify the order that they are played in. For example, overlay_000.png,
     * overlay_001.png, overlay_002.png, and so on. The sequence must start at zero,
     * and each image file name must have the same number of digits. Pad your initial
     * file names with enough zeros to complete the sequence. For example, if the first
     * image is overlay_0.png, there can be only 10 images in the sequence, with the
     * last image being overlay_9.png. But if the first image is overlay_00.png, there
     * can be 100 images in the sequence.
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * Specify the .mov file or series of .png files that you want to overlay on your
     * video. For .png files, provide the file name of the first file in the series.
     * Make sure that the names of the .png files end with sequential numbers that
     * specify the order that they are played in. For example, overlay_000.png,
     * overlay_001.png, overlay_002.png, and so on. The sequence must start at zero,
     * and each image file name must have the same number of digits. Pad your initial
     * file names with enough zeros to complete the sequence. For example, if the first
     * image is overlay_0.png, there can be only 10 images in the sequence, with the
     * last image being overlay_9.png. But if the first image is overlay_00.png, there
     * can be 100 images in the sequence.
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * Specify the .mov file or series of .png files that you want to overlay on your
     * video. For .png files, provide the file name of the first file in the series.
     * Make sure that the names of the .png files end with sequential numbers that
     * specify the order that they are played in. For example, overlay_000.png,
     * overlay_001.png, overlay_002.png, and so on. The sequence must start at zero,
     * and each image file name must have the same number of digits. Pad your initial
     * file names with enough zeros to complete the sequence. For example, if the first
     * image is overlay_0.png, there can be only 10 images in the sequence, with the
     * last image being overlay_9.png. But if the first image is overlay_00.png, there
     * can be 100 images in the sequence.
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * Specify the .mov file or series of .png files that you want to overlay on your
     * video. For .png files, provide the file name of the first file in the series.
     * Make sure that the names of the .png files end with sequential numbers that
     * specify the order that they are played in. For example, overlay_000.png,
     * overlay_001.png, overlay_002.png, and so on. The sequence must start at zero,
     * and each image file name must have the same number of digits. Pad your initial
     * file names with enough zeros to complete the sequence. For example, if the first
     * image is overlay_0.png, there can be only 10 images in the sequence, with the
     * last image being overlay_9.png. But if the first image is overlay_00.png, there
     * can be 100 images in the sequence.
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * Specify the .mov file or series of .png files that you want to overlay on your
     * video. For .png files, provide the file name of the first file in the series.
     * Make sure that the names of the .png files end with sequential numbers that
     * specify the order that they are played in. For example, overlay_000.png,
     * overlay_001.png, overlay_002.png, and so on. The sequence must start at zero,
     * and each image file name must have the same number of digits. Pad your initial
     * file names with enough zeros to complete the sequence. For example, if the first
     * image is overlay_0.png, there can be only 10 images in the sequence, with the
     * last image being overlay_9.png. But if the first image is overlay_00.png, there
     * can be 100 images in the sequence.
     */
    inline MotionImageInserter& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * Specify the .mov file or series of .png files that you want to overlay on your
     * video. For .png files, provide the file name of the first file in the series.
     * Make sure that the names of the .png files end with sequential numbers that
     * specify the order that they are played in. For example, overlay_000.png,
     * overlay_001.png, overlay_002.png, and so on. The sequence must start at zero,
     * and each image file name must have the same number of digits. Pad your initial
     * file names with enough zeros to complete the sequence. For example, if the first
     * image is overlay_0.png, there can be only 10 images in the sequence, with the
     * last image being overlay_9.png. But if the first image is overlay_00.png, there
     * can be 100 images in the sequence.
     */
    inline MotionImageInserter& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * Specify the .mov file or series of .png files that you want to overlay on your
     * video. For .png files, provide the file name of the first file in the series.
     * Make sure that the names of the .png files end with sequential numbers that
     * specify the order that they are played in. For example, overlay_000.png,
     * overlay_001.png, overlay_002.png, and so on. The sequence must start at zero,
     * and each image file name must have the same number of digits. Pad your initial
     * file names with enough zeros to complete the sequence. For example, if the first
     * image is overlay_0.png, there can be only 10 images in the sequence, with the
     * last image being overlay_9.png. But if the first image is overlay_00.png, there
     * can be 100 images in the sequence.
     */
    inline MotionImageInserter& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * Choose the type of motion graphic asset that you are providing for your overlay.
     * You can choose either a .mov file or a series of .png files.
     */
    inline const MotionImageInsertionMode& GetInsertionMode() const{ return m_insertionMode; }

    /**
     * Choose the type of motion graphic asset that you are providing for your overlay.
     * You can choose either a .mov file or a series of .png files.
     */
    inline bool InsertionModeHasBeenSet() const { return m_insertionModeHasBeenSet; }

    /**
     * Choose the type of motion graphic asset that you are providing for your overlay.
     * You can choose either a .mov file or a series of .png files.
     */
    inline void SetInsertionMode(const MotionImageInsertionMode& value) { m_insertionModeHasBeenSet = true; m_insertionMode = value; }

    /**
     * Choose the type of motion graphic asset that you are providing for your overlay.
     * You can choose either a .mov file or a series of .png files.
     */
    inline void SetInsertionMode(MotionImageInsertionMode&& value) { m_insertionModeHasBeenSet = true; m_insertionMode = std::move(value); }

    /**
     * Choose the type of motion graphic asset that you are providing for your overlay.
     * You can choose either a .mov file or a series of .png files.
     */
    inline MotionImageInserter& WithInsertionMode(const MotionImageInsertionMode& value) { SetInsertionMode(value); return *this;}

    /**
     * Choose the type of motion graphic asset that you are providing for your overlay.
     * You can choose either a .mov file or a series of .png files.
     */
    inline MotionImageInserter& WithInsertionMode(MotionImageInsertionMode&& value) { SetInsertionMode(std::move(value)); return *this;}


    /**
     * Use Offset to specify the placement of your motion graphic overlay on the video
     * frame. Specify in pixels, from the upper-left corner of the frame. If you don't
     * specify an offset, the service scales your overlay to the full size of the
     * frame. Otherwise, the service inserts the overlay at its native resolution and
     * scales the size up or down with any video scaling.
     */
    inline const MotionImageInsertionOffset& GetOffset() const{ return m_offset; }

    /**
     * Use Offset to specify the placement of your motion graphic overlay on the video
     * frame. Specify in pixels, from the upper-left corner of the frame. If you don't
     * specify an offset, the service scales your overlay to the full size of the
     * frame. Otherwise, the service inserts the overlay at its native resolution and
     * scales the size up or down with any video scaling.
     */
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }

    /**
     * Use Offset to specify the placement of your motion graphic overlay on the video
     * frame. Specify in pixels, from the upper-left corner of the frame. If you don't
     * specify an offset, the service scales your overlay to the full size of the
     * frame. Otherwise, the service inserts the overlay at its native resolution and
     * scales the size up or down with any video scaling.
     */
    inline void SetOffset(const MotionImageInsertionOffset& value) { m_offsetHasBeenSet = true; m_offset = value; }

    /**
     * Use Offset to specify the placement of your motion graphic overlay on the video
     * frame. Specify in pixels, from the upper-left corner of the frame. If you don't
     * specify an offset, the service scales your overlay to the full size of the
     * frame. Otherwise, the service inserts the overlay at its native resolution and
     * scales the size up or down with any video scaling.
     */
    inline void SetOffset(MotionImageInsertionOffset&& value) { m_offsetHasBeenSet = true; m_offset = std::move(value); }

    /**
     * Use Offset to specify the placement of your motion graphic overlay on the video
     * frame. Specify in pixels, from the upper-left corner of the frame. If you don't
     * specify an offset, the service scales your overlay to the full size of the
     * frame. Otherwise, the service inserts the overlay at its native resolution and
     * scales the size up or down with any video scaling.
     */
    inline MotionImageInserter& WithOffset(const MotionImageInsertionOffset& value) { SetOffset(value); return *this;}

    /**
     * Use Offset to specify the placement of your motion graphic overlay on the video
     * frame. Specify in pixels, from the upper-left corner of the frame. If you don't
     * specify an offset, the service scales your overlay to the full size of the
     * frame. Otherwise, the service inserts the overlay at its native resolution and
     * scales the size up or down with any video scaling.
     */
    inline MotionImageInserter& WithOffset(MotionImageInsertionOffset&& value) { SetOffset(std::move(value)); return *this;}


    /**
     * Specify whether your motion graphic overlay repeats on a loop or plays only
     * once.
     */
    inline const MotionImagePlayback& GetPlayback() const{ return m_playback; }

    /**
     * Specify whether your motion graphic overlay repeats on a loop or plays only
     * once.
     */
    inline bool PlaybackHasBeenSet() const { return m_playbackHasBeenSet; }

    /**
     * Specify whether your motion graphic overlay repeats on a loop or plays only
     * once.
     */
    inline void SetPlayback(const MotionImagePlayback& value) { m_playbackHasBeenSet = true; m_playback = value; }

    /**
     * Specify whether your motion graphic overlay repeats on a loop or plays only
     * once.
     */
    inline void SetPlayback(MotionImagePlayback&& value) { m_playbackHasBeenSet = true; m_playback = std::move(value); }

    /**
     * Specify whether your motion graphic overlay repeats on a loop or plays only
     * once.
     */
    inline MotionImageInserter& WithPlayback(const MotionImagePlayback& value) { SetPlayback(value); return *this;}

    /**
     * Specify whether your motion graphic overlay repeats on a loop or plays only
     * once.
     */
    inline MotionImageInserter& WithPlayback(MotionImagePlayback&& value) { SetPlayback(std::move(value)); return *this;}


    /**
     * Specify when the motion overlay begins. Use timecode format (HH:MM:SS:FF or
     * HH:MM:SS;FF). Make sure that the timecode you provide here takes into account
     * how you have set up your timecode configuration under both job settings and
     * input settings. The simplest way to do that is to set both to start at 0. If you
     * need to set up your job to follow timecodes embedded in your source that don't
     * start at zero, make sure that you specify a start time that is after the first
     * embedded timecode. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/setting-up-timecode.html Find
     * job-wide and input timecode configuration settings in your JSON job settings
     * specification at settings>timecodeConfig>source and
     * settings>inputs>timecodeSource.
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * Specify when the motion overlay begins. Use timecode format (HH:MM:SS:FF or
     * HH:MM:SS;FF). Make sure that the timecode you provide here takes into account
     * how you have set up your timecode configuration under both job settings and
     * input settings. The simplest way to do that is to set both to start at 0. If you
     * need to set up your job to follow timecodes embedded in your source that don't
     * start at zero, make sure that you specify a start time that is after the first
     * embedded timecode. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/setting-up-timecode.html Find
     * job-wide and input timecode configuration settings in your JSON job settings
     * specification at settings>timecodeConfig>source and
     * settings>inputs>timecodeSource.
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * Specify when the motion overlay begins. Use timecode format (HH:MM:SS:FF or
     * HH:MM:SS;FF). Make sure that the timecode you provide here takes into account
     * how you have set up your timecode configuration under both job settings and
     * input settings. The simplest way to do that is to set both to start at 0. If you
     * need to set up your job to follow timecodes embedded in your source that don't
     * start at zero, make sure that you specify a start time that is after the first
     * embedded timecode. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/setting-up-timecode.html Find
     * job-wide and input timecode configuration settings in your JSON job settings
     * specification at settings>timecodeConfig>source and
     * settings>inputs>timecodeSource.
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * Specify when the motion overlay begins. Use timecode format (HH:MM:SS:FF or
     * HH:MM:SS;FF). Make sure that the timecode you provide here takes into account
     * how you have set up your timecode configuration under both job settings and
     * input settings. The simplest way to do that is to set both to start at 0. If you
     * need to set up your job to follow timecodes embedded in your source that don't
     * start at zero, make sure that you specify a start time that is after the first
     * embedded timecode. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/setting-up-timecode.html Find
     * job-wide and input timecode configuration settings in your JSON job settings
     * specification at settings>timecodeConfig>source and
     * settings>inputs>timecodeSource.
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * Specify when the motion overlay begins. Use timecode format (HH:MM:SS:FF or
     * HH:MM:SS;FF). Make sure that the timecode you provide here takes into account
     * how you have set up your timecode configuration under both job settings and
     * input settings. The simplest way to do that is to set both to start at 0. If you
     * need to set up your job to follow timecodes embedded in your source that don't
     * start at zero, make sure that you specify a start time that is after the first
     * embedded timecode. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/setting-up-timecode.html Find
     * job-wide and input timecode configuration settings in your JSON job settings
     * specification at settings>timecodeConfig>source and
     * settings>inputs>timecodeSource.
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * Specify when the motion overlay begins. Use timecode format (HH:MM:SS:FF or
     * HH:MM:SS;FF). Make sure that the timecode you provide here takes into account
     * how you have set up your timecode configuration under both job settings and
     * input settings. The simplest way to do that is to set both to start at 0. If you
     * need to set up your job to follow timecodes embedded in your source that don't
     * start at zero, make sure that you specify a start time that is after the first
     * embedded timecode. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/setting-up-timecode.html Find
     * job-wide and input timecode configuration settings in your JSON job settings
     * specification at settings>timecodeConfig>source and
     * settings>inputs>timecodeSource.
     */
    inline MotionImageInserter& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * Specify when the motion overlay begins. Use timecode format (HH:MM:SS:FF or
     * HH:MM:SS;FF). Make sure that the timecode you provide here takes into account
     * how you have set up your timecode configuration under both job settings and
     * input settings. The simplest way to do that is to set both to start at 0. If you
     * need to set up your job to follow timecodes embedded in your source that don't
     * start at zero, make sure that you specify a start time that is after the first
     * embedded timecode. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/setting-up-timecode.html Find
     * job-wide and input timecode configuration settings in your JSON job settings
     * specification at settings>timecodeConfig>source and
     * settings>inputs>timecodeSource.
     */
    inline MotionImageInserter& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * Specify when the motion overlay begins. Use timecode format (HH:MM:SS:FF or
     * HH:MM:SS;FF). Make sure that the timecode you provide here takes into account
     * how you have set up your timecode configuration under both job settings and
     * input settings. The simplest way to do that is to set both to start at 0. If you
     * need to set up your job to follow timecodes embedded in your source that don't
     * start at zero, make sure that you specify a start time that is after the first
     * embedded timecode. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/setting-up-timecode.html Find
     * job-wide and input timecode configuration settings in your JSON job settings
     * specification at settings>timecodeConfig>source and
     * settings>inputs>timecodeSource.
     */
    inline MotionImageInserter& WithStartTime(const char* value) { SetStartTime(value); return *this;}

  private:

    MotionImageInsertionFramerate m_framerate;
    bool m_framerateHasBeenSet;

    Aws::String m_input;
    bool m_inputHasBeenSet;

    MotionImageInsertionMode m_insertionMode;
    bool m_insertionModeHasBeenSet;

    MotionImageInsertionOffset m_offset;
    bool m_offsetHasBeenSet;

    MotionImagePlayback m_playback;
    bool m_playbackHasBeenSet;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
