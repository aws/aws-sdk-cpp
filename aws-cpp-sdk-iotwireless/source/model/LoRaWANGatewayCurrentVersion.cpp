/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANGatewayCurrentVersion.h>
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

LoRaWANGatewayCurrentVersion::LoRaWANGatewayCurrentVersion() : 
    m_currentVersionHasBeenSet(false)
{
}

LoRaWANGatewayCurrentVersion::LoRaWANGatewayCurrentVersion(JsonView jsonValue) : 
    m_currentVersionHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANGatewayCurrentVersion& LoRaWANGatewayCurrentVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CurrentVersion"))
  {
    m_currentVersion = jsonValue.GetObject("CurrentVersion");

    m_currentVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANGatewayCurrentVersion::Jsonize() const
{
  JsonValue payload;

  if(m_currentVersionHasBeenSet)
  {
   payload.WithObject("CurrentVersion", m_currentVersion.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
