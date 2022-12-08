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
   * <p>The X and Y coordinates of a point on a document page.</p> <p>For additional
   * information, see <a
   * href="https://docs.aws.amazon.com/textract/latest/dg/API_Point.html">Point</a>
   * in the Amazon Textract API reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/Point">AWS
   * API Reference</a></p>
   */
  class Point
  {
  public:
    AWS_COMPREHEND_API Point();
    AWS_COMPREHEND_API Point(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Point& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the X coordinate for a point on a polygon</p>
     */
    inline double GetX() const{ return m_x; }

    /**
     * <p>The value of the X coordinate for a point on a polygon</p>
     */
    inline bool XHasBeenSet() const { return m_xHasBeenSet; }

    /**
     * <p>The value of the X coordinate for a point on a polygon</p>
     */
    inline void SetX(double value) { m_xHasBeenSet = true; m_x = value; }

    /**
     * <p>The value of the X coordinate for a point on a polygon</p>
     */
    inline Point& WithX(double value) { SetX(value); return *this;}


    /**
     * <p>The value of the Y coordinate for a point on a polygon</p>
     */
    inline double GetY() const{ return m_y; }

    /**
     * <p>The value of the Y coordinate for a point on a polygon</p>
     */
    inline bool YHasBeenSet() const { return m_yHasBeenSet; }

    /**
     * <p>The value of the Y coordinate for a point on a polygon</p>
     */
    inline void SetY(double value) { m_yHasBeenSet = true; m_y = value; }

    /**
     * <p>The value of the Y coordinate for a point on a polygon</p>
     */
    inline Point& WithY(double value) { SetY(value); return *this;}

  private:

    double m_x;
    bool m_xHasBeenSet = false;

    double m_y;
    bool m_yHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
