/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ChangeSetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace ChangeSetStatusMapper
      {

        static constexpr uint32_t CREATE_PENDING_HASH = ConstExprHashingUtils::HashString("CREATE_PENDING");
        static constexpr uint32_t CREATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CREATE_IN_PROGRESS");
        static constexpr uint32_t CREATE_COMPLETE_HASH = ConstExprHashingUtils::HashString("CREATE_COMPLETE");
        static constexpr uint32_t DELETE_PENDING_HASH = ConstExprHashingUtils::HashString("DELETE_PENDING");
        static constexpr uint32_t DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETE_IN_PROGRESS");
        static constexpr uint32_t DELETE_COMPLETE_HASH = ConstExprHashingUtils::HashString("DELETE_COMPLETE");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        ChangeSetStatus GetChangeSetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_PENDING_HASH)
          {
            return ChangeSetStatus::CREATE_PENDING;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return ChangeSetStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_COMPLETE_HASH)
          {
            return ChangeSetStatus::CREATE_COMPLETE;
          }
          else if (hashCode == DELETE_PENDING_HASH)
          {
            return ChangeSetStatus::DELETE_PENDING;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return ChangeSetStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_COMPLETE_HASH)
          {
            return ChangeSetStatus::DELETE_COMPLETE;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ChangeSetStatus::DELETE_FAILED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ChangeSetStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeSetStatus>(hashCode);
          }

          return ChangeSetStatus::NOT_SET;
        }

        Aws::String GetNameForChangeSetStatus(ChangeSetStatus enumValue)
        {
          switch(enumValue)
          {
          case ChangeSetStatus::NOT_SET:
            return {};
          case ChangeSetStatus::CREATE_PENDING:
            return "CREATE_PENDING";
          case ChangeSetStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case ChangeSetStatus::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case ChangeSetStatus::DELETE_PENDING:
            return "DELETE_PENDING";
          case ChangeSetStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case ChangeSetStatus::DELETE_COMPLETE:
            return "DELETE_COMPLETE";
          case ChangeSetStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case ChangeSetStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangeSetStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
