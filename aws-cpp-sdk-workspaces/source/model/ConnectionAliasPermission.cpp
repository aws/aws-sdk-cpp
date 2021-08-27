/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ConnectionAliasPermission.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

ConnectionAliasPermission::ConnectionAliasPermission() : 
    m_sharedAccountIdHasBeenSet(false),
    m_allowAssociation(false),
    m_allowAssociationHasBeenSet(false)
{
}

ConnectionAliasPermission::ConnectionAliasPermission(JsonView jsonValue) : 
    m_sharedAccountIdHasBeenSet(false),
    m_allowAssociation(false),
    m_allowAssociationHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionAliasPermission& ConnectionAliasPermission::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SharedAccountId"))
  {
    m_sharedAccountId = jsonValue.GetString("SharedAccountId");

    m_sharedAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowAssociation"))
  {
    m_allowAssociation = jsonValue.GetBool("AllowAssociation");

    m_allowAssociationHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionAliasPermission::Jsonize() const
{
  JsonValue payload;

  if(m_sharedAccountIdHasBeenSet)
  {
   payload.WithString("SharedAccountId", m_sharedAccountId);

  }

  if(m_allowAssociationHasBeenSet)
  {
   payload.WithBool("AllowAssociation", m_allowAssociation);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
