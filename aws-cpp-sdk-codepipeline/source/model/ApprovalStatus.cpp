/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ApprovalStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace ApprovalStatusMapper
      {

        static const int Approved_HASH = HashingUtils::HashString("Approved");
        static const int Rejected_HASH = HashingUtils::HashString("Rejected");


        ApprovalStatus GetApprovalStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Approved_HASH)
          {
            return ApprovalStatus::Approved;
          }
          else if (hashCode == Rejected_HASH)
          {
            return ApprovalStatus::Rejected;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApprovalStatus>(hashCode);
          }

          return ApprovalStatus::NOT_SET;
        }

        Aws::String GetNameForApprovalStatus(ApprovalStatus enumValue)
        {
          switch(enumValue)
          {
          case ApprovalStatus::Approved:
            return "Approved";
          case ApprovalStatus::Rejected:
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

      } // namespace ApprovalStatusMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
