/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ImportExportFileFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace ImportExportFileFormatMapper
      {

        static const int LexJson_HASH = HashingUtils::HashString("LexJson");
        static const int TSV_HASH = HashingUtils::HashString("TSV");
        static const int CSV_HASH = HashingUtils::HashString("CSV");


        ImportExportFileFormat GetImportExportFileFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LexJson_HASH)
          {
            return ImportExportFileFormat::LexJson;
          }
          else if (hashCode == TSV_HASH)
          {
            return ImportExportFileFormat::TSV;
          }
          else if (hashCode == CSV_HASH)
          {
            return ImportExportFileFormat::CSV;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportExportFileFormat>(hashCode);
          }

          return ImportExportFileFormat::NOT_SET;
        }

        Aws::String GetNameForImportExportFileFormat(ImportExportFileFormat enumValue)
        {
          switch(enumValue)
          {
          case ImportExportFileFormat::NOT_SET:
            return {};
          case ImportExportFileFormat::LexJson:
            return "LexJson";
          case ImportExportFileFormat::TSV:
            return "TSV";
          case ImportExportFileFormat::CSV:
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

      } // namespace ImportExportFileFormatMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
