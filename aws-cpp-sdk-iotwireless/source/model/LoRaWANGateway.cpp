/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANGateway.h>
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

LoRaWANGateway::LoRaWANGateway() : 
    m_gatewayEuiHasBeenSet(false),
    m_rfRegionHasBeenSet(false)
{
}

LoRaWANGateway::LoRaWANGateway(JsonView jsonValue) : 
    m_gatewayEuiHasBeenSet(false),
    m_rfRegionHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANGateway& LoRaWANGateway::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GatewayEui"))
  {
    m_gatewayEui = jsonValue.GetString("GatewayEui");

    m_gatewayEuiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RfRegion"))
  {
    m_rfRegion = jsonValue.GetString("RfRegion");

    m_rfRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANGateway::Jsonize() const
{
  JsonValue payload;

  if(m_gatewayEuiHasBeenSet)
  {
   payload.WithString("GatewayEui", m_gatewayEui);

  }

  if(m_rfRegionHasBeenSet)
  {
   payload.WithString("RfRegion", m_rfRegion);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
