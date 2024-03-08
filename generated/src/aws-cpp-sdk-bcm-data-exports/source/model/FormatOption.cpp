/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/FormatOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMDataExports
  {
    namespace Model
    {
      namespace FormatOptionMapper
      {

        static const int TEXT_OR_CSV_HASH = HashingUtils::HashString("TEXT_OR_CSV");
        static const int PARQUET_HASH = HashingUtils::HashString("PARQUET");


        FormatOption GetFormatOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_OR_CSV_HASH)
          {
            return FormatOption::TEXT_OR_CSV;
          }
          else if (hashCode == PARQUET_HASH)
          {
            return FormatOption::PARQUET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FormatOption>(hashCode);
          }

          return FormatOption::NOT_SET;
        }

        Aws::String GetNameForFormatOption(FormatOption enumValue)
        {
          switch(enumValue)
          {
          case FormatOption::NOT_SET:
            return {};
          case FormatOption::TEXT_OR_CSV:
            return "TEXT_OR_CSV";
          case FormatOption::PARQUET:
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

      } // namespace FormatOptionMapper
    } // namespace Model
  } // namespace BCMDataExports
} // namespace Aws
