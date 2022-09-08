/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/Invitation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

Invitation::Invitation() : 
    m_accountIdHasBeenSet(false),
    m_invitationIdHasBeenSet(false),
    m_invitedAtHasBeenSet(false),
    m_relationshipStatus(RelationshipStatus::NOT_SET),
    m_relationshipStatusHasBeenSet(false)
{
}

Invitation::Invitation(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_invitationIdHasBeenSet(false),
    m_invitedAtHasBeenSet(false),
    m_relationshipStatus(RelationshipStatus::NOT_SET),
    m_relationshipStatusHasBeenSet(false)
{
  *this = jsonValue;
}

Invitation& Invitation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("invitationId"))
  {
    m_invitationId = jsonValue.GetString("invitationId");

    m_invitationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("invitedAt"))
  {
    m_invitedAt = jsonValue.GetString("invitedAt");

    m_invitedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationshipStatus"))
  {
    m_relationshipStatus = RelationshipStatusMapper::GetRelationshipStatusForName(jsonValue.GetString("relationshipStatus"));

    m_relationshipStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue Invitation::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_invitationIdHasBeenSet)
  {
   payload.WithString("invitationId", m_invitationId);

  }

  if(m_invitedAtHasBeenSet)
  {
   payload.WithString("invitedAt", m_invitedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_relationshipStatusHasBeenSet)
  {
   payload.WithString("relationshipStatus", RelationshipStatusMapper::GetNameForRelationshipStatus(m_relationshipStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
