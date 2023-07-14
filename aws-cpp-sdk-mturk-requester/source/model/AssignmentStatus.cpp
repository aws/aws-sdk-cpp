/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/AssignmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MTurk
  {
    namespace Model
    {
      namespace AssignmentStatusMapper
      {

        static const int Submitted_HASH = HashingUtils::HashString("Submitted");
        static const int Approved_HASH = HashingUtils::HashString("Approved");
        static const int Rejected_HASH = HashingUtils::HashString("Rejected");


        AssignmentStatus GetAssignmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Submitted_HASH)
          {
            return AssignmentStatus::Submitted;
          }
          else if (hashCode == Approved_HASH)
          {
            return AssignmentStatus::Approved;
          }
          else if (hashCode == Rejected_HASH)
          {
            return AssignmentStatus::Rejected;
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
          case AssignmentStatus::Submitted:
            return "Submitted";
          case AssignmentStatus::Approved:
            return "Approved";
          case AssignmentStatus::Rejected:
            return "Rejected";
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
  } // namespace MTurk
} // namespace Aws
