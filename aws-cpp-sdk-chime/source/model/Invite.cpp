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

#include <aws/chime/model/Invite.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

Invite::Invite() : 
    m_inviteIdHasBeenSet(false),
    m_status(InviteStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_emailStatus(EmailStatus::NOT_SET),
    m_emailStatusHasBeenSet(false)
{
}

Invite::Invite(JsonView jsonValue) : 
    m_inviteIdHasBeenSet(false),
    m_status(InviteStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_emailStatus(EmailStatus::NOT_SET),
    m_emailStatusHasBeenSet(false)
{
  *this = jsonValue;
}

Invite& Invite::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InviteId"))
  {
    m_inviteId = jsonValue.GetString("InviteId");

    m_inviteIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = InviteStatusMapper::GetInviteStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailAddress"))
  {
    m_emailAddress = jsonValue.GetString("EmailAddress");

    m_emailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailStatus"))
  {
    m_emailStatus = EmailStatusMapper::GetEmailStatusForName(jsonValue.GetString("EmailStatus"));

    m_emailStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue Invite::Jsonize() const
{
  JsonValue payload;

  if(m_inviteIdHasBeenSet)
  {
   payload.WithString("InviteId", m_inviteId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", InviteStatusMapper::GetNameForInviteStatus(m_status));
  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  if(m_emailStatusHasBeenSet)
  {
   payload.WithString("EmailStatus", EmailStatusMapper::GetNameForEmailStatus(m_emailStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
