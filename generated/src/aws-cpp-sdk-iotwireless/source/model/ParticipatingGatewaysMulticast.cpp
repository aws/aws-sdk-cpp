/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ParticipatingGatewaysMulticast.h>
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

ParticipatingGatewaysMulticast::ParticipatingGatewaysMulticast(JsonView jsonValue)
{
  *this = jsonValue;
}

ParticipatingGatewaysMulticast& ParticipatingGatewaysMulticast::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GatewayList"))
  {
    Aws::Utils::Array<JsonView> gatewayListJsonList = jsonValue.GetArray("GatewayList");
    for(unsigned gatewayListIndex = 0; gatewayListIndex < gatewayListJsonList.GetLength(); ++gatewayListIndex)
    {
      m_gatewayList.push_back(gatewayListJsonList[gatewayListIndex].AsString());
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

JsonValue ParticipatingGatewaysMulticast::Jsonize() const
{
  JsonValue payload;

  if(m_gatewayListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gatewayListJsonList(m_gatewayList.size());
   for(unsigned gatewayListIndex = 0; gatewayListIndex < gatewayListJsonList.GetLength(); ++gatewayListIndex)
   {
     gatewayListJsonList[gatewayListIndex].AsString(m_gatewayList[gatewayListIndex]);
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
