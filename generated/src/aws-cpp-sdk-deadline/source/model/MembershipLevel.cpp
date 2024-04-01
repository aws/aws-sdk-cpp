/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/MembershipLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace MembershipLevelMapper
      {

        static const int VIEWER_HASH = HashingUtils::HashString("VIEWER");
        static const int CONTRIBUTOR_HASH = HashingUtils::HashString("CONTRIBUTOR");
        static const int OWNER_HASH = HashingUtils::HashString("OWNER");
        static const int MANAGER_HASH = HashingUtils::HashString("MANAGER");


        MembershipLevel GetMembershipLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VIEWER_HASH)
          {
            return MembershipLevel::VIEWER;
          }
          else if (hashCode == CONTRIBUTOR_HASH)
          {
            return MembershipLevel::CONTRIBUTOR;
          }
          else if (hashCode == OWNER_HASH)
          {
            return MembershipLevel::OWNER;
          }
          else if (hashCode == MANAGER_HASH)
          {
            return MembershipLevel::MANAGER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MembershipLevel>(hashCode);
          }

          return MembershipLevel::NOT_SET;
        }

        Aws::String GetNameForMembershipLevel(MembershipLevel enumValue)
        {
          switch(enumValue)
          {
          case MembershipLevel::NOT_SET:
            return {};
          case MembershipLevel::VIEWER:
            return "VIEWER";
          case MembershipLevel::CONTRIBUTOR:
            return "CONTRIBUTOR";
          case MembershipLevel::OWNER:
            return "OWNER";
          case MembershipLevel::MANAGER:
            return "MANAGER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MembershipLevelMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
