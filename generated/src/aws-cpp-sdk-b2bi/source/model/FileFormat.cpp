/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/FileFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace B2BI
  {
    namespace Model
    {
      namespace FileFormatMapper
      {

        static const int XML_HASH = HashingUtils::HashString("XML");
        static const int JSON_HASH = HashingUtils::HashString("JSON");


        FileFormat GetFileFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == XML_HASH)
          {
            return FileFormat::XML;
          }
          else if (hashCode == JSON_HASH)
          {
            return FileFormat::JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileFormat>(hashCode);
          }

          return FileFormat::NOT_SET;
        }

        Aws::String GetNameForFileFormat(FileFormat enumValue)
        {
          switch(enumValue)
          {
          case FileFormat::NOT_SET:
            return {};
          case FileFormat::XML:
            return "XML";
          case FileFormat::JSON:
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

      } // namespace FileFormatMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws
