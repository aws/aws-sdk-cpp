/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UserProfileStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace UserProfileStatusMapper
      {

        static const int ASSIGNED_HASH = HashingUtils::HashString("ASSIGNED");
        static const int NOT_ASSIGNED_HASH = HashingUtils::HashString("NOT_ASSIGNED");
        static const int ACTIVATED_HASH = HashingUtils::HashString("ACTIVATED");
        static const int DEACTIVATED_HASH = HashingUtils::HashString("DEACTIVATED");


        UserProfileStatus GetUserProfileStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSIGNED_HASH)
          {
            return UserProfileStatus::ASSIGNED;
          }
          else if (hashCode == NOT_ASSIGNED_HASH)
          {
            return UserProfileStatus::NOT_ASSIGNED;
          }
          else if (hashCode == ACTIVATED_HASH)
          {
            return UserProfileStatus::ACTIVATED;
          }
          else if (hashCode == DEACTIVATED_HASH)
          {
            return UserProfileStatus::DEACTIVATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserProfileStatus>(hashCode);
          }

          return UserProfileStatus::NOT_SET;
        }

        Aws::String GetNameForUserProfileStatus(UserProfileStatus enumValue)
        {
          switch(enumValue)
          {
          case UserProfileStatus::NOT_SET:
            return {};
          case UserProfileStatus::ASSIGNED:
            return "ASSIGNED";
          case UserProfileStatus::NOT_ASSIGNED:
            return "NOT_ASSIGNED";
          case UserProfileStatus::ACTIVATED:
            return "ACTIVATED";
          case UserProfileStatus::DEACTIVATED:
            return "DEACTIVATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserProfileStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
