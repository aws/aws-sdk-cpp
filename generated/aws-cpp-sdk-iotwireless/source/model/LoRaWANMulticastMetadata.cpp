/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANMulticastMetadata.h>
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

LoRaWANMulticastMetadata::LoRaWANMulticastMetadata() : 
    m_fPort(0),
    m_fPortHasBeenSet(false)
{
}

LoRaWANMulticastMetadata::LoRaWANMulticastMetadata(JsonView jsonValue) : 
    m_fPort(0),
    m_fPortHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANMulticastMetadata& LoRaWANMulticastMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FPort"))
  {
    m_fPort = jsonValue.GetInteger("FPort");

    m_fPortHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANMulticastMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_fPortHasBeenSet)
  {
   payload.WithInteger("FPort", m_fPort);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
