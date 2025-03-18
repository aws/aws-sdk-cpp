/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/LteCellDetails.h>
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

LteCellDetails::LteCellDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

LteCellDetails& LteCellDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CellId"))
  {
    m_cellId = jsonValue.GetInteger("CellId");
    m_cellIdHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("LocalId"))
  {
    m_localId = jsonValue.GetObject("LocalId");
    m_localIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NetworkMeasurements"))
  {
    Aws::Utils::Array<JsonView> networkMeasurementsJsonList = jsonValue.GetArray("NetworkMeasurements");
    for(unsigned networkMeasurementsIndex = 0; networkMeasurementsIndex < networkMeasurementsJsonList.GetLength(); ++networkMeasurementsIndex)
    {
      m_networkMeasurements.push_back(networkMeasurementsJsonList[networkMeasurementsIndex].AsObject());
    }
    m_networkMeasurementsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimingAdvance"))
  {
    m_timingAdvance = jsonValue.GetInteger("TimingAdvance");
    m_timingAdvanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NrCapable"))
  {
    m_nrCapable = jsonValue.GetBool("NrCapable");
    m_nrCapableHasBeenSet = true;
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
  if(jsonValue.ValueExists("Tac"))
  {
    m_tac = jsonValue.GetInteger("Tac");
    m_tacHasBeenSet = true;
  }
  return *this;
}

JsonValue LteCellDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cellIdHasBeenSet)
  {
   payload.WithInteger("CellId", m_cellId);

  }

  if(m_mccHasBeenSet)
  {
   payload.WithInteger("Mcc", m_mcc);

  }

  if(m_mncHasBeenSet)
  {
   payload.WithInteger("Mnc", m_mnc);

  }

  if(m_localIdHasBeenSet)
  {
   payload.WithObject("LocalId", m_localId.Jsonize());

  }

  if(m_networkMeasurementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkMeasurementsJsonList(m_networkMeasurements.size());
   for(unsigned networkMeasurementsIndex = 0; networkMeasurementsIndex < networkMeasurementsJsonList.GetLength(); ++networkMeasurementsIndex)
   {
     networkMeasurementsJsonList[networkMeasurementsIndex].AsObject(m_networkMeasurements[networkMeasurementsIndex].Jsonize());
   }
   payload.WithArray("NetworkMeasurements", std::move(networkMeasurementsJsonList));

  }

  if(m_timingAdvanceHasBeenSet)
  {
   payload.WithInteger("TimingAdvance", m_timingAdvance);

  }

  if(m_nrCapableHasBeenSet)
  {
   payload.WithBool("NrCapable", m_nrCapable);

  }

  if(m_rsrpHasBeenSet)
  {
   payload.WithInteger("Rsrp", m_rsrp);

  }

  if(m_rsrqHasBeenSet)
  {
   payload.WithDouble("Rsrq", m_rsrq);

  }

  if(m_tacHasBeenSet)
  {
   payload.WithInteger("Tac", m_tac);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
