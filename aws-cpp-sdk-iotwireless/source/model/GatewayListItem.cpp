/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GatewayListItem.h>
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

GatewayListItem::GatewayListItem() : 
    m_gatewayIdHasBeenSet(false),
    m_downlinkFrequency(0),
    m_downlinkFrequencyHasBeenSet(false)
{
}

GatewayListItem::GatewayListItem(JsonView jsonValue) : 
    m_gatewayIdHasBeenSet(false),
    m_downlinkFrequency(0),
    m_downlinkFrequencyHasBeenSet(false)
{
  *this = jsonValue;
}

GatewayListItem& GatewayListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GatewayId"))
  {
    m_gatewayId = jsonValue.GetString("GatewayId");

    m_gatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DownlinkFrequency"))
  {
    m_downlinkFrequency = jsonValue.GetInteger("DownlinkFrequency");

    m_downlinkFrequencyHasBeenSet = true;
  }

  return *this;
}

JsonValue GatewayListItem::Jsonize() const
{
  JsonValue payload;

  if(m_gatewayIdHasBeenSet)
  {
   payload.WithString("GatewayId", m_gatewayId);

  }

  if(m_downlinkFrequencyHasBeenSet)
  {
   payload.WithInteger("DownlinkFrequency", m_downlinkFrequency);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
