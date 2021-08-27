/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/CreateRoomMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRoomMembershipRequest::CreateRoomMembershipRequest() : 
    m_accountIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_role(RoomMembershipRole::NOT_SET),
    m_roleHasBeenSet(false)
{
}

Aws::String CreateRoomMembershipRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}




