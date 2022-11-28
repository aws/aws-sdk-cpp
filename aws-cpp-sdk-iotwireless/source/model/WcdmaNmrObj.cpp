/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WcdmaNmrObj.h>
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

WcdmaNmrObj::WcdmaNmrObj() : 
    m_uarfcndl(0),
    m_uarfcndlHasBeenSet(false),
    m_psc(0),
    m_pscHasBeenSet(false),
    m_utranCid(0),
    m_utranCidHasBeenSet(false),
    m_rscp(0),
    m_rscpHasBeenSet(false),
    m_pathLoss(0),
    m_pathLossHasBeenSet(false)
{
}

WcdmaNmrObj::WcdmaNmrObj(JsonView jsonValue) : 
    m_uarfcndl(0),
    m_uarfcndlHasBeenSet(false),
    m_psc(0),
    m_pscHasBeenSet(false),
    m_utranCid(0),
    m_utranCidHasBeenSet(false),
    m_rscp(0),
    m_rscpHasBeenSet(false),
    m_pathLoss(0),
    m_pathLossHasBeenSet(false)
{
  *this = jsonValue;
}

WcdmaNmrObj& WcdmaNmrObj::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Uarfcndl"))
  {
    m_uarfcndl = jsonValue.GetInteger("Uarfcndl");

    m_uarfcndlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Psc"))
  {
    m_psc = jsonValue.GetInteger("Psc");

    m_pscHasBeenSet = true;
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

JsonValue WcdmaNmrObj::Jsonize() const
{
  JsonValue payload;

  if(m_uarfcndlHasBeenSet)
  {
   payload.WithInteger("Uarfcndl", m_uarfcndl);

  }

  if(m_pscHasBeenSet)
  {
   payload.WithInteger("Psc", m_psc);

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
