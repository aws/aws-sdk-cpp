/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/SatelliteListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

SatelliteListItem::SatelliteListItem() : 
    m_currentEphemerisHasBeenSet(false),
    m_groundStationsHasBeenSet(false),
    m_noradSatelliteID(0),
    m_noradSatelliteIDHasBeenSet(false),
    m_satelliteArnHasBeenSet(false),
    m_satelliteIdHasBeenSet(false)
{
}

SatelliteListItem::SatelliteListItem(JsonView jsonValue) : 
    m_currentEphemerisHasBeenSet(false),
    m_groundStationsHasBeenSet(false),
    m_noradSatelliteID(0),
    m_noradSatelliteIDHasBeenSet(false),
    m_satelliteArnHasBeenSet(false),
    m_satelliteIdHasBeenSet(false)
{
  *this = jsonValue;
}

SatelliteListItem& SatelliteListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("currentEphemeris"))
  {
    m_currentEphemeris = jsonValue.GetObject("currentEphemeris");

    m_currentEphemerisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groundStations"))
  {
    Aws::Utils::Array<JsonView> groundStationsJsonList = jsonValue.GetArray("groundStations");
    for(unsigned groundStationsIndex = 0; groundStationsIndex < groundStationsJsonList.GetLength(); ++groundStationsIndex)
    {
      m_groundStations.push_back(groundStationsJsonList[groundStationsIndex].AsString());
    }
    m_groundStationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("noradSatelliteID"))
  {
    m_noradSatelliteID = jsonValue.GetInteger("noradSatelliteID");

    m_noradSatelliteIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("satelliteArn"))
  {
    m_satelliteArn = jsonValue.GetString("satelliteArn");

    m_satelliteArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("satelliteId"))
  {
    m_satelliteId = jsonValue.GetString("satelliteId");

    m_satelliteIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SatelliteListItem::Jsonize() const
{
  JsonValue payload;

  if(m_currentEphemerisHasBeenSet)
  {
   payload.WithObject("currentEphemeris", m_currentEphemeris.Jsonize());

  }

  if(m_groundStationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groundStationsJsonList(m_groundStations.size());
   for(unsigned groundStationsIndex = 0; groundStationsIndex < groundStationsJsonList.GetLength(); ++groundStationsIndex)
   {
     groundStationsJsonList[groundStationsIndex].AsString(m_groundStations[groundStationsIndex]);
   }
   payload.WithArray("groundStations", std::move(groundStationsJsonList));

  }

  if(m_noradSatelliteIDHasBeenSet)
  {
   payload.WithInteger("noradSatelliteID", m_noradSatelliteID);

  }

  if(m_satelliteArnHasBeenSet)
  {
   payload.WithString("satelliteArn", m_satelliteArn);

  }

  if(m_satelliteIdHasBeenSet)
  {
   payload.WithString("satelliteId", m_satelliteId);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
