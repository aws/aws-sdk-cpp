/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/EC2DeleteRouteAction.h>
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

EC2DeleteRouteAction::EC2DeleteRouteAction() : 
    m_descriptionHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_destinationPrefixListIdHasBeenSet(false),
    m_destinationIpv6CidrBlockHasBeenSet(false),
    m_routeTableIdHasBeenSet(false)
{
}

EC2DeleteRouteAction::EC2DeleteRouteAction(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_destinationPrefixListIdHasBeenSet(false),
    m_destinationIpv6CidrBlockHasBeenSet(false),
    m_routeTableIdHasBeenSet(false)
{
  *this = jsonValue;
}

EC2DeleteRouteAction& EC2DeleteRouteAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationCidrBlock"))
  {
    m_destinationCidrBlock = jsonValue.GetString("DestinationCidrBlock");

    m_destinationCidrBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationPrefixListId"))
  {
    m_destinationPrefixListId = jsonValue.GetString("DestinationPrefixListId");

    m_destinationPrefixListIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationIpv6CidrBlock"))
  {
    m_destinationIpv6CidrBlock = jsonValue.GetString("DestinationIpv6CidrBlock");

    m_destinationIpv6CidrBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteTableId"))
  {
    m_routeTableId = jsonValue.GetObject("RouteTableId");

    m_routeTableIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EC2DeleteRouteAction::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_destinationCidrBlockHasBeenSet)
  {
   payload.WithString("DestinationCidrBlock", m_destinationCidrBlock);

  }

  if(m_destinationPrefixListIdHasBeenSet)
  {
   payload.WithString("DestinationPrefixListId", m_destinationPrefixListId);

  }

  if(m_destinationIpv6CidrBlockHasBeenSet)
  {
   payload.WithString("DestinationIpv6CidrBlock", m_destinationIpv6CidrBlock);

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
