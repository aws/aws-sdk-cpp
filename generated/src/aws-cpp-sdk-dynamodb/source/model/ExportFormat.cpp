/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ExportFormat.h>
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
      namespace ExportFormatMapper
      {

        static constexpr uint32_t DYNAMODB_JSON_HASH = ConstExprHashingUtils::HashString("DYNAMODB_JSON");
        static constexpr uint32_t ION_HASH = ConstExprHashingUtils::HashString("ION");


        ExportFormat GetExportFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DYNAMODB_JSON_HASH)
          {
            return ExportFormat::DYNAMODB_JSON;
          }
          else if (hashCode == ION_HASH)
          {
            return ExportFormat::ION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportFormat>(hashCode);
          }

          return ExportFormat::NOT_SET;
        }

        Aws::String GetNameForExportFormat(ExportFormat enumValue)
        {
          switch(enumValue)
          {
          case ExportFormat::NOT_SET:
            return {};
          case ExportFormat::DYNAMODB_JSON:
            return "DYNAMODB_JSON";
          case ExportFormat::ION:
            return "ION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportFormatMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
