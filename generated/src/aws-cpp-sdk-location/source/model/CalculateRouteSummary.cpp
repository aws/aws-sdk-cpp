/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/CalculateRouteSummary.h>
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

CalculateRouteSummary::CalculateRouteSummary() : 
    m_dataSourceHasBeenSet(false),
    m_distance(0.0),
    m_distanceHasBeenSet(false),
    m_distanceUnit(DistanceUnit::NOT_SET),
    m_distanceUnitHasBeenSet(false),
    m_durationSeconds(0.0),
    m_durationSecondsHasBeenSet(false),
    m_routeBBoxHasBeenSet(false)
{
}

CalculateRouteSummary::CalculateRouteSummary(JsonView jsonValue) : 
    m_dataSourceHasBeenSet(false),
    m_distance(0.0),
    m_distanceHasBeenSet(false),
    m_distanceUnit(DistanceUnit::NOT_SET),
    m_distanceUnitHasBeenSet(false),
    m_durationSeconds(0.0),
    m_durationSecondsHasBeenSet(false),
    m_routeBBoxHasBeenSet(false)
{
  *this = jsonValue;
}

CalculateRouteSummary& CalculateRouteSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetString("DataSource");

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Distance"))
  {
    m_distance = jsonValue.GetDouble("Distance");

    m_distanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DistanceUnit"))
  {
    m_distanceUnit = DistanceUnitMapper::GetDistanceUnitForName(jsonValue.GetString("DistanceUnit"));

    m_distanceUnitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DurationSeconds"))
  {
    m_durationSeconds = jsonValue.GetDouble("DurationSeconds");

    m_durationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteBBox"))
  {
    Aws::Utils::Array<JsonView> routeBBoxJsonList = jsonValue.GetArray("RouteBBox");
    for(unsigned routeBBoxIndex = 0; routeBBoxIndex < routeBBoxJsonList.GetLength(); ++routeBBoxIndex)
    {
      m_routeBBox.push_back(routeBBoxJsonList[routeBBoxIndex].AsDouble());
    }
    m_routeBBoxHasBeenSet = true;
  }

  return *this;
}

JsonValue CalculateRouteSummary::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceHasBeenSet)
  {
   payload.WithString("DataSource", m_dataSource);

  }

  if(m_distanceHasBeenSet)
  {
   payload.WithDouble("Distance", m_distance);

  }

  if(m_distanceUnitHasBeenSet)
  {
   payload.WithString("DistanceUnit", DistanceUnitMapper::GetNameForDistanceUnit(m_distanceUnit));
  }

  if(m_durationSecondsHasBeenSet)
  {
   payload.WithDouble("DurationSeconds", m_durationSeconds);

  }

  if(m_routeBBoxHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routeBBoxJsonList(m_routeBBox.size());
   for(unsigned routeBBoxIndex = 0; routeBBoxIndex < routeBBoxJsonList.GetLength(); ++routeBBoxIndex)
   {
     routeBBoxJsonList[routeBBoxIndex].AsDouble(m_routeBBox[routeBBoxIndex]);
   }
   payload.WithArray("RouteBBox", std::move(routeBBoxJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
