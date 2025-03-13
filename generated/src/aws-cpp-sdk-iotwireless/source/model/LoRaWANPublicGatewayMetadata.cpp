/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANPublicGatewayMetadata.h>
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

LoRaWANPublicGatewayMetadata::LoRaWANPublicGatewayMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

LoRaWANPublicGatewayMetadata& LoRaWANPublicGatewayMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProviderNetId"))
  {
    m_providerNetId = jsonValue.GetString("ProviderNetId");
    m_providerNetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Rssi"))
  {
    m_rssi = jsonValue.GetDouble("Rssi");
    m_rssiHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Snr"))
  {
    m_snr = jsonValue.GetDouble("Snr");
    m_snrHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RfRegion"))
  {
    m_rfRegion = jsonValue.GetString("RfRegion");
    m_rfRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DlAllowed"))
  {
    m_dlAllowed = jsonValue.GetBool("DlAllowed");
    m_dlAllowedHasBeenSet = true;
  }
  return *this;
}

JsonValue LoRaWANPublicGatewayMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_providerNetIdHasBeenSet)
  {
   payload.WithString("ProviderNetId", m_providerNetId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_rssiHasBeenSet)
  {
   payload.WithDouble("Rssi", m_rssi);

  }

  if(m_snrHasBeenSet)
  {
   payload.WithDouble("Snr", m_snr);

  }

  if(m_rfRegionHasBeenSet)
  {
   payload.WithString("RfRegion", m_rfRegion);

  }

  if(m_dlAllowedHasBeenSet)
  {
   payload.WithBool("DlAllowed", m_dlAllowed);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
