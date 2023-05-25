/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/ExportDataFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationDiscoveryService
  {
    namespace Model
    {
      namespace ExportDataFormatMapper
      {

        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int GRAPHML_HASH = HashingUtils::HashString("GRAPHML");


        ExportDataFormat GetExportDataFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return ExportDataFormat::CSV;
          }
          else if (hashCode == GRAPHML_HASH)
          {
            return ExportDataFormat::GRAPHML;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportDataFormat>(hashCode);
          }

          return ExportDataFormat::NOT_SET;
        }

        Aws::String GetNameForExportDataFormat(ExportDataFormat enumValue)
        {
          switch(enumValue)
          {
          case ExportDataFormat::CSV:
            return "CSV";
          case ExportDataFormat::GRAPHML:
            return "GRAPHML";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportDataFormatMapper
    } // namespace Model
  } // namespace ApplicationDiscoveryService
} // namespace Aws
