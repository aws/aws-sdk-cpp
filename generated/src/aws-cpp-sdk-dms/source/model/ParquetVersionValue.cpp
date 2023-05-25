/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ParquetVersionValue.h>
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
      namespace ParquetVersionValueMapper
      {

        static const int parquet_1_0_HASH = HashingUtils::HashString("parquet-1-0");
        static const int parquet_2_0_HASH = HashingUtils::HashString("parquet-2-0");


        ParquetVersionValue GetParquetVersionValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == parquet_1_0_HASH)
          {
            return ParquetVersionValue::parquet_1_0;
          }
          else if (hashCode == parquet_2_0_HASH)
          {
            return ParquetVersionValue::parquet_2_0;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParquetVersionValue>(hashCode);
          }

          return ParquetVersionValue::NOT_SET;
        }

        Aws::String GetNameForParquetVersionValue(ParquetVersionValue enumValue)
        {
          switch(enumValue)
          {
          case ParquetVersionValue::parquet_1_0:
            return "parquet-1-0";
          case ParquetVersionValue::parquet_2_0:
            return "parquet-2-0";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParquetVersionValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
