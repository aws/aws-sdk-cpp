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
#include <aws/textract/model/BoundingBox.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/Point.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Information about where a recognized text, key, value, table, or table cell
   * is located on a document page.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/Geometry">AWS
   * API Reference</a></p>
   */
  class AWS_TEXTRACT_API Geometry
  {
  public:
    Geometry();
    Geometry(Aws::Utils::Json::JsonView jsonValue);
    Geometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An axis-aligned coarse representation of the location of the recognized text
     * on the document page.</p>
     */
    inline const BoundingBox& GetBoundingBox() const{ return m_boundingBox; }

    /**
     * <p>An axis-aligned coarse representation of the location of the recognized text
     * on the document page.</p>
     */
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }

    /**
     * <p>An axis-aligned coarse representation of the location of the recognized text
     * on the document page.</p>
     */
    inline void SetBoundingBox(const BoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }

    /**
     * <p>An axis-aligned coarse representation of the location of the recognized text
     * on the document page.</p>
     */
    inline void SetBoundingBox(BoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }

    /**
     * <p>An axis-aligned coarse representation of the location of the recognized text
     * on the document page.</p>
     */
    inline Geometry& WithBoundingBox(const BoundingBox& value) { SetBoundingBox(value); return *this;}

    /**
     * <p>An axis-aligned coarse representation of the location of the recognized text
     * on the document page.</p>
     */
    inline Geometry& WithBoundingBox(BoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}


    /**
     * <p>Within the bounding box, a fine-grained polygon around the recognized
     * text.</p>
     */
    inline const Aws::Vector<Point>& GetPolygon() const{ return m_polygon; }

    /**
     * <p>Within the bounding box, a fine-grained polygon around the recognized
     * text.</p>
     */
    inline bool PolygonHasBeenSet() const { return m_polygonHasBeenSet; }

    /**
     * <p>Within the bounding box, a fine-grained polygon around the recognized
     * text.</p>
     */
    inline void SetPolygon(const Aws::Vector<Point>& value) { m_polygonHasBeenSet = true; m_polygon = value; }

    /**
     * <p>Within the bounding box, a fine-grained polygon around the recognized
     * text.</p>
     */
    inline void SetPolygon(Aws::Vector<Point>&& value) { m_polygonHasBeenSet = true; m_polygon = std::move(value); }

    /**
     * <p>Within the bounding box, a fine-grained polygon around the recognized
     * text.</p>
     */
    inline Geometry& WithPolygon(const Aws::Vector<Point>& value) { SetPolygon(value); return *this;}

    /**
     * <p>Within the bounding box, a fine-grained polygon around the recognized
     * text.</p>
     */
    inline Geometry& WithPolygon(Aws::Vector<Point>&& value) { SetPolygon(std::move(value)); return *this;}

    /**
     * <p>Within the bounding box, a fine-grained polygon around the recognized
     * text.</p>
     */
    inline Geometry& AddPolygon(const Point& value) { m_polygonHasBeenSet = true; m_polygon.push_back(value); return *this; }

    /**
     * <p>Within the bounding box, a fine-grained polygon around the recognized
     * text.</p>
     */
    inline Geometry& AddPolygon(Point&& value) { m_polygonHasBeenSet = true; m_polygon.push_back(std::move(value)); return *this; }

  private:

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet;

    Aws::Vector<Point> m_polygon;
    bool m_polygonHasBeenSet;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
