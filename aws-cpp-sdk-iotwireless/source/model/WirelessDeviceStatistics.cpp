/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WirelessDeviceStatistics.h>
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

WirelessDeviceStatistics::WirelessDeviceStatistics() : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_type(WirelessDeviceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_destinationNameHasBeenSet(false),
    m_lastUplinkReceivedAtHasBeenSet(false),
    m_loRaWANHasBeenSet(false),
    m_sidewalkHasBeenSet(false),
    m_fuotaDeviceStatus(FuotaDeviceStatus::NOT_SET),
    m_fuotaDeviceStatusHasBeenSet(false),
    m_multicastDeviceStatusHasBeenSet(false),
    m_mcGroupId(0),
    m_mcGroupIdHasBeenSet(false)
{
}

WirelessDeviceStatistics::WirelessDeviceStatistics(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_type(WirelessDeviceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_destinationNameHasBeenSet(false),
    m_lastUplinkReceivedAtHasBeenSet(false),
    m_loRaWANHasBeenSet(false),
    m_sidewalkHasBeenSet(false),
    m_fuotaDeviceStatus(FuotaDeviceStatus::NOT_SET),
    m_fuotaDeviceStatusHasBeenSet(false),
    m_multicastDeviceStatusHasBeenSet(false),
    m_mcGroupId(0),
    m_mcGroupIdHasBeenSet(false)
{
  *this = jsonValue;
}

WirelessDeviceStatistics& WirelessDeviceStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = WirelessDeviceTypeMapper::GetWirelessDeviceTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationName"))
  {
    m_destinationName = jsonValue.GetString("DestinationName");

    m_destinationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUplinkReceivedAt"))
  {
    m_lastUplinkReceivedAt = jsonValue.GetString("LastUplinkReceivedAt");

    m_lastUplinkReceivedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoRaWAN"))
  {
    m_loRaWAN = jsonValue.GetObject("LoRaWAN");

    m_loRaWANHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sidewalk"))
  {
    m_sidewalk = jsonValue.GetObject("Sidewalk");

    m_sidewalkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FuotaDeviceStatus"))
  {
    m_fuotaDeviceStatus = FuotaDeviceStatusMapper::GetFuotaDeviceStatusForName(jsonValue.GetString("FuotaDeviceStatus"));

    m_fuotaDeviceStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MulticastDeviceStatus"))
  {
    m_multicastDeviceStatus = jsonValue.GetString("MulticastDeviceStatus");

    m_multicastDeviceStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("McGroupId"))
  {
    m_mcGroupId = jsonValue.GetInteger("McGroupId");

    m_mcGroupIdHasBeenSet = true;
  }

  return *this;
}

JsonValue WirelessDeviceStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", WirelessDeviceTypeMapper::GetNameForWirelessDeviceType(m_type));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_destinationNameHasBeenSet)
  {
   payload.WithString("DestinationName", m_destinationName);

  }

  if(m_lastUplinkReceivedAtHasBeenSet)
  {
   payload.WithString("LastUplinkReceivedAt", m_lastUplinkReceivedAt);

  }

  if(m_loRaWANHasBeenSet)
  {
   payload.WithObject("LoRaWAN", m_loRaWAN.Jsonize());

  }

  if(m_sidewalkHasBeenSet)
  {
   payload.WithObject("Sidewalk", m_sidewalk.Jsonize());

  }

  if(m_fuotaDeviceStatusHasBeenSet)
  {
   payload.WithString("FuotaDeviceStatus", FuotaDeviceStatusMapper::GetNameForFuotaDeviceStatus(m_fuotaDeviceStatus));
  }

  if(m_multicastDeviceStatusHasBeenSet)
  {
   payload.WithString("MulticastDeviceStatus", m_multicastDeviceStatus);

  }

  if(m_mcGroupIdHasBeenSet)
  {
   payload.WithInteger("McGroupId", m_mcGroupId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
