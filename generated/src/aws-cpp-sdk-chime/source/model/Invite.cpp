/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
