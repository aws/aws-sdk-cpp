/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/RoomMembershipRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace RoomMembershipRoleMapper
      {

        static const int Administrator_HASH = HashingUtils::HashString("Administrator");
        static const int Member_HASH = HashingUtils::HashString("Member");


        RoomMembershipRole GetRoomMembershipRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Administrator_HASH)
          {
            return RoomMembershipRole::Administrator;
          }
          else if (hashCode == Member_HASH)
          {
            return RoomMembershipRole::Member;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RoomMembershipRole>(hashCode);
          }

          return RoomMembershipRole::NOT_SET;
        }

        Aws::String GetNameForRoomMembershipRole(RoomMembershipRole enumValue)
        {
          switch(enumValue)
          {
          case RoomMembershipRole::Administrator:
            return "Administrator";
          case RoomMembershipRole::Member:
            return "Member";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RoomMembershipRoleMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
