/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WirelessMetadata.h>
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

WirelessMetadata::WirelessMetadata() : 
    m_loRaWANHasBeenSet(false),
    m_sidewalkHasBeenSet(false)
{
}

WirelessMetadata::WirelessMetadata(JsonView jsonValue) : 
    m_loRaWANHasBeenSet(false),
    m_sidewalkHasBeenSet(false)
{
  *this = jsonValue;
}

WirelessMetadata& WirelessMetadata::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue WirelessMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_loRaWANHasBeenSet)
  {
   payload.WithObject("LoRaWAN", m_loRaWAN.Jsonize());

  }

  if(m_sidewalkHasBeenSet)
  {
   payload.WithObject("Sidewalk", m_sidewalk.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
