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
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings for Insertable Image<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/InsertableImage">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API InsertableImage
  {
  public:
    InsertableImage();
    InsertableImage(const Aws::Utils::Json::JsonValue& jsonValue);
    InsertableImage& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use Duration (Duration) to set the time, in milliseconds, for the image to
     * remain on the output video.
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * Use Duration (Duration) to set the time, in milliseconds, for the image to
     * remain on the output video.
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * Use Duration (Duration) to set the time, in milliseconds, for the image to
     * remain on the output video.
     */
    inline InsertableImage& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * Use Fade in (FadeIut) to set the length, in milliseconds, of the inserted image
     * fade in. If you don't specify a value for Fade in, the image will appear
     * abruptly at the Start time.
     */
    inline int GetFadeIn() const{ return m_fadeIn; }

    /**
     * Use Fade in (FadeIut) to set the length, in milliseconds, of the inserted image
     * fade in. If you don't specify a value for Fade in, the image will appear
     * abruptly at the Start time.
     */
    inline void SetFadeIn(int value) { m_fadeInHasBeenSet = true; m_fadeIn = value; }

    /**
     * Use Fade in (FadeIut) to set the length, in milliseconds, of the inserted image
     * fade in. If you don't specify a value for Fade in, the image will appear
     * abruptly at the Start time.
     */
    inline InsertableImage& WithFadeIn(int value) { SetFadeIn(value); return *this;}


    /**
     * Use Fade out (FadeOut) to set the length, in milliseconds, of the inserted image
     * fade out. If you don't specify a value for Fade out, the image will disappear
     * abruptly at the end of the inserted image duration.
     */
    inline int GetFadeOut() const{ return m_fadeOut; }

    /**
     * Use Fade out (FadeOut) to set the length, in milliseconds, of the inserted image
     * fade out. If you don't specify a value for Fade out, the image will disappear
     * abruptly at the end of the inserted image duration.
     */
    inline void SetFadeOut(int value) { m_fadeOutHasBeenSet = true; m_fadeOut = value; }

    /**
     * Use Fade out (FadeOut) to set the length, in milliseconds, of the inserted image
     * fade out. If you don't specify a value for Fade out, the image will disappear
     * abruptly at the end of the inserted image duration.
     */
    inline InsertableImage& WithFadeOut(int value) { SetFadeOut(value); return *this;}


    /**
     * Specify the Height (Height) of the inserted image. Use a value that is less than
     * or equal to the video resolution height. Leave this setting blank to use the
     * native height of the image.
     */
    inline int GetHeight() const{ return m_height; }

    /**
     * Specify the Height (Height) of the inserted image. Use a value that is less than
     * or equal to the video resolution height. Leave this setting blank to use the
     * native height of the image.
     */
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * Specify the Height (Height) of the inserted image. Use a value that is less than
     * or equal to the video resolution height. Leave this setting blank to use the
     * native height of the image.
     */
    inline InsertableImage& WithHeight(int value) { SetHeight(value); return *this;}


    /**
     * Use Image location (imageInserterInput) to specify the Amazon S3 location of the
     * image to be inserted into the output. Use a 32 bit BMP, PNG, or TGA file that
     * fits inside the video frame.
     */
    inline const Aws::String& GetImageInserterInput() const{ return m_imageInserterInput; }

    /**
     * Use Image location (imageInserterInput) to specify the Amazon S3 location of the
     * image to be inserted into the output. Use a 32 bit BMP, PNG, or TGA file that
     * fits inside the video frame.
     */
    inline void SetImageInserterInput(const Aws::String& value) { m_imageInserterInputHasBeenSet = true; m_imageInserterInput = value; }

    /**
     * Use Image location (imageInserterInput) to specify the Amazon S3 location of the
     * image to be inserted into the output. Use a 32 bit BMP, PNG, or TGA file that
     * fits inside the video frame.
     */
    inline void SetImageInserterInput(Aws::String&& value) { m_imageInserterInputHasBeenSet = true; m_imageInserterInput = std::move(value); }

    /**
     * Use Image location (imageInserterInput) to specify the Amazon S3 location of the
     * image to be inserted into the output. Use a 32 bit BMP, PNG, or TGA file that
     * fits inside the video frame.
     */
    inline void SetImageInserterInput(const char* value) { m_imageInserterInputHasBeenSet = true; m_imageInserterInput.assign(value); }

    /**
     * Use Image location (imageInserterInput) to specify the Amazon S3 location of the
     * image to be inserted into the output. Use a 32 bit BMP, PNG, or TGA file that
     * fits inside the video frame.
     */
    inline InsertableImage& WithImageInserterInput(const Aws::String& value) { SetImageInserterInput(value); return *this;}

    /**
     * Use Image location (imageInserterInput) to specify the Amazon S3 location of the
     * image to be inserted into the output. Use a 32 bit BMP, PNG, or TGA file that
     * fits inside the video frame.
     */
    inline InsertableImage& WithImageInserterInput(Aws::String&& value) { SetImageInserterInput(std::move(value)); return *this;}

    /**
     * Use Image location (imageInserterInput) to specify the Amazon S3 location of the
     * image to be inserted into the output. Use a 32 bit BMP, PNG, or TGA file that
     * fits inside the video frame.
     */
    inline InsertableImage& WithImageInserterInput(const char* value) { SetImageInserterInput(value); return *this;}


    /**
     * Use Left (ImageX) to set the distance, in pixels, between the inserted image and
     * the left edge of the frame. Required for BMP, PNG and TGA input.
     */
    inline int GetImageX() const{ return m_imageX; }

    /**
     * Use Left (ImageX) to set the distance, in pixels, between the inserted image and
     * the left edge of the frame. Required for BMP, PNG and TGA input.
     */
    inline void SetImageX(int value) { m_imageXHasBeenSet = true; m_imageX = value; }

    /**
     * Use Left (ImageX) to set the distance, in pixels, between the inserted image and
     * the left edge of the frame. Required for BMP, PNG and TGA input.
     */
    inline InsertableImage& WithImageX(int value) { SetImageX(value); return *this;}


    /**
     * Use Top (ImageY) to set the distance, in pixels, between the inserted image and
     * the top edge of the video frame. Required for BMP, PNG and TGA input.
     */
    inline int GetImageY() const{ return m_imageY; }

    /**
     * Use Top (ImageY) to set the distance, in pixels, between the inserted image and
     * the top edge of the video frame. Required for BMP, PNG and TGA input.
     */
    inline void SetImageY(int value) { m_imageYHasBeenSet = true; m_imageY = value; }

    /**
     * Use Top (ImageY) to set the distance, in pixels, between the inserted image and
     * the top edge of the video frame. Required for BMP, PNG and TGA input.
     */
    inline InsertableImage& WithImageY(int value) { SetImageY(value); return *this;}


    /**
     * Use Layer (Layer) to specify how overlapping inserted images appear. Images with
     * higher values of layer appear on top of images with lower values of layer.
     */
    inline int GetLayer() const{ return m_layer; }

    /**
     * Use Layer (Layer) to specify how overlapping inserted images appear. Images with
     * higher values of layer appear on top of images with lower values of layer.
     */
    inline void SetLayer(int value) { m_layerHasBeenSet = true; m_layer = value; }

    /**
     * Use Layer (Layer) to specify how overlapping inserted images appear. Images with
     * higher values of layer appear on top of images with lower values of layer.
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
    inline void SetOpacity(int value) { m_opacityHasBeenSet = true; m_opacity = value; }

    /**
     * Use Opacity (Opacity) to specify how much of the underlying video shows through
     * the inserted image. 0 is transparent and 100 is fully opaque. Default is 50.
     */
    inline InsertableImage& WithOpacity(int value) { SetOpacity(value); return *this;}


    /**
     * Use Start time (StartTime) to specify the video timecode when the image is
     * inserted in the output. This must be in timecode format (HH:MM:SS:FF)
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * Use Start time (StartTime) to specify the video timecode when the image is
     * inserted in the output. This must be in timecode format (HH:MM:SS:FF)
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * Use Start time (StartTime) to specify the video timecode when the image is
     * inserted in the output. This must be in timecode format (HH:MM:SS:FF)
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * Use Start time (StartTime) to specify the video timecode when the image is
     * inserted in the output. This must be in timecode format (HH:MM:SS:FF)
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * Use Start time (StartTime) to specify the video timecode when the image is
     * inserted in the output. This must be in timecode format (HH:MM:SS:FF)
     */
    inline InsertableImage& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * Use Start time (StartTime) to specify the video timecode when the image is
     * inserted in the output. This must be in timecode format (HH:MM:SS:FF)
     */
    inline InsertableImage& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * Use Start time (StartTime) to specify the video timecode when the image is
     * inserted in the output. This must be in timecode format (HH:MM:SS:FF)
     */
    inline InsertableImage& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * Specify the Width (Width) of the inserted image. Use a value that is less than
     * or equal to the video resolution width. Leave this setting blank to use the
     * native width of the image.
     */
    inline int GetWidth() const{ return m_width; }

    /**
     * Specify the Width (Width) of the inserted image. Use a value that is less than
     * or equal to the video resolution width. Leave this setting blank to use the
     * native width of the image.
     */
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * Specify the Width (Width) of the inserted image. Use a value that is less than
     * or equal to the video resolution width. Leave this setting blank to use the
     * native width of the image.
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
