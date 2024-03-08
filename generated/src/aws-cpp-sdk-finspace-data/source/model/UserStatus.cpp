/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/UserStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FinSpaceData
  {
    namespace Model
    {
      namespace UserStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        UserStatus GetUserStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return UserStatus::CREATING;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return UserStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return UserStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserStatus>(hashCode);
          }

          return UserStatus::NOT_SET;
        }

        Aws::String GetNameForUserStatus(UserStatus enumValue)
        {
          switch(enumValue)
          {
          case UserStatus::NOT_SET:
            return {};
          case UserStatus::CREATING:
            return "CREATING";
          case UserStatus::ENABLED:
            return "ENABLED";
          case UserStatus::DISABLED:
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

      } // namespace UserStatusMapper
    } // namespace Model
  } // namespace FinSpaceData
} // namespace Aws
