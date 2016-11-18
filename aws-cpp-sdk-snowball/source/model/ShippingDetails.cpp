/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

ShippingDetails::ShippingDetails(const JsonValue& jsonValue) : 
    m_shippingOption(ShippingOption::NOT_SET),
    m_shippingOptionHasBeenSet(false),
    m_inboundShipmentHasBeenSet(false),
    m_outboundShipmentHasBeenSet(false)
{
  *this = jsonValue;
}

ShippingDetails& ShippingDetails::operator =(const JsonValue& jsonValue)
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