/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/AssociatedGateway.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

AssociatedGateway::AssociatedGateway() : 
    m_idHasBeenSet(false),
    m_type(GatewayType::NOT_SET),
    m_typeHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

AssociatedGateway::AssociatedGateway(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_type(GatewayType::NOT_SET),
    m_typeHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_regionHasBeenSet(false)
{
  *this = jsonValue;
}

AssociatedGateway& AssociatedGateway::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = GatewayTypeMapper::GetGatewayTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ownerAccount"))
  {
    m_ownerAccount = jsonValue.GetString("ownerAccount");

    m_ownerAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociatedGateway::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GatewayTypeMapper::GetNameForGatewayType(m_type));
  }

  if(m_ownerAccountHasBeenSet)
  {
   payload.WithString("ownerAccount", m_ownerAccount);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
