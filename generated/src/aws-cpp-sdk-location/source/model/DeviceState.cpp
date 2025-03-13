/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/DeviceState.h>
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

DeviceState::DeviceState(JsonView jsonValue)
{
  *this = jsonValue;
}

DeviceState& DeviceState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");
    m_deviceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SampleTime"))
  {
    m_sampleTime = jsonValue.GetString("SampleTime");
    m_sampleTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Position"))
  {
    Aws::Utils::Array<JsonView> positionJsonList = jsonValue.GetArray("Position");
    for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
    {
      m_position.push_back(positionJsonList[positionIndex].AsDouble());
    }
    m_positionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Accuracy"))
  {
    m_accuracy = jsonValue.GetObject("Accuracy");
    m_accuracyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ipv4Address"))
  {
    m_ipv4Address = jsonValue.GetString("Ipv4Address");
    m_ipv4AddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WiFiAccessPoints"))
  {
    Aws::Utils::Array<JsonView> wiFiAccessPointsJsonList = jsonValue.GetArray("WiFiAccessPoints");
    for(unsigned wiFiAccessPointsIndex = 0; wiFiAccessPointsIndex < wiFiAccessPointsJsonList.GetLength(); ++wiFiAccessPointsIndex)
    {
      m_wiFiAccessPoints.push_back(wiFiAccessPointsJsonList[wiFiAccessPointsIndex].AsObject());
    }
    m_wiFiAccessPointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CellSignals"))
  {
    m_cellSignals = jsonValue.GetObject("CellSignals");
    m_cellSignalsHasBeenSet = true;
  }
  return *this;
}

JsonValue DeviceState::Jsonize() const
{
  JsonValue payload;

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("DeviceId", m_deviceId);

  }

  if(m_sampleTimeHasBeenSet)
  {
   payload.WithString("SampleTime", m_sampleTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_positionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> positionJsonList(m_position.size());
   for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
   {
     positionJsonList[positionIndex].AsDouble(m_position[positionIndex]);
   }
   payload.WithArray("Position", std::move(positionJsonList));

  }

  if(m_accuracyHasBeenSet)
  {
   payload.WithObject("Accuracy", m_accuracy.Jsonize());

  }

  if(m_ipv4AddressHasBeenSet)
  {
   payload.WithString("Ipv4Address", m_ipv4Address);

  }

  if(m_wiFiAccessPointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> wiFiAccessPointsJsonList(m_wiFiAccessPoints.size());
   for(unsigned wiFiAccessPointsIndex = 0; wiFiAccessPointsIndex < wiFiAccessPointsJsonList.GetLength(); ++wiFiAccessPointsIndex)
   {
     wiFiAccessPointsJsonList[wiFiAccessPointsIndex].AsObject(m_wiFiAccessPoints[wiFiAccessPointsIndex].Jsonize());
   }
   payload.WithArray("WiFiAccessPoints", std::move(wiFiAccessPointsJsonList));

  }

  if(m_cellSignalsHasBeenSet)
  {
   payload.WithObject("CellSignals", m_cellSignals.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
