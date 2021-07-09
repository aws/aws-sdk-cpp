/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/EC2CreateRouteTableAction.h>
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

EC2CreateRouteTableAction::EC2CreateRouteTableAction() : 
    m_descriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

EC2CreateRouteTableAction::EC2CreateRouteTableAction(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = jsonValue;
}

EC2CreateRouteTableAction& EC2CreateRouteTableAction::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue EC2CreateRouteTableAction::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
