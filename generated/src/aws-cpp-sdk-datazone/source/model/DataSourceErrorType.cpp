/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataSourceErrorType.h>
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
      namespace DataSourceErrorTypeMapper
      {

        static constexpr uint32_t ACCESS_DENIED_EXCEPTION_HASH = ConstExprHashingUtils::HashString("ACCESS_DENIED_EXCEPTION");
        static constexpr uint32_t CONFLICT_EXCEPTION_HASH = ConstExprHashingUtils::HashString("CONFLICT_EXCEPTION");
        static constexpr uint32_t INTERNAL_SERVER_EXCEPTION_HASH = ConstExprHashingUtils::HashString("INTERNAL_SERVER_EXCEPTION");
        static constexpr uint32_t RESOURCE_NOT_FOUND_EXCEPTION_HASH = ConstExprHashingUtils::HashString("RESOURCE_NOT_FOUND_EXCEPTION");
        static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_EXCEPTION_HASH = ConstExprHashingUtils::HashString("SERVICE_QUOTA_EXCEEDED_EXCEPTION");
        static constexpr uint32_t THROTTLING_EXCEPTION_HASH = ConstExprHashingUtils::HashString("THROTTLING_EXCEPTION");
        static constexpr uint32_t VALIDATION_EXCEPTION_HASH = ConstExprHashingUtils::HashString("VALIDATION_EXCEPTION");


        DataSourceErrorType GetDataSourceErrorTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCESS_DENIED_EXCEPTION_HASH)
          {
            return DataSourceErrorType::ACCESS_DENIED_EXCEPTION;
          }
          else if (hashCode == CONFLICT_EXCEPTION_HASH)
          {
            return DataSourceErrorType::CONFLICT_EXCEPTION;
          }
          else if (hashCode == INTERNAL_SERVER_EXCEPTION_HASH)
          {
            return DataSourceErrorType::INTERNAL_SERVER_EXCEPTION;
          }
          else if (hashCode == RESOURCE_NOT_FOUND_EXCEPTION_HASH)
          {
            return DataSourceErrorType::RESOURCE_NOT_FOUND_EXCEPTION;
          }
          else if (hashCode == SERVICE_QUOTA_EXCEEDED_EXCEPTION_HASH)
          {
            return DataSourceErrorType::SERVICE_QUOTA_EXCEEDED_EXCEPTION;
          }
          else if (hashCode == THROTTLING_EXCEPTION_HASH)
          {
            return DataSourceErrorType::THROTTLING_EXCEPTION;
          }
          else if (hashCode == VALIDATION_EXCEPTION_HASH)
          {
            return DataSourceErrorType::VALIDATION_EXCEPTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceErrorType>(hashCode);
          }

          return DataSourceErrorType::NOT_SET;
        }

        Aws::String GetNameForDataSourceErrorType(DataSourceErrorType enumValue)
        {
          switch(enumValue)
          {
          case DataSourceErrorType::NOT_SET:
            return {};
          case DataSourceErrorType::ACCESS_DENIED_EXCEPTION:
            return "ACCESS_DENIED_EXCEPTION";
          case DataSourceErrorType::CONFLICT_EXCEPTION:
            return "CONFLICT_EXCEPTION";
          case DataSourceErrorType::INTERNAL_SERVER_EXCEPTION:
            return "INTERNAL_SERVER_EXCEPTION";
          case DataSourceErrorType::RESOURCE_NOT_FOUND_EXCEPTION:
            return "RESOURCE_NOT_FOUND_EXCEPTION";
          case DataSourceErrorType::SERVICE_QUOTA_EXCEEDED_EXCEPTION:
            return "SERVICE_QUOTA_EXCEEDED_EXCEPTION";
          case DataSourceErrorType::THROTTLING_EXCEPTION:
            return "THROTTLING_EXCEPTION";
          case DataSourceErrorType::VALIDATION_EXCEPTION:
            return "VALIDATION_EXCEPTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceErrorTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
