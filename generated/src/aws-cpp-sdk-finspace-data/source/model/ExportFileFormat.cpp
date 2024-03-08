/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/ExportFileFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FinSpaceData
  {
    namespace Model
    {
      namespace ExportFileFormatMapper
      {

        static const int PARQUET_HASH = HashingUtils::HashString("PARQUET");
        static const int DELIMITED_TEXT_HASH = HashingUtils::HashString("DELIMITED_TEXT");


        ExportFileFormat GetExportFileFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PARQUET_HASH)
          {
            return ExportFileFormat::PARQUET;
          }
          else if (hashCode == DELIMITED_TEXT_HASH)
          {
            return ExportFileFormat::DELIMITED_TEXT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportFileFormat>(hashCode);
          }

          return ExportFileFormat::NOT_SET;
        }

        Aws::String GetNameForExportFileFormat(ExportFileFormat enumValue)
        {
          switch(enumValue)
          {
          case ExportFileFormat::NOT_SET:
            return {};
          case ExportFileFormat::PARQUET:
            return "PARQUET";
          case ExportFileFormat::DELIMITED_TEXT:
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

      } // namespace ExportFileFormatMapper
    } // namespace Model
  } // namespace FinSpaceData
} // namespace Aws
