/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/MultiPolygonGeometryInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

MultiPolygonGeometryInput::MultiPolygonGeometryInput() : 
    m_coordinatesHasBeenSet(false)
{
}

MultiPolygonGeometryInput::MultiPolygonGeometryInput(JsonView jsonValue) : 
    m_coordinatesHasBeenSet(false)
{
  *this = jsonValue;
}

MultiPolygonGeometryInput& MultiPolygonGeometryInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Coordinates"))
  {
    Aws::Utils::Array<JsonView> coordinatesJsonList = jsonValue.GetArray("Coordinates");
    for(unsigned coordinatesIndex = 0; coordinatesIndex < coordinatesJsonList.GetLength(); ++coordinatesIndex)
    {
      Aws::Utils::Array<JsonView> linearRingsJsonList = coordinatesJsonList[coordinatesIndex].AsArray();
      Aws::Vector<Aws::Vector<Aws::Vector<double>>> linearRingsList;
      linearRingsList.reserve((size_t)linearRingsJsonList.GetLength());
      for(unsigned linearRingsIndex = 0; linearRingsIndex < linearRingsJsonList.GetLength(); ++linearRingsIndex)
      {
        Aws::Utils::Array<JsonView> linearRingJsonList = linearRingsJsonList[linearRingsIndex].AsArray();
        Aws::Vector<Aws::Vector<double>> linearRingList;
        linearRingList.reserve((size_t)linearRingJsonList.GetLength());
        for(unsigned linearRingIndex = 0; linearRingIndex < linearRingJsonList.GetLength(); ++linearRingIndex)
        {
          Aws::Utils::Array<JsonView> positionJsonList = linearRingJsonList[linearRingIndex].AsArray();
          Aws::Vector<double> positionList;
          positionList.reserve((size_t)positionJsonList.GetLength());
          for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
          {
            positionList.push_back(positionJsonList[positionIndex].AsDouble());
          }
          linearRingList.push_back(std::move(positionList));
        }
        linearRingsList.push_back(std::move(linearRingList));
      }
      m_coordinates.push_back(std::move(linearRingsList));
    }
    m_coordinatesHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiPolygonGeometryInput::Jsonize() const
{
  JsonValue payload;

  if(m_coordinatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> coordinatesJsonList(m_coordinates.size());
   for(unsigned coordinatesIndex = 0; coordinatesIndex < coordinatesJsonList.GetLength(); ++coordinatesIndex)
   {
     Aws::Utils::Array<JsonValue> linearRingsJsonList(m_coordinates[coordinatesIndex].size());
     for(unsigned linearRingsIndex = 0; linearRingsIndex < linearRingsJsonList.GetLength(); ++linearRingsIndex)
     {
       Aws::Utils::Array<JsonValue> linearRingJsonList(m_coordinates[coordinatesIndex][linearRingsIndex].size());
       for(unsigned linearRingIndex = 0; linearRingIndex < linearRingJsonList.GetLength(); ++linearRingIndex)
       {
         Aws::Utils::Array<JsonValue> positionJsonList(m_coordinates[coordinatesIndex][linearRingsIndex][linearRingIndex].size());
         for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
         {
           positionJsonList[positionIndex].AsDouble(m_coordinates[coordinatesIndex][linearRingsIndex][linearRingIndex][positionIndex]);
         }
         linearRingJsonList[linearRingIndex].AsArray(std::move(positionJsonList));
       }
       linearRingsJsonList[linearRingsIndex].AsArray(std::move(linearRingJsonList));
     }
     coordinatesJsonList[coordinatesIndex].AsArray(std::move(linearRingsJsonList));
   }
   payload.WithArray("Coordinates", std::move(coordinatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
