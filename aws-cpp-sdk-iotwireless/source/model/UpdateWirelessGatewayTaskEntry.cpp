/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/UpdateWirelessGatewayTaskEntry.h>
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

UpdateWirelessGatewayTaskEntry::UpdateWirelessGatewayTaskEntry() : 
    m_idHasBeenSet(false),
    m_loRaWANHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

UpdateWirelessGatewayTaskEntry::UpdateWirelessGatewayTaskEntry(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_loRaWANHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateWirelessGatewayTaskEntry& UpdateWirelessGatewayTaskEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoRaWAN"))
  {
    m_loRaWAN = jsonValue.GetObject("LoRaWAN");

    m_loRaWANHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateWirelessGatewayTaskEntry::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_loRaWANHasBeenSet)
  {
   payload.WithObject("LoRaWAN", m_loRaWAN.Jsonize());

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
