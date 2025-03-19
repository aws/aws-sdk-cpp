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
    AWS_COMPREHEND_API BoundingBox() = default;
    AWS_COMPREHEND_API BoundingBox(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API BoundingBox& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The height of the bounding box as a ratio of the overall document page
     * height.</p>
     */
    inline double GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(double value) { m_heightHasBeenSet = true; m_height = value; }
    inline BoundingBox& WithHeight(double value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The left coordinate of the bounding box as a ratio of overall document page
     * width.</p>
     */
    inline double GetLeft() const { return m_left; }
    inline bool LeftHasBeenSet() const { return m_leftHasBeenSet; }
    inline void SetLeft(double value) { m_leftHasBeenSet = true; m_left = value; }
    inline BoundingBox& WithLeft(double value) { SetLeft(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The top coordinate of the bounding box as a ratio of overall document page
     * height.</p>
     */
    inline double GetTop() const { return m_top; }
    inline bool TopHasBeenSet() const { return m_topHasBeenSet; }
    inline void SetTop(double value) { m_topHasBeenSet = true; m_top = value; }
    inline BoundingBox& WithTop(double value) { SetTop(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The width of the bounding box as a ratio of the overall document page
     * width.</p>
     */
    inline double GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(double value) { m_widthHasBeenSet = true; m_width = value; }
    inline BoundingBox& WithWidth(double value) { SetWidth(value); return *this;}
    ///@}
  private:

    double m_height{0.0};
    bool m_heightHasBeenSet = false;

    double m_left{0.0};
    bool m_leftHasBeenSet = false;

    double m_top{0.0};
    bool m_topHasBeenSet = false;

    double m_width{0.0};
    bool m_widthHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
