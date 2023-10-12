/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/DatasetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutforVision
  {
    namespace Model
    {
      namespace DatasetStatusMapper
      {

        static constexpr uint32_t CREATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CREATE_IN_PROGRESS");
        static constexpr uint32_t CREATE_COMPLETE_HASH = ConstExprHashingUtils::HashString("CREATE_COMPLETE");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t UPDATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UPDATE_IN_PROGRESS");
        static constexpr uint32_t UPDATE_COMPLETE_HASH = ConstExprHashingUtils::HashString("UPDATE_COMPLETE");
        static constexpr uint32_t UPDATE_FAILED_ROLLBACK_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED_ROLLBACK_IN_PROGRESS");
        static constexpr uint32_t UPDATE_FAILED_ROLLBACK_COMPLETE_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED_ROLLBACK_COMPLETE");
        static constexpr uint32_t DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETE_IN_PROGRESS");
        static constexpr uint32_t DELETE_COMPLETE_HASH = ConstExprHashingUtils::HashString("DELETE_COMPLETE");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");


        DatasetStatus GetDatasetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return DatasetStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_COMPLETE_HASH)
          {
            return DatasetStatus::CREATE_COMPLETE;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return DatasetStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return DatasetStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_COMPLETE_HASH)
          {
            return DatasetStatus::UPDATE_COMPLETE;
          }
          else if (hashCode == UPDATE_FAILED_ROLLBACK_IN_PROGRESS_HASH)
          {
            return DatasetStatus::UPDATE_FAILED_ROLLBACK_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_FAILED_ROLLBACK_COMPLETE_HASH)
          {
            return DatasetStatus::UPDATE_FAILED_ROLLBACK_COMPLETE;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return DatasetStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_COMPLETE_HASH)
          {
            return DatasetStatus::DELETE_COMPLETE;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return DatasetStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatasetStatus>(hashCode);
          }

          return DatasetStatus::NOT_SET;
        }

        Aws::String GetNameForDatasetStatus(DatasetStatus enumValue)
        {
          switch(enumValue)
          {
          case DatasetStatus::NOT_SET:
            return {};
          case DatasetStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case DatasetStatus::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case DatasetStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case DatasetStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case DatasetStatus::UPDATE_COMPLETE:
            return "UPDATE_COMPLETE";
          case DatasetStatus::UPDATE_FAILED_ROLLBACK_IN_PROGRESS:
            return "UPDATE_FAILED_ROLLBACK_IN_PROGRESS";
          case DatasetStatus::UPDATE_FAILED_ROLLBACK_COMPLETE:
            return "UPDATE_FAILED_ROLLBACK_COMPLETE";
          case DatasetStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case DatasetStatus::DELETE_COMPLETE:
            return "DELETE_COMPLETE";
          case DatasetStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatasetStatusMapper
    } // namespace Model
  } // namespace LookoutforVision
} // namespace Aws
