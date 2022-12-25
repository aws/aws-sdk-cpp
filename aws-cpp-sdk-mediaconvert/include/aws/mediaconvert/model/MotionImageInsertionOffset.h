/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
   * Specify the offset between the upper-left corner of the video frame and the top
   * left corner of the overlay.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MotionImageInsertionOffset">AWS
   * API Reference</a></p>
   */
  class MotionImageInsertionOffset
  {
  public:
    AWS_MEDIACONVERT_API MotionImageInsertionOffset();
    AWS_MEDIACONVERT_API MotionImageInsertionOffset(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API MotionImageInsertionOffset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Set the distance, in pixels, between the overlay and the left edge of the video
     * frame.
     */
    inline int GetImageX() const{ return m_imageX; }

    /**
     * Set the distance, in pixels, between the overlay and the left edge of the video
     * frame.
     */
    inline bool ImageXHasBeenSet() const { return m_imageXHasBeenSet; }

    /**
     * Set the distance, in pixels, between the overlay and the left edge of the video
     * frame.
     */
    inline void SetImageX(int value) { m_imageXHasBeenSet = true; m_imageX = value; }

    /**
     * Set the distance, in pixels, between the overlay and the left edge of the video
     * frame.
     */
    inline MotionImageInsertionOffset& WithImageX(int value) { SetImageX(value); return *this;}


    /**
     * Set the distance, in pixels, between the overlay and the top edge of the video
     * frame.
     */
    inline int GetImageY() const{ return m_imageY; }

    /**
     * Set the distance, in pixels, between the overlay and the top edge of the video
     * frame.
     */
    inline bool ImageYHasBeenSet() const { return m_imageYHasBeenSet; }

    /**
     * Set the distance, in pixels, between the overlay and the top edge of the video
     * frame.
     */
    inline void SetImageY(int value) { m_imageYHasBeenSet = true; m_imageY = value; }

    /**
     * Set the distance, in pixels, between the overlay and the top edge of the video
     * frame.
     */
    inline MotionImageInsertionOffset& WithImageY(int value) { SetImageY(value); return *this;}

  private:

    int m_imageX;
    bool m_imageXHasBeenSet = false;

    int m_imageY;
    bool m_imageYHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
