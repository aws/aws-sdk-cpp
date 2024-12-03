/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/DataCatalogStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Athena
  {
    namespace Model
    {
      namespace DataCatalogStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_COMPLETE_HASH = HashingUtils::HashString("CREATE_COMPLETE");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int CREATE_FAILED_CLEANUP_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_FAILED_CLEANUP_IN_PROGRESS");
        static const int CREATE_FAILED_CLEANUP_COMPLETE_HASH = HashingUtils::HashString("CREATE_FAILED_CLEANUP_COMPLETE");
        static const int CREATE_FAILED_CLEANUP_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED_CLEANUP_FAILED");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETE_COMPLETE_HASH = HashingUtils::HashString("DELETE_COMPLETE");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        DataCatalogStatus GetDataCatalogStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return DataCatalogStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_COMPLETE_HASH)
          {
            return DataCatalogStatus::CREATE_COMPLETE;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return DataCatalogStatus::CREATE_FAILED;
          }
          else if (hashCode == CREATE_FAILED_CLEANUP_IN_PROGRESS_HASH)
          {
            return DataCatalogStatus::CREATE_FAILED_CLEANUP_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_CLEANUP_COMPLETE_HASH)
          {
            return DataCatalogStatus::CREATE_FAILED_CLEANUP_COMPLETE;
          }
          else if (hashCode == CREATE_FAILED_CLEANUP_FAILED_HASH)
          {
            return DataCatalogStatus::CREATE_FAILED_CLEANUP_FAILED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return DataCatalogStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_COMPLETE_HASH)
          {
            return DataCatalogStatus::DELETE_COMPLETE;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return DataCatalogStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataCatalogStatus>(hashCode);
          }

          return DataCatalogStatus::NOT_SET;
        }

        Aws::String GetNameForDataCatalogStatus(DataCatalogStatus enumValue)
        {
          switch(enumValue)
          {
          case DataCatalogStatus::NOT_SET:
            return {};
          case DataCatalogStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case DataCatalogStatus::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case DataCatalogStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case DataCatalogStatus::CREATE_FAILED_CLEANUP_IN_PROGRESS:
            return "CREATE_FAILED_CLEANUP_IN_PROGRESS";
          case DataCatalogStatus::CREATE_FAILED_CLEANUP_COMPLETE:
            return "CREATE_FAILED_CLEANUP_COMPLETE";
          case DataCatalogStatus::CREATE_FAILED_CLEANUP_FAILED:
            return "CREATE_FAILED_CLEANUP_FAILED";
          case DataCatalogStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case DataCatalogStatus::DELETE_COMPLETE:
            return "DELETE_COMPLETE";
          case DataCatalogStatus::DELETE_FAILED:
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

      } // namespace DataCatalogStatusMapper
    } // namespace Model
  } // namespace Athena
} // namespace Aws
