/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ExportType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace ExportTypeMapper
      {

        static constexpr uint32_t FULL_EXPORT_HASH = ConstExprHashingUtils::HashString("FULL_EXPORT");
        static constexpr uint32_t INCREMENTAL_EXPORT_HASH = ConstExprHashingUtils::HashString("INCREMENTAL_EXPORT");


        ExportType GetExportTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_EXPORT_HASH)
          {
            return ExportType::FULL_EXPORT;
          }
          else if (hashCode == INCREMENTAL_EXPORT_HASH)
          {
            return ExportType::INCREMENTAL_EXPORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportType>(hashCode);
          }

          return ExportType::NOT_SET;
        }

        Aws::String GetNameForExportType(ExportType enumValue)
        {
          switch(enumValue)
          {
          case ExportType::NOT_SET:
            return {};
          case ExportType::FULL_EXPORT:
            return "FULL_EXPORT";
          case ExportType::INCREMENTAL_EXPORT:
            return "INCREMENTAL_EXPORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportTypeMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
