/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssignmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace AssignmentStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AssignmentStatus GetAssignmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AssignmentStatus::ENABLED;
          }
          else if (hashCode == DRAFT_HASH)
          {
            return AssignmentStatus::DRAFT;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AssignmentStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssignmentStatus>(hashCode);
          }

          return AssignmentStatus::NOT_SET;
        }

        Aws::String GetNameForAssignmentStatus(AssignmentStatus enumValue)
        {
          switch(enumValue)
          {
          case AssignmentStatus::ENABLED:
            return "ENABLED";
          case AssignmentStatus::DRAFT:
            return "DRAFT";
          case AssignmentStatus::DISABLED:
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

      } // namespace AssignmentStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
