/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GroupProfileStatus.h>
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
      namespace GroupProfileStatusMapper
      {

        static const int ASSIGNED_HASH = HashingUtils::HashString("ASSIGNED");
        static const int NOT_ASSIGNED_HASH = HashingUtils::HashString("NOT_ASSIGNED");


        GroupProfileStatus GetGroupProfileStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSIGNED_HASH)
          {
            return GroupProfileStatus::ASSIGNED;
          }
          else if (hashCode == NOT_ASSIGNED_HASH)
          {
            return GroupProfileStatus::NOT_ASSIGNED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupProfileStatus>(hashCode);
          }

          return GroupProfileStatus::NOT_SET;
        }

        Aws::String GetNameForGroupProfileStatus(GroupProfileStatus enumValue)
        {
          switch(enumValue)
          {
          case GroupProfileStatus::NOT_SET:
            return {};
          case GroupProfileStatus::ASSIGNED:
            return "ASSIGNED";
          case GroupProfileStatus::NOT_ASSIGNED:
            return "NOT_ASSIGNED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupProfileStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
