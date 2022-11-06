/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/PlaceGeometry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

PlaceGeometry::PlaceGeometry() : 
    m_pointHasBeenSet(false)
{
}

PlaceGeometry::PlaceGeometry(JsonView jsonValue) : 
    m_pointHasBeenSet(false)
{
  *this = jsonValue;
}

PlaceGeometry& PlaceGeometry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Point"))
  {
    Aws::Utils::Array<JsonView> pointJsonList = jsonValue.GetArray("Point");
    for(unsigned pointIndex = 0; pointIndex < pointJsonList.GetLength(); ++pointIndex)
    {
      m_point.push_back(pointJsonList[pointIndex].AsDouble());
    }
    m_pointHasBeenSet = true;
  }

  return *this;
}

JsonValue PlaceGeometry::Jsonize() const
{
  JsonValue payload;

  if(m_pointHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pointJsonList(m_point.size());
   for(unsigned pointIndex = 0; pointIndex < pointJsonList.GetLength(); ++pointIndex)
   {
     pointJsonList[pointIndex].AsDouble(m_point[pointIndex]);
   }
   payload.WithArray("Point", std::move(pointJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
