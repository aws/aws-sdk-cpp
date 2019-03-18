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
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Settings that specify how your still graphic overlay appears.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/InsertableImage">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API InsertableImage
  {
  public:
    InsertableImage();
    InsertableImage(Aws::Utils::Json::JsonView jsonValue);
    InsertableImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the time, in milliseconds, for the image to remain on the output video.
     * This duration includes fade-in time but not fade-out time.
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * Specify the time, in milliseconds, for the image to remain on the output video.
     * This duration includes fade-in time but not fade-out time.
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * Specify the time, in milliseconds, for the image to remain on the output video.
     * This duration includes fade-in time but not fade-out time.
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * Specify the time, in milliseconds, for the image to remain on the output video.
     * This duration includes fade-in time but not fade-out time.
     */
    inline InsertableImage& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * Specify the length of time, in milliseconds, between the Start time that you
     * specify for the image insertion and the time that the image appears at full
     * opacity. Full opacity is the level that you specify for the opacity setting. If
     * you don't specify a value for Fade-in, the image will appear abruptly at the
     * overlay start time.
     */
    inline int GetFadeIn() const{ return m_fadeIn; }

    /**
     * Specify the length of time, in milliseconds, between the Start time that you
     * specify for the image insertion and the time that the image appears at full
     * opacity. Full opacity is the level that you specify for the opacity setting. If
     * you don't specify a value for Fade-in, the image will appear abruptly at the
     * overlay start time.
     */
    inline bool FadeInHasBeenSet() const { return m_fadeInHasBeenSet; }

    /**
     * Specify the length of time, in milliseconds, between the Start time that you
     * specify for the image insertion and the time that the image appears at full
     * opacity. Full opacity is the level that you specify for the opacity setting. If
     * you don't specify a value for Fade-in, the image will appear abruptly at the
     * overlay start time.
     */
    inline void SetFadeIn(int value) { m_fadeInHasBeenSet = true; m_fadeIn = value; }

    /**
     * Specify the length of time, in milliseconds, between the Start time that you
     * specify for the image insertion and the time that the image appears at full
     * opacity. Full opacity is the level that you specify for the opacity setting. If
     * you don't specify a value for Fade-in, the image will appear abruptly at the
     * overlay start time.
     */
    inline InsertableImage& WithFadeIn(int value) { SetFadeIn(value); return *this;}


    /**
     * Specify the length of time, in milliseconds, between the end of the time that
     * you have specified for the image overlay Duration and when the overlaid image
     * has faded to total transparency. If you don't specify a value for Fade-out, the
     * image will disappear abruptly at the end of the inserted image duration.
     */
    inline int GetFadeOut() const{ return m_fadeOut; }

    /**
     * Specify the length of time, in milliseconds, between the end of the time that
     * you have specified for the image overlay Duration and when the overlaid image
     * has faded to total transparency. If you don't specify a value for Fade-out, the
     * image will disappear abruptly at the end of the inserted image duration.
     */
    inline bool FadeOutHasBeenSet() const { return m_fadeOutHasBeenSet; }

    /**
     * Specify the length of time, in milliseconds, between the end of the time that
     * you have specified for the image overlay Duration and when the overlaid image
     * has faded to total transparency. If you don't specify a value for Fade-out, the
     * image will disappear abruptly at the end of the inserted image duration.
     */
    inline void SetFadeOut(int value) { m_fadeOutHasBeenSet = true; m_fadeOut = value; }

    /**
     * Specify the length of time, in milliseconds, between the end of the time that
     * you have specified for the image overlay Duration and when the overlaid image
     * has faded to total transparency. If you don't specify a value for Fade-out, the
     * image will disappear abruptly at the end of the inserted image duration.
     */
    inline InsertableImage& WithFadeOut(int value) { SetFadeOut(value); return *this;}


    /**
     * Specify the height of the inserted image in pixels. If you specify a value
     * that's larger than the video resolution height, the service will crop your
     * overlaid image to fit. To use the native height of the image, keep this setting
     * blank.
     */
    inline int GetHeight() const{ return m_height; }

    /**
     * Specify the height of the inserted image in pixels. If you specify a value
     * that's larger than the video resolution height, the service will crop your
     * overlaid image to fit. To use the native height of the image, keep this setting
     * blank.
     */
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }

    /**
     * Specify the height of the inserted image in pixels. If you specify a value
     * that's larger than the video resolution height, the service will crop your
     * overlaid image to fit. To use the native height of the image, keep this setting
     * blank.
     */
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * Specify the height of the inserted image in pixels. If you specify a value
     * that's larger than the video resolution height, the service will crop your
     * overlaid image to fit. To use the native height of the image, keep this setting
     * blank.
     */
    inline InsertableImage& WithHeight(int value) { SetHeight(value); return *this;}


    /**
     * Specify the Amazon S3 location of the image that you want to overlay on the
     * video. Use a PNG or TGA file.
     */
    inline const Aws::String& GetImageInserterInput() const{ return m_imageInserterInput; }

    /**
     * Specify the Amazon S3 location of the image that you want to overlay on the
     * video. Use a PNG or TGA file.
     */
    inline bool ImageInserterInputHasBeenSet() const { return m_imageInserterInputHasBeenSet; }

    /**
     * Specify the Amazon S3 location of the image that you want to overlay on the
     * video. Use a PNG or TGA file.
     */
    inline void SetImageInserterInput(const Aws::String& value) { m_imageInserterInputHasBeenSet = true; m_imageInserterInput = value; }

    /**
     * Specify the Amazon S3 location of the image that you want to overlay on the
     * video. Use a PNG or TGA file.
     */
    inline void SetImageInserterInput(Aws::String&& value) { m_imageInserterInputHasBeenSet = true; m_imageInserterInput = std::move(value); }

    /**
     * Specify the Amazon S3 location of the image that you want to overlay on the
     * video. Use a PNG or TGA file.
     */
    inline void SetImageInserterInput(const char* value) { m_imageInserterInputHasBeenSet = true; m_imageInserterInput.assign(value); }

    /**
     * Specify the Amazon S3 location of the image that you want to overlay on the
     * video. Use a PNG or TGA file.
     */
    inline InsertableImage& WithImageInserterInput(const Aws::String& value) { SetImageInserterInput(value); return *this;}

    /**
     * Specify the Amazon S3 location of the image that you want to overlay on the
     * video. Use a PNG or TGA file.
     */
    inline InsertableImage& WithImageInserterInput(Aws::String&& value) { SetImageInserterInput(std::move(value)); return *this;}

    /**
     * Specify the Amazon S3 location of the image that you want to overlay on the
     * video. Use a PNG or TGA file.
     */
    inline InsertableImage& WithImageInserterInput(const char* value) { SetImageInserterInput(value); return *this;}


    /**
     * Specify the distance, in pixels, between the inserted image and the left edge of
     * the video frame. Required for any image overlay that you specify.
     */
    inline int GetImageX() const{ return m_imageX; }

    /**
     * Specify the distance, in pixels, between the inserted image and the left edge of
     * the video frame. Required for any image overlay that you specify.
     */
    inline bool ImageXHasBeenSet() const { return m_imageXHasBeenSet; }

    /**
     * Specify the distance, in pixels, between the inserted image and the left edge of
     * the video frame. Required for any image overlay that you specify.
     */
    inline void SetImageX(int value) { m_imageXHasBeenSet = true; m_imageX = value; }

    /**
     * Specify the distance, in pixels, between the inserted image and the left edge of
     * the video frame. Required for any image overlay that you specify.
     */
    inline InsertableImage& WithImageX(int value) { SetImageX(value); return *this;}


    /**
     * Specify the distance, in pixels, between the overlaid image and the top edge of
     * the video frame. Required for any image overlay that you specify.
     */
    inline int GetImageY() const{ return m_imageY; }

    /**
     * Specify the distance, in pixels, between the overlaid image and the top edge of
     * the video frame. Required for any image overlay that you specify.
     */
    inline bool ImageYHasBeenSet() const { return m_imageYHasBeenSet; }

    /**
     * Specify the distance, in pixels, between the overlaid image and the top edge of
     * the video frame. Required for any image overlay that you specify.
     */
    inline void SetImageY(int value) { m_imageYHasBeenSet = true; m_imageY = value; }

    /**
     * Specify the distance, in pixels, between the overlaid image and the top edge of
     * the video frame. Required for any image overlay that you specify.
     */
    inline InsertableImage& WithImageY(int value) { SetImageY(value); return *this;}


    /**
     * Specify how overlapping inserted images appear. Images with higher values for
     * Layer appear on top of images with lower values for Layer.
     */
    inline int GetLayer() const{ return m_layer; }

    /**
     * Specify how overlapping inserted images appear. Images with higher values for
     * Layer appear on top of images with lower values for Layer.
     */
    inline bool LayerHasBeenSet() const { return m_layerHasBeenSet; }

    /**
     * Specify how overlapping inserted images appear. Images with higher values for
     * Layer appear on top of images with lower values for Layer.
     */
    inline void SetLayer(int value) { m_layerHasBeenSet = true; m_layer = value; }

    /**
     * Specify how overlapping inserted images appear. Images with higher values for
     * Layer appear on top of images with lower values for Layer.
     */
    inline InsertableImage& WithLayer(int value) { SetLayer(value); return *this;}


    /**
     * Use Opacity (Opacity) to specify how much of the underlying video shows through
     * the inserted image. 0 is transparent and 100 is fully opaque. Default is 50.
     */
    inline int GetOpacity() const{ return m_opacity; }

    /**
     * Use Opacity (Opacity) to specify how much of the underlying video shows through
     * the inserted image. 0 is transparent and 100 is fully opaque. Default is 50.
     */
    inline bool OpacityHasBeenSet() const { return m_opacityHasBeenSet; }

    /**
     * Use Opacity (Opacity) to specify how much of the underlying video shows through
     * the inserted image. 0 is transparent and 100 is fully opaque. Default is 50.
     */
    inline void SetOpacity(int value) { m_opacityHasBeenSet = true; m_opacity = value; }

    /**
     * Use Opacity (Opacity) to specify how much of the underlying video shows through
     * the inserted image. 0 is transparent and 100 is fully opaque. Default is 50.
     */
    inline InsertableImage& WithOpacity(int value) { SetOpacity(value); return *this;}


    /**
     * Specify the timecode of the frame that you want the overlay to first appear on.
     * This must be in timecode (HH:MM:SS:FF or HH:MM:SS;FF) format. Remember to take
     * into account your timecode source settings.
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * Specify the timecode of the frame that you want the overlay to first appear on.
     * This must be in timecode (HH:MM:SS:FF or HH:MM:SS;FF) format. Remember to take
     * into account your timecode source settings.
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * Specify the timecode of the frame that you want the overlay to first appear on.
     * This must be in timecode (HH:MM:SS:FF or HH:MM:SS;FF) format. Remember to take
     * into account your timecode source settings.
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * Specify the timecode of the frame that you want the overlay to first appear on.
     * This must be in timecode (HH:MM:SS:FF or HH:MM:SS;FF) format. Remember to take
     * into account your timecode source settings.
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * Specify the timecode of the frame that you want the overlay to first appear on.
     * This must be in timecode (HH:MM:SS:FF or HH:MM:SS;FF) format. Remember to take
     * into account your timecode source settings.
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * Specify the timecode of the frame that you want the overlay to first appear on.
     * This must be in timecode (HH:MM:SS:FF or HH:MM:SS;FF) format. Remember to take
     * into account your timecode source settings.
     */
    inline InsertableImage& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * Specify the timecode of the frame that you want the overlay to first appear on.
     * This must be in timecode (HH:MM:SS:FF or HH:MM:SS;FF) format. Remember to take
     * into account your timecode source settings.
     */
    inline InsertableImage& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * Specify the timecode of the frame that you want the overlay to first appear on.
     * This must be in timecode (HH:MM:SS:FF or HH:MM:SS;FF) format. Remember to take
     * into account your timecode source settings.
     */
    inline InsertableImage& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * Specify the width of the inserted image in pixels. If you specify a value that's
     * larger than the video resolution width, the service will crop your overlaid
     * image to fit. To use the native width of the image, keep this setting blank.
     */
    inline int GetWidth() const{ return m_width; }

    /**
     * Specify the width of the inserted image in pixels. If you specify a value that's
     * larger than the video resolution width, the service will crop your overlaid
     * image to fit. To use the native width of the image, keep this setting blank.
     */
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }

    /**
     * Specify the width of the inserted image in pixels. If you specify a value that's
     * larger than the video resolution width, the service will crop your overlaid
     * image to fit. To use the native width of the image, keep this setting blank.
     */
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * Specify the width of the inserted image in pixels. If you specify a value that's
     * larger than the video resolution width, the service will crop your overlaid
     * image to fit. To use the native width of the image, keep this setting blank.
     */
    inline InsertableImage& WithWidth(int value) { SetWidth(value); return *this;}

  private:

    int m_duration;
    bool m_durationHasBeenSet;

    int m_fadeIn;
    bool m_fadeInHasBeenSet;

    int m_fadeOut;
    bool m_fadeOutHasBeenSet;

    int m_height;
    bool m_heightHasBeenSet;

    Aws::String m_imageInserterInput;
    bool m_imageInserterInputHasBeenSet;

    int m_imageX;
    bool m_imageXHasBeenSet;

    int m_imageY;
    bool m_imageYHasBeenSet;

    int m_layer;
    bool m_layerHasBeenSet;

    int m_opacity;
    bool m_opacityHasBeenSet;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet;

    int m_width;
    bool m_widthHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
