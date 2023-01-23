/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/RecordFormatType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisAnalyticsV2
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

            return {};
          }
        }

      } // namespace RecordFormatTypeMapper
    } // namespace Model
  } // namespace KinesisAnalyticsV2
} // namespace Aws
