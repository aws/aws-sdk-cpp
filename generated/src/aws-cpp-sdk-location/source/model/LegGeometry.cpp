/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/LegGeometry.h>
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

LegGeometry::LegGeometry() : 
    m_lineStringHasBeenSet(false)
{
}

LegGeometry::LegGeometry(JsonView jsonValue) : 
    m_lineStringHasBeenSet(false)
{
  *this = jsonValue;
}

LegGeometry& LegGeometry::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue LegGeometry::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
