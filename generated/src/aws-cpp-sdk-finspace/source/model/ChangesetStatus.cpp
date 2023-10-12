/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/ChangesetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace finspace
  {
    namespace Model
    {
      namespace ChangesetStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t PROCESSING_HASH = ConstExprHashingUtils::HashString("PROCESSING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");


        ChangesetStatus GetChangesetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ChangesetStatus::PENDING;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return ChangesetStatus::PROCESSING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ChangesetStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ChangesetStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangesetStatus>(hashCode);
          }

          return ChangesetStatus::NOT_SET;
        }

        Aws::String GetNameForChangesetStatus(ChangesetStatus enumValue)
        {
          switch(enumValue)
          {
          case ChangesetStatus::NOT_SET:
            return {};
          case ChangesetStatus::PENDING:
            return "PENDING";
          case ChangesetStatus::PROCESSING:
            return "PROCESSING";
          case ChangesetStatus::FAILED:
            return "FAILED";
          case ChangesetStatus::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangesetStatusMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
