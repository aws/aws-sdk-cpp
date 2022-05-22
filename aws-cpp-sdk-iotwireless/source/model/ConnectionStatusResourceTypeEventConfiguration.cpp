/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ConnectionStatusResourceTypeEventConfiguration.h>
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

ConnectionStatusResourceTypeEventConfiguration::ConnectionStatusResourceTypeEventConfiguration() : 
    m_loRaWANHasBeenSet(false)
{
}

ConnectionStatusResourceTypeEventConfiguration::ConnectionStatusResourceTypeEventConfiguration(JsonView jsonValue) : 
    m_loRaWANHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionStatusResourceTypeEventConfiguration& ConnectionStatusResourceTypeEventConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LoRaWAN"))
  {
    m_loRaWAN = jsonValue.GetObject("LoRaWAN");

    m_loRaWANHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionStatusResourceTypeEventConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_loRaWANHasBeenSet)
  {
   payload.WithObject("LoRaWAN", m_loRaWAN.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
