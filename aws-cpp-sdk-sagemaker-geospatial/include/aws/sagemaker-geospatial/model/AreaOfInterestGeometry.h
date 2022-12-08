/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/MultiPolygonGeometryInput.h>
#include <aws/sagemaker-geospatial/model/PolygonGeometryInput.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/AreaOfInterestGeometry">AWS
   * API Reference</a></p>
   */
  class AreaOfInterestGeometry
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API AreaOfInterestGeometry();
    AWS_SAGEMAKERGEOSPATIAL_API AreaOfInterestGeometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API AreaOfInterestGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const MultiPolygonGeometryInput& GetMultiPolygonGeometry() const{ return m_multiPolygonGeometry; }

    /**
     * <p/>
     */
    inline bool MultiPolygonGeometryHasBeenSet() const { return m_multiPolygonGeometryHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMultiPolygonGeometry(const MultiPolygonGeometryInput& value) { m_multiPolygonGeometryHasBeenSet = true; m_multiPolygonGeometry = value; }

    /**
     * <p/>
     */
    inline void SetMultiPolygonGeometry(MultiPolygonGeometryInput&& value) { m_multiPolygonGeometryHasBeenSet = true; m_multiPolygonGeometry = std::move(value); }

    /**
     * <p/>
     */
    inline AreaOfInterestGeometry& WithMultiPolygonGeometry(const MultiPolygonGeometryInput& value) { SetMultiPolygonGeometry(value); return *this;}

    /**
     * <p/>
     */
    inline AreaOfInterestGeometry& WithMultiPolygonGeometry(MultiPolygonGeometryInput&& value) { SetMultiPolygonGeometry(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const PolygonGeometryInput& GetPolygonGeometry() const{ return m_polygonGeometry; }

    /**
     * <p/>
     */
    inline bool PolygonGeometryHasBeenSet() const { return m_polygonGeometryHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetPolygonGeometry(const PolygonGeometryInput& value) { m_polygonGeometryHasBeenSet = true; m_polygonGeometry = value; }

    /**
     * <p/>
     */
    inline void SetPolygonGeometry(PolygonGeometryInput&& value) { m_polygonGeometryHasBeenSet = true; m_polygonGeometry = std::move(value); }

    /**
     * <p/>
     */
    inline AreaOfInterestGeometry& WithPolygonGeometry(const PolygonGeometryInput& value) { SetPolygonGeometry(value); return *this;}

    /**
     * <p/>
     */
    inline AreaOfInterestGeometry& WithPolygonGeometry(PolygonGeometryInput&& value) { SetPolygonGeometry(std::move(value)); return *this;}

  private:

    MultiPolygonGeometryInput m_multiPolygonGeometry;
    bool m_multiPolygonGeometryHasBeenSet = false;

    PolygonGeometryInput m_polygonGeometry;
    bool m_polygonGeometryHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
