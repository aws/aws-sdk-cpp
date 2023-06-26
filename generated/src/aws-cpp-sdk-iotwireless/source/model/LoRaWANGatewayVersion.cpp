/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANGatewayVersion.h>
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

LoRaWANGatewayVersion::LoRaWANGatewayVersion() : 
    m_packageVersionHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_stationHasBeenSet(false)
{
}

LoRaWANGatewayVersion::LoRaWANGatewayVersion(JsonView jsonValue) : 
    m_packageVersionHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_stationHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANGatewayVersion& LoRaWANGatewayVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PackageVersion"))
  {
    m_packageVersion = jsonValue.GetString("PackageVersion");

    m_packageVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Model"))
  {
    m_model = jsonValue.GetString("Model");

    m_modelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Station"))
  {
    m_station = jsonValue.GetString("Station");

    m_stationHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANGatewayVersion::Jsonize() const
{
  JsonValue payload;

  if(m_packageVersionHasBeenSet)
  {
   payload.WithString("PackageVersion", m_packageVersion);

  }

  if(m_modelHasBeenSet)
  {
   payload.WithString("Model", m_model);

  }

  if(m_stationHasBeenSet)
  {
   payload.WithString("Station", m_station);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
