/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisReportFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace CisReportFormatMapper
      {

        static const int PDF_HASH = HashingUtils::HashString("PDF");
        static const int CSV_HASH = HashingUtils::HashString("CSV");


        CisReportFormat GetCisReportFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PDF_HASH)
          {
            return CisReportFormat::PDF;
          }
          else if (hashCode == CSV_HASH)
          {
            return CisReportFormat::CSV;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisReportFormat>(hashCode);
          }

          return CisReportFormat::NOT_SET;
        }

        Aws::String GetNameForCisReportFormat(CisReportFormat enumValue)
        {
          switch(enumValue)
          {
          case CisReportFormat::NOT_SET:
            return {};
          case CisReportFormat::PDF:
            return "PDF";
          case CisReportFormat::CSV:
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

      } // namespace CisReportFormatMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
