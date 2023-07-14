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

        static const int DYNAMODB_JSON_HASH = HashingUtils::HashString("DYNAMODB_JSON");
        static const int ION_HASH = HashingUtils::HashString("ION");


        ExportFormat GetExportFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
