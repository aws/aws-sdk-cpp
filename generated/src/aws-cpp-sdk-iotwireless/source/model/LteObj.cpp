/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LteObj.h>
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

LteObj::LteObj() : 
    m_mcc(0),
    m_mccHasBeenSet(false),
    m_mnc(0),
    m_mncHasBeenSet(false),
    m_eutranCid(0),
    m_eutranCidHasBeenSet(false),
    m_tac(0),
    m_tacHasBeenSet(false),
    m_lteLocalIdHasBeenSet(false),
    m_lteTimingAdvance(0),
    m_lteTimingAdvanceHasBeenSet(false),
    m_rsrp(0),
    m_rsrpHasBeenSet(false),
    m_rsrq(0.0),
    m_rsrqHasBeenSet(false),
    m_nrCapable(false),
    m_nrCapableHasBeenSet(false),
    m_lteNmrHasBeenSet(false)
{
}

LteObj::LteObj(JsonView jsonValue) : 
    m_mcc(0),
    m_mccHasBeenSet(false),
    m_mnc(0),
    m_mncHasBeenSet(false),
    m_eutranCid(0),
    m_eutranCidHasBeenSet(false),
    m_tac(0),
    m_tacHasBeenSet(false),
    m_lteLocalIdHasBeenSet(false),
    m_lteTimingAdvance(0),
    m_lteTimingAdvanceHasBeenSet(false),
    m_rsrp(0),
    m_rsrpHasBeenSet(false),
    m_rsrq(0.0),
    m_rsrqHasBeenSet(false),
    m_nrCapable(false),
    m_nrCapableHasBeenSet(false),
    m_lteNmrHasBeenSet(false)
{
  *this = jsonValue;
}

LteObj& LteObj::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("EutranCid"))
  {
    m_eutranCid = jsonValue.GetInteger("EutranCid");

    m_eutranCidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tac"))
  {
    m_tac = jsonValue.GetInteger("Tac");

    m_tacHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LteLocalId"))
  {
    m_lteLocalId = jsonValue.GetObject("LteLocalId");

    m_lteLocalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LteTimingAdvance"))
  {
    m_lteTimingAdvance = jsonValue.GetInteger("LteTimingAdvance");

    m_lteTimingAdvanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rsrp"))
  {
    m_rsrp = jsonValue.GetInteger("Rsrp");

    m_rsrpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rsrq"))
  {
    m_rsrq = jsonValue.GetDouble("Rsrq");

    m_rsrqHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NrCapable"))
  {
    m_nrCapable = jsonValue.GetBool("NrCapable");

    m_nrCapableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LteNmr"))
  {
    Aws::Utils::Array<JsonView> lteNmrJsonList = jsonValue.GetArray("LteNmr");
    for(unsigned lteNmrIndex = 0; lteNmrIndex < lteNmrJsonList.GetLength(); ++lteNmrIndex)
    {
      m_lteNmr.push_back(lteNmrJsonList[lteNmrIndex].AsObject());
    }
    m_lteNmrHasBeenSet = true;
  }

  return *this;
}

JsonValue LteObj::Jsonize() const
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

  if(m_eutranCidHasBeenSet)
  {
   payload.WithInteger("EutranCid", m_eutranCid);

  }

  if(m_tacHasBeenSet)
  {
   payload.WithInteger("Tac", m_tac);

  }

  if(m_lteLocalIdHasBeenSet)
  {
   payload.WithObject("LteLocalId", m_lteLocalId.Jsonize());

  }

  if(m_lteTimingAdvanceHasBeenSet)
  {
   payload.WithInteger("LteTimingAdvance", m_lteTimingAdvance);

  }

  if(m_rsrpHasBeenSet)
  {
   payload.WithInteger("Rsrp", m_rsrp);

  }

  if(m_rsrqHasBeenSet)
  {
   payload.WithDouble("Rsrq", m_rsrq);

  }

  if(m_nrCapableHasBeenSet)
  {
   payload.WithBool("NrCapable", m_nrCapable);

  }

  if(m_lteNmrHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lteNmrJsonList(m_lteNmr.size());
   for(unsigned lteNmrIndex = 0; lteNmrIndex < lteNmrJsonList.GetLength(); ++lteNmrIndex)
   {
     lteNmrJsonList[lteNmrIndex].AsObject(m_lteNmr[lteNmrIndex].Jsonize());
   }
   payload.WithArray("LteNmr", std::move(lteNmrJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
