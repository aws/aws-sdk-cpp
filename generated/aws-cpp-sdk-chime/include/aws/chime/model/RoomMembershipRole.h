/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class RoomMembershipRole
  {
    NOT_SET,
    Administrator,
    Member
  };

namespace RoomMembershipRoleMapper
{
AWS_CHIME_API RoomMembershipRole GetRoomMembershipRoleForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForRoomMembershipRole(RoomMembershipRole value);
} // namespace RoomMembershipRoleMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
