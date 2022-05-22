/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Member.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

Member::Member() : 
    m_accountIdHasBeenSet(false),
    m_delegatedAdminAccountIdHasBeenSet(false),
    m_relationshipStatus(RelationshipStatus::NOT_SET),
    m_relationshipStatusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

Member::Member(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_delegatedAdminAccountIdHasBeenSet(false),
    m_relationshipStatus(RelationshipStatus::NOT_SET),
    m_relationshipStatusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

Member& Member::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("delegatedAdminAccountId"))
  {
    m_delegatedAdminAccountId = jsonValue.GetString("delegatedAdminAccountId");

    m_delegatedAdminAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationshipStatus"))
  {
    m_relationshipStatus = RelationshipStatusMapper::GetRelationshipStatusForName(jsonValue.GetString("relationshipStatus"));

    m_relationshipStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue Member::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_delegatedAdminAccountIdHasBeenSet)
  {
   payload.WithString("delegatedAdminAccountId", m_delegatedAdminAccountId);

  }

  if(m_relationshipStatusHasBeenSet)
  {
   payload.WithString("relationshipStatus", RelationshipStatusMapper::GetNameForRelationshipStatus(m_relationshipStatus));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
