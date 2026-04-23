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
#include <aws/rekognition/Rekognition_EXPORTS.h>

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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Identifies the bounding box around the label, face, or text. The
   * <code>left</code> (x-coordinate) and <code>top</code> (y-coordinate) are
   * coordinates representing the top and left sides of the bounding box. Note that
   * the upper-left corner of the image is the origin (0,0). </p> <p>The
   * <code>top</code> and <code>left</code> values returned are ratios of the overall
   * image size. For example, if the input image is 700x200 pixels, and the top-left
   * coordinate of the bounding box is 350x50 pixels, the API returns a
   * <code>left</code> value of 0.5 (350/700) and a <code>top</code> value of 0.25
   * (50/200).</p> <p>The <code>width</code> and <code>height</code> values represent
   * the dimensions of the bounding box as a ratio of the overall image dimension.
   * For example, if the input image is 700x200 pixels, and the bounding box width is
   * 70 pixels, the width returned is 0.1. </p> <note> <p> The bounding box
   * coordinates can have negative values. For example, if Amazon Rekognition is able
   * to detect a face that is at the image edge and is only partially visible, the
   * service can return coordinates that are outside the image bounds and, depending
   * on the image edge, you might get negative values or values greater than 1 for
   * the <code>left</code> or <code>top</code> values. </p> </note><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/BoundingBox">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API BoundingBox
  {
  public:
    BoundingBox();
    BoundingBox(Aws::Utils::Json::JsonView jsonValue);
    BoundingBox& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Width of the bounding box as a ratio of the overall image width.</p>
     */
    inline double GetWidth() const{ return m_width; }

    /**
     * <p>Width of the bounding box as a ratio of the overall image width.</p>
     */
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }

    /**
     * <p>Width of the bounding box as a ratio of the overall image width.</p>
     */
    inline void SetWidth(double value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * <p>Width of the bounding box as a ratio of the overall image width.</p>
     */
    inline BoundingBox& WithWidth(double value) { SetWidth(value); return *this;}


    /**
     * <p>Height of the bounding box as a ratio of the overall image height.</p>
     */
    inline double GetHeight() const{ return m_height; }

    /**
     * <p>Height of the bounding box as a ratio of the overall image height.</p>
     */
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }

    /**
     * <p>Height of the bounding box as a ratio of the overall image height.</p>
     */
    inline void SetHeight(double value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * <p>Height of the bounding box as a ratio of the overall image height.</p>
     */
    inline BoundingBox& WithHeight(double value) { SetHeight(value); return *this;}


    /**
     * <p>Left coordinate of the bounding box as a ratio of overall image width.</p>
     */
    inline double GetLeft() const{ return m_left; }

    /**
     * <p>Left coordinate of the bounding box as a ratio of overall image width.</p>
     */
    inline bool LeftHasBeenSet() const { return m_leftHasBeenSet; }

    /**
     * <p>Left coordinate of the bounding box as a ratio of overall image width.</p>
     */
    inline void SetLeft(double value) { m_leftHasBeenSet = true; m_left = value; }

    /**
     * <p>Left coordinate of the bounding box as a ratio of overall image width.</p>
     */
    inline BoundingBox& WithLeft(double value) { SetLeft(value); return *this;}


    /**
     * <p>Top coordinate of the bounding box as a ratio of overall image height.</p>
     */
    inline double GetTop() const{ return m_top; }

    /**
     * <p>Top coordinate of the bounding box as a ratio of overall image height.</p>
     */
    inline bool TopHasBeenSet() const { return m_topHasBeenSet; }

    /**
     * <p>Top coordinate of the bounding box as a ratio of overall image height.</p>
     */
    inline void SetTop(double value) { m_topHasBeenSet = true; m_top = value; }

    /**
     * <p>Top coordinate of the bounding box as a ratio of overall image height.</p>
     */
    inline BoundingBox& WithTop(double value) { SetTop(value); return *this;}

  private:

    double m_width;
    bool m_widthHasBeenSet;

    double m_height;
    bool m_heightHasBeenSet;

    double m_left;
    bool m_leftHasBeenSet;

    double m_top;
    bool m_topHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
