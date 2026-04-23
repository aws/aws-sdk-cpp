/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_masterIdHasBeenSet(false),
    m_memberStatusHasBeenSet(false),
    m_invitedAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

Member::Member(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_masterIdHasBeenSet(false),
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

  if(jsonValue.ValueExists("MasterId"))
  {
    m_masterId = jsonValue.GetString("MasterId");

    m_masterIdHasBeenSet = true;
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

  if(m_masterIdHasBeenSet)
  {
   payload.WithString("MasterId", m_masterId);

  }

  if(m_memberStatusHasBeenSet)
  {
   payload.WithString("MemberStatus", m_memberStatus);

  }

  if(m_invitedAtHasBeenSet)
  {
   payload.WithString("InvitedAt", m_invitedAt.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
