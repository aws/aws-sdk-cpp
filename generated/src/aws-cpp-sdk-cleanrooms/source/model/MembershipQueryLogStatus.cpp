/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/MembershipQueryLogStatus.h>
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
      namespace MembershipQueryLogStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        MembershipQueryLogStatus GetMembershipQueryLogStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return MembershipQueryLogStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return MembershipQueryLogStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MembershipQueryLogStatus>(hashCode);
          }

          return MembershipQueryLogStatus::NOT_SET;
        }

        Aws::String GetNameForMembershipQueryLogStatus(MembershipQueryLogStatus enumValue)
        {
          switch(enumValue)
          {
          case MembershipQueryLogStatus::NOT_SET:
            return {};
          case MembershipQueryLogStatus::ENABLED:
            return "ENABLED";
          case MembershipQueryLogStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MembershipQueryLogStatusMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
