/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/Member.h>
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

Member::Member() : 
    m_accountIdHasBeenSet(false),
    m_administratorAccountIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_invitedAtHasBeenSet(false),
    m_masterAccountIdHasBeenSet(false),
    m_relationshipStatus(RelationshipStatus::NOT_SET),
    m_relationshipStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

Member::Member(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_administratorAccountIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_invitedAtHasBeenSet(false),
    m_masterAccountIdHasBeenSet(false),
    m_relationshipStatus(RelationshipStatus::NOT_SET),
    m_relationshipStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
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

  if(jsonValue.ValueExists("administratorAccountId"))
  {
    m_administratorAccountId = jsonValue.GetString("administratorAccountId");

    m_administratorAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetString("email");

    m_emailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("invitedAt"))
  {
    m_invitedAt = jsonValue.GetString("invitedAt");

    m_invitedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("masterAccountId"))
  {
    m_masterAccountId = jsonValue.GetString("masterAccountId");

    m_masterAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationshipStatus"))
  {
    m_relationshipStatus = RelationshipStatusMapper::GetRelationshipStatusForName(jsonValue.GetString("relationshipStatus"));

    m_relationshipStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

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

  if(m_administratorAccountIdHasBeenSet)
  {
   payload.WithString("administratorAccountId", m_administratorAccountId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  if(m_invitedAtHasBeenSet)
  {
   payload.WithString("invitedAt", m_invitedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_masterAccountIdHasBeenSet)
  {
   payload.WithString("masterAccountId", m_masterAccountId);

  }

  if(m_relationshipStatusHasBeenSet)
  {
   payload.WithString("relationshipStatus", RelationshipStatusMapper::GetNameForRelationshipStatus(m_relationshipStatus));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
