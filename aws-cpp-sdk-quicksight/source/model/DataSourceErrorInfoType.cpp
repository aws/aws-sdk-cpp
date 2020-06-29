/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSourceErrorInfoType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace DataSourceErrorInfoTypeMapper
      {

        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int COPY_SOURCE_NOT_FOUND_HASH = HashingUtils::HashString("COPY_SOURCE_NOT_FOUND");
        static const int TIMEOUT_HASH = HashingUtils::HashString("TIMEOUT");
        static const int ENGINE_VERSION_NOT_SUPPORTED_HASH = HashingUtils::HashString("ENGINE_VERSION_NOT_SUPPORTED");
        static const int UNKNOWN_HOST_HASH = HashingUtils::HashString("UNKNOWN_HOST");
        static const int GENERIC_SQL_FAILURE_HASH = HashingUtils::HashString("GENERIC_SQL_FAILURE");
        static const int CONFLICT_HASH = HashingUtils::HashString("CONFLICT");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        DataSourceErrorInfoType GetDataSourceErrorInfoTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCESS_DENIED_HASH)
          {
            return DataSourceErrorInfoType::ACCESS_DENIED;
          }
          else if (hashCode == COPY_SOURCE_NOT_FOUND_HASH)
          {
            return DataSourceErrorInfoType::COPY_SOURCE_NOT_FOUND;
          }
          else if (hashCode == TIMEOUT_HASH)
          {
            return DataSourceErrorInfoType::TIMEOUT;
          }
          else if (hashCode == ENGINE_VERSION_NOT_SUPPORTED_HASH)
          {
            return DataSourceErrorInfoType::ENGINE_VERSION_NOT_SUPPORTED;
          }
          else if (hashCode == UNKNOWN_HOST_HASH)
          {
            return DataSourceErrorInfoType::UNKNOWN_HOST;
          }
          else if (hashCode == GENERIC_SQL_FAILURE_HASH)
          {
            return DataSourceErrorInfoType::GENERIC_SQL_FAILURE;
          }
          else if (hashCode == CONFLICT_HASH)
          {
            return DataSourceErrorInfoType::CONFLICT;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return DataSourceErrorInfoType::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceErrorInfoType>(hashCode);
          }

          return DataSourceErrorInfoType::NOT_SET;
        }

        Aws::String GetNameForDataSourceErrorInfoType(DataSourceErrorInfoType enumValue)
        {
          switch(enumValue)
          {
          case DataSourceErrorInfoType::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case DataSourceErrorInfoType::COPY_SOURCE_NOT_FOUND:
            return "COPY_SOURCE_NOT_FOUND";
          case DataSourceErrorInfoType::TIMEOUT:
            return "TIMEOUT";
          case DataSourceErrorInfoType::ENGINE_VERSION_NOT_SUPPORTED:
            return "ENGINE_VERSION_NOT_SUPPORTED";
          case DataSourceErrorInfoType::UNKNOWN_HOST:
            return "UNKNOWN_HOST";
          case DataSourceErrorInfoType::GENERIC_SQL_FAILURE:
            return "GENERIC_SQL_FAILURE";
          case DataSourceErrorInfoType::CONFLICT:
            return "CONFLICT";
          case DataSourceErrorInfoType::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceErrorInfoTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
