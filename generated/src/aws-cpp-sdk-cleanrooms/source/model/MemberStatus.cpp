/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/MemberStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace MemberStatusMapper
      {

        static const int INVITED_HASH = HashingUtils::HashString("INVITED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int LEFT_HASH = HashingUtils::HashString("LEFT");
        static const int REMOVED_HASH = HashingUtils::HashString("REMOVED");


        MemberStatus GetMemberStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVITED_HASH)
          {
            return MemberStatus::INVITED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return MemberStatus::ACTIVE;
          }
          else if (hashCode == LEFT_HASH)
          {
            return MemberStatus::LEFT;
          }
          else if (hashCode == REMOVED_HASH)
          {
            return MemberStatus::REMOVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemberStatus>(hashCode);
          }

          return MemberStatus::NOT_SET;
        }

        Aws::String GetNameForMemberStatus(MemberStatus enumValue)
        {
          switch(enumValue)
          {
          case MemberStatus::NOT_SET:
            return {};
          case MemberStatus::INVITED:
            return "INVITED";
          case MemberStatus::ACTIVE:
            return "ACTIVE";
          case MemberStatus::LEFT:
            return "LEFT";
          case MemberStatus::REMOVED:
            return "REMOVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MemberStatusMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
