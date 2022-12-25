/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WcdmaObj.h>
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

WcdmaObj::WcdmaObj() : 
    m_mcc(0),
    m_mccHasBeenSet(false),
    m_mnc(0),
    m_mncHasBeenSet(false),
    m_lac(0),
    m_lacHasBeenSet(false),
    m_utranCid(0),
    m_utranCidHasBeenSet(false),
    m_wcdmaLocalIdHasBeenSet(false),
    m_rscp(0),
    m_rscpHasBeenSet(false),
    m_pathLoss(0),
    m_pathLossHasBeenSet(false),
    m_wcdmaNmrHasBeenSet(false)
{
}

WcdmaObj::WcdmaObj(JsonView jsonValue) : 
    m_mcc(0),
    m_mccHasBeenSet(false),
    m_mnc(0),
    m_mncHasBeenSet(false),
    m_lac(0),
    m_lacHasBeenSet(false),
    m_utranCid(0),
    m_utranCidHasBeenSet(false),
    m_wcdmaLocalIdHasBeenSet(false),
    m_rscp(0),
    m_rscpHasBeenSet(false),
    m_pathLoss(0),
    m_pathLossHasBeenSet(false),
    m_wcdmaNmrHasBeenSet(false)
{
  *this = jsonValue;
}

WcdmaObj& WcdmaObj::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("WcdmaLocalId"))
  {
    m_wcdmaLocalId = jsonValue.GetObject("WcdmaLocalId");

    m_wcdmaLocalIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("WcdmaNmr"))
  {
    Aws::Utils::Array<JsonView> wcdmaNmrJsonList = jsonValue.GetArray("WcdmaNmr");
    for(unsigned wcdmaNmrIndex = 0; wcdmaNmrIndex < wcdmaNmrJsonList.GetLength(); ++wcdmaNmrIndex)
    {
      m_wcdmaNmr.push_back(wcdmaNmrJsonList[wcdmaNmrIndex].AsObject());
    }
    m_wcdmaNmrHasBeenSet = true;
  }

  return *this;
}

JsonValue WcdmaObj::Jsonize() const
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

  if(m_wcdmaLocalIdHasBeenSet)
  {
   payload.WithObject("WcdmaLocalId", m_wcdmaLocalId.Jsonize());

  }

  if(m_rscpHasBeenSet)
  {
   payload.WithInteger("Rscp", m_rscp);

  }

  if(m_pathLossHasBeenSet)
  {
   payload.WithInteger("PathLoss", m_pathLoss);

  }

  if(m_wcdmaNmrHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> wcdmaNmrJsonList(m_wcdmaNmr.size());
   for(unsigned wcdmaNmrIndex = 0; wcdmaNmrIndex < wcdmaNmrJsonList.GetLength(); ++wcdmaNmrIndex)
   {
     wcdmaNmrJsonList[wcdmaNmrIndex].AsObject(m_wcdmaNmr[wcdmaNmrIndex].Jsonize());
   }
   payload.WithArray("WcdmaNmr", std::move(wcdmaNmrJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
