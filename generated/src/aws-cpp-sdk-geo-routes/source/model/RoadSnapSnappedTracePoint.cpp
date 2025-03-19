/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RoadSnapSnappedTracePoint.h>
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

RoadSnapSnappedTracePoint::RoadSnapSnappedTracePoint(JsonView jsonValue)
{
  *this = jsonValue;
}

RoadSnapSnappedTracePoint& RoadSnapSnappedTracePoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");
    m_confidenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OriginalPosition"))
  {
    Aws::Utils::Array<JsonView> originalPositionJsonList = jsonValue.GetArray("OriginalPosition");
    for(unsigned originalPositionIndex = 0; originalPositionIndex < originalPositionJsonList.GetLength(); ++originalPositionIndex)
    {
      m_originalPosition.push_back(originalPositionJsonList[originalPositionIndex].AsDouble());
    }
    m_originalPositionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SnappedPosition"))
  {
    Aws::Utils::Array<JsonView> snappedPositionJsonList = jsonValue.GetArray("SnappedPosition");
    for(unsigned snappedPositionIndex = 0; snappedPositionIndex < snappedPositionJsonList.GetLength(); ++snappedPositionIndex)
    {
      m_snappedPosition.push_back(snappedPositionJsonList[snappedPositionIndex].AsDouble());
    }
    m_snappedPositionHasBeenSet = true;
  }
  return *this;
}

JsonValue RoadSnapSnappedTracePoint::Jsonize() const
{
  JsonValue payload;

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  if(m_originalPositionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> originalPositionJsonList(m_originalPosition.size());
   for(unsigned originalPositionIndex = 0; originalPositionIndex < originalPositionJsonList.GetLength(); ++originalPositionIndex)
   {
     originalPositionJsonList[originalPositionIndex].AsDouble(m_originalPosition[originalPositionIndex]);
   }
   payload.WithArray("OriginalPosition", std::move(originalPositionJsonList));

  }

  if(m_snappedPositionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> snappedPositionJsonList(m_snappedPosition.size());
   for(unsigned snappedPositionIndex = 0; snappedPositionIndex < snappedPositionJsonList.GetLength(); ++snappedPositionIndex)
   {
     snappedPositionJsonList[snappedPositionIndex].AsDouble(m_snappedPosition[snappedPositionIndex]);
   }
   payload.WithArray("SnappedPosition", std::move(snappedPositionJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
