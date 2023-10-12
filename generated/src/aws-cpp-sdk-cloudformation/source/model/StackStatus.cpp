/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackStatus.h>
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
      namespace StackStatusMapper
      {

        static constexpr uint32_t CREATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CREATE_IN_PROGRESS");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t CREATE_COMPLETE_HASH = ConstExprHashingUtils::HashString("CREATE_COMPLETE");
        static constexpr uint32_t ROLLBACK_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("ROLLBACK_IN_PROGRESS");
        static constexpr uint32_t ROLLBACK_FAILED_HASH = ConstExprHashingUtils::HashString("ROLLBACK_FAILED");
        static constexpr uint32_t ROLLBACK_COMPLETE_HASH = ConstExprHashingUtils::HashString("ROLLBACK_COMPLETE");
        static constexpr uint32_t DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETE_IN_PROGRESS");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");
        static constexpr uint32_t DELETE_COMPLETE_HASH = ConstExprHashingUtils::HashString("DELETE_COMPLETE");
        static constexpr uint32_t UPDATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UPDATE_IN_PROGRESS");
        static constexpr uint32_t UPDATE_COMPLETE_CLEANUP_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UPDATE_COMPLETE_CLEANUP_IN_PROGRESS");
        static constexpr uint32_t UPDATE_COMPLETE_HASH = ConstExprHashingUtils::HashString("UPDATE_COMPLETE");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");
        static constexpr uint32_t UPDATE_ROLLBACK_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UPDATE_ROLLBACK_IN_PROGRESS");
        static constexpr uint32_t UPDATE_ROLLBACK_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_ROLLBACK_FAILED");
        static constexpr uint32_t UPDATE_ROLLBACK_COMPLETE_CLEANUP_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UPDATE_ROLLBACK_COMPLETE_CLEANUP_IN_PROGRESS");
        static constexpr uint32_t UPDATE_ROLLBACK_COMPLETE_HASH = ConstExprHashingUtils::HashString("UPDATE_ROLLBACK_COMPLETE");
        static constexpr uint32_t REVIEW_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("REVIEW_IN_PROGRESS");
        static constexpr uint32_t IMPORT_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IMPORT_IN_PROGRESS");
        static constexpr uint32_t IMPORT_COMPLETE_HASH = ConstExprHashingUtils::HashString("IMPORT_COMPLETE");
        static constexpr uint32_t IMPORT_ROLLBACK_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IMPORT_ROLLBACK_IN_PROGRESS");
        static constexpr uint32_t IMPORT_ROLLBACK_FAILED_HASH = ConstExprHashingUtils::HashString("IMPORT_ROLLBACK_FAILED");
        static constexpr uint32_t IMPORT_ROLLBACK_COMPLETE_HASH = ConstExprHashingUtils::HashString("IMPORT_ROLLBACK_COMPLETE");


        StackStatus GetStackStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return StackStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return StackStatus::CREATE_FAILED;
          }
          else if (hashCode == CREATE_COMPLETE_HASH)
          {
            return StackStatus::CREATE_COMPLETE;
          }
          else if (hashCode == ROLLBACK_IN_PROGRESS_HASH)
          {
            return StackStatus::ROLLBACK_IN_PROGRESS;
          }
          else if (hashCode == ROLLBACK_FAILED_HASH)
          {
            return StackStatus::ROLLBACK_FAILED;
          }
          else if (hashCode == ROLLBACK_COMPLETE_HASH)
          {
            return StackStatus::ROLLBACK_COMPLETE;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return StackStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return StackStatus::DELETE_FAILED;
          }
          else if (hashCode == DELETE_COMPLETE_HASH)
          {
            return StackStatus::DELETE_COMPLETE;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return StackStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_COMPLETE_CLEANUP_IN_PROGRESS_HASH)
          {
            return StackStatus::UPDATE_COMPLETE_CLEANUP_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_COMPLETE_HASH)
          {
            return StackStatus::UPDATE_COMPLETE;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return StackStatus::UPDATE_FAILED;
          }
          else if (hashCode == UPDATE_ROLLBACK_IN_PROGRESS_HASH)
          {
            return StackStatus::UPDATE_ROLLBACK_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_ROLLBACK_FAILED_HASH)
          {
            return StackStatus::UPDATE_ROLLBACK_FAILED;
          }
          else if (hashCode == UPDATE_ROLLBACK_COMPLETE_CLEANUP_IN_PROGRESS_HASH)
          {
            return StackStatus::UPDATE_ROLLBACK_COMPLETE_CLEANUP_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_ROLLBACK_COMPLETE_HASH)
          {
            return StackStatus::UPDATE_ROLLBACK_COMPLETE;
          }
          else if (hashCode == REVIEW_IN_PROGRESS_HASH)
          {
            return StackStatus::REVIEW_IN_PROGRESS;
          }
          else if (hashCode == IMPORT_IN_PROGRESS_HASH)
          {
            return StackStatus::IMPORT_IN_PROGRESS;
          }
          else if (hashCode == IMPORT_COMPLETE_HASH)
          {
            return StackStatus::IMPORT_COMPLETE;
          }
          else if (hashCode == IMPORT_ROLLBACK_IN_PROGRESS_HASH)
          {
            return StackStatus::IMPORT_ROLLBACK_IN_PROGRESS;
          }
          else if (hashCode == IMPORT_ROLLBACK_FAILED_HASH)
          {
            return StackStatus::IMPORT_ROLLBACK_FAILED;
          }
          else if (hashCode == IMPORT_ROLLBACK_COMPLETE_HASH)
          {
            return StackStatus::IMPORT_ROLLBACK_COMPLETE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackStatus>(hashCode);
          }

          return StackStatus::NOT_SET;
        }

        Aws::String GetNameForStackStatus(StackStatus enumValue)
        {
          switch(enumValue)
          {
          case StackStatus::NOT_SET:
            return {};
          case StackStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case StackStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case StackStatus::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case StackStatus::ROLLBACK_IN_PROGRESS:
            return "ROLLBACK_IN_PROGRESS";
          case StackStatus::ROLLBACK_FAILED:
            return "ROLLBACK_FAILED";
          case StackStatus::ROLLBACK_COMPLETE:
            return "ROLLBACK_COMPLETE";
          case StackStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case StackStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case StackStatus::DELETE_COMPLETE:
            return "DELETE_COMPLETE";
          case StackStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case StackStatus::UPDATE_COMPLETE_CLEANUP_IN_PROGRESS:
            return "UPDATE_COMPLETE_CLEANUP_IN_PROGRESS";
          case StackStatus::UPDATE_COMPLETE:
            return "UPDATE_COMPLETE";
          case StackStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case StackStatus::UPDATE_ROLLBACK_IN_PROGRESS:
            return "UPDATE_ROLLBACK_IN_PROGRESS";
          case StackStatus::UPDATE_ROLLBACK_FAILED:
            return "UPDATE_ROLLBACK_FAILED";
          case StackStatus::UPDATE_ROLLBACK_COMPLETE_CLEANUP_IN_PROGRESS:
            return "UPDATE_ROLLBACK_COMPLETE_CLEANUP_IN_PROGRESS";
          case StackStatus::UPDATE_ROLLBACK_COMPLETE:
            return "UPDATE_ROLLBACK_COMPLETE";
          case StackStatus::REVIEW_IN_PROGRESS:
            return "REVIEW_IN_PROGRESS";
          case StackStatus::IMPORT_IN_PROGRESS:
            return "IMPORT_IN_PROGRESS";
          case StackStatus::IMPORT_COMPLETE:
            return "IMPORT_COMPLETE";
          case StackStatus::IMPORT_ROLLBACK_IN_PROGRESS:
            return "IMPORT_ROLLBACK_IN_PROGRESS";
          case StackStatus::IMPORT_ROLLBACK_FAILED:
            return "IMPORT_ROLLBACK_FAILED";
          case StackStatus::IMPORT_ROLLBACK_COMPLETE:
            return "IMPORT_ROLLBACK_COMPLETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
