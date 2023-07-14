/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DataFormatValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace DataFormatValueMapper
      {

        static const int csv_HASH = HashingUtils::HashString("csv");
        static const int parquet_HASH = HashingUtils::HashString("parquet");


        DataFormatValue GetDataFormatValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == csv_HASH)
          {
            return DataFormatValue::csv;
          }
          else if (hashCode == parquet_HASH)
          {
            return DataFormatValue::parquet;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataFormatValue>(hashCode);
          }

          return DataFormatValue::NOT_SET;
        }

        Aws::String GetNameForDataFormatValue(DataFormatValue enumValue)
        {
          switch(enumValue)
          {
          case DataFormatValue::csv:
            return "csv";
          case DataFormatValue::parquet:
            return "parquet";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataFormatValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
