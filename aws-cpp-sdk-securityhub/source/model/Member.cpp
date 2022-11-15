/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Member.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Member::Member() : 
    m_accountIdHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_administratorIdHasBeenSet(false),
    m_memberStatusHasBeenSet(false),
    m_invitedAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

Member::Member(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_administratorIdHasBeenSet(false),
    m_memberStatusHasBeenSet(false),
    m_invitedAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

Member& Member::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetString("Email");

    m_emailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdministratorId"))
  {
    m_administratorId = jsonValue.GetString("AdministratorId");

    m_administratorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemberStatus"))
  {
    m_memberStatus = jsonValue.GetString("MemberStatus");

    m_memberStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvitedAt"))
  {
    m_invitedAt = jsonValue.GetString("InvitedAt");

    m_invitedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetString("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue Member::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_administratorIdHasBeenSet)
  {
   payload.WithString("AdministratorId", m_administratorId);

  }

  if(m_memberStatusHasBeenSet)
  {
   payload.WithString("MemberStatus", m_memberStatus);

  }

  if(m_invitedAtHasBeenSet)
  {
   payload.WithString("InvitedAt", m_invitedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
