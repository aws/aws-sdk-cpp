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
