/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ResultFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace ResultFormatMapper
      {

        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int PARQUET_HASH = HashingUtils::HashString("PARQUET");


        ResultFormat GetResultFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return ResultFormat::CSV;
          }
          else if (hashCode == PARQUET_HASH)
          {
            return ResultFormat::PARQUET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResultFormat>(hashCode);
          }

          return ResultFormat::NOT_SET;
        }

        Aws::String GetNameForResultFormat(ResultFormat enumValue)
        {
          switch(enumValue)
          {
          case ResultFormat::NOT_SET:
            return {};
          case ResultFormat::CSV:
            return "CSV";
          case ResultFormat::PARQUET:
            return "PARQUET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResultFormatMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
