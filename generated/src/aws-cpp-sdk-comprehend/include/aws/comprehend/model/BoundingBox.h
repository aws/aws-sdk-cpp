/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>

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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>The bounding box around the detected page or around an element on a document
   * page. The left (x-coordinate) and top (y-coordinate) are coordinates that
   * represent the top and left sides of the bounding box. Note that the upper-left
   * corner of the image is the origin (0,0). </p> <p>For additional information, see
   * <a
   * href="https://docs.aws.amazon.com/textract/latest/dg/API_BoundingBox.html">BoundingBox</a>
   * in the Amazon Textract API reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BoundingBox">AWS
   * API Reference</a></p>
   */
  class BoundingBox
  {
  public:
    AWS_COMPREHEND_API BoundingBox();
    AWS_COMPREHEND_API BoundingBox(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API BoundingBox& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    double m_height;
    bool m_heightHasBeenSet = false;

    double m_left;
    bool m_leftHasBeenSet = false;

    double m_top;
    bool m_topHasBeenSet = false;

    double m_width;
    bool m_widthHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
