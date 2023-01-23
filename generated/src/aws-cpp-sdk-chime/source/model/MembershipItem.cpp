/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/MembershipItem.h>
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

MembershipItem::MembershipItem() : 
    m_memberIdHasBeenSet(false),
    m_role(RoomMembershipRole::NOT_SET),
    m_roleHasBeenSet(false)
{
}

MembershipItem::MembershipItem(JsonView jsonValue) : 
    m_memberIdHasBeenSet(false),
    m_role(RoomMembershipRole::NOT_SET),
    m_roleHasBeenSet(false)
{
  *this = jsonValue;
}

MembershipItem& MembershipItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MemberId"))
  {
    m_memberId = jsonValue.GetString("MemberId");

    m_memberIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = RoomMembershipRoleMapper::GetRoomMembershipRoleForName(jsonValue.GetString("Role"));

    m_roleHasBeenSet = true;
  }

  return *this;
}

JsonValue MembershipItem::Jsonize() const
{
  JsonValue payload;

  if(m_memberIdHasBeenSet)
  {
   payload.WithString("MemberId", m_memberId);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", RoomMembershipRoleMapper::GetNameForRoomMembershipRole(m_role));
  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
