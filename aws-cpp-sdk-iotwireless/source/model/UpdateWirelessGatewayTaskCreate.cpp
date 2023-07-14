/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/UpdateWirelessGatewayTaskCreate.h>
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

UpdateWirelessGatewayTaskCreate::UpdateWirelessGatewayTaskCreate() : 
    m_updateDataSourceHasBeenSet(false),
    m_updateDataRoleHasBeenSet(false),
    m_loRaWANHasBeenSet(false)
{
}

UpdateWirelessGatewayTaskCreate::UpdateWirelessGatewayTaskCreate(JsonView jsonValue) : 
    m_updateDataSourceHasBeenSet(false),
    m_updateDataRoleHasBeenSet(false),
    m_loRaWANHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateWirelessGatewayTaskCreate& UpdateWirelessGatewayTaskCreate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UpdateDataSource"))
  {
    m_updateDataSource = jsonValue.GetString("UpdateDataSource");

    m_updateDataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateDataRole"))
  {
    m_updateDataRole = jsonValue.GetString("UpdateDataRole");

    m_updateDataRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoRaWAN"))
  {
    m_loRaWAN = jsonValue.GetObject("LoRaWAN");

    m_loRaWANHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateWirelessGatewayTaskCreate::Jsonize() const
{
  JsonValue payload;

  if(m_updateDataSourceHasBeenSet)
  {
   payload.WithString("UpdateDataSource", m_updateDataSource);

  }

  if(m_updateDataRoleHasBeenSet)
  {
   payload.WithString("UpdateDataRole", m_updateDataRole);

  }

  if(m_loRaWANHasBeenSet)
  {
   payload.WithObject("LoRaWAN", m_loRaWAN.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
