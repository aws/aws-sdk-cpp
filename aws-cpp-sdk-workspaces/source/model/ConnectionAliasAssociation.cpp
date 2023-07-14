/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ConnectionAliasAssociation.h>
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

ConnectionAliasAssociation::ConnectionAliasAssociation() : 
    m_associationStatus(AssociationStatus::NOT_SET),
    m_associationStatusHasBeenSet(false),
    m_associatedAccountIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_connectionIdentifierHasBeenSet(false)
{
}

ConnectionAliasAssociation::ConnectionAliasAssociation(JsonView jsonValue) : 
    m_associationStatus(AssociationStatus::NOT_SET),
    m_associationStatusHasBeenSet(false),
    m_associatedAccountIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_connectionIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionAliasAssociation& ConnectionAliasAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociationStatus"))
  {
    m_associationStatus = AssociationStatusMapper::GetAssociationStatusForName(jsonValue.GetString("AssociationStatus"));

    m_associationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociatedAccountId"))
  {
    m_associatedAccountId = jsonValue.GetString("AssociatedAccountId");

    m_associatedAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionIdentifier"))
  {
    m_connectionIdentifier = jsonValue.GetString("ConnectionIdentifier");

    m_connectionIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionAliasAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_associationStatusHasBeenSet)
  {
   payload.WithString("AssociationStatus", AssociationStatusMapper::GetNameForAssociationStatus(m_associationStatus));
  }

  if(m_associatedAccountIdHasBeenSet)
  {
   payload.WithString("AssociatedAccountId", m_associatedAccountId);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_connectionIdentifierHasBeenSet)
  {
   payload.WithString("ConnectionIdentifier", m_connectionIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
