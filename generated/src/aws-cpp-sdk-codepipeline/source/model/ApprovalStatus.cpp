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

        static constexpr uint32_t Approved_HASH = ConstExprHashingUtils::HashString("Approved");
        static constexpr uint32_t Rejected_HASH = ConstExprHashingUtils::HashString("Rejected");


        ApprovalStatus GetApprovalStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ApprovalStatus::NOT_SET:
            return {};
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
