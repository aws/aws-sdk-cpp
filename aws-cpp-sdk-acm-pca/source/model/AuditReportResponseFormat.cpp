/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/AuditReportResponseFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACMPCA
  {
    namespace Model
    {
      namespace AuditReportResponseFormatMapper
      {

        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int CSV_HASH = HashingUtils::HashString("CSV");


        AuditReportResponseFormat GetAuditReportResponseFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_HASH)
          {
            return AuditReportResponseFormat::JSON;
          }
          else if (hashCode == CSV_HASH)
          {
            return AuditReportResponseFormat::CSV;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuditReportResponseFormat>(hashCode);
          }

          return AuditReportResponseFormat::NOT_SET;
        }

        Aws::String GetNameForAuditReportResponseFormat(AuditReportResponseFormat enumValue)
        {
          switch(enumValue)
          {
          case AuditReportResponseFormat::JSON:
            return "JSON";
          case AuditReportResponseFormat::CSV:
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

      } // namespace AuditReportResponseFormatMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
