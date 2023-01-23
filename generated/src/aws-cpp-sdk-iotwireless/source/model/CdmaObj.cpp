/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/CdmaObj.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

CdmaObj::CdmaObj() : 
    m_systemId(0),
    m_systemIdHasBeenSet(false),
    m_networkId(0),
    m_networkIdHasBeenSet(false),
    m_baseStationId(0),
    m_baseStationIdHasBeenSet(false),
    m_registrationZone(0),
    m_registrationZoneHasBeenSet(false),
    m_cdmaLocalIdHasBeenSet(false),
    m_pilotPower(0),
    m_pilotPowerHasBeenSet(false),
    m_baseLat(0.0),
    m_baseLatHasBeenSet(false),
    m_baseLng(0.0),
    m_baseLngHasBeenSet(false),
    m_cdmaNmrHasBeenSet(false)
{
}

CdmaObj::CdmaObj(JsonView jsonValue) : 
    m_systemId(0),
    m_systemIdHasBeenSet(false),
    m_networkId(0),
    m_networkIdHasBeenSet(false),
    m_baseStationId(0),
    m_baseStationIdHasBeenSet(false),
    m_registrationZone(0),
    m_registrationZoneHasBeenSet(false),
    m_cdmaLocalIdHasBeenSet(false),
    m_pilotPower(0),
    m_pilotPowerHasBeenSet(false),
    m_baseLat(0.0),
    m_baseLatHasBeenSet(false),
    m_baseLng(0.0),
    m_baseLngHasBeenSet(false),
    m_cdmaNmrHasBeenSet(false)
{
  *this = jsonValue;
}

CdmaObj& CdmaObj::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SystemId"))
  {
    m_systemId = jsonValue.GetInteger("SystemId");

    m_systemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkId"))
  {
    m_networkId = jsonValue.GetInteger("NetworkId");

    m_networkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaseStationId"))
  {
    m_baseStationId = jsonValue.GetInteger("BaseStationId");

    m_baseStationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistrationZone"))
  {
    m_registrationZone = jsonValue.GetInteger("RegistrationZone");

    m_registrationZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CdmaLocalId"))
  {
    m_cdmaLocalId = jsonValue.GetObject("CdmaLocalId");

    m_cdmaLocalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PilotPower"))
  {
    m_pilotPower = jsonValue.GetInteger("PilotPower");

    m_pilotPowerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaseLat"))
  {
    m_baseLat = jsonValue.GetDouble("BaseLat");

    m_baseLatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaseLng"))
  {
    m_baseLng = jsonValue.GetDouble("BaseLng");

    m_baseLngHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CdmaNmr"))
  {
    Aws::Utils::Array<JsonView> cdmaNmrJsonList = jsonValue.GetArray("CdmaNmr");
    for(unsigned cdmaNmrIndex = 0; cdmaNmrIndex < cdmaNmrJsonList.GetLength(); ++cdmaNmrIndex)
    {
      m_cdmaNmr.push_back(cdmaNmrJsonList[cdmaNmrIndex].AsObject());
    }
    m_cdmaNmrHasBeenSet = true;
  }

  return *this;
}

JsonValue CdmaObj::Jsonize() const
{
  JsonValue payload;

  if(m_systemIdHasBeenSet)
  {
   payload.WithInteger("SystemId", m_systemId);

  }

  if(m_networkIdHasBeenSet)
  {
   payload.WithInteger("NetworkId", m_networkId);

  }

  if(m_baseStationIdHasBeenSet)
  {
   payload.WithInteger("BaseStationId", m_baseStationId);

  }

  if(m_registrationZoneHasBeenSet)
  {
   payload.WithInteger("RegistrationZone", m_registrationZone);

  }

  if(m_cdmaLocalIdHasBeenSet)
  {
   payload.WithObject("CdmaLocalId", m_cdmaLocalId.Jsonize());

  }

  if(m_pilotPowerHasBeenSet)
  {
   payload.WithInteger("PilotPower", m_pilotPower);

  }

  if(m_baseLatHasBeenSet)
  {
   payload.WithDouble("BaseLat", m_baseLat);

  }

  if(m_baseLngHasBeenSet)
  {
   payload.WithDouble("BaseLng", m_baseLng);

  }

  if(m_cdmaNmrHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cdmaNmrJsonList(m_cdmaNmr.size());
   for(unsigned cdmaNmrIndex = 0; cdmaNmrIndex < cdmaNmrJsonList.GetLength(); ++cdmaNmrIndex)
   {
     cdmaNmrJsonList[cdmaNmrIndex].AsObject(m_cdmaNmr[cdmaNmrIndex].Jsonize());
   }
   payload.WithArray("CdmaNmr", std::move(cdmaNmrJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
