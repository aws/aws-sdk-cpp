/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/PermissionGroupMembershipStatus.h>
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
      namespace PermissionGroupMembershipStatusMapper
      {

        static const int ADDITION_IN_PROGRESS_HASH = HashingUtils::HashString("ADDITION_IN_PROGRESS");
        static const int ADDITION_SUCCESS_HASH = HashingUtils::HashString("ADDITION_SUCCESS");
        static const int REMOVAL_IN_PROGRESS_HASH = HashingUtils::HashString("REMOVAL_IN_PROGRESS");


        PermissionGroupMembershipStatus GetPermissionGroupMembershipStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADDITION_IN_PROGRESS_HASH)
          {
            return PermissionGroupMembershipStatus::ADDITION_IN_PROGRESS;
          }
          else if (hashCode == ADDITION_SUCCESS_HASH)
          {
            return PermissionGroupMembershipStatus::ADDITION_SUCCESS;
          }
          else if (hashCode == REMOVAL_IN_PROGRESS_HASH)
          {
            return PermissionGroupMembershipStatus::REMOVAL_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PermissionGroupMembershipStatus>(hashCode);
          }

          return PermissionGroupMembershipStatus::NOT_SET;
        }

        Aws::String GetNameForPermissionGroupMembershipStatus(PermissionGroupMembershipStatus enumValue)
        {
          switch(enumValue)
          {
          case PermissionGroupMembershipStatus::NOT_SET:
            return {};
          case PermissionGroupMembershipStatus::ADDITION_IN_PROGRESS:
            return "ADDITION_IN_PROGRESS";
          case PermissionGroupMembershipStatus::ADDITION_SUCCESS:
            return "ADDITION_SUCCESS";
          case PermissionGroupMembershipStatus::REMOVAL_IN_PROGRESS:
            return "REMOVAL_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionGroupMembershipStatusMapper
    } // namespace Model
  } // namespace FinSpaceData
} // namespace Aws
