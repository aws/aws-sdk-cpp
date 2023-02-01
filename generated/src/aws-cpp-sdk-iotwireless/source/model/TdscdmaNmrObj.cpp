/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/TdscdmaNmrObj.h>
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

TdscdmaNmrObj::TdscdmaNmrObj() : 
    m_uarfcn(0),
    m_uarfcnHasBeenSet(false),
    m_cellParams(0),
    m_cellParamsHasBeenSet(false),
    m_utranCid(0),
    m_utranCidHasBeenSet(false),
    m_rscp(0),
    m_rscpHasBeenSet(false),
    m_pathLoss(0),
    m_pathLossHasBeenSet(false)
{
}

TdscdmaNmrObj::TdscdmaNmrObj(JsonView jsonValue) : 
    m_uarfcn(0),
    m_uarfcnHasBeenSet(false),
    m_cellParams(0),
    m_cellParamsHasBeenSet(false),
    m_utranCid(0),
    m_utranCidHasBeenSet(false),
    m_rscp(0),
    m_rscpHasBeenSet(false),
    m_pathLoss(0),
    m_pathLossHasBeenSet(false)
{
  *this = jsonValue;
}

TdscdmaNmrObj& TdscdmaNmrObj::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Uarfcn"))
  {
    m_uarfcn = jsonValue.GetInteger("Uarfcn");

    m_uarfcnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CellParams"))
  {
    m_cellParams = jsonValue.GetInteger("CellParams");

    m_cellParamsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UtranCid"))
  {
    m_utranCid = jsonValue.GetInteger("UtranCid");

    m_utranCidHasBeenSet = true;
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

  return *this;
}

JsonValue TdscdmaNmrObj::Jsonize() const
{
  JsonValue payload;

  if(m_uarfcnHasBeenSet)
  {
   payload.WithInteger("Uarfcn", m_uarfcn);

  }

  if(m_cellParamsHasBeenSet)
  {
   payload.WithInteger("CellParams", m_cellParams);

  }

  if(m_utranCidHasBeenSet)
  {
   payload.WithInteger("UtranCid", m_utranCid);

  }

  if(m_rscpHasBeenSet)
  {
   payload.WithInteger("Rscp", m_rscp);

  }

  if(m_pathLossHasBeenSet)
  {
   payload.WithInteger("PathLoss", m_pathLoss);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
