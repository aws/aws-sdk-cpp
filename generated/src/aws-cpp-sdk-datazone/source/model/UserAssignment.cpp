/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UserAssignment.h>
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
      namespace UserAssignmentMapper
      {

        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");


        UserAssignment GetUserAssignmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return UserAssignment::AUTOMATIC;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return UserAssignment::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserAssignment>(hashCode);
          }

          return UserAssignment::NOT_SET;
        }

        Aws::String GetNameForUserAssignment(UserAssignment enumValue)
        {
          switch(enumValue)
          {
          case UserAssignment::NOT_SET:
            return {};
          case UserAssignment::AUTOMATIC:
            return "AUTOMATIC";
          case UserAssignment::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserAssignmentMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
