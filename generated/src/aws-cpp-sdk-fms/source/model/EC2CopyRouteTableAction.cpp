/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/EC2CopyRouteTableAction.h>
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

EC2CopyRouteTableAction::EC2CopyRouteTableAction() : 
    m_descriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false)
{
}

EC2CopyRouteTableAction::EC2CopyRouteTableAction(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false)
{
  *this = jsonValue;
}

EC2CopyRouteTableAction& EC2CopyRouteTableAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetObject("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteTableId"))
  {
    m_routeTableId = jsonValue.GetObject("RouteTableId");

    m_routeTableIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EC2CopyRouteTableAction::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithObject("VpcId", m_vpcId.Jsonize());

  }

  if(m_routeTableIdHasBeenSet)
  {
   payload.WithObject("RouteTableId", m_routeTableId.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
