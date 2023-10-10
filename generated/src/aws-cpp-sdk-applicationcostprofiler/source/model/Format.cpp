/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/applicationcostprofiler/model/Format.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationCostProfiler
  {
    namespace Model
    {
      namespace FormatMapper
      {

        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int PARQUET_HASH = HashingUtils::HashString("PARQUET");


        Format GetFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return Format::CSV;
          }
          else if (hashCode == PARQUET_HASH)
          {
            return Format::PARQUET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Format>(hashCode);
          }

          return Format::NOT_SET;
        }

        Aws::String GetNameForFormat(Format enumValue)
        {
          switch(enumValue)
          {
          case Format::NOT_SET:
            return {};
          case Format::CSV:
            return "CSV";
          case Format::PARQUET:
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

      } // namespace FormatMapper
    } // namespace Model
  } // namespace ApplicationCostProfiler
} // namespace Aws
