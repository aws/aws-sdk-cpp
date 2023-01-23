/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/RoomMembership.h>
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

RoomMembership::RoomMembership() : 
    m_roomIdHasBeenSet(false),
    m_memberHasBeenSet(false),
    m_role(RoomMembershipRole::NOT_SET),
    m_roleHasBeenSet(false),
    m_invitedByHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
}

RoomMembership::RoomMembership(JsonView jsonValue) : 
    m_roomIdHasBeenSet(false),
    m_memberHasBeenSet(false),
    m_role(RoomMembershipRole::NOT_SET),
    m_roleHasBeenSet(false),
    m_invitedByHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

RoomMembership& RoomMembership::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoomId"))
  {
    m_roomId = jsonValue.GetString("RoomId");

    m_roomIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Member"))
  {
    m_member = jsonValue.GetObject("Member");

    m_memberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = RoomMembershipRoleMapper::GetRoomMembershipRoleForName(jsonValue.GetString("Role"));

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvitedBy"))
  {
    m_invitedBy = jsonValue.GetString("InvitedBy");

    m_invitedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetString("UpdatedTimestamp");

    m_updatedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue RoomMembership::Jsonize() const
{
  JsonValue payload;

  if(m_roomIdHasBeenSet)
  {
   payload.WithString("RoomId", m_roomId);

  }

  if(m_memberHasBeenSet)
  {
   payload.WithObject("Member", m_member.Jsonize());

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", RoomMembershipRoleMapper::GetNameForRoomMembershipRole(m_role));
  }

  if(m_invitedByHasBeenSet)
  {
   payload.WithString("InvitedBy", m_invitedBy);

  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
