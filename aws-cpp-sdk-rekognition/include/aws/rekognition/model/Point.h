﻿/*
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
   * <p>The X and Y coordinates of a point on an image. The X and Y values returned
   * are ratios of the overall image size. For example, if the input image is 700x200
   * and the operation returns X=0.5 and Y=0.25, then the point is at the (350,50)
   * pixel coordinate on the image.</p> <p>An array of <code>Point</code> objects,
   * <code>Polygon</code>, is returned by . <code>Polygon</code> represents a
   * fine-grained polygon around detected text. For more information, see Geometry in
   * the Amazon Rekognition Developer Guide. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Point">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API Point
  {
  public:
    Point();
    Point(Aws::Utils::Json::JsonView jsonValue);
    Point& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the X coordinate for a point on a <code>Polygon</code>.</p>
     */
    inline double GetX() const{ return m_x; }

    /**
     * <p>The value of the X coordinate for a point on a <code>Polygon</code>.</p>
     */
    inline void SetX(double value) { m_xHasBeenSet = true; m_x = value; }

    /**
     * <p>The value of the X coordinate for a point on a <code>Polygon</code>.</p>
     */
    inline Point& WithX(double value) { SetX(value); return *this;}


    /**
     * <p>The value of the Y coordinate for a point on a <code>Polygon</code>.</p>
     */
    inline double GetY() const{ return m_y; }

    /**
     * <p>The value of the Y coordinate for a point on a <code>Polygon</code>.</p>
     */
    inline void SetY(double value) { m_yHasBeenSet = true; m_y = value; }

    /**
     * <p>The value of the Y coordinate for a point on a <code>Polygon</code>.</p>
     */
    inline Point& WithY(double value) { SetY(value); return *this;}

  private:

    double m_x;
    bool m_xHasBeenSet;

    double m_y;
    bool m_yHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
