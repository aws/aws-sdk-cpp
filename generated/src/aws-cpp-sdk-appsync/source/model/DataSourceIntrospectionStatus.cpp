/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DataSourceIntrospectionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace DataSourceIntrospectionStatusMapper
      {

        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");


        DataSourceIntrospectionStatus GetDataSourceIntrospectionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROCESSING_HASH)
          {
            return DataSourceIntrospectionStatus::PROCESSING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DataSourceIntrospectionStatus::FAILED;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return DataSourceIntrospectionStatus::SUCCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceIntrospectionStatus>(hashCode);
          }

          return DataSourceIntrospectionStatus::NOT_SET;
        }

        Aws::String GetNameForDataSourceIntrospectionStatus(DataSourceIntrospectionStatus enumValue)
        {
          switch(enumValue)
          {
          case DataSourceIntrospectionStatus::NOT_SET:
            return {};
          case DataSourceIntrospectionStatus::PROCESSING:
            return "PROCESSING";
          case DataSourceIntrospectionStatus::FAILED:
            return "FAILED";
          case DataSourceIntrospectionStatus::SUCCESS:
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

      } // namespace DataSourceIntrospectionStatusMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
