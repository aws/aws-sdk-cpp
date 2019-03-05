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

#include <aws/textract/model/Geometry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

Geometry::Geometry() : 
    m_boundingBoxHasBeenSet(false),
    m_polygonHasBeenSet(false)
{
}

Geometry::Geometry(JsonView jsonValue) : 
    m_boundingBoxHasBeenSet(false),
    m_polygonHasBeenSet(false)
{
  *this = jsonValue;
}

Geometry& Geometry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BoundingBox"))
  {
    m_boundingBox = jsonValue.GetObject("BoundingBox");

    m_boundingBoxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Polygon"))
  {
    Array<JsonView> polygonJsonList = jsonValue.GetArray("Polygon");
    for(unsigned polygonIndex = 0; polygonIndex < polygonJsonList.GetLength(); ++polygonIndex)
    {
      m_polygon.push_back(polygonJsonList[polygonIndex].AsObject());
    }
    m_polygonHasBeenSet = true;
  }

  return *this;
}

JsonValue Geometry::Jsonize() const
{
  JsonValue payload;

  if(m_boundingBoxHasBeenSet)
  {
   payload.WithObject("BoundingBox", m_boundingBox.Jsonize());

  }

  if(m_polygonHasBeenSet)
  {
   Array<JsonValue> polygonJsonList(m_polygon.size());
   for(unsigned polygonIndex = 0; polygonIndex < polygonJsonList.GetLength(); ++polygonIndex)
   {
     polygonJsonList[polygonIndex].AsObject(m_polygon[polygonIndex].Jsonize());
   }
   payload.WithArray("Polygon", std::move(polygonJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
