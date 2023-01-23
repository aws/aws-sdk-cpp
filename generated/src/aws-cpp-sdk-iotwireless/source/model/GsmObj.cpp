/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GsmObj.h>
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

GsmObj::GsmObj() : 
    m_mcc(0),
    m_mccHasBeenSet(false),
    m_mnc(0),
    m_mncHasBeenSet(false),
    m_lac(0),
    m_lacHasBeenSet(false),
    m_geranCid(0),
    m_geranCidHasBeenSet(false),
    m_gsmLocalIdHasBeenSet(false),
    m_gsmTimingAdvance(0),
    m_gsmTimingAdvanceHasBeenSet(false),
    m_rxLevel(0),
    m_rxLevelHasBeenSet(false),
    m_gsmNmrHasBeenSet(false)
{
}

GsmObj::GsmObj(JsonView jsonValue) : 
    m_mcc(0),
    m_mccHasBeenSet(false),
    m_mnc(0),
    m_mncHasBeenSet(false),
    m_lac(0),
    m_lacHasBeenSet(false),
    m_geranCid(0),
    m_geranCidHasBeenSet(false),
    m_gsmLocalIdHasBeenSet(false),
    m_gsmTimingAdvance(0),
    m_gsmTimingAdvanceHasBeenSet(false),
    m_rxLevel(0),
    m_rxLevelHasBeenSet(false),
    m_gsmNmrHasBeenSet(false)
{
  *this = jsonValue;
}

GsmObj& GsmObj::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mcc"))
  {
    m_mcc = jsonValue.GetInteger("Mcc");

    m_mccHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mnc"))
  {
    m_mnc = jsonValue.GetInteger("Mnc");

    m_mncHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lac"))
  {
    m_lac = jsonValue.GetInteger("Lac");

    m_lacHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeranCid"))
  {
    m_geranCid = jsonValue.GetInteger("GeranCid");

    m_geranCidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GsmLocalId"))
  {
    m_gsmLocalId = jsonValue.GetObject("GsmLocalId");

    m_gsmLocalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GsmTimingAdvance"))
  {
    m_gsmTimingAdvance = jsonValue.GetInteger("GsmTimingAdvance");

    m_gsmTimingAdvanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RxLevel"))
  {
    m_rxLevel = jsonValue.GetInteger("RxLevel");

    m_rxLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GsmNmr"))
  {
    Aws::Utils::Array<JsonView> gsmNmrJsonList = jsonValue.GetArray("GsmNmr");
    for(unsigned gsmNmrIndex = 0; gsmNmrIndex < gsmNmrJsonList.GetLength(); ++gsmNmrIndex)
    {
      m_gsmNmr.push_back(gsmNmrJsonList[gsmNmrIndex].AsObject());
    }
    m_gsmNmrHasBeenSet = true;
  }

  return *this;
}

JsonValue GsmObj::Jsonize() const
{
  JsonValue payload;

  if(m_mccHasBeenSet)
  {
   payload.WithInteger("Mcc", m_mcc);

  }

  if(m_mncHasBeenSet)
  {
   payload.WithInteger("Mnc", m_mnc);

  }

  if(m_lacHasBeenSet)
  {
   payload.WithInteger("Lac", m_lac);

  }

  if(m_geranCidHasBeenSet)
  {
   payload.WithInteger("GeranCid", m_geranCid);

  }

  if(m_gsmLocalIdHasBeenSet)
  {
   payload.WithObject("GsmLocalId", m_gsmLocalId.Jsonize());

  }

  if(m_gsmTimingAdvanceHasBeenSet)
  {
   payload.WithInteger("GsmTimingAdvance", m_gsmTimingAdvance);

  }

  if(m_rxLevelHasBeenSet)
  {
   payload.WithInteger("RxLevel", m_rxLevel);

  }

  if(m_gsmNmrHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gsmNmrJsonList(m_gsmNmr.size());
   for(unsigned gsmNmrIndex = 0; gsmNmrIndex < gsmNmrJsonList.GetLength(); ++gsmNmrIndex)
   {
     gsmNmrJsonList[gsmNmrIndex].AsObject(m_gsmNmr[gsmNmrIndex].Jsonize());
   }
   payload.WithArray("GsmNmr", std::move(gsmNmrJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
