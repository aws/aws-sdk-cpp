/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/PolygonGeometryInput">AWS
   * API Reference</a></p>
   */
  class PolygonGeometryInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API PolygonGeometryInput();
    AWS_SAGEMAKERGEOSPATIAL_API PolygonGeometryInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API PolygonGeometryInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& GetCoordinates() const{ return m_coordinates; }

    /**
     * <p/>
     */
    inline bool CoordinatesHasBeenSet() const { return m_coordinatesHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetCoordinates(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { m_coordinatesHasBeenSet = true; m_coordinates = value; }

    /**
     * <p/>
     */
    inline void SetCoordinates(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { m_coordinatesHasBeenSet = true; m_coordinates = std::move(value); }

    /**
     * <p/>
     */
    inline PolygonGeometryInput& WithCoordinates(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { SetCoordinates(value); return *this;}

    /**
     * <p/>
     */
    inline PolygonGeometryInput& WithCoordinates(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { SetCoordinates(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline PolygonGeometryInput& AddCoordinates(const Aws::Vector<Aws::Vector<double>>& value) { m_coordinatesHasBeenSet = true; m_coordinates.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline PolygonGeometryInput& AddCoordinates(Aws::Vector<Aws::Vector<double>>&& value) { m_coordinatesHasBeenSet = true; m_coordinates.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::Vector<Aws::Vector<double>>> m_coordinates;
    bool m_coordinatesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
