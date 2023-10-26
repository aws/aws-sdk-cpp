/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataSourceRunStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace DataSourceRunStatusMapper
      {

        static const int REQUESTED_HASH = HashingUtils::HashString("REQUESTED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PARTIALLY_SUCCEEDED_HASH = HashingUtils::HashString("PARTIALLY_SUCCEEDED");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");


        DataSourceRunStatus GetDataSourceRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUESTED_HASH)
          {
            return DataSourceRunStatus::REQUESTED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return DataSourceRunStatus::RUNNING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DataSourceRunStatus::FAILED;
          }
          else if (hashCode == PARTIALLY_SUCCEEDED_HASH)
          {
            return DataSourceRunStatus::PARTIALLY_SUCCEEDED;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return DataSourceRunStatus::SUCCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceRunStatus>(hashCode);
          }

          return DataSourceRunStatus::NOT_SET;
        }

        Aws::String GetNameForDataSourceRunStatus(DataSourceRunStatus enumValue)
        {
          switch(enumValue)
          {
          case DataSourceRunStatus::NOT_SET:
            return {};
          case DataSourceRunStatus::REQUESTED:
            return "REQUESTED";
          case DataSourceRunStatus::RUNNING:
            return "RUNNING";
          case DataSourceRunStatus::FAILED:
            return "FAILED";
          case DataSourceRunStatus::PARTIALLY_SUCCEEDED:
            return "PARTIALLY_SUCCEEDED";
          case DataSourceRunStatus::SUCCESS:
            return "SUCCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceRunStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
