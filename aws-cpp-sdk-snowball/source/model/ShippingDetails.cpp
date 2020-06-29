/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/ShippingDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

ShippingDetails::ShippingDetails() : 
    m_shippingOption(ShippingOption::NOT_SET),
    m_shippingOptionHasBeenSet(false),
    m_inboundShipmentHasBeenSet(false),
    m_outboundShipmentHasBeenSet(false)
{
}

ShippingDetails::ShippingDetails(JsonView jsonValue) : 
    m_shippingOption(ShippingOption::NOT_SET),
    m_shippingOptionHasBeenSet(false),
    m_inboundShipmentHasBeenSet(false),
    m_outboundShipmentHasBeenSet(false)
{
  *this = jsonValue;
}

ShippingDetails& ShippingDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ShippingOption"))
  {
    m_shippingOption = ShippingOptionMapper::GetShippingOptionForName(jsonValue.GetString("ShippingOption"));

    m_shippingOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InboundShipment"))
  {
    m_inboundShipment = jsonValue.GetObject("InboundShipment");

    m_inboundShipmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutboundShipment"))
  {
    m_outboundShipment = jsonValue.GetObject("OutboundShipment");

    m_outboundShipmentHasBeenSet = true;
  }

  return *this;
}

JsonValue ShippingDetails::Jsonize() const
{
  JsonValue payload;

  if(m_shippingOptionHasBeenSet)
  {
   payload.WithString("ShippingOption", ShippingOptionMapper::GetNameForShippingOption(m_shippingOption));
  }

  if(m_inboundShipmentHasBeenSet)
  {
   payload.WithObject("InboundShipment", m_inboundShipment.Jsonize());

  }

  if(m_outboundShipmentHasBeenSet)
  {
   payload.WithObject("OutboundShipment", m_outboundShipment.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
