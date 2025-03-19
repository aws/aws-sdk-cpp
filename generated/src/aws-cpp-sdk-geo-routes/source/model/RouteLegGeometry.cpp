/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteLegGeometry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

RouteLegGeometry::RouteLegGeometry(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteLegGeometry& RouteLegGeometry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LineString"))
  {
    Aws::Utils::Array<JsonView> lineStringJsonList = jsonValue.GetArray("LineString");
    for(unsigned lineStringIndex = 0; lineStringIndex < lineStringJsonList.GetLength(); ++lineStringIndex)
    {
      Aws::Utils::Array<JsonView> positionJsonList = lineStringJsonList[lineStringIndex].AsArray();
      Aws::Vector<double> positionList;
      positionList.reserve((size_t)positionJsonList.GetLength());
      for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
      {
        positionList.push_back(positionJsonList[positionIndex].AsDouble());
      }
      m_lineString.push_back(std::move(positionList));
    }
    m_lineStringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Polyline"))
  {
    m_polyline = jsonValue.GetString("Polyline");
    m_polylineHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteLegGeometry::Jsonize() const
{
  JsonValue payload;

  if(m_lineStringHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lineStringJsonList(m_lineString.size());
   for(unsigned lineStringIndex = 0; lineStringIndex < lineStringJsonList.GetLength(); ++lineStringIndex)
   {
     Aws::Utils::Array<JsonValue> positionJsonList(m_lineString[lineStringIndex].size());
     for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
     {
       positionJsonList[positionIndex].AsDouble(m_lineString[lineStringIndex][positionIndex]);
     }
     lineStringJsonList[lineStringIndex].AsArray(std::move(positionJsonList));
   }
   payload.WithArray("LineString", std::move(lineStringJsonList));

  }

  if(m_polylineHasBeenSet)
  {
   payload.WithString("Polyline", m_polyline);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
