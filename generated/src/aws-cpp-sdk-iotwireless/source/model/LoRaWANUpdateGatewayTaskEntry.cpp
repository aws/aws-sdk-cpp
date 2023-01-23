/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANUpdateGatewayTaskEntry.h>
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

LoRaWANUpdateGatewayTaskEntry::LoRaWANUpdateGatewayTaskEntry() : 
    m_currentVersionHasBeenSet(false),
    m_updateVersionHasBeenSet(false)
{
}

LoRaWANUpdateGatewayTaskEntry::LoRaWANUpdateGatewayTaskEntry(JsonView jsonValue) : 
    m_currentVersionHasBeenSet(false),
    m_updateVersionHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANUpdateGatewayTaskEntry& LoRaWANUpdateGatewayTaskEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CurrentVersion"))
  {
    m_currentVersion = jsonValue.GetObject("CurrentVersion");

    m_currentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateVersion"))
  {
    m_updateVersion = jsonValue.GetObject("UpdateVersion");

    m_updateVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANUpdateGatewayTaskEntry::Jsonize() const
{
  JsonValue payload;

  if(m_currentVersionHasBeenSet)
  {
   payload.WithObject("CurrentVersion", m_currentVersion.Jsonize());

  }

  if(m_updateVersionHasBeenSet)
  {
   payload.WithObject("UpdateVersion", m_updateVersion.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
