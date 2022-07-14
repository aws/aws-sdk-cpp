/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/ShipmentInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

ShipmentInformation::ShipmentInformation() : 
    m_shipmentTrackingNumberHasBeenSet(false),
    m_shipmentCarrier(ShipmentCarrier::NOT_SET),
    m_shipmentCarrierHasBeenSet(false)
{
}

ShipmentInformation::ShipmentInformation(JsonView jsonValue) : 
    m_shipmentTrackingNumberHasBeenSet(false),
    m_shipmentCarrier(ShipmentCarrier::NOT_SET),
    m_shipmentCarrierHasBeenSet(false)
{
  *this = jsonValue;
}

ShipmentInformation& ShipmentInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ShipmentTrackingNumber"))
  {
    m_shipmentTrackingNumber = jsonValue.GetString("ShipmentTrackingNumber");

    m_shipmentTrackingNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShipmentCarrier"))
  {
    m_shipmentCarrier = ShipmentCarrierMapper::GetShipmentCarrierForName(jsonValue.GetString("ShipmentCarrier"));

    m_shipmentCarrierHasBeenSet = true;
  }

  return *this;
}

JsonValue ShipmentInformation::Jsonize() const
{
  JsonValue payload;

  if(m_shipmentTrackingNumberHasBeenSet)
  {
   payload.WithString("ShipmentTrackingNumber", m_shipmentTrackingNumber);

  }

  if(m_shipmentCarrierHasBeenSet)
  {
   payload.WithString("ShipmentCarrier", ShipmentCarrierMapper::GetNameForShipmentCarrier(m_shipmentCarrier));
  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
