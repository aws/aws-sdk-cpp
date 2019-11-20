/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int TIMEOUT_HASH = HashingUtils::HashString("TIMEOUT");
        static const int ENGINE_VERSION_NOT_SUPPORTED_HASH = HashingUtils::HashString("ENGINE_VERSION_NOT_SUPPORTED");
        static const int UNKNOWN_HOST_HASH = HashingUtils::HashString("UNKNOWN_HOST");
        static const int GENERIC_SQL_FAILURE_HASH = HashingUtils::HashString("GENERIC_SQL_FAILURE");
        static const int CONFLICT_HASH = HashingUtils::HashString("CONFLICT");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        DataSourceErrorInfoType GetDataSourceErrorInfoTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TIMEOUT_HASH)
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
