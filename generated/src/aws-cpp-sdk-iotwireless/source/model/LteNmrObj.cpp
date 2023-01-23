/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LteNmrObj.h>
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

LteNmrObj::LteNmrObj() : 
    m_pci(0),
    m_pciHasBeenSet(false),
    m_earfcn(0),
    m_earfcnHasBeenSet(false),
    m_eutranCid(0),
    m_eutranCidHasBeenSet(false),
    m_rsrp(0),
    m_rsrpHasBeenSet(false),
    m_rsrq(0.0),
    m_rsrqHasBeenSet(false)
{
}

LteNmrObj::LteNmrObj(JsonView jsonValue) : 
    m_pci(0),
    m_pciHasBeenSet(false),
    m_earfcn(0),
    m_earfcnHasBeenSet(false),
    m_eutranCid(0),
    m_eutranCidHasBeenSet(false),
    m_rsrp(0),
    m_rsrpHasBeenSet(false),
    m_rsrq(0.0),
    m_rsrqHasBeenSet(false)
{
  *this = jsonValue;
}

LteNmrObj& LteNmrObj::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Pci"))
  {
    m_pci = jsonValue.GetInteger("Pci");

    m_pciHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Earfcn"))
  {
    m_earfcn = jsonValue.GetInteger("Earfcn");

    m_earfcnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EutranCid"))
  {
    m_eutranCid = jsonValue.GetInteger("EutranCid");

    m_eutranCidHasBeenSet = true;
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

  return *this;
}

JsonValue LteNmrObj::Jsonize() const
{
  JsonValue payload;

  if(m_pciHasBeenSet)
  {
   payload.WithInteger("Pci", m_pci);

  }

  if(m_earfcnHasBeenSet)
  {
   payload.WithInteger("Earfcn", m_earfcn);

  }

  if(m_eutranCidHasBeenSet)
  {
   payload.WithInteger("EutranCid", m_eutranCid);

  }

  if(m_rsrpHasBeenSet)
  {
   payload.WithInteger("Rsrp", m_rsrp);

  }

  if(m_rsrqHasBeenSet)
  {
   payload.WithDouble("Rsrq", m_rsrq);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
