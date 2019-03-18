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
