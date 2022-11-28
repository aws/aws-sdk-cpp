/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/TdscdmaObj.h>
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

TdscdmaObj::TdscdmaObj() : 
    m_mcc(0),
    m_mccHasBeenSet(false),
    m_mnc(0),
    m_mncHasBeenSet(false),
    m_lac(0),
    m_lacHasBeenSet(false),
    m_utranCid(0),
    m_utranCidHasBeenSet(false),
    m_tdscdmaLocalIdHasBeenSet(false),
    m_tdscdmaTimingAdvance(0),
    m_tdscdmaTimingAdvanceHasBeenSet(false),
    m_rscp(0),
    m_rscpHasBeenSet(false),
    m_pathLoss(0),
    m_pathLossHasBeenSet(false),
    m_tdscdmaNmrHasBeenSet(false)
{
}

TdscdmaObj::TdscdmaObj(JsonView jsonValue) : 
    m_mcc(0),
    m_mccHasBeenSet(false),
    m_mnc(0),
    m_mncHasBeenSet(false),
    m_lac(0),
    m_lacHasBeenSet(false),
    m_utranCid(0),
    m_utranCidHasBeenSet(false),
    m_tdscdmaLocalIdHasBeenSet(false),
    m_tdscdmaTimingAdvance(0),
    m_tdscdmaTimingAdvanceHasBeenSet(false),
    m_rscp(0),
    m_rscpHasBeenSet(false),
    m_pathLoss(0),
    m_pathLossHasBeenSet(false),
    m_tdscdmaNmrHasBeenSet(false)
{
  *this = jsonValue;
}

TdscdmaObj& TdscdmaObj::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("UtranCid"))
  {
    m_utranCid = jsonValue.GetInteger("UtranCid");

    m_utranCidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TdscdmaLocalId"))
  {
    m_tdscdmaLocalId = jsonValue.GetObject("TdscdmaLocalId");

    m_tdscdmaLocalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TdscdmaTimingAdvance"))
  {
    m_tdscdmaTimingAdvance = jsonValue.GetInteger("TdscdmaTimingAdvance");

    m_tdscdmaTimingAdvanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rscp"))
  {
    m_rscp = jsonValue.GetInteger("Rscp");

    m_rscpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PathLoss"))
  {
    m_pathLoss = jsonValue.GetInteger("PathLoss");

    m_pathLossHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TdscdmaNmr"))
  {
    Aws::Utils::Array<JsonView> tdscdmaNmrJsonList = jsonValue.GetArray("TdscdmaNmr");
    for(unsigned tdscdmaNmrIndex = 0; tdscdmaNmrIndex < tdscdmaNmrJsonList.GetLength(); ++tdscdmaNmrIndex)
    {
      m_tdscdmaNmr.push_back(tdscdmaNmrJsonList[tdscdmaNmrIndex].AsObject());
    }
    m_tdscdmaNmrHasBeenSet = true;
  }

  return *this;
}

JsonValue TdscdmaObj::Jsonize() const
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

  if(m_utranCidHasBeenSet)
  {
   payload.WithInteger("UtranCid", m_utranCid);

  }

  if(m_tdscdmaLocalIdHasBeenSet)
  {
   payload.WithObject("TdscdmaLocalId", m_tdscdmaLocalId.Jsonize());

  }

  if(m_tdscdmaTimingAdvanceHasBeenSet)
  {
   payload.WithInteger("TdscdmaTimingAdvance", m_tdscdmaTimingAdvance);

  }

  if(m_rscpHasBeenSet)
  {
   payload.WithInteger("Rscp", m_rscp);

  }

  if(m_pathLossHasBeenSet)
  {
   payload.WithInteger("PathLoss", m_pathLoss);

  }

  if(m_tdscdmaNmrHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tdscdmaNmrJsonList(m_tdscdmaNmr.size());
   for(unsigned tdscdmaNmrIndex = 0; tdscdmaNmrIndex < tdscdmaNmrJsonList.GetLength(); ++tdscdmaNmrIndex)
   {
     tdscdmaNmrJsonList[tdscdmaNmrIndex].AsObject(m_tdscdmaNmr[tdscdmaNmrIndex].Jsonize());
   }
   payload.WithArray("TdscdmaNmr", std::move(tdscdmaNmrJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
