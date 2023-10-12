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

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t FAILED_CREATION_HASH = ConstExprHashingUtils::HashString("FAILED_CREATION");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t FAILED_UPDATE_HASH = ConstExprHashingUtils::HashString("FAILED_UPDATE");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_DELETION_HASH = ConstExprHashingUtils::HashString("FAILED_DELETION");


        DataSourceStatus GetDataSourceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
