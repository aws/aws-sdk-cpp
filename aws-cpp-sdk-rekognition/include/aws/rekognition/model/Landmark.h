/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/LandmarkType.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Indicates the location of the landmark on the face.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Landmark">AWS
   * API Reference</a></p>
   */
  class Landmark
  {
  public:
    AWS_REKOGNITION_API Landmark();
    AWS_REKOGNITION_API Landmark(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Landmark& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Type of landmark.</p>
     */
    inline const LandmarkType& GetType() const{ return m_type; }

    /**
     * <p>Type of landmark.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type of landmark.</p>
     */
    inline void SetType(const LandmarkType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of landmark.</p>
     */
    inline void SetType(LandmarkType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type of landmark.</p>
     */
    inline Landmark& WithType(const LandmarkType& value) { SetType(value); return *this;}

    /**
     * <p>Type of landmark.</p>
     */
    inline Landmark& WithType(LandmarkType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The x-coordinate of the landmark expressed as a ratio of the width of the
     * image. The x-coordinate is measured from the left-side of the image. For
     * example, if the image is 700 pixels wide and the x-coordinate of the landmark is
     * at 350 pixels, this value is 0.5. </p>
     */
    inline double GetX() const{ return m_x; }

    /**
     * <p>The x-coordinate of the landmark expressed as a ratio of the width of the
     * image. The x-coordinate is measured from the left-side of the image. For
     * example, if the image is 700 pixels wide and the x-coordinate of the landmark is
     * at 350 pixels, this value is 0.5. </p>
     */
    inline bool XHasBeenSet() const { return m_xHasBeenSet; }

    /**
     * <p>The x-coordinate of the landmark expressed as a ratio of the width of the
     * image. The x-coordinate is measured from the left-side of the image. For
     * example, if the image is 700 pixels wide and the x-coordinate of the landmark is
     * at 350 pixels, this value is 0.5. </p>
     */
    inline void SetX(double value) { m_xHasBeenSet = true; m_x = value; }

    /**
     * <p>The x-coordinate of the landmark expressed as a ratio of the width of the
     * image. The x-coordinate is measured from the left-side of the image. For
     * example, if the image is 700 pixels wide and the x-coordinate of the landmark is
     * at 350 pixels, this value is 0.5. </p>
     */
    inline Landmark& WithX(double value) { SetX(value); return *this;}


    /**
     * <p>The y-coordinate of the landmark expressed as a ratio of the height of the
     * image. The y-coordinate is measured from the top of the image. For example, if
     * the image height is 200 pixels and the y-coordinate of the landmark is at 50
     * pixels, this value is 0.25.</p>
     */
    inline double GetY() const{ return m_y; }

    /**
     * <p>The y-coordinate of the landmark expressed as a ratio of the height of the
     * image. The y-coordinate is measured from the top of the image. For example, if
     * the image height is 200 pixels and the y-coordinate of the landmark is at 50
     * pixels, this value is 0.25.</p>
     */
    inline bool YHasBeenSet() const { return m_yHasBeenSet; }

    /**
     * <p>The y-coordinate of the landmark expressed as a ratio of the height of the
     * image. The y-coordinate is measured from the top of the image. For example, if
     * the image height is 200 pixels and the y-coordinate of the landmark is at 50
     * pixels, this value is 0.25.</p>
     */
    inline void SetY(double value) { m_yHasBeenSet = true; m_y = value; }

    /**
     * <p>The y-coordinate of the landmark expressed as a ratio of the height of the
     * image. The y-coordinate is measured from the top of the image. For example, if
     * the image height is 200 pixels and the y-coordinate of the landmark is at 50
     * pixels, this value is 0.25.</p>
     */
    inline Landmark& WithY(double value) { SetY(value); return *this;}

  private:

    LandmarkType m_type;
    bool m_typeHasBeenSet = false;

    double m_x;
    bool m_xHasBeenSet = false;

    double m_y;
    bool m_yHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
