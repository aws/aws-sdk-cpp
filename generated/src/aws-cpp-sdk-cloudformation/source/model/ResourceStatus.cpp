/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ResourceStatus.h>
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
      namespace ResourceStatusMapper
      {

        static constexpr uint32_t CREATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CREATE_IN_PROGRESS");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t CREATE_COMPLETE_HASH = ConstExprHashingUtils::HashString("CREATE_COMPLETE");
        static constexpr uint32_t DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETE_IN_PROGRESS");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");
        static constexpr uint32_t DELETE_COMPLETE_HASH = ConstExprHashingUtils::HashString("DELETE_COMPLETE");
        static constexpr uint32_t DELETE_SKIPPED_HASH = ConstExprHashingUtils::HashString("DELETE_SKIPPED");
        static constexpr uint32_t UPDATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UPDATE_IN_PROGRESS");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");
        static constexpr uint32_t UPDATE_COMPLETE_HASH = ConstExprHashingUtils::HashString("UPDATE_COMPLETE");
        static constexpr uint32_t IMPORT_FAILED_HASH = ConstExprHashingUtils::HashString("IMPORT_FAILED");
        static constexpr uint32_t IMPORT_COMPLETE_HASH = ConstExprHashingUtils::HashString("IMPORT_COMPLETE");
        static constexpr uint32_t IMPORT_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IMPORT_IN_PROGRESS");
        static constexpr uint32_t IMPORT_ROLLBACK_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IMPORT_ROLLBACK_IN_PROGRESS");
        static constexpr uint32_t IMPORT_ROLLBACK_FAILED_HASH = ConstExprHashingUtils::HashString("IMPORT_ROLLBACK_FAILED");
        static constexpr uint32_t IMPORT_ROLLBACK_COMPLETE_HASH = ConstExprHashingUtils::HashString("IMPORT_ROLLBACK_COMPLETE");
        static constexpr uint32_t UPDATE_ROLLBACK_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UPDATE_ROLLBACK_IN_PROGRESS");
        static constexpr uint32_t UPDATE_ROLLBACK_COMPLETE_HASH = ConstExprHashingUtils::HashString("UPDATE_ROLLBACK_COMPLETE");
        static constexpr uint32_t UPDATE_ROLLBACK_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_ROLLBACK_FAILED");
        static constexpr uint32_t ROLLBACK_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("ROLLBACK_IN_PROGRESS");
        static constexpr uint32_t ROLLBACK_COMPLETE_HASH = ConstExprHashingUtils::HashString("ROLLBACK_COMPLETE");
        static constexpr uint32_t ROLLBACK_FAILED_HASH = ConstExprHashingUtils::HashString("ROLLBACK_FAILED");


        ResourceStatus GetResourceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return ResourceStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ResourceStatus::CREATE_FAILED;
          }
          else if (hashCode == CREATE_COMPLETE_HASH)
          {
            return ResourceStatus::CREATE_COMPLETE;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return ResourceStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ResourceStatus::DELETE_FAILED;
          }
          else if (hashCode == DELETE_COMPLETE_HASH)
          {
            return ResourceStatus::DELETE_COMPLETE;
          }
          else if (hashCode == DELETE_SKIPPED_HASH)
          {
            return ResourceStatus::DELETE_SKIPPED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return ResourceStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ResourceStatus::UPDATE_FAILED;
          }
          else if (hashCode == UPDATE_COMPLETE_HASH)
          {
            return ResourceStatus::UPDATE_COMPLETE;
          }
          else if (hashCode == IMPORT_FAILED_HASH)
          {
            return ResourceStatus::IMPORT_FAILED;
          }
          else if (hashCode == IMPORT_COMPLETE_HASH)
          {
            return ResourceStatus::IMPORT_COMPLETE;
          }
          else if (hashCode == IMPORT_IN_PROGRESS_HASH)
          {
            return ResourceStatus::IMPORT_IN_PROGRESS;
          }
          else if (hashCode == IMPORT_ROLLBACK_IN_PROGRESS_HASH)
          {
            return ResourceStatus::IMPORT_ROLLBACK_IN_PROGRESS;
          }
          else if (hashCode == IMPORT_ROLLBACK_FAILED_HASH)
          {
            return ResourceStatus::IMPORT_ROLLBACK_FAILED;
          }
          else if (hashCode == IMPORT_ROLLBACK_COMPLETE_HASH)
          {
            return ResourceStatus::IMPORT_ROLLBACK_COMPLETE;
          }
          else if (hashCode == UPDATE_ROLLBACK_IN_PROGRESS_HASH)
          {
            return ResourceStatus::UPDATE_ROLLBACK_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_ROLLBACK_COMPLETE_HASH)
          {
            return ResourceStatus::UPDATE_ROLLBACK_COMPLETE;
          }
          else if (hashCode == UPDATE_ROLLBACK_FAILED_HASH)
          {
            return ResourceStatus::UPDATE_ROLLBACK_FAILED;
          }
          else if (hashCode == ROLLBACK_IN_PROGRESS_HASH)
          {
            return ResourceStatus::ROLLBACK_IN_PROGRESS;
          }
          else if (hashCode == ROLLBACK_COMPLETE_HASH)
          {
            return ResourceStatus::ROLLBACK_COMPLETE;
          }
          else if (hashCode == ROLLBACK_FAILED_HASH)
          {
            return ResourceStatus::ROLLBACK_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceStatus>(hashCode);
          }

          return ResourceStatus::NOT_SET;
        }

        Aws::String GetNameForResourceStatus(ResourceStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceStatus::NOT_SET:
            return {};
          case ResourceStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case ResourceStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case ResourceStatus::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case ResourceStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case ResourceStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case ResourceStatus::DELETE_COMPLETE:
            return "DELETE_COMPLETE";
          case ResourceStatus::DELETE_SKIPPED:
            return "DELETE_SKIPPED";
          case ResourceStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case ResourceStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case ResourceStatus::UPDATE_COMPLETE:
            return "UPDATE_COMPLETE";
          case ResourceStatus::IMPORT_FAILED:
            return "IMPORT_FAILED";
          case ResourceStatus::IMPORT_COMPLETE:
            return "IMPORT_COMPLETE";
          case ResourceStatus::IMPORT_IN_PROGRESS:
            return "IMPORT_IN_PROGRESS";
          case ResourceStatus::IMPORT_ROLLBACK_IN_PROGRESS:
            return "IMPORT_ROLLBACK_IN_PROGRESS";
          case ResourceStatus::IMPORT_ROLLBACK_FAILED:
            return "IMPORT_ROLLBACK_FAILED";
          case ResourceStatus::IMPORT_ROLLBACK_COMPLETE:
            return "IMPORT_ROLLBACK_COMPLETE";
          case ResourceStatus::UPDATE_ROLLBACK_IN_PROGRESS:
            return "UPDATE_ROLLBACK_IN_PROGRESS";
          case ResourceStatus::UPDATE_ROLLBACK_COMPLETE:
            return "UPDATE_ROLLBACK_COMPLETE";
          case ResourceStatus::UPDATE_ROLLBACK_FAILED:
            return "UPDATE_ROLLBACK_FAILED";
          case ResourceStatus::ROLLBACK_IN_PROGRESS:
            return "ROLLBACK_IN_PROGRESS";
          case ResourceStatus::ROLLBACK_COMPLETE:
            return "ROLLBACK_COMPLETE";
          case ResourceStatus::ROLLBACK_FAILED:
            return "ROLLBACK_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
