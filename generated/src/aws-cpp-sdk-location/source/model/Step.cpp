/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/Step.h>
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

Step::Step() : 
    m_distance(0.0),
    m_distanceHasBeenSet(false),
    m_durationSeconds(0.0),
    m_durationSecondsHasBeenSet(false),
    m_endPositionHasBeenSet(false),
    m_geometryOffset(0),
    m_geometryOffsetHasBeenSet(false),
    m_startPositionHasBeenSet(false)
{
}

Step::Step(JsonView jsonValue) : 
    m_distance(0.0),
    m_distanceHasBeenSet(false),
    m_durationSeconds(0.0),
    m_durationSecondsHasBeenSet(false),
    m_endPositionHasBeenSet(false),
    m_geometryOffset(0),
    m_geometryOffsetHasBeenSet(false),
    m_startPositionHasBeenSet(false)
{
  *this = jsonValue;
}

Step& Step::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Distance"))
  {
    m_distance = jsonValue.GetDouble("Distance");

    m_distanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DurationSeconds"))
  {
    m_durationSeconds = jsonValue.GetDouble("DurationSeconds");

    m_durationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndPosition"))
  {
    Aws::Utils::Array<JsonView> endPositionJsonList = jsonValue.GetArray("EndPosition");
    for(unsigned endPositionIndex = 0; endPositionIndex < endPositionJsonList.GetLength(); ++endPositionIndex)
    {
      m_endPosition.push_back(endPositionJsonList[endPositionIndex].AsDouble());
    }
    m_endPositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeometryOffset"))
  {
    m_geometryOffset = jsonValue.GetInteger("GeometryOffset");

    m_geometryOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartPosition"))
  {
    Aws::Utils::Array<JsonView> startPositionJsonList = jsonValue.GetArray("StartPosition");
    for(unsigned startPositionIndex = 0; startPositionIndex < startPositionJsonList.GetLength(); ++startPositionIndex)
    {
      m_startPosition.push_back(startPositionJsonList[startPositionIndex].AsDouble());
    }
    m_startPositionHasBeenSet = true;
  }

  return *this;
}

JsonValue Step::Jsonize() const
{
  JsonValue payload;

  if(m_distanceHasBeenSet)
  {
   payload.WithDouble("Distance", m_distance);

  }

  if(m_durationSecondsHasBeenSet)
  {
   payload.WithDouble("DurationSeconds", m_durationSeconds);

  }

  if(m_endPositionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endPositionJsonList(m_endPosition.size());
   for(unsigned endPositionIndex = 0; endPositionIndex < endPositionJsonList.GetLength(); ++endPositionIndex)
   {
     endPositionJsonList[endPositionIndex].AsDouble(m_endPosition[endPositionIndex]);
   }
   payload.WithArray("EndPosition", std::move(endPositionJsonList));

  }

  if(m_geometryOffsetHasBeenSet)
  {
   payload.WithInteger("GeometryOffset", m_geometryOffset);

  }

  if(m_startPositionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> startPositionJsonList(m_startPosition.size());
   for(unsigned startPositionIndex = 0; startPositionIndex < startPositionJsonList.GetLength(); ++startPositionIndex)
   {
     startPositionJsonList[startPositionIndex].AsDouble(m_startPosition[startPositionIndex]);
   }
   payload.WithArray("StartPosition", std::move(startPositionJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
