/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DataSourceStatus.h>
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
      namespace DataSourceStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");


        DataSourceStatus GetDataSourceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return DataSourceStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DataSourceStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DataSourceStatus::FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return DataSourceStatus::UPDATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return DataSourceStatus::ACTIVE;
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
          case DataSourceStatus::DELETING:
            return "DELETING";
          case DataSourceStatus::FAILED:
            return "FAILED";
          case DataSourceStatus::UPDATING:
            return "UPDATING";
          case DataSourceStatus::ACTIVE:
            return "ACTIVE";
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
  } // namespace kendra
} // namespace Aws
