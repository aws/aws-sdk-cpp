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

#include <aws/securityhub/model/Invitation.h>
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

Invitation::Invitation() : 
    m_accountIdHasBeenSet(false),
    m_invitationIdHasBeenSet(false),
    m_invitedAtHasBeenSet(false),
    m_memberStatusHasBeenSet(false)
{
}

Invitation::Invitation(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_invitationIdHasBeenSet(false),
    m_invitedAtHasBeenSet(false),
    m_memberStatusHasBeenSet(false)
{
  *this = jsonValue;
}

Invitation& Invitation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvitationId"))
  {
    m_invitationId = jsonValue.GetString("InvitationId");

    m_invitationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvitedAt"))
  {
    m_invitedAt = jsonValue.GetString("InvitedAt");

    m_invitedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemberStatus"))
  {
    m_memberStatus = jsonValue.GetString("MemberStatus");

    m_memberStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue Invitation::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_invitationIdHasBeenSet)
  {
   payload.WithString("InvitationId", m_invitationId);

  }

  if(m_invitedAtHasBeenSet)
  {
   payload.WithString("InvitedAt", m_invitedAt.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_memberStatusHasBeenSet)
  {
   payload.WithString("MemberStatus", m_memberStatus);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
