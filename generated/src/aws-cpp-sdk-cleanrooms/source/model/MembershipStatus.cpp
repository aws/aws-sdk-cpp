/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/MembershipStatus.h>
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
      namespace MembershipStatusMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t REMOVED_HASH = ConstExprHashingUtils::HashString("REMOVED");
        static constexpr uint32_t COLLABORATION_DELETED_HASH = ConstExprHashingUtils::HashString("COLLABORATION_DELETED");


        MembershipStatus GetMembershipStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return MembershipStatus::ACTIVE;
          }
          else if (hashCode == REMOVED_HASH)
          {
            return MembershipStatus::REMOVED;
          }
          else if (hashCode == COLLABORATION_DELETED_HASH)
          {
            return MembershipStatus::COLLABORATION_DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MembershipStatus>(hashCode);
          }

          return MembershipStatus::NOT_SET;
        }

        Aws::String GetNameForMembershipStatus(MembershipStatus enumValue)
        {
          switch(enumValue)
          {
          case MembershipStatus::NOT_SET:
            return {};
          case MembershipStatus::ACTIVE:
            return "ACTIVE";
          case MembershipStatus::REMOVED:
            return "REMOVED";
          case MembershipStatus::COLLABORATION_DELETED:
            return "COLLABORATION_DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MembershipStatusMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
