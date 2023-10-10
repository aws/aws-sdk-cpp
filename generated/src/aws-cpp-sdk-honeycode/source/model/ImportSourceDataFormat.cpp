/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/ImportSourceDataFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Honeycode
  {
    namespace Model
    {
      namespace ImportSourceDataFormatMapper
      {

        static const int DELIMITED_TEXT_HASH = HashingUtils::HashString("DELIMITED_TEXT");


        ImportSourceDataFormat GetImportSourceDataFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELIMITED_TEXT_HASH)
          {
            return ImportSourceDataFormat::DELIMITED_TEXT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportSourceDataFormat>(hashCode);
          }

          return ImportSourceDataFormat::NOT_SET;
        }

        Aws::String GetNameForImportSourceDataFormat(ImportSourceDataFormat enumValue)
        {
          switch(enumValue)
          {
          case ImportSourceDataFormat::NOT_SET:
            return {};
          case ImportSourceDataFormat::DELIMITED_TEXT:
            return "DELIMITED_TEXT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportSourceDataFormatMapper
    } // namespace Model
  } // namespace Honeycode
} // namespace Aws
