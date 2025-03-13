/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/LteNetworkMeasurements.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

LteNetworkMeasurements::LteNetworkMeasurements(JsonView jsonValue)
{
  *this = jsonValue;
}

LteNetworkMeasurements& LteNetworkMeasurements::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Earfcn"))
  {
    m_earfcn = jsonValue.GetInteger("Earfcn");
    m_earfcnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CellId"))
  {
    m_cellId = jsonValue.GetInteger("CellId");
    m_cellIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Pci"))
  {
    m_pci = jsonValue.GetInteger("Pci");
    m_pciHasBeenSet = true;
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

JsonValue LteNetworkMeasurements::Jsonize() const
{
  JsonValue payload;

  if(m_earfcnHasBeenSet)
  {
   payload.WithInteger("Earfcn", m_earfcn);

  }

  if(m_cellIdHasBeenSet)
  {
   payload.WithInteger("CellId", m_cellId);

  }

  if(m_pciHasBeenSet)
  {
   payload.WithInteger("Pci", m_pci);

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
} // namespace LocationService
} // namespace Aws
