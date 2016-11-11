/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesisanalytics/model/RecordFormatType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisAnalytics
  {
    namespace Model
    {
      namespace RecordFormatTypeMapper
      {

        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int CSV_HASH = HashingUtils::HashString("CSV");


        RecordFormatType GetRecordFormatTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_HASH)
          {
            return RecordFormatType::JSON;
          }
          else if (hashCode == CSV_HASH)
          {
            return RecordFormatType::CSV;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordFormatType>(hashCode);
          }

          return RecordFormatType::NOT_SET;
        }

        Aws::String GetNameForRecordFormatType(RecordFormatType enumValue)
        {
          switch(enumValue)
          {
          case RecordFormatType::JSON:
            return "JSON";
          case RecordFormatType::CSV:
            return "CSV";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RecordFormatTypeMapper
    } // namespace Model
  } // namespace KinesisAnalytics
} // namespace Aws
