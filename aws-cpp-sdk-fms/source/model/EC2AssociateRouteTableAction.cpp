/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/EC2AssociateRouteTableAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

EC2AssociateRouteTableAction::EC2AssociateRouteTableAction() : 
    m_descriptionHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false)
{
}

EC2AssociateRouteTableAction::EC2AssociateRouteTableAction(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false)
{
  *this = jsonValue;
}

EC2AssociateRouteTableAction& EC2AssociateRouteTableAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteTableId"))
  {
    m_routeTableId = jsonValue.GetObject("RouteTableId");

    m_routeTableIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetObject("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayId"))
  {
    m_gatewayId = jsonValue.GetObject("GatewayId");

    m_gatewayIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EC2AssociateRouteTableAction::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_routeTableIdHasBeenSet)
  {
   payload.WithObject("RouteTableId", m_routeTableId.Jsonize());

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithObject("SubnetId", m_subnetId.Jsonize());

  }

  if(m_gatewayIdHasBeenSet)
  {
   payload.WithObject("GatewayId", m_gatewayId.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
