/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ParticipatingGateways.h>
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

ParticipatingGateways::ParticipatingGateways() : 
    m_downlinkMode(DownlinkMode::NOT_SET),
    m_downlinkModeHasBeenSet(false),
    m_gatewayListHasBeenSet(false),
    m_transmissionInterval(0),
    m_transmissionIntervalHasBeenSet(false)
{
}

ParticipatingGateways::ParticipatingGateways(JsonView jsonValue) : 
    m_downlinkMode(DownlinkMode::NOT_SET),
    m_downlinkModeHasBeenSet(false),
    m_gatewayListHasBeenSet(false),
    m_transmissionInterval(0),
    m_transmissionIntervalHasBeenSet(false)
{
  *this = jsonValue;
}

ParticipatingGateways& ParticipatingGateways::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DownlinkMode"))
  {
    m_downlinkMode = DownlinkModeMapper::GetDownlinkModeForName(jsonValue.GetString("DownlinkMode"));

    m_downlinkModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayList"))
  {
    Aws::Utils::Array<JsonView> gatewayListJsonList = jsonValue.GetArray("GatewayList");
    for(unsigned gatewayListIndex = 0; gatewayListIndex < gatewayListJsonList.GetLength(); ++gatewayListIndex)
    {
      m_gatewayList.push_back(gatewayListJsonList[gatewayListIndex].AsObject());
    }
    m_gatewayListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransmissionInterval"))
  {
    m_transmissionInterval = jsonValue.GetInteger("TransmissionInterval");

    m_transmissionIntervalHasBeenSet = true;
  }

  return *this;
}

JsonValue ParticipatingGateways::Jsonize() const
{
  JsonValue payload;

  if(m_downlinkModeHasBeenSet)
  {
   payload.WithString("DownlinkMode", DownlinkModeMapper::GetNameForDownlinkMode(m_downlinkMode));
  }

  if(m_gatewayListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gatewayListJsonList(m_gatewayList.size());
   for(unsigned gatewayListIndex = 0; gatewayListIndex < gatewayListJsonList.GetLength(); ++gatewayListIndex)
   {
     gatewayListJsonList[gatewayListIndex].AsObject(m_gatewayList[gatewayListIndex].Jsonize());
   }
   payload.WithArray("GatewayList", std::move(gatewayListJsonList));

  }

  if(m_transmissionIntervalHasBeenSet)
  {
   payload.WithInteger("TransmissionInterval", m_transmissionInterval);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
