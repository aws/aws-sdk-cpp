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
   * Use Rectangle to identify a specific area of the video frame.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Rectangle">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Rectangle
  {
  public:
    Rectangle();
    Rectangle(Aws::Utils::Json::JsonView jsonValue);
    Rectangle& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Height of rectangle in pixels. Specify only even numbers.
     */
    inline int GetHeight() const{ return m_height; }

    /**
     * Height of rectangle in pixels. Specify only even numbers.
     */
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }

    /**
     * Height of rectangle in pixels. Specify only even numbers.
     */
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * Height of rectangle in pixels. Specify only even numbers.
     */
    inline Rectangle& WithHeight(int value) { SetHeight(value); return *this;}


    /**
     * Width of rectangle in pixels. Specify only even numbers.
     */
    inline int GetWidth() const{ return m_width; }

    /**
     * Width of rectangle in pixels. Specify only even numbers.
     */
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }

    /**
     * Width of rectangle in pixels. Specify only even numbers.
     */
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * Width of rectangle in pixels. Specify only even numbers.
     */
    inline Rectangle& WithWidth(int value) { SetWidth(value); return *this;}


    /**
     * The distance, in pixels, between the rectangle and the left edge of the video
     * frame. Specify only even numbers.
     */
    inline int GetX() const{ return m_x; }

    /**
     * The distance, in pixels, between the rectangle and the left edge of the video
     * frame. Specify only even numbers.
     */
    inline bool XHasBeenSet() const { return m_xHasBeenSet; }

    /**
     * The distance, in pixels, between the rectangle and the left edge of the video
     * frame. Specify only even numbers.
     */
    inline void SetX(int value) { m_xHasBeenSet = true; m_x = value; }

    /**
     * The distance, in pixels, between the rectangle and the left edge of the video
     * frame. Specify only even numbers.
     */
    inline Rectangle& WithX(int value) { SetX(value); return *this;}


    /**
     * The distance, in pixels, between the rectangle and the top edge of the video
     * frame. Specify only even numbers.
     */
    inline int GetY() const{ return m_y; }

    /**
     * The distance, in pixels, between the rectangle and the top edge of the video
     * frame. Specify only even numbers.
     */
    inline bool YHasBeenSet() const { return m_yHasBeenSet; }

    /**
     * The distance, in pixels, between the rectangle and the top edge of the video
     * frame. Specify only even numbers.
     */
    inline void SetY(int value) { m_yHasBeenSet = true; m_y = value; }

    /**
     * The distance, in pixels, between the rectangle and the top edge of the video
     * frame. Specify only even numbers.
     */
    inline Rectangle& WithY(int value) { SetY(value); return *this;}

  private:

    int m_height;
    bool m_heightHasBeenSet;

    int m_width;
    bool m_widthHasBeenSet;

    int m_x;
    bool m_xHasBeenSet;

    int m_y;
    bool m_yHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
