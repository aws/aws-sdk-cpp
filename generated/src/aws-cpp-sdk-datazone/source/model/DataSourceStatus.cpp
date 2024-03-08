/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataSourceStatus.h>
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
      namespace DataSourceStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int FAILED_CREATION_HASH = HashingUtils::HashString("FAILED_CREATION");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int FAILED_UPDATE_HASH = HashingUtils::HashString("FAILED_UPDATE");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_DELETION_HASH = HashingUtils::HashString("FAILED_DELETION");


        DataSourceStatus GetDataSourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return DataSourceStatus::CREATING;
          }
          else if (hashCode == FAILED_CREATION_HASH)
          {
            return DataSourceStatus::FAILED_CREATION;
          }
          else if (hashCode == READY_HASH)
          {
            return DataSourceStatus::READY;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return DataSourceStatus::UPDATING;
          }
          else if (hashCode == FAILED_UPDATE_HASH)
          {
            return DataSourceStatus::FAILED_UPDATE;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return DataSourceStatus::RUNNING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DataSourceStatus::DELETING;
          }
          else if (hashCode == FAILED_DELETION_HASH)
          {
            return DataSourceStatus::FAILED_DELETION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceStatus>(hashCode);
          }

          return DataSourceStatus::NOT_SET;
        }

        Aws::String GetNameForDataSourceStatus(DataSourceStatus enumValue)
        {
          switch(enumValue)
          {
          case DataSourceStatus::NOT_SET:
            return {};
          case DataSourceStatus::CREATING:
            return "CREATING";
          case DataSourceStatus::FAILED_CREATION:
            return "FAILED_CREATION";
          case DataSourceStatus::READY:
            return "READY";
          case DataSourceStatus::UPDATING:
            return "UPDATING";
          case DataSourceStatus::FAILED_UPDATE:
            return "FAILED_UPDATE";
          case DataSourceStatus::RUNNING:
            return "RUNNING";
          case DataSourceStatus::DELETING:
            return "DELETING";
          case DataSourceStatus::FAILED_DELETION:
            return "FAILED_DELETION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
