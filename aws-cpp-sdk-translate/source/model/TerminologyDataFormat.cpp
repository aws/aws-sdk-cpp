/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/TerminologyDataFormat.h>
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
      namespace TerminologyDataFormatMapper
      {

        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int TMX_HASH = HashingUtils::HashString("TMX");


        TerminologyDataFormat GetTerminologyDataFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return TerminologyDataFormat::CSV;
          }
          else if (hashCode == TMX_HASH)
          {
            return TerminologyDataFormat::TMX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TerminologyDataFormat>(hashCode);
          }

          return TerminologyDataFormat::NOT_SET;
        }

        Aws::String GetNameForTerminologyDataFormat(TerminologyDataFormat enumValue)
        {
          switch(enumValue)
          {
          case TerminologyDataFormat::CSV:
            return "CSV";
          case TerminologyDataFormat::TMX:
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

      } // namespace TerminologyDataFormatMapper
    } // namespace Model
  } // namespace Translate
} // namespace Aws
