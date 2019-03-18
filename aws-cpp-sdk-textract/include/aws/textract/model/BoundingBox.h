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
#include <aws/textract/Textract_EXPORTS.h>

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
namespace Textract
{
namespace Model
{

  /**
   * <p>The bounding box around the recognized text, key, value, table or table cell
   * on a document page. The <code>left</code> (x-coordinate) and <code>top</code>
   * (y-coordinate) are coordinates that represent the top and left sides of the
   * bounding box. Note that the upper-left corner of the image is the origin (0,0).
   * </p> <p>The <code>top</code> and <code>left</code> values returned are ratios of
   * the overall document page size. For example, if the input image is 700 x 200
   * pixels, and the top-left coordinate of the bounding box is 350 x 50 pixels, the
   * API returns a <code>left</code> value of 0.5 (350/700) and a <code>top</code>
   * value of 0.25 (50/200).</p> <p>The <code>width</code> and <code>height</code>
   * values represent the dimensions of the bounding box as a ratio of the overall
   * document page dimension. For example, if the document page size is 700 x 200
   * pixels, and the bounding box width is 70 pixels, the width returned is 0.1.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/BoundingBox">AWS
   * API Reference</a></p>
   */
  class AWS_TEXTRACT_API BoundingBox
  {
  public:
    BoundingBox();
    BoundingBox(Aws::Utils::Json::JsonView jsonValue);
    BoundingBox& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The width of the bounding box as a ratio of the overall document page
     * width.</p>
     */
    inline double GetWidth() const{ return m_width; }

    /**
     * <p>The width of the bounding box as a ratio of the overall document page
     * width.</p>
     */
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }

    /**
     * <p>The width of the bounding box as a ratio of the overall document page
     * width.</p>
     */
    inline void SetWidth(double value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * <p>The width of the bounding box as a ratio of the overall document page
     * width.</p>
     */
    inline BoundingBox& WithWidth(double value) { SetWidth(value); return *this;}


    /**
     * <p>The height of the bounding box as a ratio of the overall document page
     * height.</p>
     */
    inline double GetHeight() const{ return m_height; }

    /**
     * <p>The height of the bounding box as a ratio of the overall document page
     * height.</p>
     */
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }

    /**
     * <p>The height of the bounding box as a ratio of the overall document page
     * height.</p>
     */
    inline void SetHeight(double value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * <p>The height of the bounding box as a ratio of the overall document page
     * height.</p>
     */
    inline BoundingBox& WithHeight(double value) { SetHeight(value); return *this;}


    /**
     * <p>The left coordinate of the bounding box as a ratio of overall document page
     * width.</p>
     */
    inline double GetLeft() const{ return m_left; }

    /**
     * <p>The left coordinate of the bounding box as a ratio of overall document page
     * width.</p>
     */
    inline bool LeftHasBeenSet() const { return m_leftHasBeenSet; }

    /**
     * <p>The left coordinate of the bounding box as a ratio of overall document page
     * width.</p>
     */
    inline void SetLeft(double value) { m_leftHasBeenSet = true; m_left = value; }

    /**
     * <p>The left coordinate of the bounding box as a ratio of overall document page
     * width.</p>
     */
    inline BoundingBox& WithLeft(double value) { SetLeft(value); return *this;}


    /**
     * <p>The top coordinate of the bounding box as a ratio of overall document page
     * height.</p>
     */
    inline double GetTop() const{ return m_top; }

    /**
     * <p>The top coordinate of the bounding box as a ratio of overall document page
     * height.</p>
     */
    inline bool TopHasBeenSet() const { return m_topHasBeenSet; }

    /**
     * <p>The top coordinate of the bounding box as a ratio of overall document page
     * height.</p>
     */
    inline void SetTop(double value) { m_topHasBeenSet = true; m_top = value; }

    /**
     * <p>The top coordinate of the bounding box as a ratio of overall document page
     * height.</p>
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
} // namespace Textract
} // namespace Aws
