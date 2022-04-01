/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/ParallelDataFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Translate
  {
    namespace Model
    {
      namespace ParallelDataFormatMapper
      {

        static const int TSV_HASH = HashingUtils::HashString("TSV");
        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int TMX_HASH = HashingUtils::HashString("TMX");


        ParallelDataFormat GetParallelDataFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TSV_HASH)
          {
            return ParallelDataFormat::TSV;
          }
          else if (hashCode == CSV_HASH)
          {
            return ParallelDataFormat::CSV;
          }
          else if (hashCode == TMX_HASH)
          {
            return ParallelDataFormat::TMX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParallelDataFormat>(hashCode);
          }

          return ParallelDataFormat::NOT_SET;
        }

        Aws::String GetNameForParallelDataFormat(ParallelDataFormat enumValue)
        {
          switch(enumValue)
          {
          case ParallelDataFormat::TSV:
            return "TSV";
          case ParallelDataFormat::CSV:
            return "CSV";
          case ParallelDataFormat::TMX:
            return "TMX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParallelDataFormatMapper
    } // namespace Model
  } // namespace Translate
} // namespace Aws
