/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DataSourceSyncJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace DataSourceSyncJobStatusMapper
      {

        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t SYNCING_HASH = ConstExprHashingUtils::HashString("SYNCING");
        static constexpr uint32_t INCOMPLETE_HASH = ConstExprHashingUtils::HashString("INCOMPLETE");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t ABORTED_HASH = ConstExprHashingUtils::HashString("ABORTED");
        static constexpr uint32_t SYNCING_INDEXING_HASH = ConstExprHashingUtils::HashString("SYNCING_INDEXING");


        DataSourceSyncJobStatus GetDataSourceSyncJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return DataSourceSyncJobStatus::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return DataSourceSyncJobStatus::SUCCEEDED;
          }
          else if (hashCode == SYNCING_HASH)
          {
            return DataSourceSyncJobStatus::SYNCING;
          }
          else if (hashCode == INCOMPLETE_HASH)
          {
            return DataSourceSyncJobStatus::INCOMPLETE;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return DataSourceSyncJobStatus::STOPPING;
          }
          else if (hashCode == ABORTED_HASH)
          {
            return DataSourceSyncJobStatus::ABORTED;
          }
          else if (hashCode == SYNCING_INDEXING_HASH)
          {
            return DataSourceSyncJobStatus::SYNCING_INDEXING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceSyncJobStatus>(hashCode);
          }

          return DataSourceSyncJobStatus::NOT_SET;
        }

        Aws::String GetNameForDataSourceSyncJobStatus(DataSourceSyncJobStatus enumValue)
        {
          switch(enumValue)
          {
          case DataSourceSyncJobStatus::NOT_SET:
            return {};
          case DataSourceSyncJobStatus::FAILED:
            return "FAILED";
          case DataSourceSyncJobStatus::SUCCEEDED:
            return "SUCCEEDED";
          case DataSourceSyncJobStatus::SYNCING:
            return "SYNCING";
          case DataSourceSyncJobStatus::INCOMPLETE:
            return "INCOMPLETE";
          case DataSourceSyncJobStatus::STOPPING:
            return "STOPPING";
          case DataSourceSyncJobStatus::ABORTED:
            return "ABORTED";
          case DataSourceSyncJobStatus::SYNCING_INDEXING:
            return "SYNCING_INDEXING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceSyncJobStatusMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
