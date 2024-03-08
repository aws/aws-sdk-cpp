/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/FilterableMemberStatus.h>
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
      namespace FilterableMemberStatusMapper
      {

        static const int INVITED_HASH = HashingUtils::HashString("INVITED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        FilterableMemberStatus GetFilterableMemberStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVITED_HASH)
          {
            return FilterableMemberStatus::INVITED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return FilterableMemberStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterableMemberStatus>(hashCode);
          }

          return FilterableMemberStatus::NOT_SET;
        }

        Aws::String GetNameForFilterableMemberStatus(FilterableMemberStatus enumValue)
        {
          switch(enumValue)
          {
          case FilterableMemberStatus::NOT_SET:
            return {};
          case FilterableMemberStatus::INVITED:
            return "INVITED";
          case FilterableMemberStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterableMemberStatusMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
