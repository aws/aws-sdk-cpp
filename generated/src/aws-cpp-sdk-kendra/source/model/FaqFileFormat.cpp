/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/FaqFileFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace FaqFileFormatMapper
      {

        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int CSV_WITH_HEADER_HASH = HashingUtils::HashString("CSV_WITH_HEADER");
        static const int JSON_HASH = HashingUtils::HashString("JSON");


        FaqFileFormat GetFaqFileFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return FaqFileFormat::CSV;
          }
          else if (hashCode == CSV_WITH_HEADER_HASH)
          {
            return FaqFileFormat::CSV_WITH_HEADER;
          }
          else if (hashCode == JSON_HASH)
          {
            return FaqFileFormat::JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FaqFileFormat>(hashCode);
          }

          return FaqFileFormat::NOT_SET;
        }

        Aws::String GetNameForFaqFileFormat(FaqFileFormat enumValue)
        {
          switch(enumValue)
          {
          case FaqFileFormat::CSV:
            return "CSV";
          case FaqFileFormat::CSV_WITH_HEADER:
            return "CSV_WITH_HEADER";
          case FaqFileFormat::JSON:
            return "JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FaqFileFormatMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
