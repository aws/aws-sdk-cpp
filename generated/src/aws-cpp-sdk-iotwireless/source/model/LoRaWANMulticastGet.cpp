/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANMulticastGet.h>
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

LoRaWANMulticastGet::LoRaWANMulticastGet(JsonView jsonValue)
{
  *this = jsonValue;
}

LoRaWANMulticastGet& LoRaWANMulticastGet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RfRegion"))
  {
    m_rfRegion = SupportedRfRegionMapper::GetSupportedRfRegionForName(jsonValue.GetString("RfRegion"));
    m_rfRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DlClass"))
  {
    m_dlClass = DlClassMapper::GetDlClassForName(jsonValue.GetString("DlClass"));
    m_dlClassHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfDevicesRequested"))
  {
    m_numberOfDevicesRequested = jsonValue.GetInteger("NumberOfDevicesRequested");
    m_numberOfDevicesRequestedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfDevicesInGroup"))
  {
    m_numberOfDevicesInGroup = jsonValue.GetInteger("NumberOfDevicesInGroup");
    m_numberOfDevicesInGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParticipatingGateways"))
  {
    m_participatingGateways = jsonValue.GetObject("ParticipatingGateways");
    m_participatingGatewaysHasBeenSet = true;
  }
  return *this;
}

JsonValue LoRaWANMulticastGet::Jsonize() const
{
  JsonValue payload;

  if(m_rfRegionHasBeenSet)
  {
   payload.WithString("RfRegion", SupportedRfRegionMapper::GetNameForSupportedRfRegion(m_rfRegion));
  }

  if(m_dlClassHasBeenSet)
  {
   payload.WithString("DlClass", DlClassMapper::GetNameForDlClass(m_dlClass));
  }

  if(m_numberOfDevicesRequestedHasBeenSet)
  {
   payload.WithInteger("NumberOfDevicesRequested", m_numberOfDevicesRequested);

  }

  if(m_numberOfDevicesInGroupHasBeenSet)
  {
   payload.WithInteger("NumberOfDevicesInGroup", m_numberOfDevicesInGroup);

  }

  if(m_participatingGatewaysHasBeenSet)
  {
   payload.WithObject("ParticipatingGateways", m_participatingGateways.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
