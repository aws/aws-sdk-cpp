/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/ImportDataCharacterEncoding.h>
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
      namespace ImportDataCharacterEncodingMapper
      {

        static const int UTF_8_HASH = HashingUtils::HashString("UTF-8");
        static const int US_ASCII_HASH = HashingUtils::HashString("US-ASCII");
        static const int ISO_8859_1_HASH = HashingUtils::HashString("ISO-8859-1");
        static const int UTF_16BE_HASH = HashingUtils::HashString("UTF-16BE");
        static const int UTF_16LE_HASH = HashingUtils::HashString("UTF-16LE");
        static const int UTF_16_HASH = HashingUtils::HashString("UTF-16");


        ImportDataCharacterEncoding GetImportDataCharacterEncodingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UTF_8_HASH)
          {
            return ImportDataCharacterEncoding::UTF_8;
          }
          else if (hashCode == US_ASCII_HASH)
          {
            return ImportDataCharacterEncoding::US_ASCII;
          }
          else if (hashCode == ISO_8859_1_HASH)
          {
            return ImportDataCharacterEncoding::ISO_8859_1;
          }
          else if (hashCode == UTF_16BE_HASH)
          {
            return ImportDataCharacterEncoding::UTF_16BE;
          }
          else if (hashCode == UTF_16LE_HASH)
          {
            return ImportDataCharacterEncoding::UTF_16LE;
          }
          else if (hashCode == UTF_16_HASH)
          {
            return ImportDataCharacterEncoding::UTF_16;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportDataCharacterEncoding>(hashCode);
          }

          return ImportDataCharacterEncoding::NOT_SET;
        }

        Aws::String GetNameForImportDataCharacterEncoding(ImportDataCharacterEncoding enumValue)
        {
          switch(enumValue)
          {
          case ImportDataCharacterEncoding::NOT_SET:
            return {};
          case ImportDataCharacterEncoding::UTF_8:
            return "UTF-8";
          case ImportDataCharacterEncoding::US_ASCII:
            return "US-ASCII";
          case ImportDataCharacterEncoding::ISO_8859_1:
            return "ISO-8859-1";
          case ImportDataCharacterEncoding::UTF_16BE:
            return "UTF-16BE";
          case ImportDataCharacterEncoding::UTF_16LE:
            return "UTF-16LE";
          case ImportDataCharacterEncoding::UTF_16:
            return "UTF-16";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportDataCharacterEncodingMapper
    } // namespace Model
  } // namespace Honeycode
} // namespace Aws
