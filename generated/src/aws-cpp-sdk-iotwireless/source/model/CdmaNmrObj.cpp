/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/CdmaNmrObj.h>
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

CdmaNmrObj::CdmaNmrObj() : 
    m_pnOffset(0),
    m_pnOffsetHasBeenSet(false),
    m_cdmaChannel(0),
    m_cdmaChannelHasBeenSet(false),
    m_pilotPower(0),
    m_pilotPowerHasBeenSet(false),
    m_baseStationId(0),
    m_baseStationIdHasBeenSet(false)
{
}

CdmaNmrObj::CdmaNmrObj(JsonView jsonValue) : 
    m_pnOffset(0),
    m_pnOffsetHasBeenSet(false),
    m_cdmaChannel(0),
    m_cdmaChannelHasBeenSet(false),
    m_pilotPower(0),
    m_pilotPowerHasBeenSet(false),
    m_baseStationId(0),
    m_baseStationIdHasBeenSet(false)
{
  *this = jsonValue;
}

CdmaNmrObj& CdmaNmrObj::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PnOffset"))
  {
    m_pnOffset = jsonValue.GetInteger("PnOffset");

    m_pnOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CdmaChannel"))
  {
    m_cdmaChannel = jsonValue.GetInteger("CdmaChannel");

    m_cdmaChannelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PilotPower"))
  {
    m_pilotPower = jsonValue.GetInteger("PilotPower");

    m_pilotPowerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaseStationId"))
  {
    m_baseStationId = jsonValue.GetInteger("BaseStationId");

    m_baseStationIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CdmaNmrObj::Jsonize() const
{
  JsonValue payload;

  if(m_pnOffsetHasBeenSet)
  {
   payload.WithInteger("PnOffset", m_pnOffset);

  }

  if(m_cdmaChannelHasBeenSet)
  {
   payload.WithInteger("CdmaChannel", m_cdmaChannel);

  }

  if(m_pilotPowerHasBeenSet)
  {
   payload.WithInteger("PilotPower", m_pilotPower);

  }

  if(m_baseStationIdHasBeenSet)
  {
   payload.WithInteger("BaseStationId", m_baseStationId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
