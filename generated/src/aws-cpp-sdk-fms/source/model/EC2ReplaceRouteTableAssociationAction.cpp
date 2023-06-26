/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/EC2ReplaceRouteTableAssociationAction.h>
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

EC2ReplaceRouteTableAssociationAction::EC2ReplaceRouteTableAssociationAction() : 
    m_descriptionHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false)
{
}

EC2ReplaceRouteTableAssociationAction::EC2ReplaceRouteTableAssociationAction(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false)
{
  *this = jsonValue;
}

EC2ReplaceRouteTableAssociationAction& EC2ReplaceRouteTableAssociationAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationId"))
  {
    m_associationId = jsonValue.GetObject("AssociationId");

    m_associationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteTableId"))
  {
    m_routeTableId = jsonValue.GetObject("RouteTableId");

    m_routeTableIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EC2ReplaceRouteTableAssociationAction::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_associationIdHasBeenSet)
  {
   payload.WithObject("AssociationId", m_associationId.Jsonize());

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
