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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputLocation.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Static image activate.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StaticImageActivateScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API StaticImageActivateScheduleActionSettings
  {
  public:
    StaticImageActivateScheduleActionSettings();
    StaticImageActivateScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    StaticImageActivateScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The duration in milliseconds for the image to remain in the video. If omitted or
     * set to 0, duration is infinite and image will remain until explicitly
     * deactivated.
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * The duration in milliseconds for the image to remain in the video. If omitted or
     * set to 0, duration is infinite and image will remain until explicitly
     * deactivated.
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * The duration in milliseconds for the image to remain in the video. If omitted or
     * set to 0, duration is infinite and image will remain until explicitly
     * deactivated.
     */
    inline StaticImageActivateScheduleActionSettings& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * The time in milliseconds for the image to fade in. Defaults to 0.
     */
    inline int GetFadeIn() const{ return m_fadeIn; }

    /**
     * The time in milliseconds for the image to fade in. Defaults to 0.
     */
    inline void SetFadeIn(int value) { m_fadeInHasBeenSet = true; m_fadeIn = value; }

    /**
     * The time in milliseconds for the image to fade in. Defaults to 0.
     */
    inline StaticImageActivateScheduleActionSettings& WithFadeIn(int value) { SetFadeIn(value); return *this;}


    /**
     * The time in milliseconds for the image to fade out. Defaults to 0.
     */
    inline int GetFadeOut() const{ return m_fadeOut; }

    /**
     * The time in milliseconds for the image to fade out. Defaults to 0.
     */
    inline void SetFadeOut(int value) { m_fadeOutHasBeenSet = true; m_fadeOut = value; }

    /**
     * The time in milliseconds for the image to fade out. Defaults to 0.
     */
    inline StaticImageActivateScheduleActionSettings& WithFadeOut(int value) { SetFadeOut(value); return *this;}


    /**
     * The height of the image when inserted into the video.  Defaults to the native
     * height of the image.
     */
    inline int GetHeight() const{ return m_height; }

    /**
     * The height of the image when inserted into the video.  Defaults to the native
     * height of the image.
     */
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * The height of the image when inserted into the video.  Defaults to the native
     * height of the image.
     */
    inline StaticImageActivateScheduleActionSettings& WithHeight(int value) { SetHeight(value); return *this;}


    /**
     * The image to overlay on the video.  Must be a 32 bit BMP, PNG, or TGA file. 
     * Must not be larger than the input video.
     */
    inline const InputLocation& GetImage() const{ return m_image; }

    /**
     * The image to overlay on the video.  Must be a 32 bit BMP, PNG, or TGA file. 
     * Must not be larger than the input video.
     */
    inline void SetImage(const InputLocation& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * The image to overlay on the video.  Must be a 32 bit BMP, PNG, or TGA file. 
     * Must not be larger than the input video.
     */
    inline void SetImage(InputLocation&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * The image to overlay on the video.  Must be a 32 bit BMP, PNG, or TGA file. 
     * Must not be larger than the input video.
     */
    inline StaticImageActivateScheduleActionSettings& WithImage(const InputLocation& value) { SetImage(value); return *this;}

    /**
     * The image to overlay on the video.  Must be a 32 bit BMP, PNG, or TGA file. 
     * Must not be larger than the input video.
     */
    inline StaticImageActivateScheduleActionSettings& WithImage(InputLocation&& value) { SetImage(std::move(value)); return *this;}


    /**
     * Placement of the left edge of the image on the horizontal axis in pixels. 0 is
     * the left edge of the frame. Defaults to 0.
     */
    inline int GetImageX() const{ return m_imageX; }

    /**
     * Placement of the left edge of the image on the horizontal axis in pixels. 0 is
     * the left edge of the frame. Defaults to 0.
     */
    inline void SetImageX(int value) { m_imageXHasBeenSet = true; m_imageX = value; }

    /**
     * Placement of the left edge of the image on the horizontal axis in pixels. 0 is
     * the left edge of the frame. Defaults to 0.
     */
    inline StaticImageActivateScheduleActionSettings& WithImageX(int value) { SetImageX(value); return *this;}


    /**
     * Placement of the top edge of the image on the vertical axis in pixels.  0 is the
     * top edge of the frame. Defaults to 0.
     */
    inline int GetImageY() const{ return m_imageY; }

    /**
     * Placement of the top edge of the image on the vertical axis in pixels.  0 is the
     * top edge of the frame. Defaults to 0.
     */
    inline void SetImageY(int value) { m_imageYHasBeenSet = true; m_imageY = value; }

    /**
     * Placement of the top edge of the image on the vertical axis in pixels.  0 is the
     * top edge of the frame. Defaults to 0.
     */
    inline StaticImageActivateScheduleActionSettings& WithImageY(int value) { SetImageY(value); return *this;}


    /**
     * The Z order of the inserted image.  Images with higher layer values will be
     * inserted on top of images with lower layer values. Permitted values are 0-7
     * inclusive. Defaults to 0.
     */
    inline int GetLayer() const{ return m_layer; }

    /**
     * The Z order of the inserted image.  Images with higher layer values will be
     * inserted on top of images with lower layer values. Permitted values are 0-7
     * inclusive. Defaults to 0.
     */
    inline void SetLayer(int value) { m_layerHasBeenSet = true; m_layer = value; }

    /**
     * The Z order of the inserted image.  Images with higher layer values will be
     * inserted on top of images with lower layer values. Permitted values are 0-7
     * inclusive. Defaults to 0.
     */
    inline StaticImageActivateScheduleActionSettings& WithLayer(int value) { SetLayer(value); return *this;}


    /**
     * Opacity of image where 0 is transparent and 100 is fully opaque. Defaults to
     * 100.
     */
    inline int GetOpacity() const{ return m_opacity; }

    /**
     * Opacity of image where 0 is transparent and 100 is fully opaque. Defaults to
     * 100.
     */
    inline void SetOpacity(int value) { m_opacityHasBeenSet = true; m_opacity = value; }

    /**
     * Opacity of image where 0 is transparent and 100 is fully opaque. Defaults to
     * 100.
     */
    inline StaticImageActivateScheduleActionSettings& WithOpacity(int value) { SetOpacity(value); return *this;}


    /**
     * The width of the image when inserted into the video.  Defaults to the native
     * width of the image.
     */
    inline int GetWidth() const{ return m_width; }

    /**
     * The width of the image when inserted into the video.  Defaults to the native
     * width of the image.
     */
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * The width of the image when inserted into the video.  Defaults to the native
     * width of the image.
     */
    inline StaticImageActivateScheduleActionSettings& WithWidth(int value) { SetWidth(value); return *this;}

  private:

    int m_duration;
    bool m_durationHasBeenSet;

    int m_fadeIn;
    bool m_fadeInHasBeenSet;

    int m_fadeOut;
    bool m_fadeOutHasBeenSet;

    int m_height;
    bool m_heightHasBeenSet;

    InputLocation m_image;
    bool m_imageHasBeenSet;

    int m_imageX;
    bool m_imageXHasBeenSet;

    int m_imageY;
    bool m_imageYHasBeenSet;

    int m_layer;
    bool m_layerHasBeenSet;

    int m_opacity;
    bool m_opacityHasBeenSet;

    int m_width;
    bool m_widthHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
