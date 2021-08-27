/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/UpdateRoomMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRoomMembershipRequest::UpdateRoomMembershipRequest() : 
    m_accountIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_role(RoomMembershipRole::NOT_SET),
    m_roleHasBeenSet(false)
{
}

Aws::String UpdateRoomMembershipRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", RoomMembershipRoleMapper::GetNameForRoomMembershipRole(m_role));
  }

  return payload.View().WriteReadable();
}




