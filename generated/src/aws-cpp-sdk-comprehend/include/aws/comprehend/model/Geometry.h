/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/BoundingBox.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/Point.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Information about the location of items on a document page.</p> <p>For
   * additional information, see <a
   * href="https://docs.aws.amazon.com/textract/latest/dg/API_Geometry.html">Geometry</a>
   * in the Amazon Textract API reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/Geometry">AWS
   * API Reference</a></p>
   */
  class Geometry
  {
  public:
    AWS_COMPREHEND_API Geometry() = default;
    AWS_COMPREHEND_API Geometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Geometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An axis-aligned coarse representation of the location of the recognized item
     * on the document page.</p>
     */
    inline const BoundingBox& GetBoundingBox() const { return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    template<typename BoundingBoxT = BoundingBox>
    void SetBoundingBox(BoundingBoxT&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::forward<BoundingBoxT>(value); }
    template<typename BoundingBoxT = BoundingBox>
    Geometry& WithBoundingBox(BoundingBoxT&& value) { SetBoundingBox(std::forward<BoundingBoxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Within the bounding box, a fine-grained polygon around the recognized
     * item.</p>
     */
    inline const Aws::Vector<Point>& GetPolygon() const { return m_polygon; }
    inline bool PolygonHasBeenSet() const { return m_polygonHasBeenSet; }
    template<typename PolygonT = Aws::Vector<Point>>
    void SetPolygon(PolygonT&& value) { m_polygonHasBeenSet = true; m_polygon = std::forward<PolygonT>(value); }
    template<typename PolygonT = Aws::Vector<Point>>
    Geometry& WithPolygon(PolygonT&& value) { SetPolygon(std::forward<PolygonT>(value)); return *this;}
    template<typename PolygonT = Point>
    Geometry& AddPolygon(PolygonT&& value) { m_polygonHasBeenSet = true; m_polygon.emplace_back(std::forward<PolygonT>(value)); return *this; }
    ///@}
  private:

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    Aws::Vector<Point> m_polygon;
    bool m_polygonHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
